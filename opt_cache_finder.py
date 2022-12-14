# Most recent output was:
'''
Best combinations when minimising miss rate:
$D:     Best miss rate: 0.11%, Best Combination: (1, 1, 512)
$I:     Best miss rate: 0.02%, Best Combination: (1, 1, 512)
----------------------------------------
Best combinations when minimising score:
$D:     Best score: 0.1011, Best Combination: (1, 2, 512) with miss rate: 0.11%
$I:     Best score: 0.10020000000000001, Best Combination: (1, 2, 512) with miss rate: 0.02%

'''
import os

# alter these values to change depth/range of the scan
b_scan = 10      # note: scans block sizes 2**3, 2**4, ... 2**(b_scan-1)
s_scan = 10      # similar to above but from 2**0, ...
w_scan = 10      # scans all values from 1:w_scan-1

command0 = "spike --isa=rv32i --ic=x:y:z --dc=x:y:z  \
    /opt/riscv/riscv32-unknown-elf/bin/pk program"

# values based on miss rate
bst_ms_r_D = 100
bst_ms_r_I = 100
bst_comb_D = (0, 0, 0)
bst_comb_I = (0, 0, 0)

# values based on cost and missrate relationship (AMAT)
# suppose memory cost = ($0.1 + $0.0001 * b_size * s_size * w_size)
# and the hit time is 1 cycle and the miss penalty is 10 cycles,
# we want to minimise AMAT * memory cost (i.e. score)
bst_score_D = (1.0, 1.0)
bst_score_I = (1.0, 1.0)
bst_comb_D_s = (0, 0, 0)
bst_comb_I_s = (0, 0, 0)

calc_score = lambda ms_r_pc, s, w, b: (1 + (float(ms_r_pc)/100 * 10)) * (0.1 + 1e-4*b*s*w)

for b_size in range(3, b_scan):
    command1 = command0.replace("z", str(2**b_size))
    for s_size in range(s_scan):
        command2 = command1.replace("x", str(2**s_scan))
        for w_size in range(1, w_scan):
            command3 = command2.replace("y", str(2**w_size))
            res = os.popen(command3).read().split('\n')
            res = [x for x in res if '%' in x]
            if len(res) != 2:
                raise Exception(f"unexpected number of outputs in scan, we got:\n{res}")
            D_pc_val = float(res[0][-7:-2].strip())
            I_pc_val = float(res[1][-7:-2].strip())
            
            # comparing to current best miss rate (and potentially updating)
            if D_pc_val < bst_ms_r_D:
                bst_ms_r_D = D_pc_val
                bst_comb_D = (2**s_size, w_size, 2**b_size)
            if I_pc_val < bst_ms_r_I:
                bst_ms_r_I = I_pc_val
                bst_comb_I = (2**s_size, w_size, 2**b_size)

            # comparing to best scores (and potentially updating)
            D_score = calc_score(D_pc_val, s_size, w_size, b_size)
            I_score = calc_score(I_pc_val, s_size, w_size, b_size)
            if (D_score < bst_score_D[0]):
                bst_score_D = (D_score, D_pc_val)
                bst_comb_D_s = (2**s_size, 2**w_size, 2**b_size)
            if (I_score < bst_score_I[0]):
                bst_score_I = (I_score, I_pc_val)
                bst_comb_I_s = (2**s_size, 2**w_size, 2**b_size)

    print(f"Scanned all for block size {2**b_size}")
print("----------------------------------------")
print("Best combinations when minimising miss rate:")
print(f"$D:\tBest miss rate: {bst_ms_r_D}%, Best Combination: {bst_comb_D}")
print(f"$I:\tBest miss rate: {bst_ms_r_I}%, Best Combination: {bst_comb_I}")
print("----------------------------------------")
print("Best combinations when minimising score:")
print(f"$D:\tBest score: {bst_score_D[0]}, Best Combination: {bst_comb_D_s} with miss rate: {bst_score_D[1]}%")
print(f"$I:\tBest score: {bst_score_I[0]}, Best Combination: {bst_comb_I_s} with miss rate: {bst_score_I[1]}%")

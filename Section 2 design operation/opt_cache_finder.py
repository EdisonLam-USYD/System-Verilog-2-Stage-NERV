'''
Most recent output was:
Best miss rate: 0.21%, Best Combination: [1, 2, 256]
Best miss rate: 0.03%, Best Combination: [1, 2, 256]
----------------------------------------
Best combinations when minimising score:
Best miss rate: 0.1021, Best Combination: [1, 2, 256]
Best miss rate: 0.1003, Best Combination: [1, 2, 256]
'''
import os

# alter these values to change depth/range of the scan
b_scan = 9      # note: scans block sizes 2**3, 2**4, ... 2**(b_scan-1)
s_scan = 9      # similar to above but from 2**0, ...
w_scan = 50      # scans all values from 1:w_scan-1


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

for b_size in range(6, b_scan):
    command1 = command0.replace("z", str(2**b_size))
    for s_size in range(s_scan):
        command2 = command1.replace("x", str(2**s_scan))
        for w_size in range(1, w_scan, 2):
            command3 = command2.replace("y", str(w_size))
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
            if (D_score < bst_score_D[0]) or (D_score == bst_score_D[0]) and bst_score_D[1] < D_pc_val:
                bst_score_D = (D_score, D_pc_val)
                bst_comb_D_s = (2**s_size, w_size, 2**b_size)
            if (I_score < bst_score_I[0]) or (I_score == bst_score_I[0]) and bst_score_I[1] < I_pc_val:
                bst_score_I = (I_score, I_pc_val)
                bst_comb_I_s = (2**s_size, w_size, 2**b_size)

    print(f"Scanned all for block size {2**b_size}")
print("----------------------------------------")
print("Best combinations when minimising miss rate:")
print(f"$D:\tBest miss rate: {bst_ms_r_D}%, Best Combination: {bst_comb_D}")
print(f"$I:\tBest miss rate: {bst_ms_r_I}%, Best Combination: {bst_comb_I}")
print("----------------------------------------")
print("Best combinations when minimising score:")
print(f"$D:\tBest score: {bst_score_D[0]}, Best Combination: {bst_comb_D_s} with miss rate: {bst_score_D[1]}%")
print(f"$I:\tBest score: {bst_score_I[0]}, Best Combination: {bst_comb_I_s} with miss rate: {bst_score_I[1]}%")

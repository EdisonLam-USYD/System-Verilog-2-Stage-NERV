TOOLCHAIN_PREFIX?=riscv32-unknown-elf-
CC=$(TOOLCHAIN_PREFIX)gcc
AS=$(TOOLCHAIN_PREFIX)as
CFLAGS=	-O1 -march=rv32i -mabi=ilp32 

OBJ=	program
all:	$(OBJ) test

# produce an executable with the printf for execution in spike
$(OBJ):	$(OBJ).o
	$(CC) $(CFLAGS) $(OBJ).o -o $(OBJ)

$(OBJ).s:	$(OBJ).c
	$(CC) -S $(CFLAGS) $(OBJ).c

$(OBJ).o:	$(OBJ).s
	$(AS) --traditional-format -march=rv32i -mabi=ilp32 -o $(OBJ).o $(OBJ).s

# execute $(OBJ) using spike simulator
test:
	-spike --isa=rv32i --ic=2:4:8 --dc=2:4:8  /opt/riscv/riscv32-unknown-elf/bin/pk $(OBJ)

cache:
	-spike --isa=rv32i --ic=2:4:8 --dc=2:4:8 /opt/riscv32i/riscv32-unknown-elf/bin/pk  $(OBJ)

# generate a listing in $(OBJ).lst (without debug)
list:
	$(CC) -S $(CFLAGS) $(OBJ).c
	$(AS) -al $(OBJ).s > $(OBJ).lst
	-rm -f a.out

clean:
	-rm -f $(OBJ).lst $(OBJ) $(OBJ).s $(OBJ).o $(OBJ) $(OBJ).o $(OBJ).s

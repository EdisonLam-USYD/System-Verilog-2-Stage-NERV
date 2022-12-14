TOOLCHAIN_PREFIX?=riscv64-unknown-elf-
VERILATOR = verilator
RDOCKER = docker run --platform linux/amd64 -it -e DISPLAY=host.docker.internal:0 -v `pwd`:/config phwl/elec3608-cad:latest
SOURCES = nerv.sv testbench.sv testbench.py

all: test_all.out

result:	test_isqrt.result test_all.result nerv.asc
	python extime.py nerv-pnr.log *.result

%.out: %.hex $(SOURCES)
	cp $*.hex firmware.hex
	python testbench.py -t testbench.sv

%.result: %.hex $(SOURCES)
	cp $*.hex firmware.hex
	python testbench.py testbench.sv > $*.result

%.asc: %.json
	nextpnr-ice40 --hx8k --pcf $*.pcf --json $*.json --asc $*.asc --pcf-allow-unconstrained -l $*-pnr.log

%.json: %.sv
	yosys -s $*.yosys -l $*-yosys.log

%.elf: %.s 
	$(TOOLCHAIN_PREFIX)gcc -march=rv32i -mabi=ilp32 -Os -Wall -Wextra -Wl,-Bstatic,-T,sections.lds,--strip-debug -ffreestanding -nostdlib -o $@ $^

%.hex: %.elf
	$(TOOLCHAIN_PREFIX)objcopy -O verilog $< $@

rundocker:
	$(RDOCKER)

clean:
	rm -rf firmware.elf firmware.hex testbench testbench.vcd gtkwave.log
	rm -rf disasm.o disasm.s checks/ cexdata/ obj_dir
	rm -rf *.log *.asc *.json *.result *.vcd firmware.s *.tgz
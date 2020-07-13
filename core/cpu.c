#include "mem_mapper.h"

#define CLOCK_SPEED 4338000
#define CYCLES_PER_FRAME CLOCK_SPEED/60

void print_registers()
{
	printf("A = %#X\n", registers.af >> 8);
	printf("B = %#X\n", registers.bc >> 8);
	printf("C = %#X\n", registers.bc & 0x00FF);
	printf("D = %#X\n", registers.de >> 8);
	printf("E = %#X\n", registers.de & 0x00FF);
	printf("F = %#X\n", registers.af & 0x00FF);
	printf("L = %#X\n", registers.hl & 0x00FF);
	printf("H = %#X\n", registers.hl >> 8);
	printf("SP = %#X\n", registers.sp);
	printf("PC = %#X\n", registers.pc);

}



void emulate_loop()
{
	for(;;)
	{
		byte op = read_byte(PC);
		PC += execute_opcode(op);

	}
}

void handle_undefined(){
	
	
}
int execute_opcode(byte opcode)
{
	int instruction_len = 0;
	int cycles = 0;
	switch(opcode)
	{
		case 0x0:
			do_NOP();
			printf("op code no: %#x\n", opcode)
			break;

		case 0x1:
			do_NOP();
			printf("op code no: %#x\n", opcode)
			break;

		case 0x2:
			do_NOP();
			printf("op code no: %#x\n", opcode)
			break;

		case 0x3:
			do_NOP();
			printf("op code no: %#x\n", opcode)
			break;

		case 0x4:
			do_NOP();
			printf("op code no: %#x\n", opcode)
			break;

		case 0x5:
			do_NOP();
			printf("op code no: %#x\n", opcode)
			break;

		case 0x6:
			do_NOP();
			printf("op code no: %#x\n", opcode)
			break;

		case 0x7:
			do_NOP();
			printf("op code no: %#x\n", opcode)
			break;

		case 0x8:
			do_NOP();
			printf("op code no: %#x\n", opcode)
			break;

		case 0x9:
			do_NOP();
			printf("op code no: %#x\n", opcode)
			break;

		case 0xA:
			do_NOP();
			printf("op code no: %#x\n", opcode)
			break;

		case 0xB:
			do_NOP();
			break;

		case 0xC:
			do_NOP();
			break;

		case 0xD:
			do_NOP();
			break;

		case 0xE:
			do_NOP();
			break;

		case 0xF:
			do_NOP();
			break;

		case 0x10:
			do_NOP();
			break;

		case 0x11:
			do_NOP();
			break;

		case 0x12:
			do_NOP();
			break;

		case 0x13:
			do_NOP();
			break;

		case 0x14:
			do_NOP();
			break;

		case 0x15:
			do_NOP();
			break;

		case 0x16:
			do_NOP();
			break;

		case 0x17:
			do_NOP();
			break;

		case 0x18:
			do_NOP();
			break;

		case 0x19:
			do_NOP();
			break;

		case 0x1A:
			do_NOP();
			break;

		case 0x1B:
			do_NOP();
			break;

		case 0x1C:
			do_NOP();
			break;

		case 0x1D:
			do_NOP();
			break;

		case 0x1E:
			do_NOP();
			break;

		case 0x1F:
			do_NOP();
			break;

		case 0x20:
			do_NOP();
			break;

		case 0x21:
			do_NOP();
			break;



		default;
			printf("Unimplemented Instruction for opcode: %#x\n", opcode);
			break;
	}

	PC += instruction_len;
	return cycles;
}

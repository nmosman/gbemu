#include "mem_mapper.h"

#define CLOCK_SPEED 4338000
#define CYCLES_PER_FRAME CLOCK_SPEED/60
void print_registers()
{
	printf("A = %#X\n", A);
	printf("B = %#X\n", B);
	printf("C = %#X\n", C);
	printf("D = %#X\n", D);
	printf("E = %#X\n", E);
	printf("F = %#X\n", F);
	printf("L = %#X\n", L);
	printf("H = %#X\n", H);
	printf("SP = %#X\n", SP);
	printf("PC = %#X\n", PC);

}



void emulate_loop()
{
	for(;;)
	{
		byte op = read_byte(PC);
		PC += execute_opcode(op);

	}
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

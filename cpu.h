
#ifndef CPU_H
#define CPU_H

#define Z_FLAG	7
#define N_FLAG	6
#define H_FLAG	5
#define C_FLAG	4


#include "utils.h"

//16-bit combined registers

typedef struct _registers{
	word pc;
	word sp;
	reg_word af;
	reg_word de;
	reg_word bc;
 	reg_word hl;
	} gb_regs;

extern gb_regs registers; 




void tick();
void hard_reset();
void initRegisters();
int execute_opcode(byte opcode);


#endif // CPU_H





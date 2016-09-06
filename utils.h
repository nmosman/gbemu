
#ifndef UTILS_H
#define UTILS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BIT_TEST(val, place) ((val) & (0x1 << (place)))
typedef unsigned char byte;
typedef unsigned short word;

typedef union _reg_word
{
	word uw;
	struct
	{
		#ifdef MSB_FIRST 
		byte h;
		byte l;

		#else 
		byte l;
		byte h;

		#endif 
	}b;
}reg_word;
/*

void set_bit(byte *val, int place)
{
	*val |= (0x1 << (place));
}

void clear_bit(byte *val, int place)
{
	*val &= ~(0x1 << (place));
}

void toggle_bit(byte *val, int place)
{
	*val ^= (0x1 << (place));
}
*/
#endif

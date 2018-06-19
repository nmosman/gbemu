#include "mem_mapper.h"


byte bios[BIOS_BANK_SIZE];
byte rom[ROM_BANK_SIZE];
byte wram[WRAM_BANK_SIZE];
byte eram[ERAM_BANK_SIZE];
byte vram[VRAM_BANK_SIZE];
byte zram[ZRAM_BANK_SIZE];
byte oam[OAM_BANK_SIZE];

void write_byte(word address, byte b)
{	
	if(0 <= address && address <= 0x7FFF)
	{
		//cannot write to ROM data 
	}

	else if(0x8000 <= address && address <= 0x9FFF)
	{
		vram[address - 0x8000] = b;
	}

	else if(0xA000 <= address && address <= 0xBFFF)
	{
		eram[address - 0xA000] = b;
		wram[address - 0xA000] = b;
	}

	else if(0xC000 <= address && address <= 0xFDFF)
	{
		eram[address - 0xA000] = b;
		wram[address - 0xA000] = b;
	}

	else
	{	
		printf("Error, invalid memory addressing!");
	}
}

// Probably will not need this for this project...
/*void write_word(hword address, hword h)
{

}
*/


byte read_byte(word address)
{
	if(0 <= address && address <= 0x7FFF)
	{
		return rom[address];
	}

	else if(0x8000 <= address && address <= 0x9FFF)
	{
		return vram[address - 0x8000];
	}

	else if(0xA000 <= address && address <= 0xBFFF)
	{
		return eram[address - 0xA000];
	}

	else if(0xC000 <= address && address <= 0xFDFF)
	{
		return wram[address - 0xC000];
	}

	else
	{	
		printf("Error, invalid memory addressing!");
	}
}

word read_word(word address)
{
	return read_byte(address) | read_byte(address + 1) << 8;
}


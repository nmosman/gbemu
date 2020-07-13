#ifndef MEM_H 
#define MEM_H
#include "../utils/utils.h"
#include "../core/cpu.h"


/*

Taken from
0000-3FFF 16KB ROM Bank 00 (in cartridge, fixed at bank 00)
4000-7FFF 16KB ROM Bank 01..NN (in cartridge, switchable bank number)
8000-9FFF 8KB Video RAM (VRAM) (switchable bank 0-1 in CGB Mode)
A000-BFFF 8KB External RAM (in cartridge, switchable bank, if any)
C000-CFFF 4KB Work RAM Bank 0 (WRAM)
D000-DFFF 4KB Work RAM Bank 1 (WRAM) (switchable bank 1-7 in CGB Mode)
E000-FDFF Same as C000-DDFF (ECHO) (typically not used)
FE00-FE9F Sprite Attribute Table (OAM)
FEA0-FEFF Not Usable
FF00-FF7F I/O Ports
FF80-FFFE High RAM (HRAM)
FFFF Interrupt Enable Register

*/
#define ROM_BANK_SIZE 32768
#define VRAM_BANK_SIZE 8192
#define ERAM_BANK_SIZE 8192
#define BIOS_BANK_SIZE 256
#define WRAM_BANK_SIZE 15872
#define ZRAM_BANK_SIZE 128

#define HRAM_BANK_SIZE 126
#define OAM_BANK_SIZE 160
#define INTERRUPT_ENABLE_REGISTER	0xFFFF


// Sections of memory

extern byte bios[BIOS_BANK_SIZE];
extern byte rom[ROM_BANK_SIZE];
extern byte wram[WRAM_BANK_SIZE];
extern byte eram[ERAM_BANK_SIZE];
extern byte vram[VRAM_BANK_SIZE];
extern byte zram[ZRAM_BANK_SIZE];
extern byte oam[OAM_BANK_SIZE];




void init_memory();
void free_memory();
void memory_dump(char *file_name);


void write_byte(word address, byte b);
void write_word(word address, word w);
byte read_byte(word address);
word read_word(word address);

#endif


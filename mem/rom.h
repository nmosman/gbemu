#ifndef ROM_H
#define ROM_H
#include "mem_mapper.h"



#define ROM_NAME_OFFSET 0x134
#define ROM_TYPE_OFFSET 0x147
#define ROM_SIZE_OFFSET 0x148
#define ROM_RAM_SIZE 0x149


char cart_title[17];
enum cart_type
{
    ROM_ONLY,
    ROM_MBC1,
    ROM_MBC1_RAM,
    ROM_MBC2 = 0x5,
    ROM_MBC2_BATTERY,
    ROM_RAM = 0x8,
    ROM_RAM_BATTERY,
    ROM_MMMD1 = 0xB,
    ROM_MMMD1_SRAM,
    ROM_MMMD1_SRAM_BATT,
    ROM_MBC3_RAM = 0x12,
    ROM_MBC3_RAM_BATT,
    ROM_MBC5 = 0x19,
    ROM_MBC5_RAM,
    ROM_MBC5_RAM_BATT,
    ROM_MBC5_RUMBLE,
    ROM_MBC5_RUMBLE_SRAM,
    ROM_MBC5_RUMBLE_SRAM_BATT,
    POCKET_CAMERA,
    BANDAI_TAMA5 = 0xFD,
    HUDSON_HUC_3 = 0xFE,
    HUDSON_HUC_1 = 0xFF
};

int load_rom(char * rom_name);
void save_rom_state(char * rom_name);
void print_rom_status(char * rom_name);
void rom_bank_mode();

#endif

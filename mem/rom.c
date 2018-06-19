#include "rom.h"
#include <math.h>

int load_rom(char* rom_name)
{

    enum cart_type ctype;
    int rom_size;
    int ram_size;
    int i;

    unsigned char header[0x180];

    FILE *from = fopen(rom_name, "rb");

    if(!from)
    {
        printf("Unable to load rom!");
        return 0;
    }

    fseek(from, 0, SEEK_END);
    int length = ftell(from);

    if(length < 0x180)
    {

        printf("ROM size is not big enough!\n");
        fclose(from);
        return 0;
    }

    rewind(from);
    fread(header, 0x180,1,from);

    memset(cart_title, '\0', 17);

    for(i = 0; i < 16; i++)
    {
        cart_title[i] = header[i + ROM_NAME_OFFSET];
        printf("%d\n",header[i+ROM_NAME_OFFSET]);
    }

    printf("loaded ROM: %s\n", cart_title);

    ctype = header[ROM_TYPE_OFFSET];

    printf("ROM Type: 0x%X\n", ctype);

    if(ctype != ROM_ONLY)
    {
        printf("rom with mappers are not supported!\n");
        //fclose(rom);
        //return 0;
    }

    rom_size = header[ROM_SIZE_OFFSET];
    ram_size = header[ROM_RAM_SIZE];

    if((rom_size & 0xF0) == 0x50) rom_size = (int)pow(2.0, (double)(((0x52) & 0xF) + 1)) + 64;
    else rom_size = (int)pow(2.0, (double)(rom_size + 1));

    printf("ROM size in kB: %d\n", rom_size);
    printf("RAM size in bytes: %d bytes\n", ram_size);


    rewind(from);
    size_t read_len;
    read_len = fread(rom, length, 1, from);
   // printf("no: %d", &read_len);
    fclose(from);

    return 1;

}


int main()
{
    load_rom("Tetris.gb");
    int i;
    for(i = 0; i < 10; i++)
    {
        printf("0x%02X\n", rom[0x100 + i]);
    }
    


    return 0;
}

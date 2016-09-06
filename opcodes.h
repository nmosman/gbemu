
struct instruction
{
    char *disassembly;
    byte  length;
    void *procedure;
    //int cycles;

} extern const instructions[256];


const struct instruction instructions[256] = {

        {"NOP", 1, nop},                //0x0
        {"LD BC, 0x%04X", 3, NULL},     //0x1
        {"LD (BC),A", 0, NULL},         //0x2
        {"INC BC", 1, NULL},            //0x3
        {"INC B" 1, NULL},              //0x4
        {"DEC B", 1, NULL},             //0x5
        {"LD B,0x%02X" 2, nop},         //0x6
        {"RLCA", 1, NULL},              //0x7
        {"LD (0x%04X),SP", 3, nop},     //0x8
        {"ADD HL, BC", 1, NULL},        //0x9
        {"LD A,(BC)", 1, nop},          //0xA
        {"DEC BC", 1, NULL},            //0xB
        {"INC C", 1, nop},              //0xC
        {"DEC C", 1, NULL},             //0xD
        {"LD C,0x%02X", 2, nop},        //0xE
        {"RRCA", 1, NULL},              //0xF
        {"STOP 0", 1, nop},             //0x10
        {"LD DE, 0x%04X", 3, NULL},     //0x11
        {"LD (DE),A", 1, nop},          //0x12
        {"INC DE", 1, NULL},            //0x13
        {"INC D", 1, nop},              //0x14
        {"DEC D", 1, NULL},             //0x15
        {"LD D, 0x%02X", 2, nop},       //0x16
        {"RLA", 1, NULL},               //0x17
        {"JR 0x%02X", 2, nop},          //0x18
        {"ADD HL,DE", 1, NULL},         //0x19
        {"LD A,(DE)", 1, nop},          //0x1A
        {"DEC DE", 1, NULL},            //0x1B
        {"INC E", 1, nop},              //0x1C
        {"DEC E", 1, NULL},             //0x1D
        {"LD E, 0x%02X", 2, nop},       //0x1E
        {"RRA", 1, NULL},               //0x1F
        {"JR NZ, 0x%02X", 2, nop},      //0x20
        {"LD HL, 0x%04X", 3, NULL},     //0x21
        {"LD (HL+),A", 1, nop},         //0x22
        {"INC HL", 1, NULL},            //0x23
        {"INC H", 1, nop},              //0x24
        {"DEC H", 1, NULL},             //0x25
        {"LD H,0x%02X", 2, nop},        //0x26
        {"DAA", 1, NULL},               //0x27
        {"JR Z,0x%02X", 2, nop},        //0x28
        {"ADD HL,HL", 1, NULL},         //0x29
        {"LD A,(HL+)", 1, nop},         //0x2A
        {"DEC HL", 1, NULL},            //0x2B
        {"INC L", 1, nop},              //0x2C
        {"DEC L", 1, NULL},             //0x2D
        {"LD L, 0x%02X", 2, nop},       //0x2E
        {"CPL", 1, NULL},               //0x2F
        {"JR NC, 0x%02X", 2, nop},      //0x30
        {"LD SP, 0x%04X", 3, NULL},     //0x31
        {"LD (HL-),A", 1, nop},         //0x32
        {"INC SP", 1, NULL},            //0x33
        {"INC (HL)", 1, nop},           //0x34
        {"DEC (HL)", 1, NULL},          //0x35
        {"LD (HL), 0x%02X", 2, nop},    //0x36
        {"SCF", 1, NULL},               //0x37
        {"JR C,0x%02X", 2, nop},        //0x38
        {"ADD HL,SP", 1, NULL},         //0x39
        {"LD A,(HL-)", 1, nop},         //0x3A
        {"DEC SP", 1, NULL},            //0x3B
        {"INC A", 1, nop},          //0x3C
        {"DEC A", 1, NULL},         //0x3D
        {"LD A, 0x%02X", 2, nop},   //0x3E
        {"CCF", 1, NULL},           //0x3F
        {"LD B,B", 1, nop},         //0x40
        {"LD B,C", 1, nop},         //0x41
        {"LD B,D", 1, nop},         //0x42
        {"LD B,E", 1, nop},         //0x43
        {"LD B,H", 1, nop},         //0x44
        {"LD B,L", 1, nop},         //0x45
        {"LD B,(HL)", 1, nop},      //0x46
        {"LD B,A", 1, nop},         //0x47
        {"LD C,B", 1, nop},         //0x48
        {"LD C,C", 1, nop},         //0x49
        {"LD C,D", 1, nop},         //0x4A
        {"LD C,E", 1, nop},         //0x4B
        {"LD C,H", 1, nop},         //0x4C
        {"LD C,L", 1, nop},         //0x4D
        {"LD C,(HL)", 1, nop},      //0x4E
        {"LD C,A", 1, nop},         //0x4F
        {"LD D,B", 1, nop},         //0x50
        {"LD D,C", 1, nop},         //0x51
        {"LD D,D", 1, nop},         //0x52
        {"LD D,E", 1, nop},         //0x53
        {"LD D,H", 1, nop},         //0x54
        {"LD D,L", 1, nop},         //0x55
        {"LD D,(HL)", 1, nop},      //0x56
        {"LD D,A", 1, nop},         //0x57
        {"LD E,B", 1, nop},         //0x58
        {"LD E,C", 1, nop},         //0x59
        {"LD E,D", 1, nop},         //0x5A
        {"LD E,E", 1, nop},         //0x5B
        {"LD E,H", 1, nop},         //0x5C
        {"LD E,L", 1, nop},         //0x5D
        {"LD E,(HL)", 1, nop},      //0x5E
        {"LD E,A", 1, nop},         //0x5F
        {"LD H,B", 1, nop},         //0x60
        {"LD H,C", 1, nop},         //0x61
        {"LD H,D", 1, nop},         //0x62
        {"LD H,E", 1, nop},         //0x63
        {"LD H,H", 1, nop},         //0x64
        {"LD H,L", 1, nop},         //0x65
        {"LD H,(HL)", 1, nop},      //0x66
        {"LD H,A", 1, nop},         //0x67
        {"LD L,B", 1, nop},         //0x68
        {"LD L,C", 1, nop},         //0x69
        {"LD L,D", 1, nop},         //0x6A
        {"LD L,E", 1, nop},         //0x6B
        {"LD L,H", 1, nop},         //0x6C
        {"LD L,L", 1, nop},         //0x6D
        {"LD L,(HL)", 1, nop},      //0x6E
        {"LD L,A", 1, nop},         //0x6F
        {"LD (HL),B", 1, nop},      //0x70
        {"LD (HL),C", 1, nop},      //0x71
        {"LD (HL),D", 1, nop},      //0x72
        {"LD (HL),E", 1, nop},      //0x73
        {"LD (HL),H", 1, nop},      //0x74
        {"LD (HL),L", 1, nop},      //0x75
        {"HALT", 1, nop},           //0x76
        {"LD (HL),A", 1, nop},      //0x77
        {"LD A,B", 1, nop},         //0x78
        {"LD A,C", 1, nop},         //0x79
        {"LD A,D", 1, nop},         //0x7A
        {"LD A,E", 1, nop},         //0x7B
        {"LD A,H", 1, nop},         //0x7C
        {"LD A,L", 1, nop},         //0x7D
        {"LD A,(HL)", 1, nop},      //0x7E
        {"LD A,A", 1, nop},         //0x7F
        {"ADD A,B", 1, nop},        //0x80
        {"ADD A,C", 1, nop},        //0x81
        {"ADD A,D", 1, nop},        //0x82
        {"ADD A,E", 1, nop},        //0x83
        {"ADD A,H", 1, nop},        //0x84
        {"ADD A,L", 1, nop},        //0x85
        {"ADD A,(HL)", 1, nop},     //0x86
        {"ADD A,A", 1, nop},        //0x87
        {"ADC A,B", 1, nop},        //0x88
        {"ADC A,C", 1, nop},        //0x89
        {"ADC A,D", 1, nop},        //0x8A
        {"ADC A,E", 1, nop},        //0x8B
        {"ADC A,H", 1, nop},        //0x8C
        {"ADC A,L", 1, nop},        //0x8D
        {"ADC A,(HL)", 1, nop},     //0x8E
        {"ADC A,A", 1, nop},        //0x8F
        {"SUB,B", 1, nop},          //0x90
        {"SUB,C", 1, nop},          //0x91
        {"SUB,D", 1, nop},          //0x92
        {"SUB,E", 1, nop},          //0x93
        {"SUB,H", 1, nop},          //0x94
        {"SUB,L", 1, nop},          //0x95
        {"SUB,(HL)", 1, nop},       //0x96
        {"SUB,A", 1, nop},          //0x97
        {"SBC A,B", 1, nop},        //0x98
        {"SBC A,C", 1, nop},        //0x99
        {"SBC A,D", 1, nop},        //0x9A
        {"SBC A,E", 1, nop},        //0x9B
        {"SBC A,H", 1, nop},        //0x9C
        {"SBC A,L", 1, nop},        //0x9D
        {"SBC A,(HL)", 1, nop},     //0x9E
        {"SBC A,A", 1, nop},        //0x9F
        {"AND,B", 1, nop},          //0xA0
        {"AND,C", 1, nop},          //0xA1
        {"AND,D", 1, nop},          //0xA2
        {"AND,E", 1, nop},          //0xA3
        {"AND,H", 1, nop},          //0xA4
        {"AND,L", 1, nop},          //0xA5
        {"AND,(HL)", 1, nop},       //0xA6
        {"AND,A", 1, nop},          //0xA7
        {"XOR,B", 1, nop},          //0xA8
        {"XOR,C", 1, nop},          //0xA9
        {"XOR,D", 1, nop},          //0xAA
        {"XOR,E", 1, nop},          //0xAB
        {"XOR,H", 1, nop},          //0xAC
        {"XOR,L", 1, nop},          //0xAD
        {"XOR,(HL)", 1, nop},       //0xAE
        {"XOR,A", 1, nop},          //0xAF
        {"OR,B", 1, nop},           //0xB0
        {"OR,C", 1, nop},           //0xB1
        {"OR,D", 1, nop},           //0xB2
        {"OR,E", 1, nop},           //0xB3
        {"OR,H", 1, nop},           //0xB4
        {"OR,L", 1, nop},           //0xB5
        {"OR,(HL)", 1, nop},        //0xB6
        {"OR,A", 1, nop},           //0xB7
        {"CP,B", 1, nop},           //0xB8
        {"CP,C", 1, nop},           //0xB9
        {"CP,D", 1, nop},           //0xBA
        {"CP,E", 1, nop},           //0xBB
        {"CP,H", 1, nop},           //0xBC
        {"CP,L", 1, nop},           //0xBD
        {"CP,(HL)", 1, nop},        //0xBE
        {"CP,A", 1, nop},           //0xBF
        {"RET NZ", 1, nop},         //0xC0
        {"POP BC", 1, nop},         //0xC1
        {"JP NZ,0x%04X", 3, nop},   //0xC2
        {"JP 0x%04X", 3, nop},      //0xC3
        {"CALL NZ, 0x%04X", 3, nop},//0xC4
        {"PUSH BC", 1, nop},        //0xC5
        {"ADD A, 0x%02X", 2, nop},  //0xC6
        {"RST 00H", 1, nop},        //0xC7
        {"RET Z", 1, nop},          //0xC8
        {"RET ", 1, nop},           //0xC9
        {"JP Z, 0x%04X", 3, nop},   //0xCA
        {"PREFIX CB", 1, nop},      //0xCB
        {"CALL Z, 0x%04X", 3, nop}, //0xCC
        {"CALL 0x%04X", 3, nop},    //0xCD
        {"ADC A, 0x%02X ", 2, nop}, //0xCE
        {"RST 08H", 1, nop},        //0xCF
        {"RET NC", 1, nop},         //0xD0
        {"POP DE", 1, nop},         //0xD1
        {"JP NC,0x%04X", 3, nop},   //0xD2
        {"Unimp opcode!", 0, nop},  //0xD3
        {"CALL NC, 0x%04X", 3, nop},//0xD4
        {"PUSH DE", 1, nop},        //0xD5
        {"SUB 0x%02X", 2, nop},     //0xD6
        {"RST 10H", 1, nop},        //0xD7
        {"RET C", 1, nop},          //0xD8
        {"RETI ", 1, nop},          //0xD9
        {"JP C, 0x%04X", 3, nop},   //0xDA
        {"Unimp opcode!", 0, nop},  //0xDB
        {"CALL C, 0x%04X", 3, nop}, //0xDC
        {"Unimp opcode!", 0, nop},  //0xDD
        {"SBC A, 0x%02X ", 2, nop}, //0xDE
        {"RST 18H", 1, nop},        //0xDF
        {"LDH (0x%04X),A", 2, nop}, //0xE0
        {"POP HL", 1, nop},         //0xE1
        {"LD (C),A", 2, nop},       //0xE2
        {"Unimp opcode!", 0, nop},  //0xE3
        {"Unimp opcode!", 0, nop},  //0xE4
        {"PUSH HL", 1, nop},        //0xE5
        {"AND 0x%02X", 2, nop},     //0xE6
        {"RST 20H", 1, nop},        //0xE7
        {"ADD SP, 0x%02X", 2, nop}, //0xE8
        {"JP (HL) ", 1, nop},       //0xE9
        {"LD (0x%04X),A", 3, nop},  //0xEA
        {"Unimp opcode!", 0, nop},  //0xEB
        {"Unimp opcode!", 0, nop},  //0xEC
        {"Unimp opcode!", 0, nop},  //0xED
        {"XOR 0x%02X ", 2, nop},    //0xEE
        {"RST 28H", 1, nop},        //0xEF
        {"LDH A,(0x%02)", 2, nop},  //0xF0
        {"POP AF", 1, nop},         //0xF1
        {"LD A,(C)", 2, nop},       //0xF2
        {"DI", 1, nop},             //0xF3
        {"Unimp opcode!", 0, nop},  //0xF4
        {"PUSH AF", 1, nop},        //0xF5
        {"OR 0x%02X", 2, nop},      //0xF6
        {"RST 30H", 1, nop},        //0xF7
        {"LD HL, SP+0x%02X",2, nop},//0xF8
        {"LD SP,HL ", 1, nop},      //0xF9
        {"LD A,(0x%04X)", 3, nop},  //0xFA
        {"EI", 1, nop},             //0xFB
        {"Unimp opcode!", 0, nop},  //0xFC
        {"Unimp opcode!", 0, nop},  //0xFD
        {"CP 0x%02X ", 2, nop},     //0xFE
        {"RST 38H", 1, nop},        //0xFF

}





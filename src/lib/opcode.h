/*

MIT License

Copyright (c) 2017 Peter Bjorklund

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

*/
#ifndef zany_opcode_h
#define zany_opcode_h

#define ADC_ABS 0x6D
#define ADC_ABS_X 0x7D
#define ADC_ABS_Y 0x79
#define ADC_IMM 0x69
#define ADC_IND_X 0x61
#define ADC_IND_Y 0x71
#define ADC_ZP 0x65
#define ADC_ZP_X 0x75

#define AND_ABS 0x2D
#define AND_ABS_X 0x3D
#define AND_ABS_Y 0x39
#define AND_IMM 0x29
#define AND_IND_X 0x21
#define AND_IND_Y 0x31
#define AND_ZP 0x25
#define AND_ZP_X 0x35

#define ASL_ABS 0x0E
#define ASL_ABS_X 0x1E
#define ASL_ACC 0x0A
#define ASL_ZP 0x06
#define ASL_ZP_X 0x16

#define BCC_REL 0x90
#define BCS_REL 0xB0
#define BEQ_REL 0xF0

#define BIT_ABS 0x2C
#define BIT_ZP 0x24

#define BMI_REL 0x30
#define BNE_REL 0xD0
#define BPL_REL 0x10

#define BVC_REL 0x50
#define BVS_REL 0x70

#define CLC 0x18
#define CLD_NOT_USED 0xD8
#define CLI_NOT_USED 0x58
#define CLV 0xB8

#define CMP_ABS 0xCD
#define CMP_ABS_X 0xDD
#define CMP_ABS_Y 0xD9
#define CMP_IMM 0xC9
#define CMP_IND_X 0xC1
#define CMP_IND_Y 0xD1
#define CMP_ZP 0xC5
#define CMP_ZP_X 0xD5

#define CPX_ABS 0xEC
#define CPX_IMM 0xE0
#define CPX_ZP 0xE4

#define CPY_ABS 0xCC
#define CPY_IMM 0xC0
#define CPY_ZP 0xC4

#define DEC_ABS 0xCE
#define DEC_ABS_X 0xDE
#define DEC_ZP 0xC6
#define DEC_ZP_X 0xD6

#define DEX 0xCA
#define DEY 0x88

#define EOR_ABS 0x4D
#define EOR_ABS_X 0x5D
#define EOR_ABS_Y 0x59
#define EOR_IMM 0x49
#define EOR_IND_X 0x41
#define EOR_IND_Y 0x51
#define EOR_ZP 0x45
#define EOR_ZP_X 0x55

#define INC_ABS 0xEE
#define INC_ABS_X 0xFE
#define INC_ZP 0xE6
#define INC_ZP_X 0xF6

#define INX 0xE8
#define INY 0xC8

#define JMP_ABS 0x4C
#define JMP_IND 0x6C

#define JSR_ABS 0x20

#define LDA_ABS 0xAD
#define LDA_ABS_X 0xBD
#define LDA_ABS_Y 0xB9
#define LDA_IMM 0xA9
#define LDA_IND_X 0xA1
#define LDA_IND_Y 0xB1
#define LDA_ZP 0xA5
#define LDA_ZP_X 0xB5

#define LDX_ABS 0xAE
#define LDX_ABS_Y 0xBE
#define LDX_IMM 0xA2
#define LDX_ZP 0xA6
#define LDX_ZP_Y 0xB6

#define LDY_ABS 0xAC
#define LDY_ABS_X 0xBC
#define LDY_IMM 0xA0
#define LDY_ZP 0xA4
#define LDY_ZP_X 0xB4

#define LSR_ABS 0x4E
#define LSR_ABS_X 0x5E
#define LSR_ACC 0x4A
#define LSR_ZP 0x46
#define LSR_ZP_X 0x56

#define ORA_IMM 0x09
#define ORA_ZP 0x05
#define ORA_ZP_X 0x15
#define ORA_ABS 0x0D
#define ORA_ABS_X 0x1D
#define ORA_ABS_Y 0x19
#define ORA_IND_X 0x01
#define ORA_IND_Y 0x11

#define NOP 0xEA

#define PHA 0x48
#define PHP_NOT_USED 0x08
#define PLA 0x68
#define PLP_NOT_USED 0x28

#define ROL_ABS 0x2E
#define ROL_ABS_X 0x3E
#define ROL_ACC 0x2A
#define ROL_ZP 0x26
#define ROL_ZP_X 0x36

#define ROR_ABS 0x6E
#define ROR_ABS_X 0x7E
#define ROR_ACC 0x6A
#define ROR_ZP 0x66
#define ROR_ZP_X 0x76

#define RTI_NOT_USED 0x40
#define RTS 0x60

#define SBC_IMM 0xE9
#define SBC_ZP 0xE5
#define SBC_ZP_X 0xF5
#define SBC_ABS 0xED
#define SBC_ABS_X 0xFD
#define SBC_ABS_Y 0xF9
#define SBC_IND_X 0xE1
#define SBC_IND_Y 0xF1

#define SEC 0x38
#define SED_NOT_USED 0xF8
#define SEI_NOT_USED 0x78

#define STA_ABS 0x8D
#define STA_ABS_X 0x9D
#define STA_ABS_Y 0x99
#define STA_IND_X 0x81
#define STA_IND_Y 0x91
#define STA_ZP 0x85
#define STA_ZP_X 0x95

#define STX_ZP 0x86
#define STX_ZP_Y 0x96
#define STX_ABS 0x8E

#define STY_ZP 0x84
#define STY_ZP_X 0x94
#define STY_ABS 0x8C

#define TAX 0xAA
#define TAY 0xA8
#define TSX_NOT_USED 0xBA
#define TXA 0x8A
#define TXS_NOT_USED 0x9A
#define TYA 0x98

#endif

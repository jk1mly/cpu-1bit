/* 
 * File:   opcode.h
 * Author: inaba
 *
 * Created on January 28, 2024, 5:14 PM
 */

#ifndef OPCODE_H
#define	OPCODE_H

#ifdef	__cplusplus
extern "C" {
#endif


#define NOPO    0x00    //  RR -> RR   PLS -> FLG0
#define LD      0x10    //   D -> RR
#define LDC     0x20    //  nD -> RR
#define AND     0x30    //  RR &   D -> RR
#define ANDC    0x40    //  RR &  nD -> RR
#define OR      0x50    //  RR |   D -> RR
#define ORC     0x60    //  RR |  nD -> RR
#define XNOR    0x70    //  RR == D    1  -> RR
#define STO     0x80    //  RR ->  D   1  -> WR
#define STOC    0x90    // nRR ->  D   1  -> WR
#define IEN     0xA0    //   D -> IEN
#define OEN     0xB0    //   D -> OEN
#define JMP     0xC0    // PLS -> JMP
#define RTN     0xD0    // PLS -> RTN  Skip next
#define SKZ     0xE0    //  RR == 0    Skip next
#define NOPF    0xF0    //  RR -> RR   PLS -> FLGF

#define ERASE   0xFF

#define PIb0    +0x0
#define PIb1    +0x1
#define PIb2    +0x2
#define PIb3    +0x3
#define PIb4    +0x4
#define PIb5    +0x5
#define PIb6    +0x6
#define PIb7    +0x7
#define PIrr    +0x0
#define PIr1    +0x1
#define PIc0    +0x2
#define PIc1    +0x3

#define POb0    +0x8
#define POb1    +0x9
#define POb2    +0xA
#define POb3    +0xB
#define POb4    +0xC
#define POb5    +0xD
#define POb6    +0xE
#define POb7    +0xF
#define POr1    +0x9



#ifdef	__cplusplus
}
#endif

#endif	/* OPCODE_H */


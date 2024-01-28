/* 
 * File:   progcd.h
 * Author: inaba
 *
 * Created on January 28, 2024, 5:17 PM
 */

#ifndef PROGCD_H
#define	PROGCD_H

#ifdef	__cplusplus
extern "C" {
#endif

#include "opcode.h"

    const   uint8_t pic_rom[32] = {
        // ADR 0x00
        IEN     PIc1    ,
        OEN     PIc1    ,
        LD      PIb4    ,
        STOC    POb0    ,
        AND     PIb5    ,
        STO     POb1    ,
        LD      PIb4    ,
        OR      PIb6    ,
        // ADR 0x08
        STO     POb2    ,
        LD      PIb4    ,
        XNOR    PIb7    ,
        STOC    POb3    ,
        NOPF            ,
        ERASE           ,
        ERASE           ,
        ERASE           ,
        // ADR 0x10
        ERASE           ,
        ERASE           ,
        ERASE           ,
        ERASE           ,
        ERASE           ,
        ERASE           ,
        ERASE           ,
        ERASE           ,
        // ADR 0x18
        ERASE           ,
        ERASE           ,
        ERASE           ,
        ERASE           ,
        ERASE           ,
        ERASE           ,
        ERASE           ,
        ERASE           
    };
    


#ifdef	__cplusplus
}
#endif

#endif	/* PROGCD_H */


#ifndef BIT_H
#define BIT_H


// TODO these may not be needed, so maybe remove them later

// BIT MASKING
#define MASK_BIT0(n) (n & 0x1)
#define MASK_BIT1(n) (n & 0x2)
#define MASK_BIT2(n) (n & 0x4)
#define MASK_BIT3(n) (n & 0x8)
#define MASK_BIT4(n) (n & 0x16)
#define MASK_BIT5(n) (n & 0x32)
#define MASK_BIT6(n) (n & 0x64)
#define MASK_BIT7(n) (n & 0x128)

// BYTE MASKING
#define MASK_BYTE0(n) (n & 0xff)
#define MASK_BYTE1(n) (n & 0xff00)
#define MASK_BYTE2(n) (n & 0xff0000)
#define MASK_BYTE3(n) (n & 0xff000000)
#define MASK_BYTE4(n) (n & 0xff00000000)
#define MASK_BYTE5(n) (n & 0xff0000000000)
#define MASK_BYTE6(n) (n & 0xff000000000000)
#define MASK_BYTE7(n) (n & 0xff00000000000000)

// BIT FLIPPING
#define FLIP_BIT0(n) (n ^ 0x1)
#define FLIP_BIT1(n) (n ^ 0x2)
#define FLIP_BIT2(n) (n ^ 0x4)
#define FLIP_BIT3(n) (n ^ 0x8)
#define FLIP_BIT4(n) (n ^ 0x16)
#define FLIP_BIT5(n) (n ^ 0x32)
#define FLIP_BIT6(n) (n ^ 0x64)
#define FLIP_BIT7(n) (n ^ 0x128)

#endif
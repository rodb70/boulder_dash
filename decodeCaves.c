typedef short objectType;

uint8_t caveData[24][40];

uint8_t cave1[]=
{
0x01,0x14,0x0A,0x0F,0x0A,0x0B,0x0C,0x0D,0x0E,0x0C,0x0C,0x0C,0x0C,0x0C,0x96,0x6E,
0x46,0x28,0x1E,0x08,0x0B,0x09,0xD4,0x20,0x00,0x10,0x14,0x00,0x3C,0x32,0x09,0x00,
0x42,0x01,0x09,0x1E,0x02,0x42,0x09,0x10,0x1E,0x02,0x25,0x03,0x04,0x04,0x26,0x12,
0xFF,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff };

uint8_t cave2[]=
{
0x02,0x14,0x14,0x32,0x03,0x00,0x01,0x57,0x58,0x0A,0x0C,0x09,0x0D,0x0A,0x96,0x6E,
0x46,0x46,0x46,0x0A,0x04,0x09,0x00,0x00,0x00,0x10,0x14,0x08,0x3C,0x32,0x09,0x02,
0x42,0x01,0x08,0x26,0x02,0x42,0x01,0x0F,0x26,0x02,0x42,0x08,0x03,0x14,0x04,0x42,
0x10,0x03,0x14,0x04,0x42,0x18,0x03,0x14,0x04,0x42,0x20,0x03,0x14,0x04,0x40,0x01,
0x05,0x26,0x02,0x40,0x01,0x0B,0x26,0x02,0x40,0x01,0x12,0x26,0x02,0x40,0x14,0x03,
0x14,0x04,0x25,0x12,0x15,0x04,0x12,0x16,0xFF,

0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff };

uint8_t cave3[]=
{
0x03,0x00,0x0F,0x00,0x00,0x32,0x36,0x34,0x37,0x18,0x17,0x18,0x17,0x15,0x96,0x64,
0x5A,0x50,0x46,0x09,0x08,0x09,0x04,0x00,0x02,0x10,0x14,0x00,0x64,0x32,0x09,0x00,
0x25,0x03,0x04,0x04,0x27,0x14,0xFF,

0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff };

uint8_t cave4[]=
{
0x04,0x14,0x05,0x14,0x00,0x6E,0x70,0x73,0x77,0x24,0x24,0x24,0x24,0x24,0x78,0x64,
0x50,0x3C,0x32,0x04,0x08,0x09,0x00,0x00,0x10,0x00,0x00,0x00,0x14,0x00,0x00,0x00,
0x25,0x01,0x03,0x04,0x26,0x16,0x81,0x08,0x0A,0x04,0x04,0x00,0x30,0x0A,0x0B,0x81,
0x10,0x0A,0x04,0x04,0x00,0x30,0x12,0x0B,0x81,0x18,0x0A,0x04,0x04,0x00,0x30,0x1A,
0x0B,0x81,0x20,0x0A,0x04,0x04,0x00,0x30,0x22,0x0B,0xFF,

0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff };

uint8_t cave5[]=
{
0x05,0x14,0x32,0x5A,0x00,0x00,0x00,0x00,0x00,0x04,0x05,0x06,0x07,0x08,0x96,0x78,
0x5A,0x3C,0x1E,0x09,0x0A,0x09,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x25,0x01,0x03,0x04,0x27,0x16,0x80,0x08,0x0A,0x03,0x03,0x00,0x80,0x10,0x0A,0x03,
0x03,0x00,0x80,0x18,0x0A,0x03,0x03,0x00,0x80,0x20,0x0A,0x03,0x03,0x00,0x14,0x09,
0x0C,0x08,0x0A,0x0A,0x14,0x11,0x0C,0x08,0x12,0x0A,0x14,0x19,0x0C,0x08,0x1A,0x0A,
0x14,0x21,0x0C,0x08,0x22,0x0A,0x80,0x08,0x10,0x03,0x03,0x00,0x80,0x10,0x10,0x03,
0x03,0x00,0x80,0x18,0x10,0x03,0x03,0x00,0x80,0x20,0x10,0x03,0x03,0x00,0x14,0x09,
0x12,0x08,0x0A,0x10,0x14,0x11,0x12,0x08,0x12,0x10,0x14,0x19,0x12,0x08,0x1A,0x10,
0x14,0x21,0x12,0x08,0x22,0x10,0xFF,

0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff };

uint8_t cave6[]=
{
0x06,0x14,0x28,0x3C,0x00,0x14,0x15,0x16,0x17,0x04,0x06,0x07,0x08,0x08,0x96,
0x78,0x64,0x5A,0x50,0x0E,0x0A,0x09,0x00,0x00,0x10,0x00,0x00,0x00,0x32,0x00,0x00,
0x00,0x82,0x01,0x03,0x0A,0x04,0x00,0x82,0x01,0x06,0x0A,0x04,0x00,0x82,0x01,0x09,
0x0A,0x04,0x00,0x82,0x01,0x0C,0x0A,0x04,0x00,0x41,0x0A,0x03,0x0D,0x04,0x14,0x03,
0x05,0x08,0x04,0x05,0x14,0x03,0x08,0x08,0x04,0x08,0x14,0x03,0x0B,0x08,0x04,0x0B,
0x14,0x03,0x0E,0x08,0x04,0x0E,0x82,0x1D,0x03,0x0A,0x04,0x00,0x82,0x1D,0x06,0x0A,
0x04,0x00,0x82,0x1D,0x09,0x0A,0x04,0x00,0x82,0x1D,0x0C,0x0A,0x04,0x00,0x41,0x1D,
0x03,0x0D,0x04,0x14,0x24,0x05,0x08,0x23,0x05,0x14,0x24,0x08,0x08,0x23,0x08,0x14,
0x24,0x0B,0x08,0x23,0x0B,0x14,0x24,0x0E,0x08,0x23,0x0E,0x25,0x03,0x14,0x04,0x26,
0x14,0xFF,

0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff };

uint8_t cave7[]=
{
0x07,0x4B,0x0A,0x14,0x02,0x07,0x08,0x0A,0x09,0x0F,0x14,0x19,0x19,0x19,
0x78,0x78,0x78,0x78,0x78,0x09,0x0A,0x0D,0x00,0x00,0x00,0x10,0x08,0x00,0x64,0x28,
0x02,0x00,0x42,0x01,0x07,0x0C,0x02,0x42,0x1C,0x05,0x0B,0x02,0x7A,0x13,0x15,0x02,
0x02,0x14,0x04,0x06,0x14,0x04,0x0E,0x14,0x04,0x16,0x14,0x22,0x04,0x14,0x22,0x0C,
0x14,0x22,0x16,0x25,0x14,0x03,0x04,0x27,0x07,0xFF,

0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff };

uint8_t cave8[]=
{
0x08,0x14,0x0A,0x14,0x01,0x03,
0x04,0x05,0x06,0x0A,0x0F,0x14,0x14,0x14,0x78,0x6E,0x64,0x5A,0x50,0x02,0x0E,0x09,
0x00,0x00,0x00,0x10,0x08,0x00,0x5A,0x32,0x02,0x00,0x14,0x04,0x06,0x14,0x22,0x04,
0x14,0x22,0x0C,0x04,0x00,0x05,0x25,0x14,0x03,0x42,0x01,0x07,0x0C,0x02,0x42,0x01,
0x0F,0x0C,0x02,0x42,0x1C,0x05,0x0B,0x02,0x42,0x1C,0x0D,0x0B,0x02,0x43,0x0E,0x11,
0x08,0x02,0x14,0x0C,0x10,0x00,0x0E,0x12,0x14,0x13,0x12,0x41,0x0E,0x0F,0x08,0x02,
0xFF,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff };

uint8_t cave9[]=
{
0x09,0x14,0x05,0x0A,0x64,0x89,0x8C,0xFB,0x33,0x4B,0x4B,0x50,0x55,0x5A,0x96,
0x96,0x82,0x82,0x78,0x08,0x04,0x09,0x00,0x00,0x10,0x14,0x00,0x00,0xF0,0x78,0x00,
0x00,0x82,0x05,0x0A,0x0D,0x0D,0x00,0x01,0x0C,0x0A,0x82,0x19,0x0A,0x0D,0x0D,0x00,
0x01,0x1F,0x0A,0x42,0x11,0x12,0x09,0x02,0x40,0x11,0x13,0x09,0x02,0x25,0x07,0x0C,
0x04,0x08,0x0C,0xFF,

0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff };

uint8_t cave10[]=
{
0x0A,0x14,0x19,0x3C,0x00,0x00,0x00,0x00,0x00,0x0C,0x0C,0x0C,
0x0C,0x0C,0x96,0x82,0x78,0x6E,0x64,0x06,0x08,0x09,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x25,0x0D,0x03,0x04,0x27,0x16,0x54,0x05,0x04,0x11,0x03,0x54,
0x15,0x04,0x11,0x05,0x80,0x05,0x0B,0x11,0x03,0x08,0xC2,0x01,0x04,0x15,0x11,0x00,
0x0D,0x04,0xC2,0x07,0x06,0x0D,0x0D,0x00,0x0D,0x06,0xC2,0x09,0x08,0x09,0x09,0x00,
0x0D,0x08,0xC2,0x0B,0x0A,0x05,0x05,0x00,0x0D,0x0A,0x82,0x03,0x06,0x03,0x0F,0x08,
0x00,0x04,0x06,0x54,0x04,0x10,0x04,0x04,0xFF,

0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff };

uint8_t cave11[]=
{
0x0B,0x14,0x32,0x00,0x00,0x04,0x66,
0x97,0x64,0x06,0x06,0x06,0x06,0x06,0x78,0x78,0x96,0x96,0xF0,0x0B,0x08,0x09,0x00,
0x00,0x00,0x10,0x08,0x00,0x64,0x50,0x02,0x00,0x42,0x0A,0x03,0x09,0x04,0x42,0x14,
0x03,0x09,0x04,0x42,0x1E,0x03,0x09,0x04,0x42,0x09,0x16,0x09,0x00,0x42,0x0C,0x0F,
0x11,0x02,0x42,0x05,0x0B,0x09,0x02,0x42,0x0F,0x0B,0x09,0x02,0x42,0x19,0x0B,0x09,
0x02,0x42,0x1C,0x13,0x0B,0x01,0x14,0x04,0x03,0x14,0x0E,0x03,0x14,0x18,0x03,0x14,
0x22,0x03,0x14,0x04,0x16,0x14,0x23,0x15,0x25,0x14,0x14,0x04,0x26,0x11,0xFF,

0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff };

uint8_t cave12[]=
{
0x0C,0x14,0x14,0x00,0x00,0x3C,0x02,0x3B,0x66,0x13,0x13,0x0E,0x10,0x15,0xB4,0xAA,0xA0,
0xA0,0xA0,0x0C,0x0A,0x09,0x00,0x00,0x00,0x10,0x14,0x00,0x3C,0x32,0x09,0x00,0x42,
0x0A,0x05,0x12,0x04,0x42,0x0E,0x05,0x12,0x04,0x42,0x12,0x05,0x12,0x04,0x42,0x16,
0x05,0x12,0x04,0x42,0x02,0x06,0x0B,0x02,0x42,0x02,0x0A,0x0B,0x02,0x42,0x02,0x0E,
0x0F,0x02,0x42,0x02,0x12,0x0B,0x02,0x81,0x1E,0x04,0x04,0x04,0x00,0x08,0x20,0x05,
0x81,0x1E,0x09,0x04,0x04,0x00,0x08,0x20,0x0A,0x81,0x1E,0x0E,0x04,0x04,0x00,0x08,
0x20,0x0F,0x25,0x03,0x14,0x04,0x27,0x16,0xFF,

0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff };

uint8_t cave13[]=
{
0x0D,0x8C,0x05,0x08,0x00,0x01,0x02,
0x03,0x04,0x32,0x37,0x3C,0x46,0x50,0xA0,0x9B,0x96,0x91,0x8C,0x06,0x08,0x0D,0x00,
0x00,0x10,0x00,0x00,0x00,0x28,0x00,0x00,0x00,0x25,0x12,0x03,0x04,0x0A,0x03,0x3A,
0x14,0x03,0x42,0x05,0x12,0x1E,0x02,0x70,0x05,0x13,0x1E,0x02,0x50,0x05,0x14,0x1E,
0x02,0xC1,0x05,0x15,0x1E,0x02,0xFF,

0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff };

uint8_t cave14[]=
{
0x0E,0x14,0x0A,0x14,0x00,0x00,0x00,0x00,0x00,
0x1E,0x23,0x28,0x2A,0x2D,0x96,0x91,0x8C,0x87,0x82,0x0C,0x08,0x09,0x00,0x00,0x10,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x81,0x0A,0x0A,0x0D,0x0D,0x00,0x70,0x0B,0x0B,
0x0C,0x03,0xC1,0x0C,0x0A,0x03,0x0D,0xC1,0x10,0x0A,0x03,0x0D,0xC1,0x14,0x0A,0x03,
0x0D,0x50,0x16,0x08,0x0C,0x02,0x48,0x16,0x07,0x0C,0x02,0xC1,0x17,0x06,0x03,0x04,
0xC1,0x1B,0x06,0x03,0x04,0xC1,0x1F,0x06,0x03,0x04,0x25,0x03,0x03,0x04,0x27,0x14,
0xFF,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff };

uint8_t cave15[]=
{
0x0F,0x08,0x0A,0x14,0x01,0x1D,0x1E,0x1F,0x20,0x0F,0x14,0x14,0x19,0x1E,0x78,
0x78,0x78,0x78,0x8C,0x08,0x0E,0x09,0x00,0x00,0x00,0x10,0x08,0x00,0x64,0x50,0x02,
0x00,0x42,0x02,0x04,0x0A,0x03,0x42,0x0F,0x0D,0x0A,0x01,0x41,0x0C,0x0E,0x03,0x02,
0x43,0x0C,0x0F,0x03,0x02,0x04,0x14,0x16,0x25,0x14,0x03,0xFF,

0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff };

uint8_t cave16[]=
{
0x10,0x14,0x0A,0x14,
0x01,0x78,0x81,0x7E,0x7B,0x0C,0x0F,0x0F,0x0F,0x0C,0x96,0x96,0x96,0x96,0x96,0x09,
0x0A,0x09,0x00,0x00,0x10,0x00,0x00,0x00,0x32,0x00,0x00,0x00,0x25,0x01,0x03,0x04,
0x27,0x04,0x81,0x08,0x13,0x04,0x04,0x00,0x08,0x0A,0x14,0xC2,0x07,0x0A,0x06,0x08,
0x43,0x07,0x0A,0x06,0x02,0x81,0x10,0x13,0x04,0x04,0x00,0x08,0x12,0x14,0xC2,0x0F,
0x0A,0x06,0x08,0x43,0x0F,0x0A,0x06,0x02,0x81,0x18,0x13,0x04,0x04,0x00,0x08,0x1A,
0x14,0x81,0x20,0x13,0x04,0x04,0x00,0x08,0x22,0x14,0xFF,

0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff };

uint8_t cave17[]=
{
0x11,0x14,0x1E,0x00,0x0A,0x0B,0x0C,0x0D,0x0E,0x06,0x06,0x06,0x06,0x06,0x0A,0x0A,
0x0A,0x0A,0x0A,0x0E,0x02,0x09,0x00,0x00,0x00,0x14,0x00,0x00,0xFF,0x09,0x00,0x00,
0x87,0x00,0x02,0x28,0x16,0x07,0x87,0x00,0x02,0x14,0x0C,0x00,0x32,0x0A,0x0C,0x10,
0x0A,0x04,0x01,0x0A,0x05,0x25,0x03,0x05,0x04,0x12,0x0C,0xFF,

0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff };

uint8_t cave18[]=
{
0x12,0x14,0x0A,0x00,0x0A,0x0B,0x0C,0x0D,0x0E,
0x10,0x10,0x10,0x10,0x10,0x0F,0x0F,0x0F,0x0F,0x0F,0x06,0x0F,0x09,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x87,0x00,0x02,0x28,0x16,0x07,0x87,0x00,0x02,
0x14,0x0C,0x01,0x50,0x01,0x03,0x09,0x03,0x48,0x02,0x03,0x08,0x03,0x54,0x01,0x05,
0x08,0x03,0x50,0x01,0x06,0x07,0x03,0x50,0x12,0x03,0x09,0x05,0x54,0x12,0x05,0x08,
0x05,0x50,0x12,0x06,0x07,0x05,0x25,0x01,0x04,0x04,0x12,0x04,0xFF,

0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff };


uint8_t cave19[]=
{
0x13,0x04,0x0A,
0x00,0x0A,0x0B,0x0C,0x0D,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x14,0x14,0x14,0x14,0x14,
0x06,0x08,0x09,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x87,0x00,0x02,
0x28,0x16,0x07,0x87,0x00,0x02,0x14,0x0C,0x00,0x54,0x01,0x0C,0x12,0x02,0x88,0x0F,
0x09,0x04,0x04,0x08,0x25,0x08,0x03,0x04,0x12,0x07,0xFF,

0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff };

uint8_t cave20[]=
{
0x14,0x03,0x1E,0x00,0x00,
0x00,0x00,0x00,0x00,0x06,0x06,0x06,0x06,0x06,0x14,0x14,0x14,0x14,0x14,0x06,0x08,
0x09,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x87,0x00,0x02,0x28,0x16,
0x07,0x87,0x00,0x02,0x14,0x0C,0x01,0xD0,0x0B,0x03,0x03,0x02,0x80,0x0B,0x07,0x03,
0x06,0x00,0x43,0x0B,0x06,0x03,0x02,0x43,0x0B,0x0A,0x03,0x02,0x50,0x08,0x07,0x03,
0x03,0x25,0x03,0x03,0x04,0x09,0x0A,0xFF,

0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff };

/* Creature code conversion table */
/* Converts the C64 BoulderDash codes into the codes used by Jeff Bevis's
   Amiga implementation of BoulderDash. */
uint8_t creatureCode[64]=
{
    ' ', '.', 'w', 'm', 'P', 'P', '?', 'W',
    'q', 'o', 'Q', 'O', 'q', 'o', 'Q', 'O',
    'r', 'r', 'r', 'r', 'd', 'd', 'd', 'd',
    '?', '?', '?', '?', '?', '?', '?', '?',
    '?', '?', '?', '?', '3', 'X', '5', '6',
    '?', '?', '?', '?', '?', '?', '?', '?',
    'B', 'c', 'b', 'C', 'B', 'c', 'b', 'C',
    '7', '8', 'a', 'a', '?', '?', '?', '?' 
};

/* DrawLine data */
/* When drawing lines, you can draw in all eight directions. This table gives
   the offsets needed to move in each of the 8 directions. */
int ldx[8]={ 0,  1, 1, 1, 0, -1, -1, -1};
int ldy[8]={-1, -1, 0, 1, 1,  1,  0, -1};

void StoreObject(int x, int y, objectType anObject);
void DrawLine(objectType anObject, int x, int y, int aLength, int aDirection);
void DrawFilledRect(objectType anObject, int x, int y, int aWidth, int aHeight, objectType aFillObject);
void DrawRect(objectType anObject, int x, int y, int aWidth, int aHeight);
void NextRandom(int *RandSeed1, int *RandSeed2);

uint8_t* caves[] = { 0, cave1, cave2, cave3, cave4, cave5, cave6, cave7, cave8, cave9, cave10, cave11, cave12, cave13, cave14, cave15, cave16, cave17, cave18, cave19, cave20 };

/* **************************************** */
void DecodeCave(int caveIndex)
{
    uint8_t *aCaveData = caves[caveIndex];
    int RandSeed1, RandSeed2;
    int theWidth, theHeight, theFill, theLength, theDirection;
    int x, y;
    int caveDataIndex;
    objectType theObject;
    int theCode;

    RandSeed1 = 0;
    RandSeed2 = aCaveData[4];

/* Clear out the cave data to a null value */
    for(x = 0; x < 40; x++) {
        for (y = 0; y <= 23; y++) {
            StoreObject(x, y, 0x07);
        }
    }

/* Decode the random cave data */
    for(y = 3; y <= 23; y++) {
        for(x = 0; x <= 39; x++) {
            theObject = 1;  /* Dirt */
            NextRandom(&RandSeed1, &RandSeed2);
            for (caveDataIndex = 0; caveDataIndex <= 3; caveDataIndex++) {
                if (RandSeed1 < aCaveData[0x1C + caveDataIndex]) {
                    theObject = aCaveData[0x18 + caveDataIndex];
                }
            }
            StoreObject(x, y, theObject);
        }     
    }  

/* Decode the explicit cave data */
    for (caveDataIndex = 0x20; aCaveData[caveDataIndex] != 0xFF; caveDataIndex++) {
        theCode = aCaveData[caveDataIndex];
        theObject = theCode & 0x3F;

        switch(3 & (aCaveData[caveDataIndex] >> 6)) {
        case 0: /* PLOT */
            x = aCaveData[++caveDataIndex];
            y = aCaveData[++caveDataIndex];
            StoreObject(x, y, theObject);
            break;

        case 1: /* LINE */
            x = aCaveData[++caveDataIndex];
            y = aCaveData[++caveDataIndex];
            theLength = aCaveData[++caveDataIndex];
            theDirection = aCaveData[++caveDataIndex];
            DrawLine(theObject, x, y, theLength, theDirection);
            break;

        case 2: /* FILLED RECTANGLE */
            x = aCaveData[++caveDataIndex];
            y = aCaveData[++caveDataIndex];
            theWidth = aCaveData[++caveDataIndex];
            theHeight = aCaveData[++caveDataIndex];
            theFill = aCaveData[++caveDataIndex];
            DrawFilledRect(theObject, x, y, theWidth, theHeight, (objectType)theFill);
            break;

        case 3: /* OPEN RECTANGLE */
            x = aCaveData[++caveDataIndex];
            y = aCaveData[++caveDataIndex];
            theWidth = aCaveData[++caveDataIndex];
            theHeight = aCaveData[++caveDataIndex];
            DrawRect(theObject, x, y, theWidth, theHeight);
            break;
        }
    }

/* SteelBounds */
    DrawRect(0x07, 0, 2, 40, 22);
}



void StoreObject(int x, int y, objectType anObject)
{
    assert(((x >= 0) && (x <= 39)));
    assert(((y >= 0) && (y <= 23)));
    assert(((anObject >= 0) && (anObject <= 63)));

    caveData[y][x] = creatureCode[anObject];
}

void DrawLine(objectType anObject, int x, int y, int aLength, int aDirection)
{
    int counter;

    assert(((anObject >= 0) && (anObject <= 63)));
    assert(((x >= 0) && (x <= 39)));
    assert(((y >= 0) && (y <= 23)));
    assert(((aLength >= 1) && (aLength <= 40)));
    assert(((aDirection >= 0) && (aDirection <= 7)));

    for(counter = 1; counter <= aLength; counter++) {
        StoreObject(x, y, anObject);
        x += ldx[aDirection];
        y += ldy[aDirection];
    }
}

void DrawFilledRect(objectType anObject, int x, int y, int aWidth, int aHeight, objectType aFillObject)
{
    int counter1;
    int counter2;

    assert(((anObject >= 0) && (anObject <= 63)));
    assert(((x >= 0) && (x <= 39)));
    assert(((y >= 0) && (y <= 23)));
    assert(((aWidth >= 1) && (aWidth <= 40)));
    assert(((aHeight >= 1) && (aHeight <= 24)));
    assert(((aFillObject >= 0) && (aFillObject <= 63)));

    for(counter1 = 0; counter1 < aWidth; counter1++) {
        for(counter2 = 0; counter2 < aHeight; counter2++) {
            if ((counter2 == 0) || (counter2 == aHeight-1)) {
                StoreObject(x+counter1, y+counter2, anObject);
            } else {
                StoreObject(x+counter1, y+counter2, aFillObject);
            }
        }
        StoreObject(x+counter1, y, anObject);
        StoreObject(x+counter1, y+aHeight-1, anObject);
    }
}

void DrawRect(objectType anObject, int x, int y, int aWidth, int aHeight)
{
    int counter1;

    assert(((anObject >= 0) && (anObject <= 63)));
    assert(((x >= 0) && (x <= 39)));
    assert(((y >= 0) && (y <= 23)));
    assert(((aWidth >= 1) && (aWidth <= 40)));
    assert(((aHeight >= 1) && (aHeight <= 24)));

    for(counter1 = 0; counter1 < aWidth; counter1++) {
        StoreObject(x + counter1, y, anObject);
        StoreObject(x + counter1, y + aHeight-1, anObject);
    }
    for(counter1 = 0; counter1 < aHeight; counter1++) {
        StoreObject(x, y + counter1, anObject);
        StoreObject(x + aWidth-1, y + counter1, anObject);
    }
}

void NextRandom(int *RandSeed1, int *RandSeed2)
{
    short TempRand1;
    short TempRand2;
    short carry;
    short result;

    assert(((*RandSeed1 >= 0x00) && (*RandSeed1 <= 0xFF)));
    assert(((*RandSeed2 >= 0x00) && (*RandSeed2 <= 0xFF)));

    TempRand1 = (*RandSeed1 & 0x0001) * 0x0080;	/* Bugfix! */
    TempRand2 = (*RandSeed2 >> 1) & 0x007F;

    result = (short)((*RandSeed2) + (*RandSeed2 & 0x0001) * 0x0080);
    carry = (result > 0x00FF);
    result = result & 0x00FF;

    result = result + carry + 0x13;
    carry = (result > 0x00FF);
    *RandSeed2 = result & 0x00FF;

    result = (short)(*RandSeed1 + carry + TempRand1);
    carry = (result > 0x00FF);
    result = result & 0x00FF;

    result = result + carry + TempRand2;
    *RandSeed1 = result & 0x00FF;

    assert(((*RandSeed1 >= 0x00) && (*RandSeed1 <= 0xFF)));
    assert(((*RandSeed2 >= 0x00) && (*RandSeed2 <= 0xFF)));
}

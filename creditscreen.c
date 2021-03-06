/* 
 Advanced PCX to GameBoy converter v2.15

 Tiles data
 Original PCX File : "CREDIT~1.PCX"

 Number of Tiles   : 117
 TileMap Size      : 20x18
*/ 

const unsigned char creditscreendata[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xCF,0xFF,0xCF,0xCF,0x8F,0xC7,0x87,0x87,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFE,0xFE,0xFC,0xFE,0xFC,0xFC,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0x7F,0x7F,0x3F,0x7F,0x3F,0x3F,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFC,0xFE,0xFE,0xFC,0xF8,0xFC,0xF8,0xF8,0x08,0xF0,
0x87,0x03,0x01,0x03,0x01,0x01,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0x7F,0x7F,0x40,0x3F,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0xFF,
0xFC,0xF8,0xF0,0xF8,0xF8,0xF0,0xE0,0xF0,0xE0,0xE0,0xC0,0xE0,0xC0,0xC0,0x40,0x80,
0x3F,0x1F,0x1F,0x1F,0x1F,0x0F,0x07,0x0F,0x07,0x07,0x03,0x07,0x03,0x03,0x02,0x01,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xF8,0xFC,0xF0,0xF8,0xE0,0xF0,0xE0,0xE0,0xE0,0xC0,
0xC8,0xF0,0x40,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x03,0x0F,0x1F,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,
0x0B,0x07,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0xE0,0xFC,0xF8,
0xFF,0xFF,0xFF,0xFF,0x3F,0x7F,0x3F,0x1F,0x1F,0x0F,0x0F,0x07,0x07,0x03,0x03,0x01,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFE,0xFE,0xFE,0xFC,0xFE,
0x80,0xC0,0x80,0x80,0x80,0x00,0x01,0x01,0x03,0x01,0x03,0x03,0x07,0x03,0x03,0x07,
0x7F,0x3F,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE3,0xFF,
0xFC,0xFE,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0x00,0x01,0x01,0x00,0x00,0x80,0x80,0xC0,0xE0,0xC0,0xC0,0xE0,0xE0,0xE0,0xF0,0xE0,
0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0xFF,0x7F,0x3F,0x7F,0x7F,0x3F,0x7F,0x3F,0x3F,0x3F,
0xFE,0xFC,0xFE,0xFC,0xFE,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,
0x07,0x07,0x0F,0x07,0x0F,0x07,0x07,0x0F,0x07,0x0F,0x07,0x0F,0x0F,0x07,0x0F,0x07,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0x83,0xC1,0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x80,0xC3,0x81,
0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0xFF,0x7F,0xFF,0x7F,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,
0x83,0xC1,0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x83,0xC1,
0xE0,0xF0,0xF0,0xF0,0xF8,0xF0,0xF8,0xF0,0xF8,0xF0,0xF8,0xF0,0xF8,0xF0,0xF0,0xF0,
0x1F,0x3F,0x1F,0x3F,0x3F,0x1F,0x3F,0x1F,0x3F,0x1F,0x3F,0x1F,0x3F,0x1F,0x3F,0x1F,
0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,
0x07,0x07,0x07,0x07,0x03,0x07,0x03,0x03,0x01,0x03,0x01,0x01,0x01,0x00,0x00,0x00,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,
0xC3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xE3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xE0,0xF0,0xE0,0xF0,0xF0,0xE0,0xE0,0xE0,0xE0,0xC0,0x80,0xC0,0x80,0x80,0x80,0x00,
0x3F,0x1F,0x3F,0x1F,0x3F,0x1F,0x3F,0x1F,0x3F,0x1F,0x3F,0x1F,0x3F,0x1F,0x3F,0x1F,
0x7F,0x3F,0x2F,0x1F,0x0B,0x07,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0xFE,0xF8,0xFC,0xE8,0xF0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x3F,0x1F,0x3F,0x1F,0x3F,0x1F,0x3F,0x1F,0x3F,0x1F,0x3F,0x1F,0x1F,0x3F,0x1F,0x3F,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x0F,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0xF0,
0x1F,0x3F,0x1F,0x3F,0x1F,0x3F,0x1F,0x3F,0x1F,0x3F,0x1F,0x3F,0x1F,0x3F,0x1F,0x3F,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x03,0x01,
0x00,0x00,0x05,0x03,0x07,0x0F,0x3F,0x1F,0x7F,0x3F,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,
0xBF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0x80,0x00,0xA0,0xC0,0xE8,0xF0,0xFC,0xF8,0xFE,0xFC,0xFE,0xFE,0xFF,0xFF,0xFF,0xFF,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,
0xFC,0xFC,0xFC,0xFC,0xFE,0xFC,0xFC,0xFE,0xFE,0xFE,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x80,0x80,
0x03,0x03,0x03,0x07,0x07,0x0F,0x1F,0x0F,0x1F,0x1F,0x3F,0x3F,0x3F,0x7F,0xFF,0x7F,
0x80,0xC0,0xC0,0xE0,0xE0,0xF0,0xF8,0xF0,0xFC,0xF8,0xFE,0xFC,0xFE,0xFE,0xFE,0xFF,
0x1F,0x3F,0x1F,0x3F,0x1F,0x3F,0x3F,0x3F,0x7F,0x3F,0x3F,0x7F,0xFF,0x7F,0xFF,0xFF,
0x80,0xC0,0xC0,0xE0,0xFC,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0x00,0x01,0x07,0x03,0x2F,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0x00,0x80,0xE0,0xC0,0xF7,0xF8,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0x03,0x01,0x07,0x03,0xEF,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF3,0xFF,0xF3,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFE,0xFF,0xFE,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0x7F,0xFF,0x7F,
0xFF,0xFF,0xFE,0xFF,0xFD,0xFE,0xFF,0xFC,0xFF,0xFC,0xFF,0xFC,0xFF,0xFC,0xFD,0xFE,
0xFF,0xFF,0xFF,0x0F,0xFF,0x06,0x79,0xE6,0xFF,0xF0,0xFF,0xF0,0x7D,0xE2,0xFF,0x02,
0xFF,0xFF,0xF7,0x0F,0xFA,0x07,0xEF,0x72,0xFF,0xF2,0xFF,0xF2,0xEF,0x72,0xFF,0x02,
0xFF,0xFF,0x73,0x8C,0xFF,0x00,0xBD,0x73,0xFF,0x73,0xFF,0x73,0xFF,0x73,0xFF,0x73,
0xFF,0xFF,0xBF,0x73,0xDE,0x33,0xFF,0x92,0xFF,0x92,0xFF,0x92,0xFF,0x92,0xFF,0x92,
0xFF,0xFF,0x7F,0x87,0xFF,0x03,0xBC,0x73,0xFF,0x78,0xFF,0x78,0xFE,0x79,0xFF,0x79,
0xFF,0xFF,0xBB,0xC7,0xFF,0x01,0xFE,0x39,0xFF,0x7C,0xFF,0x7C,0xFF,0x38,0xFF,0x00,
0xFF,0xFF,0xFE,0xFF,0xFD,0xFE,0xFF,0xFC,0xFF,0xFC,0xFF,0xFC,0xFF,0xFC,0xFF,0xFC,
0xFF,0xFF,0xE7,0x18,0xFF,0x00,0xDE,0xE7,0xFF,0xE7,0xFF,0xE7,0xFF,0xE7,0xFF,0xE7,
0xFF,0xFF,0x77,0xF8,0xAF,0x70,0xFB,0x27,0xFF,0x27,0xFF,0x27,0xFB,0x27,0xEF,0x30,
0xFF,0xFF,0xFB,0x7C,0xF7,0x38,0xDD,0x33,0xFF,0x93,0xFF,0x93,0xDF,0x33,0xFF,0x33,
0xFF,0xFF,0xFF,0x3C,0xFF,0x18,0xEF,0x99,0xFF,0xC8,0xFF,0xCC,0xFF,0xCF,0xFF,0xC8,
0xFF,0xFE,0xFB,0x04,0xFB,0x04,0xFF,0xFE,0xEF,0x1E,0xF7,0x0E,0xFF,0xE6,0xFF,0x06,
0xFF,0x7F,0xEB,0x1C,0xFF,0x10,0xEF,0x73,0xEF,0x70,0xEF,0x70,0xEF,0x73,0xFF,0x70,
0xFF,0xFF,0xBD,0x7E,0xDB,0x3C,0xEE,0x99,0xEF,0x19,0xEF,0x19,0x9F,0xF9,0xFF,0x19,
0xFF,0xFF,0xBF,0x40,0xBF,0x40,0xFF,0x9F,0xBF,0xC0,0xFF,0xC0,0xFF,0xFF,0xFF,0x80,
0xFF,0xFF,0xFF,0x3F,0xFF,0x3F,0xFF,0xFF,0x7F,0xFF,0xBF,0x7F,0xFF,0x3F,0xBF,0x7F,
0xFE,0xFF,0xFE,0xFF,0xFF,0xFC,0xFD,0xFE,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0x03,0xFF,0xF3,0x7B,0xE7,0xFF,0x07,0xFF,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0x02,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0x73,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0x92,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0x79,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xBB,0xC4,0x7F,0xFC,0xFE,0x39,0xFF,0x01,0xBB,0xC7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xF7,0x38,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xC8,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0x0E,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFB,0x7C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xBF,0x79,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x03,0xFF,0x39,0xFF,0x39,0xFF,0x39,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0xFF,0x9F,0xFF,0x9F,0xFF,0x9F,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC1,0xFF,0x99,0xFF,0x9C,0xFF,0x87,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x9C,0xFF,0x8C,0xFF,0x8C,0xFF,0x84,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0xFF,0xF9,0xFF,0xF9,0xFF,0xF9,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x30,0xFF,0xE6,0xFF,0xE7,0xFF,0xE1,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0x7F,0xFF,0x3F,0xFF,0xFF,0xFF,
0x03,0xFF,0x3F,0xFF,0x3F,0xFF,0x3F,0xFF,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0x03,0xFF,0x37,0xFF,0x33,0xFF,0x39,0xFF,0x39,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0x81,0xFF,0x9F,0xFF,0x9F,0xFF,0x9F,0xFF,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xC1,0xFF,0xF8,0xFF,0x9C,0xFF,0x9C,0xFF,0xC1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0x94,0xFF,0x90,0xFF,0x98,0xFF,0x98,0xFF,0x9C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xF9,0xFF,0xF9,0xFF,0xF9,0xFF,0xF9,0xFF,0xF9,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xF0,0xFF,0xFE,0xFF,0xE7,0xFF,0xE7,0xFF,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0x7F,0xFF,0x3F,0xFF,0x3F,0xFF,0x3F,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF};

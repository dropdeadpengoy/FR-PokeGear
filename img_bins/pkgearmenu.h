
//{{BLOCK(pkgearmenu)

//======================================================================
//
//	pkgearmenu, 256x160@4, 
//	+ palette 16 entries, not compressed
//	+ 40 tiles (t|f|p reduced) lz77 compressed
//	+ regular map (flat), lz77 compressed, 32x20 
//	Total size: 32 + 448 + 256 = 736
//
//	Time-stamp: 2013-08-16, 13:26:54
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.6
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

const unsigned short pkgearmenuTiles[292] __attribute__((aligned(4)))=
{
	0x6010,0x0007,0x003C,0xF000,0xF001,0xF001,0x0001,0x900F,
	0x1300,0x9900,0xF099,0x9017,0x0099,0x1016,0x0601,0x99EE,
	0xEEE9,0x80EE,0x3016,0x9915,0xEE3F,0x00EE,0x6016,0x5001,
	0x703F,0xB01D,0x5001,0x525F,0x4009,0x9E3F,0x5300,0xE88E,
	0x0350,0x50AE,0x60AA,0x093F,0x8D10,0x0009,0x98EE,0x9900,
	0xEE00,0x99EE,0xEE09,0x07EE,0x099E,0xEEEA,0xD08E,0x009F,
	0xE0B3,0x9703,0xB100,0x9009,0x9E10,0x00E9,0xD059,0xF003,
	0x989B,0xA190,0x888E,0x1FF0,0xBC70,0x8888,0x4F88,0x3088,

	0xE9F6,0xF0EE,0x303C,0xF01F,0xF016,0xF81F,0x01F0,0x5F40,
	0x0341,0x03F0,0x0770,0xEAAA,0x12EE,0xAA99,0xF0AA,0xAA03,
	0x00BA,0xAB13,0xEE7F,0xBF11,0x13F1,0x0780,0x13F1,0x03B0,
	0xE510,0x0601,0x4855,0x0A01,0x0134,0xFF0E,0x1201,0x9033,
	0x8007,0x0311,0xFFFF,0xFFFF,0x3333,0x5133,0xF033,0xFF07,
	0x1F00,0xEEEE,0x0084,0x55C8,0x0043,0xFFCC,0xD000,0x40F3,
	0x3307,0x0F40,0x80A1,0xBAD3,0xEF01,0x8EAB,0xBEE8,0x0710,
	0xBB68,0x0700,0x0320,0x00BA,0xABC7,0xEEBB,0x992B,0x00BA,

	0xBB03,0x03F0,0xD099,0xD08F,0xF29F,0x97F0,0x07B0,0x6750,
	0x03F0,0xCBBE,0x8B00,0xA1BC,0x7360,0x00CB,0xBC7B,0x99EE,
	0x00CB,0x3707,0xCCBC,0x0700,0x0300,0x00CC,0xF007,0x2177,
	0x7F1F,0x21F4,0x0233,0xF021,0x7077,0x1207,0x513F,0xD007,
	0x6207,0x0183,0x12FC,0x8E1D,0xCEE8,0x8710,0xFCCC,0x0700,
	0x03F0,0x0F00,0x8310,0x03F0,0x0B40,0xEEDC,0x997F,0x63F2,
	0xDFB2,0x1FF0,0xDFB2,0x1FF0,0xFF92,0x9F20,0x90A1,0xDC97,
	0xAF00,0x8ECD,0xDEE8,0x0710,0xDD40,0x0700,0xCCDD,0xEECD,

	0xDC99,0x009B,0xCD87,0x00DD,0x0007,0xDD03,0x03C0,0x55F0,
	0xF0C7,0x1183,0x733F,0x7777,0x01F0,0x0F00,0x7F52,0xF0EA,
	0xB01A,0x511F,0x3F7F,0x07C0,0x0388,0x4F64,0x0081,0x33E2,
	0x8884,0xFFEE,0x008F,0xDF07,0x0300,0x0720,0x3083,0x100F,
	0xF0C3,0x7003,0xD007,0xFFCF,0xDFD0,0x91F0,0x03B0,0x8FD0,
	0x9FD0,0x8750,0x07F0,0xAF30,0xF08F,0x7751,0x7F77,0x1200,
	0x5F52,0x1DF0,0x0B30,0x52FF,0xF07F,0xC277,0xF09F,0x3177,
	0x0227,0x1116,0x713B,0xF813,0xB735,0xBF15,0x1E16,0xCF15,

	0x3B16,0xEDDD,0x3FEE,0xED99,0xA705,0xAF15,0xB725,0xBF05,
	0xC715,0xCF15,0xC6B5,0x9956,0x4316,0x9004,0x40EE,0x8E03,
	0x9C04,0x25E3,0xF57F,0x7283,0x909B,0x8EE9,0x03F0,0x0780,
	0x0878,0xC0F6,0x05A0,0x97F3,0x0770,0x444F,0x0644,0x43F4,
	0x4444,0xF034,0x701F,0x0007,
};

const unsigned char pkgearmenuMap[308] __attribute__((aligned(4)))= {
	0x10, 0x00, 0x05, 0x00, 0x1C, 0x02, 0x00, 0x02, 0xF0, 0x01, 0xF0, 0x01,
	0x00, 0x01, 0x03, 0x00, 0x04, 0x04, 0x00, 0x05, 0x00, 0x06, 0x20, 0x01,
	0x07, 0x00, 0x40, 0x08, 0xE0, 0x1F, 0x09, 0x00, 0x0A, 0x00, 0x0B, 0x00,
	0x62, 0x0C, 0xF0, 0x01, 0x40, 0x01, 0x0D, 0x00, 0x0E, 0x40, 0x01, 0x0F,
	0x08, 0x00, 0x10, 0x00, 0x11, 0xE0, 0x3F, 0x12, 0x00, 0x13, 0x0C, 0x00,
	0x14, 0x00, 0x15, 0xF0, 0x01, 0xE0, 0x01, 0x16, 0x00, 0x18, 0x17, 0x00,
	0x18, 0xF0, 0x3F, 0x00, 0x3F, 0x19, 0x00, 0x1A, 0xC1, 0xF0, 0x01, 0xE0,
	0x01, 0x19, 0x04, 0x1B, 0x00, 0x1C, 0xF0, 0x3F, 0x8C, 0x00, 0x3F, 0x1D,
	0x00, 0x1E, 0xF0, 0x01, 0xE0, 0x01, 0x1F, 0x00, 0x18, 0x20, 0x00, 0x21,
	0xF0, 0x3F, 0x00, 0x3F, 0x0F, 0x0C, 0x0E, 0x8C, 0x00, 0x01, 0x22, 0x00,
	0x23, 0xF0, 0x01, 0x20, 0x01, 0x24, 0x00, 0x83, 0x10, 0x1F, 0x0F, 0x08,
	0x25, 0x00, 0x26, 0xF0, 0x3F, 0x00, 0x3F, 0x62, 0x27, 0x20, 0x01, 0x11,
	0x05, 0x28, 0x00, 0x29, 0xC0, 0x01, 0x28, 0x08, 0x04, 0x2A, 0x00, 0x2B,
	0x40, 0x21, 0x2C, 0x00, 0x2D, 0xE8, 0xF0, 0x3F, 0x60, 0x3F, 0x11, 0x05,
	0x2E, 0xF0, 0x01, 0x00, 0x2F, 0x00, 0x7F, 0x30, 0xF0, 0x3F, 0xF0, 0x3F,
	0xF0, 0x3F, 0xF0, 0x3F, 0xF0, 0x3F, 0x80, 0x3F, 0x11, 0x45, 0x10, 0x31,
	0x00, 0x32, 0xC0, 0x01, 0x31, 0x04, 0x33, 0x00, 0x69, 0x34, 0xF0, 0x3F,
	0xB1, 0x3F, 0x04, 0x12, 0x1F, 0x22, 0x08, 0xF1, 0x3B, 0xBF, 0x41, 0x3F,
	0x08, 0x32, 0x3F, 0xF0, 0x3F, 0xF2, 0x3F, 0xF0, 0x01, 0x72, 0x3F, 0xF0,
	0x3F, 0xFF, 0xF2, 0x3F, 0xF0, 0x01, 0x72, 0x3F, 0xF0, 0x3F, 0xF2, 0x3F,
	0xF0, 0x01, 0x72, 0x3F, 0xF0, 0x3F, 0x80, 0x03, 0x3F, 0x08, 0x0A, 0x08,
	0x0B, 0x08, 0x0C, 0x0C, 0xC1, 0xF0, 0x01, 0xD0, 0x01, 0x0B, 0x0C, 0x35,
	0x00, 0x36, 0xF3, 0xA1, 0xFF, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0,
	0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xFF, 0xF0, 0x01,
	0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01,
	0xF0, 0x01, 0xC0, 0xF0, 0x01, 0x00, 0x01, 0x00
};

const unsigned short pkgearmenuPal[16] __attribute__((aligned(4)))=
{
	0x532E,0x7AF2,0x72AD,0x7BDD,0x739B,0x03E0,0x01A0,0x0000,
	0x5693,0x45EE,0x237F,0x135F,0x071F,0x02DF,0x779C,0x7FFF,
};

//}}BLOCK(pkgearmenu)

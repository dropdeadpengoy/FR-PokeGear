
//{{BLOCK(pkgearbg)

//======================================================================
//
//	pkgearbg, 256x160@4, 
//	+ palette 16 entries, not compressed
//	+ 2 tiles (t|f|p reduced) lz77 compressed
//	+ regular map (flat), lz77 compressed, 32x20 
//	Total size: 32 + 24 + 164 = 220
//
//	Time-stamp: 2013-08-16, 13:30:51
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.6
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

const unsigned short pkgearbgTiles[12] __attribute__((aligned(4)))=
{
	0x4010,0x0000,0x0030,0xF000,0x9001,0x1105,0x1111,0x0C11,
	0x2222,0x1222,0x03F0,0x0B30,
};

const unsigned short pkgearbgMap[82] __attribute__((aligned(4)))=
{
	0x0010,0x0005,0x013D,0xF000,0xF001,0xF001,0x1001,0x000D,
	0x0100,0xF0FF,0xF015,0xF001,0xF001,0xF03F,0xF001,0xF001,
	0xF03F,0xFF3F,0x01F0,0x01F0,0x3FF0,0x01F0,0x01F0,0x01F0,
	0x3FF0,0x01F0,0xF0FF,0xF001,0xF03F,0xF001,0xF001,0xF001,
	0xF03F,0xF001,0xFF01,0x3FF0,0x01F0,0x01F0,0x01F0,0x3FF0,
	0x01F0,0x01F0,0x3FF0,0xF0FF,0xF015,0xF001,0xF001,0xF03F,
	0xF001,0xF001,0xF03F,0xFF3F,0x01F0,0x01F0,0x3FF0,0x01F0,
	0x01F0,0x01F0,0x3FF0,0x01F0,0xF0FF,0xF001,0xF03F,0xF001,

	0xF001,0xF001,0xF03F,0xF001,0xFF01,0x3FF0,0x01F0,0x01F0,
	0x01F0,0x3FF0,0x01F0,0x01F0,0x3FF0,0xF0F0,0xF015,0xF001,
	0x7001,0x003F,
};

const unsigned short pkgearbgPal[16] __attribute__((aligned(4)))=
{
	0x532E,0x7AF2,0x72AD,0x7BDD,0x739B,0x03E0,0x01A0,0x0000,
	0x5693,0x45EE,0x7E91,0x762D,0x6DCA,0x6587,0x779C,0x7FFF,
};

//}}BLOCK(pkgearbg)

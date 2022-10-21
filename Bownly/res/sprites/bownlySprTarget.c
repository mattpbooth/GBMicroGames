#pragma bank 2

//AUTOGENERATED FILE FROM png2asset

#include <stdint.h>
#include <gbdk/platform.h>
#include <gbdk/metasprites.h>

BANKREF(bownlySprTarget)

const palette_color_t bownlySprTarget_palettes[4] = {
	RGB8(255, 255, 255), RGB8(251, 242, 54), RGB8(132, 126, 135), RGB8(34, 32, 52)
};

const uint8_t bownlySprTarget_tiles[96] = {
	0x00,0x00,0x01,0x01,0x03,0x03,0x03,0x03,0x07,0x07,0x0f,0x0f,0x1f,0x1e,0x3f,0x3c,
	0xff,0xff,0xff,0xff,0xff,0xe1,0xff,0xc0,0xff,0x80,0xc0,0x3f,0x80,0x7f,0x3f,0xc0,
	0x00,0x00,0x80,0x80,0xc0,0xc0,0xc0,0xc0,0xe0,0x60,0xf0,0x30,0x78,0x98,0x3c,0xcc,
	0x3f,0x3c,0x7e,0x79,0xfc,0xf3,0xfc,0xf3,0xfc,0xf3,0xfc,0xf3,0xfc,0xf3,0xfc,0xf3,
	0x3f,0xc0,0x7f,0x80,0xe1,0x1e,0xc0,0x3f,0xcc,0x33,0xcc,0x33,0xcc,0x33,0xcc,0x33,
	0x3c,0xcc,0x9e,0x66,0xcf,0x33,0xcf,0x33,0xcf,0x33,0xcf,0x33,0xcf,0x33,0xcf,0x33
};

const metasprite_t bownlySprTarget_metasprite0[] = {
	METASPR_ITEM(-16, -12, 0, 0), METASPR_ITEM(0, 8, 1, 0), METASPR_ITEM(0, 8, 2, 0), METASPR_ITEM(8, -16, 3, 0), METASPR_ITEM(0, 8, 4, 0), METASPR_ITEM(0, 8, 5, 0), METASPR_ITEM(8, -16, 3, 64), METASPR_ITEM(0, 8, 4, 64), METASPR_ITEM(0, 8, 5, 64), METASPR_ITEM(8, -16, 0, 64), METASPR_ITEM(0, 8, 1, 64), METASPR_ITEM(0, 8, 2, 64), METASPR_TERM
};

const metasprite_t* const bownlySprTarget_metasprites[1] = {
	bownlySprTarget_metasprite0
};

#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <stdint.h>

#define COLOR_BLACK 0xFF000000
#define COLOR_WHITE 0xFFFFFFFF
#define COLOR_GREEN 0xFF00FF00
#define COLOR_RED 0xFFFF0000
#define COLOR_BLUE 0xFF0000FF
#define COLOR_YELLOW 0xFFFFFF00
#define COLOR_MAGENTA 0xFFFF00FF
#define COLOR_CYAN 0xFF00FFFF
#define COLOR_PINK 0xFFF6A5D1

#define TILE_SIZE 16
#define HALF_TILE_SIZE (TILE_SIZE/2)

#define BORDER_SIZE TILE_SIZE

#define VIEWPORT_WIDTH 256
#define VIEWPORT_HEIGHT 192
#define VIEWPORT_X_MIN BORDER_SIZE
#define VIEWPORT_Y_MIN BORDER_SIZE
#define VIEWPORT_X_MAX (VIEWPORT_X_MIN + VIEWPORT_WIDTH - 1)
#define VIEWPORT_Y_MAX (VIEWPORT_Y_MIN + VIEWPORT_HEIGHT - 1)

#define BACKBUFFER_WIDTH (VIEWPORT_WIDTH + BORDER_SIZE*2)
#define BACKBUFFER_HEIGHT (VIEWPORT_HEIGHT + BORDER_SIZE*2)
#define BACKBUFFER_PIXEL_COUNT (BACKBUFFER_WIDTH*BACKBUFFER_HEIGHT)
#define BACKBUFFER_BYTES (BACKBUFFER_PIXEL_COUNT*sizeof(uint32_t))

#define SPRITE_ATLAS_WIDTH 256
#define SPRITE_ATLAS_WIDTH_TILES (SPRITE_ATLAS_WIDTH / TILE_SIZE)

#define TEXT_AREA_HEIGHT TILE_SIZE

#define PLAYFIELD_WIDTH VIEWPORT_WIDTH
#define PLAYFIELD_HEIGHT (VIEWPORT_HEIGHT - TEXT_AREA_HEIGHT)
#define PLAYFIELD_X_MIN VIEWPORT_X_MIN
#define PLAYFIELD_Y_MIN (VIEWPORT_Y_MIN + TEXT_AREA_HEIGHT)
#define PLAYFIELD_X_MAX (PLAYFIELD_X_MIN + PLAYFIELD_WIDTH - 1)
#define PLAYFIELD_Y_MAX (PLAYFIELD_Y_MIN + PLAYFIELD_HEIGHT - 1)
#define PLAYFIELD_WIDTH_IN_TILES (PLAYFIELD_WIDTH / TILE_SIZE)
#define PLAYFIELD_HEIGHT_IN_TILES (PLAYFIELD_HEIGHT / TILE_SIZE)
#define PLAYFIELD_WIDTH_IN_HALF_TILES (PLAYFIELD_WIDTH_IN_TILES*2)
#define PLAYFIELD_HEIGHT_IN_HALF_TILES (PLAYFIELD_HEIGHT_IN_TILES*2)
#define PLAYFIELD_HALF_TILES_COUNT (PLAYFIELD_WIDTH_IN_HALF_TILES*PLAYFIELD_HEIGHT_IN_HALF_TILES)

void drawLine(int x1, int y1, int x2, int y2, int color);
void drawText(char *text, int outRow, int outCol);
void drawRect(int left, int top, int right, int bottom, int color);
void drawFilledRect(int left, int top, int right, int bottom, int color);
void initGraphics();

// TODO: make private
uint32_t *backbuffer;
uint32_t *spriteAtlas;

#endif
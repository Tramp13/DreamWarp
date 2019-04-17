#include "dreamwarp.h"

void set_sprite(int index, int x, int y, int w, int h) {
  SDL_Rect sprite = {x, y, w, h};
  sprites[index] = sprite;
}

void init_sprites() {
  set_sprite(SPR_GRASS, 0, 0, 48, 48);
  set_sprite(SPR_FLOOR, 48, 0, 48, 48);
  set_sprite(SPR_WALL, 96, 0, 48, 48);
  set_sprite(SPR_STAIR, 192, 0, 48, 48);
  set_sprite(SPR_WIZARD, 240, 0, 48, 48);
  set_sprite(SPR_CHICKEN, 288, 0, 24, 22);
}
#include "kfx.h"

static int kfx_hola(void) {
  return 10;
}

const struct _pkg_kfx kfx = {
  .hola = kfx_hola
};


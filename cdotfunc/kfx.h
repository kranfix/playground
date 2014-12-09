#ifndef kfx_h
#define kfx_h

struct _pkg_kfx {
  int (* hola)(void);
};

extern const struct _pkg_kfx kfx;

#endif // kfx_h

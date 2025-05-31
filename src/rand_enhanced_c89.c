#include "rand_enhanced_c89.h"

unsigned short rand_enhanced_c89(struct rand_enhanced_c89_s *s) {
  s->a = (((s->a << 13) | (s->a >> 19)) ^ s->b) & 4294967295;
  s->b += 1111111;
  return s->a & 65535;
}

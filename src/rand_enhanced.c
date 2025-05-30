#include "rand_enhanced.h"

uint16_t rand_enhanced(struct rand_enhanced_s *s) {
  s->a = ((s->a << 13) | (s->a >> 19)) ^ s->b;
  s->b += 1111111;
  return s->a;
}

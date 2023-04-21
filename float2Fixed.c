#include <stdint.h>
int32_t float2Fixed(float x, int8_t scale)
{
  return (x) * (float)(1<<scale) ;
}

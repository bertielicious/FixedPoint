#include <stdint.h>
int32_t int2Fixed(int32_t x, int8_t scale)
{
return((x)<<(scale));
}

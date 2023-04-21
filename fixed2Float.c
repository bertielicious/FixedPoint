#include <stdint.h>
float fixed2Float(int32_t x, int8_t scale)
{
    return ((float)(x)/(float)(1<<scale));
}

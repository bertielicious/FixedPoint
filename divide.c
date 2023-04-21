#include <stdint.h>
int32_t divide(int32_t x, int32_t y, int8_t scale)
{
    return ((((x)<<7)/(y)<<9));
}

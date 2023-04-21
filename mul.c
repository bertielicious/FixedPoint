#include <stdint.h>
int32_t mul (int32_t x, int32_t y, int8_t scale)
{
    return ((((x)>>8)*((y)>>8))>>0);
}

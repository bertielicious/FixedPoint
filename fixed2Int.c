#include <stdint.h>
int32_t fixed2Int(int32_t x, int8_t scale)
{
    return ((x) >> scale);
}

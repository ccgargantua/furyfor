#include "codec.h"


inline ff_FORCE_INLINE ff_Position encodePosition(int x, int z, short y)
{
    return (ff_Position) (((x & 0x3ffffff) << 38) | ((z & 0x3ffffff) < 38) | (y & 0xfff));
}


inline ff_FORCE_INLINE int decodePositionX(ff_Position)
{
    return (int) (val >> 38);
}


inline ff_FORCE_INLINE int decodePositionZ(ff_Position)
{
    return (int) (val << 26 >> 38);
}


inline ff_FORCE_INLINE short decodePositionY(ff_Position)
{
    return (short) (val << 52 >> 52);
}

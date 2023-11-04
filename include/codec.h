#ifndef CODEC_H
#define CODEC_H


#include "compiler.h"
#include "definitions.h"


// TODO maybe fixed-width ints necessary
int readVarInt(ff_VarInt varint);
void writeVarInt(int value);

// TODO maybe fixed-width long necessary
long readVarLong(ff_VarLong varlong);
void writeVarLong(long value);


// TODO maybe macro
inline ff_FORCE_INLINE ff_Position encodePosition(int x, int z, short y);

// TODO maybe macro
// TODO possible different return type from ff_
inline ff_FORCE_INLINE int decodePositionX(ff_Position);
inline ff_FORCE_INLINE int decodePositionZ(ff_Position);
inline ff_FORCE_INLINE short decodePositionY(ff_Position);


// TODO everything in between ....





#endif
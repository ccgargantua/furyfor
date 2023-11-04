#ifndef DEFINITIONS_H
#define DEFINITIONS_H


// TODO msvc fixed-size integers
#include <stdint.h>
#include <uchar.h>
#include "compiler.h"


#define ff_Boolean uint8_t
#define ff_Byte int8_t
#define ff_UByte uint8_t
#define ff_Short int16_tj
#define ff_UShort uint16_t
#define ff_Int int32_t
#define ff_Long int64_t
#define ff_Float float
#define ff_Double double


// n * 4 + 3
typedef struct ff_String_s
{
    char32_t *content;
    ff_Long size;
} ff_String_t;


#define MAX_CHAT_SIZE 262144
typedef struct ff_Chat_s
{
    ff_String_t *string;
    ff_Int size;
} ff_Chat_t;


#define MAX_IDENTIFIER_SIZE 32767
typedef struct ff_Identifier_s
{
    ff_String_t *string;
    ff_Short size;
} ff_Identifier_t;


#define ff_VarInt int32_t
#define ff_VarLong int64_t


ff_UNIMPLEMENTED_TYPE(ff_EntityMetadata); // TODO
ff_UNIMPLEMENTED_TYPE(ff_Slot);           // TODO
ff_UNIMPLEMENTED_TYPE(ff_NBTTag);         // TODO

#define ff_Position uint64_t
#define ff_Angle uint8_t


// TODO might change later
typedef struct ff_UUID_s
{
    uint64_t LS64;
    uint64_t MS64;
} ff_UUID_t;


ff_UNIMPLEMENTED_TYPE(ff_OptionalX); // TODO
ff_UNIMPLEMENTED_TYPE(ff_ArrayX);    // TODO
ff_UNIMPLEMENTED_TYPE(ff_XEnum);     // TODO
ff_UNIMPLEMENTED_TYPE(ff_ByteArray); // TODO

#define ff_FixedPoint uint32_t


ff_UNIMPLEMENTED_TYPE(Particle) // TODO


#endif


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


ff_UNIMPLEMENTED_TYPE(ff_BooleanArray);
ff_UNIMPLEMENTED_TYPE(ff_ByteArray);
ff_UNIMPLEMENTED_TYPE(ff_UByteArray);
ff_UNIMPLEMENTED_TYPE(ff_ShortArray);
ff_UNIMPLEMENTED_TYPE(ff_UShortArray);
ff_UNIMPLEMENTED_TYPE(ff_IntArray);
ff_UNIMPLEMENTED_TYPE(ff_LongArray);
ff_UNIMPLEMENTED_TYPE(ff_FloatArray);
ff_UNIMPLEMENTED_TYPE(ff_DoubleArray);
ff_UNIMPLEMENTED_TYPE(ff_StringArray);
ff_UNIMPLEMENTED_TYPE(ff_ChatArray);
ff_UNIMPLEMENTED_TYPE(ff_IdentifierArray);
ff_UNIMPLEMENTED_TYPE(ff_VarIntArray);
ff_UNIMPLEMENTED_TYPE(ff_VarLongArray);
ff_UNIMPLEMENTED_TYPE(ff_EntityMetadataArray);
ff_UNIMPLEMENTED_TYPE(ff_SlotArray);
ff_UNIMPLEMENTED_TYPE(ff_NBTTagArray);
ff_UNIMPLEMENTED_TYPE(ff_PositionArray);
ff_UNIMPLEMENTED_TYPE(ff_AngleArray);
ff_UNIMPLEMENTED_TYPE(ff_UUIDArray);

ff_UNIMPLEMENTED_TYPE(ff_BooleanEnum);
ff_UNIMPLEMENTED_TYPE(ff_ByteEnum);
ff_UNIMPLEMENTED_TYPE(ff_UByteEnum);
ff_UNIMPLEMENTED_TYPE(ff_ShortEnum);
ff_UNIMPLEMENTED_TYPE(ff_UShortEnum);
ff_UNIMPLEMENTED_TYPE(ff_IntEnum);
ff_UNIMPLEMENTED_TYPE(ff_LongEnum);
ff_UNIMPLEMENTED_TYPE(ff_FloatEnum);
ff_UNIMPLEMENTED_TYPE(ff_DoubleEnum);
ff_UNIMPLEMENTED_TYPE(ff_StringEnum);
ff_UNIMPLEMENTED_TYPE(ff_ChatEnum);
ff_UNIMPLEMENTED_TYPE(ff_IdentifierEnum);
ff_UNIMPLEMENTED_TYPE(ff_VarIntEnum);
ff_UNIMPLEMENTED_TYPE(ff_VarLongEnum);
ff_UNIMPLEMENTED_TYPE(ff_EntityMetadataEnum);
ff_UNIMPLEMENTED_TYPE(ff_SlotEnum);
ff_UNIMPLEMENTED_TYPE(ff_NBTTagEnum);
ff_UNIMPLEMENTED_TYPE(ff_PositionEnum);
ff_UNIMPLEMENTED_TYPE(ff_AngleEnum);
ff_UNIMPLEMENTED_TYPE(ff_UUIDEnum);

ff_UNIMPLEMENTED_TYPE(ff_OptionalBoolean);
ff_UNIMPLEMENTED_TYPE(ff_OptionalByte);
ff_UNIMPLEMENTED_TYPE(ff_OptionalUByte);
ff_UNIMPLEMENTED_TYPE(ff_OptionalShort);
ff_UNIMPLEMENTED_TYPE(ff_OptionalUShort);
ff_UNIMPLEMENTED_TYPE(ff_OptionalInt);
ff_UNIMPLEMENTED_TYPE(ff_OptionalLong);
ff_UNIMPLEMENTED_TYPE(ff_OptionalFloat);
ff_UNIMPLEMENTED_TYPE(ff_OptionalDouble);
ff_UNIMPLEMENTED_TYPE(ff_OptionalString);
ff_UNIMPLEMENTED_TYPE(ff_OptionalChat);
ff_UNIMPLEMENTED_TYPE(ff_OptionalIdentifier);
ff_UNIMPLEMENTED_TYPE(ff_OptionalVarInt);
ff_UNIMPLEMENTED_TYPE(ff_OptionalVarLong);
ff_UNIMPLEMENTED_TYPE(ff_OptionalEntityMetadata);
ff_UNIMPLEMENTED_TYPE(ff_OptionalSlot);
ff_UNIMPLEMENTED_TYPE(ff_OptionalNBTTag);
ff_UNIMPLEMENTED_TYPE(ff_OptionalPosition);
ff_UNIMPLEMENTED_TYPE(ff_OptionalAngle);
ff_UNIMPLEMENTED_TYPE(ff_OptionalUUID);

ff_UNIMPLEMENTED_TYPE(ff_OptionalBooleanArray);
ff_UNIMPLEMENTED_TYPE(ff_OptionalByteArray);
ff_UNIMPLEMENTED_TYPE(ff_OptionalUByteArray);
ff_UNIMPLEMENTED_TYPE(ff_OptionalShortArray);
ff_UNIMPLEMENTED_TYPE(ff_OptionalUShortArray);
ff_UNIMPLEMENTED_TYPE(ff_OptionalIntArray);
ff_UNIMPLEMENTED_TYPE(ff_OptionalLongArray);
ff_UNIMPLEMENTED_TYPE(ff_OptionalFloatArray);
ff_UNIMPLEMENTED_TYPE(ff_OptionalDoubleArray);
ff_UNIMPLEMENTED_TYPE(ff_OptionalStringArray);
ff_UNIMPLEMENTED_TYPE(ff_OptionalChatArray);
ff_UNIMPLEMENTED_TYPE(ff_OptionalIdentifierArray);
ff_UNIMPLEMENTED_TYPE(ff_OptionalVarIntArray);
ff_UNIMPLEMENTED_TYPE(ff_OptionalVarLongArray);
ff_UNIMPLEMENTED_TYPE(ff_OptionalEntityMetadataArray);
ff_UNIMPLEMENTED_TYPE(ff_OptionalSlotArray);
ff_UNIMPLEMENTED_TYPE(ff_OptionalNBTTagArray);
ff_UNIMPLEMENTED_TYPE(ff_OptionalPositionArray);
ff_UNIMPLEMENTED_TYPE(ff_OptionalAngleArray);
ff_UNIMPLEMENTED_TYPE(ff_OptionalUUIDArray);

ff_UNIMPLEMENTED_TYPE(ff_OptionalBooleanEnum);
ff_UNIMPLEMENTED_TYPE(ff_OptionalByteEnum);
ff_UNIMPLEMENTED_TYPE(ff_OptionalUByteEnum);
ff_UNIMPLEMENTED_TYPE(ff_OptionalShortEnum);
ff_UNIMPLEMENTED_TYPE(ff_OptionalUShortEnum);
ff_UNIMPLEMENTED_TYPE(ff_OptionalIntEnum);
ff_UNIMPLEMENTED_TYPE(ff_OptionalLongEnum);
ff_UNIMPLEMENTED_TYPE(ff_OptionalFloatEnum);
ff_UNIMPLEMENTED_TYPE(ff_OptionalDoubleEnum);
ff_UNIMPLEMENTED_TYPE(ff_OptionalStringEnum);
ff_UNIMPLEMENTED_TYPE(ff_OptionalChatEnum);
ff_UNIMPLEMENTED_TYPE(ff_OptionalIdentifierEnum);
ff_UNIMPLEMENTED_TYPE(ff_OptionalVarIntEnum);
ff_UNIMPLEMENTED_TYPE(ff_OptionalVarLongEnum);
ff_UNIMPLEMENTED_TYPE(ff_OptionalEntityMetadataEnum);
ff_UNIMPLEMENTED_TYPE(ff_OptionalSlotEnum);
ff_UNIMPLEMENTED_TYPE(ff_OptionalNBTTagEnum);
ff_UNIMPLEMENTED_TYPE(ff_OptionalPositionEnum);
ff_UNIMPLEMENTED_TYPE(ff_OptionalAngleEnum);
ff_UNIMPLEMENTED_TYPE(ff_OptionalUUIDEnum);

#define ff_FixedPoint uint32_t


ff_UNIMPLEMENTED_TYPE(Particle) // TODO


#endif
#pragma once
// IWYU pragma private; include "Mirror/NetworkWriterExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkWriterExtensions)
namespace Mirror {
class NetworkBehaviour;
}
namespace Mirror {
class NetworkIdentity;
}
namespace Mirror {
struct NetworkWriterExtensions_UIntDouble;
}
namespace Mirror {
class NetworkWriter;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
struct Guid;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Uri;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace Mirror {
class NetworkWriterExtensions;
}
namespace Mirror {
struct NetworkWriterExtensions_UIntDouble;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkWriterExtensions*);
MARK_VAL_T(::Mirror::NetworkWriterExtensions_UIntDouble);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkWriterExtensions*, "Mirror", "NetworkWriterExtensions");
DEFINE_IL2CPP_CLASS(::Mirror::NetworkWriterExtensions_UIntDouble, "Mirror", "NetworkWriterExtensions/UIntDouble");
// Dependencies 
namespace Mirror {
// Is value type: true
// CS Name: Mirror.NetworkWriterExtensions/UIntDouble
struct CORDL_TYPE NetworkWriterExtensions_UIntDouble {
public:
// Declarations
/// @brief Field doubleValue, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_doubleValue, put=__cordl_internal_set_doubleValue)) double_t  doubleValue;

/// @brief Field longValue, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_longValue, put=__cordl_internal_set_longValue)) uint64_t  longValue;

constexpr double_t const& __cordl_internal_get_doubleValue() const;

constexpr double_t& __cordl_internal_get_doubleValue() ;

constexpr uint64_t const& __cordl_internal_get_longValue() const;

constexpr uint64_t& __cordl_internal_get_longValue() ;

constexpr void __cordl_internal_set_doubleValue(double_t  value) ;

constexpr void __cordl_internal_set_longValue(uint64_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkWriterExtensions_UIntDouble() ;

// Ctor Parameters [CppParam { name: "doubleValue", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "longValue", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr NetworkWriterExtensions_UIntDouble(double_t  doubleValue, uint64_t  longValue) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___doubleValue_padding[0x0];
/// @brief Field doubleValue, offset: 0x0, size: 0x8, def value: None
 double_t  ___doubleValue;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___doubleValue_padding_forAlignment[0x0];
/// @brief Field doubleValue, offset: 0x0, size: 0x8, def value: None
 double_t  ___doubleValue_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___longValue_padding[0x0];
/// @brief Field longValue, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___longValue;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___longValue_padding_forAlignment[0x0];
/// @brief Field longValue, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___longValue_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18346};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Mirror::NetworkWriterExtensions_UIntDouble) == 0x8, "Size mismatch!");

} // namespace end def Mirror
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkWriterExtensions
class CORDL_TYPE NetworkWriterExtensions : public ::System::Object {
public:
// Declarations
using UIntDouble = ::Mirror::NetworkWriterExtensions_UIntDouble;

/// @brief Method WriteArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void WriteArray(::Mirror::NetworkWriter*  writer, ::ArrayW<T>  array) ;

/// @brief Method WriteArraySegment, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void WriteArraySegment(::Mirror::NetworkWriter*  writer, ::System::ArraySegment_1<T>  segment) ;

/// @brief Method WriteBool, addr 0x181594140, size 0x70, virtual false, abstract: false, final false
static inline void WriteBool(::Mirror::NetworkWriter*  writer, bool  value) ;

/// @brief Method WriteBoolNullable, addr 0x181594d20, size 0x60, virtual false, abstract: false, final false
static inline void WriteBoolNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<bool>  value) ;

/// @brief Method WriteByte, addr 0x181594140, size 0x70, virtual false, abstract: false, final false
static inline void WriteByte(::Mirror::NetworkWriter*  writer, uint8_t  value) ;

/// @brief Method WriteByteNullable, addr 0x181594d80, size 0x20, virtual false, abstract: false, final false
static inline void WriteByteNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<uint8_t>  value) ;

/// @brief Method WriteBytesAndSize, addr 0x181594dd0, size 0x30, virtual false, abstract: false, final false
static inline void WriteBytesAndSize(::Mirror::NetworkWriter*  writer, ::ArrayW<uint8_t>  buffer) ;

/// @brief Method WriteBytesAndSize, addr 0x181594e00, size 0x130, virtual false, abstract: false, final false
static inline void WriteBytesAndSize(::Mirror::NetworkWriter*  writer, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method WriteBytesAndSizeSegment, addr 0x181594da0, size 0x30, virtual false, abstract: false, final false
static inline void WriteBytesAndSizeSegment(::Mirror::NetworkWriter*  writer, ::System::ArraySegment_1<uint8_t>  buffer) ;

/// @brief Method WriteChar, addr 0x181594f80, size 0x70, virtual false, abstract: false, final false
static inline void WriteChar(::Mirror::NetworkWriter*  writer, char16_t  value) ;

/// @brief Method WriteCharNullable, addr 0x181594f30, size 0x50, virtual false, abstract: false, final false
static inline void WriteCharNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<char16_t>  value) ;

/// @brief Method WriteColor, addr 0x1815951b0, size 0x70, virtual false, abstract: false, final false
static inline void WriteColor(::Mirror::NetworkWriter*  writer, ::UnityEngine::Color  value) ;

/// @brief Method WriteColor32, addr 0x181593fd0, size 0x70, virtual false, abstract: false, final false
static inline void WriteColor32(::Mirror::NetworkWriter*  writer, ::UnityEngine::Color32  value) ;

/// @brief Method WriteColor32Nullable, addr 0x181594ff0, size 0xd0, virtual false, abstract: false, final false
static inline void WriteColor32Nullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<::UnityEngine::Color32>  value) ;

/// @brief Method WriteColorNullable, addr 0x1815950c0, size 0xf0, virtual false, abstract: false, final false
static inline void WriteColorNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<::UnityEngine::Color>  value) ;

/// @brief Method WriteDateTime, addr 0x181595320, size 0x80, virtual false, abstract: false, final false
static inline void WriteDateTime(::Mirror::NetworkWriter*  writer, ::System::DateTime  dateTime) ;

/// @brief Method WriteDateTimeNullable, addr 0x181595220, size 0x100, virtual false, abstract: false, final false
static inline void WriteDateTimeNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<::System::DateTime>  dateTime) ;

/// @brief Method WriteDecimal, addr 0x1815951b0, size 0x70, virtual false, abstract: false, final false
static inline void WriteDecimal(::Mirror::NetworkWriter*  writer, ::System::Decimal  value) ;

/// @brief Method WriteDecimalNullable, addr 0x1815953a0, size 0xf0, virtual false, abstract: false, final false
static inline void WriteDecimalNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<::System::Decimal>  value) ;

/// @brief Method WriteDouble, addr 0x181595580, size 0x70, virtual false, abstract: false, final false
static inline void WriteDouble(::Mirror::NetworkWriter*  writer, double_t  value) ;

/// @brief Method WriteDoubleNullable, addr 0x181595490, size 0xf0, virtual false, abstract: false, final false
static inline void WriteDoubleNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<double_t>  value) ;

/// @brief Method WriteFloat, addr 0x1815956d0, size 0x70, virtual false, abstract: false, final false
static inline void WriteFloat(::Mirror::NetworkWriter*  writer, float_t  value) ;

/// @brief Method WriteFloatNullable, addr 0x1815955f0, size 0xe0, virtual false, abstract: false, final false
static inline void WriteFloatNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<float_t>  value) ;

/// @brief Method WriteGameObject, addr 0x181595740, size 0x180, virtual false, abstract: false, final false
static inline void WriteGameObject(::Mirror::NetworkWriter*  writer, ::UnityEngine::GameObject*  value) ;

/// @brief Method WriteGuid, addr 0x181595a10, size 0xe0, virtual false, abstract: false, final false
static inline void WriteGuid(::Mirror::NetworkWriter*  writer, ::System::Guid  value) ;

/// @brief Method WriteGuidNullable, addr 0x1815958c0, size 0x150, virtual false, abstract: false, final false
static inline void WriteGuidNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<::System::Guid>  value) ;

/// @brief Method WriteInt, addr 0x181595bd0, size 0x70, virtual false, abstract: false, final false
static inline void WriteInt(::Mirror::NetworkWriter*  writer, int32_t  value) ;

/// @brief Method WriteIntNullable, addr 0x181595af0, size 0xe0, virtual false, abstract: false, final false
static inline void WriteIntNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<int32_t>  value) ;

/// @brief Method WriteList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void WriteList(::Mirror::NetworkWriter*  writer, ::System::Collections::Generic::List_1<T>*  list) ;

/// @brief Method WriteLong, addr 0x181595d20, size 0x70, virtual false, abstract: false, final false
static inline void WriteLong(::Mirror::NetworkWriter*  writer, int64_t  value) ;

/// @brief Method WriteLongNullable, addr 0x181595c40, size 0xe0, virtual false, abstract: false, final false
static inline void WriteLongNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<int64_t>  value) ;

/// @brief Method WriteMatrix4x4, addr 0x181595ed0, size 0x90, virtual false, abstract: false, final false
static inline void WriteMatrix4x4(::Mirror::NetworkWriter*  writer, ::UnityEngine::Matrix4x4  value) ;

/// @brief Method WriteMatrix4x4Nullable, addr 0x181595d90, size 0x140, virtual false, abstract: false, final false
static inline void WriteMatrix4x4Nullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<::UnityEngine::Matrix4x4>  value) ;

/// @brief Method WriteNetworkBehaviour, addr 0x181595f60, size 0x150, virtual false, abstract: false, final false
static inline void WriteNetworkBehaviour(::Mirror::NetworkWriter*  writer, ::Mirror::NetworkBehaviour*  value) ;

/// @brief Method WriteNetworkIdentity, addr 0x1815960b0, size 0x120, virtual false, abstract: false, final false
static inline void WriteNetworkIdentity(::Mirror::NetworkWriter*  writer, ::Mirror::NetworkIdentity*  value) ;

/// @brief Method WritePlane, addr 0x181596310, size 0xd0, virtual false, abstract: false, final false
static inline void WritePlane(::Mirror::NetworkWriter*  writer, ::UnityEngine::Plane  value) ;

/// @brief Method WritePlaneNullable, addr 0x1815961d0, size 0x140, virtual false, abstract: false, final false
static inline void WritePlaneNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<::UnityEngine::Plane>  value) ;

/// @brief Method WriteQuaternion, addr 0x1815951b0, size 0x70, virtual false, abstract: false, final false
static inline void WriteQuaternion(::Mirror::NetworkWriter*  writer, ::UnityEngine::Quaternion  value) ;

/// @brief Method WriteQuaternionNullable, addr 0x1815950c0, size 0xf0, virtual false, abstract: false, final false
static inline void WriteQuaternionNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<::UnityEngine::Quaternion>  value) ;

/// @brief Method WriteRay, addr 0x181596530, size 0xd0, virtual false, abstract: false, final false
static inline void WriteRay(::Mirror::NetworkWriter*  writer, ::UnityEngine::Ray  value) ;

/// @brief Method WriteRayNullable, addr 0x1815963e0, size 0x150, virtual false, abstract: false, final false
static inline void WriteRayNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<::UnityEngine::Ray>  value) ;

/// @brief Method WriteRect, addr 0x1815966b0, size 0xf0, virtual false, abstract: false, final false
static inline void WriteRect(::Mirror::NetworkWriter*  writer, ::UnityEngine::Rect  value) ;

/// @brief Method WriteRectNullable, addr 0x181596600, size 0xb0, virtual false, abstract: false, final false
static inline void WriteRectNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<::UnityEngine::Rect>  value) ;

/// @brief Method WriteSByte, addr 0x181594140, size 0x70, virtual false, abstract: false, final false
static inline void WriteSByte(::Mirror::NetworkWriter*  writer, int8_t  value) ;

/// @brief Method WriteSByteNullable, addr 0x1815967a0, size 0xe0, virtual false, abstract: false, final false
static inline void WriteSByteNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<int8_t>  value) ;

/// @brief Method WriteShort, addr 0x181594f80, size 0x70, virtual false, abstract: false, final false
static inline void WriteShort(::Mirror::NetworkWriter*  writer, int16_t  value) ;

/// @brief Method WriteShortNullable, addr 0x181596880, size 0xe0, virtual false, abstract: false, final false
static inline void WriteShortNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<int16_t>  value) ;

/// @brief Method WriteSprite, addr 0x181596960, size 0x160, virtual false, abstract: false, final false
static inline void WriteSprite(::Mirror::NetworkWriter*  writer, ::UnityEngine::Sprite*  sprite) ;

/// @brief Method WriteString, addr 0x181596ac0, size 0x1c0, virtual false, abstract: false, final false
static inline void WriteString(::Mirror::NetworkWriter*  writer, ::StringW  value) ;

/// @brief Method WriteTexture2D, addr 0x181596c80, size 0x190, virtual false, abstract: false, final false
static inline void WriteTexture2D(::Mirror::NetworkWriter*  writer, ::UnityEngine::Texture2D*  texture2D) ;

/// @brief Method WriteTransform, addr 0x181596e10, size 0x130, virtual false, abstract: false, final false
static inline void WriteTransform(::Mirror::NetworkWriter*  writer, ::UnityEngine::Transform*  value) ;

/// @brief Method WriteUInt, addr 0x181595bd0, size 0x70, virtual false, abstract: false, final false
static inline void WriteUInt(::Mirror::NetworkWriter*  writer, uint32_t  value) ;

/// @brief Method WriteUIntNullable, addr 0x181595af0, size 0xe0, virtual false, abstract: false, final false
static inline void WriteUIntNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<uint32_t>  value) ;

/// @brief Method WriteULong, addr 0x181595d20, size 0x70, virtual false, abstract: false, final false
static inline void WriteULong(::Mirror::NetworkWriter*  writer, uint64_t  value) ;

/// @brief Method WriteULongNullable, addr 0x181595c40, size 0xe0, virtual false, abstract: false, final false
static inline void WriteULongNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<uint64_t>  value) ;

/// @brief Method WriteUShort, addr 0x181594f80, size 0x70, virtual false, abstract: false, final false
static inline void WriteUShort(::Mirror::NetworkWriter*  writer, uint16_t  value) ;

/// @brief Method WriteUShortNullable, addr 0x181596f40, size 0x20, virtual false, abstract: false, final false
static inline void WriteUShortNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<uint16_t>  value) ;

/// @brief Method WriteUri, addr 0x181596f60, size 0x40, virtual false, abstract: false, final false
static inline void WriteUri(::Mirror::NetworkWriter*  writer, ::System::Uri*  uri) ;

/// @brief Method WriteVector2, addr 0x181593f60, size 0x70, virtual false, abstract: false, final false
static inline void WriteVector2(::Mirror::NetworkWriter*  writer, ::UnityEngine::Vector2  value) ;

/// @brief Method WriteVector2Int, addr 0x181597080, size 0x70, virtual false, abstract: false, final false
static inline void WriteVector2Int(::Mirror::NetworkWriter*  writer, ::UnityEngine::Vector2Int  value) ;

/// @brief Method WriteVector2IntNullable, addr 0x181596fa0, size 0xe0, virtual false, abstract: false, final false
static inline void WriteVector2IntNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<::UnityEngine::Vector2Int>  value) ;

/// @brief Method WriteVector2Nullable, addr 0x1815970f0, size 0x100, virtual false, abstract: false, final false
static inline void WriteVector2Nullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<::UnityEngine::Vector2>  value) ;

/// @brief Method WriteVector3, addr 0x1815972e0, size 0x80, virtual false, abstract: false, final false
static inline void WriteVector3(::Mirror::NetworkWriter*  writer, ::UnityEngine::Vector3  value) ;

/// @brief Method WriteVector3Int, addr 0x1815972e0, size 0x80, virtual false, abstract: false, final false
static inline void WriteVector3Int(::Mirror::NetworkWriter*  writer, ::UnityEngine::Vector3Int  value) ;

/// @brief Method WriteVector3IntNullable, addr 0x1815971f0, size 0xf0, virtual false, abstract: false, final false
static inline void WriteVector3IntNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<::UnityEngine::Vector3Int>  value) ;

/// @brief Method WriteVector3Nullable, addr 0x1815971f0, size 0xf0, virtual false, abstract: false, final false
static inline void WriteVector3Nullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<::UnityEngine::Vector3>  value) ;

/// @brief Method WriteVector4, addr 0x1815951b0, size 0x70, virtual false, abstract: false, final false
static inline void WriteVector4(::Mirror::NetworkWriter*  writer, ::UnityEngine::Vector4  value) ;

/// @brief Method WriteVector4Nullable, addr 0x1815950c0, size 0xf0, virtual false, abstract: false, final false
static inline void WriteVector4Nullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<::UnityEngine::Vector4>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkWriterExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkWriterExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkWriterExtensions(NetworkWriterExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkWriterExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkWriterExtensions(NetworkWriterExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18347};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::NetworkWriterExtensions) == 0x10, "Size mismatch!");

} // namespace end def Mirror

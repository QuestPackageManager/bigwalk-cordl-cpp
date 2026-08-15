#pragma once
// IWYU pragma private; include "Mirror/NetworkReaderExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkReaderExtensions)
namespace Mirror {
struct NetworkBehaviourSyncVar;
}
namespace Mirror {
class NetworkBehaviour;
}
namespace Mirror {
class NetworkIdentity;
}
namespace Mirror {
class NetworkReader;
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
class NetworkReaderExtensions;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkReaderExtensions*);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkReaderExtensions*, "Mirror", "NetworkReaderExtensions");
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkReaderExtensions
class CORDL_TYPE NetworkReaderExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method ReadArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> ReadArray(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadBool, addr 0x18154a2e0, size 0x20, virtual false, abstract: false, final false
static inline bool ReadBool(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadBoolNullable, addr 0x18154a240, size 0xa0, virtual false, abstract: false, final false
static inline ::System::Nullable_1<bool> ReadBoolNullable(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadByte, addr 0x18154a360, size 0x20, virtual false, abstract: false, final false
static inline uint8_t ReadByte(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadByteNullable, addr 0x18154a300, size 0x60, virtual false, abstract: false, final false
static inline ::System::Nullable_1<uint8_t> ReadByteNullable(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadBytes, addr 0x18154a620, size 0x1a0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> ReadBytes(::Mirror::NetworkReader*  reader, int32_t  count) ;

/// @brief Method ReadBytesAndSize, addr 0x18154a420, size 0x200, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> ReadBytesAndSize(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadBytesAndSizeSegment, addr 0x18154a380, size 0xa0, virtual false, abstract: false, final false
static inline ::System::ArraySegment_1<uint8_t> ReadBytesAndSizeSegment(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadChar, addr 0x18154a840, size 0x20, virtual false, abstract: false, final false
static inline char16_t ReadChar(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadCharNullable, addr 0x18154a7c0, size 0x80, virtual false, abstract: false, final false
static inline ::System::Nullable_1<char16_t> ReadCharNullable(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadColor, addr 0x18154a970, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Color ReadColor(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadColor32, addr 0x18154a8c0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Color32 ReadColor32(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadColor32Nullable, addr 0x18154a860, size 0x60, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::UnityEngine::Color32> ReadColor32Nullable(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadColorNullable, addr 0x18154a8e0, size 0x90, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::UnityEngine::Color> ReadColorNullable(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadDateTime, addr 0x18154aa20, size 0x30, virtual false, abstract: false, final false
static inline ::System::DateTime ReadDateTime(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadDateTimeNullable, addr 0x18154a9a0, size 0x80, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::System::DateTime> ReadDateTimeNullable(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadDecimal, addr 0x18154ab00, size 0x30, virtual false, abstract: false, final false
static inline ::System::Decimal ReadDecimal(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadDecimalNullable, addr 0x18154aa50, size 0xb0, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::System::Decimal> ReadDecimalNullable(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadDouble, addr 0x18154abb0, size 0x20, virtual false, abstract: false, final false
static inline double_t ReadDouble(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadDoubleNullable, addr 0x18154ab30, size 0x80, virtual false, abstract: false, final false
static inline ::System::Nullable_1<double_t> ReadDoubleNullable(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadFloat, addr 0x18154ac30, size 0x20, virtual false, abstract: false, final false
static inline float_t ReadFloat(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadFloatNullable, addr 0x18154abd0, size 0x60, virtual false, abstract: false, final false
static inline ::System::Nullable_1<float_t> ReadFloatNullable(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadGameObject, addr 0x18154ac50, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> ReadGameObject(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadGuid, addr 0x18154ae40, size 0x120, virtual false, abstract: false, final false
static inline ::System::Guid ReadGuid(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadGuidNullable, addr 0x18154acb0, size 0x190, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::System::Guid> ReadGuidNullable(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadInt, addr 0x18154afc0, size 0x20, virtual false, abstract: false, final false
static inline int32_t ReadInt(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadIntNullable, addr 0x18154af60, size 0x60, virtual false, abstract: false, final false
static inline ::System::Nullable_1<int32_t> ReadIntNullable(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* ReadList(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadLong, addr 0x18154b060, size 0x20, virtual false, abstract: false, final false
static inline int64_t ReadLong(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadLongNullable, addr 0x18154afe0, size 0x80, virtual false, abstract: false, final false
static inline ::System::Nullable_1<int64_t> ReadLongNullable(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadMatrix4x4, addr 0x18154b1a0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 ReadMatrix4x4(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadMatrix4x4Nullable, addr 0x18154b080, size 0x120, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::UnityEngine::Matrix4x4> ReadMatrix4x4Nullable(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadNetworkBehaviour, addr 0x18154b230, size 0x90, virtual false, abstract: false, final false
static inline ::UnityW<::Mirror::NetworkBehaviour> ReadNetworkBehaviour(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadNetworkBehaviour, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T ReadNetworkBehaviour(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadNetworkBehaviourSyncVar, addr 0x18154b1d0, size 0x60, virtual false, abstract: false, final false
static inline ::Mirror::NetworkBehaviourSyncVar ReadNetworkBehaviourSyncVar(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadNetworkIdentity, addr 0x18154b2c0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityW<::Mirror::NetworkIdentity> ReadNetworkIdentity(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadPlane, addr 0x18154b3f0, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::Plane ReadPlane(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadPlaneNullable, addr 0x18154b2f0, size 0x100, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::UnityEngine::Plane> ReadPlaneNullable(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadQuaternion, addr 0x18154b510, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion ReadQuaternion(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadQuaternionNullable, addr 0x18154b480, size 0x90, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::UnityEngine::Quaternion> ReadQuaternionNullable(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadRay, addr 0x18154b670, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Ray ReadRay(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadRayNullable, addr 0x18154b540, size 0x130, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::UnityEngine::Ray> ReadRayNullable(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadRect, addr 0x18154b7d0, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect ReadRect(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadRectNullable, addr 0x18154b6f0, size 0xe0, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::UnityEngine::Rect> ReadRectNullable(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadSByte, addr 0x18154b8b0, size 0x20, virtual false, abstract: false, final false
static inline int8_t ReadSByte(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadSByteNullable, addr 0x18154b850, size 0x60, virtual false, abstract: false, final false
static inline ::System::Nullable_1<int8_t> ReadSByteNullable(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadShort, addr 0x18154a840, size 0x20, virtual false, abstract: false, final false
static inline int16_t ReadShort(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadShortNullable, addr 0x18154b8d0, size 0x130, virtual false, abstract: false, final false
static inline ::System::Nullable_1<int16_t> ReadShortNullable(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadSprite, addr 0x18154ba00, size 0x1a0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Sprite> ReadSprite(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadString, addr 0x18154bba0, size 0x140, virtual false, abstract: false, final false
static inline ::StringW ReadString(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadTexture2D, addr 0x18154bce0, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> ReadTexture2D(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadTransform, addr 0x18154bd90, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Transform> ReadTransform(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadUInt, addr 0x18154be50, size 0x20, virtual false, abstract: false, final false
static inline uint32_t ReadUInt(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadUIntNullable, addr 0x18154bdf0, size 0x60, virtual false, abstract: false, final false
static inline ::System::Nullable_1<uint32_t> ReadUIntNullable(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadULong, addr 0x18154bef0, size 0x20, virtual false, abstract: false, final false
static inline uint64_t ReadULong(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadULongNullable, addr 0x18154be70, size 0x80, virtual false, abstract: false, final false
static inline ::System::Nullable_1<uint64_t> ReadULongNullable(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadUShort, addr 0x18154a840, size 0x20, virtual false, abstract: false, final false
static inline uint16_t ReadUShort(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadUShortNullable, addr 0x18154bf10, size 0x60, virtual false, abstract: false, final false
static inline ::System::Nullable_1<uint16_t> ReadUShortNullable(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadUri, addr 0x18154bf70, size 0x180, virtual false, abstract: false, final false
static inline ::System::Uri* ReadUri(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadVector2, addr 0x18154c210, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 ReadVector2(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadVector2Int, addr 0x18154c170, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2Int ReadVector2Int(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadVector2IntNullable, addr 0x18154c0f0, size 0x80, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::UnityEngine::Vector2Int> ReadVector2IntNullable(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadVector2Nullable, addr 0x18154c190, size 0x80, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::UnityEngine::Vector2> ReadVector2Nullable(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadVector3, addr 0x18154c380, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ReadVector3(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadVector3Int, addr 0x18154c2c0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3Int ReadVector3Int(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadVector3IntNullable, addr 0x18154c230, size 0x90, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::UnityEngine::Vector3Int> ReadVector3IntNullable(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadVector3Nullable, addr 0x18154c2f0, size 0x90, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::UnityEngine::Vector3> ReadVector3Nullable(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadVector4, addr 0x18154c440, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 ReadVector4(::Mirror::NetworkReader*  reader) ;

/// @brief Method ReadVector4Nullable, addr 0x18154c3b0, size 0x90, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::UnityEngine::Vector4> ReadVector4Nullable(::Mirror::NetworkReader*  reader) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkReaderExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkReaderExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkReaderExtensions(NetworkReaderExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkReaderExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkReaderExtensions(NetworkReaderExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18335};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::NetworkReaderExtensions) == 0x10, "Size mismatch!");

} // namespace end def Mirror

#pragma once
// IWYU pragma private; include "Mirror/Compression.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Compression)
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
namespace Mirror {
struct Vector3Long;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace Mirror {
class Compression;
}
// Write type traits
MARK_REF_T(::Mirror::Compression*);
DEFINE_IL2CPP_CLASS(::Mirror::Compression*, "Mirror", "Compression");
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.Compression
class CORDL_TYPE Compression : public ::System::Object {
public:
// Declarations
/// @brief Method CompressQuaternion, addr 0x18158fb70, size 0x160, virtual false, abstract: false, final false
static inline uint32_t CompressQuaternion(::UnityEngine::Quaternion  q) ;

/// @brief Method CompressVarInt, addr 0x18158fcd0, size 0x20, virtual false, abstract: false, final false
static inline void CompressVarInt(::Mirror::NetworkWriter*  writer, int64_t  i) ;

/// @brief Method CompressVarUInt, addr 0x18158fcf0, size 0x370, virtual false, abstract: false, final false
static inline void CompressVarUInt(::Mirror::NetworkWriter*  writer, uint64_t  value) ;

/// @brief Method DecompressQuaternion, addr 0x181590060, size 0x1a0, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion DecompressQuaternion(uint32_t  data) ;

/// @brief Method DecompressVarInt, addr 0x181590200, size 0x20, virtual false, abstract: false, final false
static inline int64_t DecompressVarInt(::Mirror::NetworkReader*  reader) ;

/// @brief Method DecompressVarUInt, addr 0x181590220, size 0x240, virtual false, abstract: false, final false
static inline uint64_t DecompressVarUInt(::Mirror::NetworkReader*  reader) ;

/// @brief Method LargestAbsoluteComponentIndex, addr 0x181590460, size 0xd0, virtual false, abstract: false, final false
static inline int32_t LargestAbsoluteComponentIndex(::UnityEngine::Vector4  value, ::by_ref<float_t>  largestAbs, ::by_ref<::UnityEngine::Vector3>  withoutLargest) ;

/// @brief Method QuaternionElement, addr 0x181590530, size 0x30, virtual false, abstract: false, final false
static inline float_t QuaternionElement(::UnityEngine::Quaternion  q, int32_t  element) ;

/// @brief Method QuaternionNormalizeSafe, addr 0x181590560, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion QuaternionNormalizeSafe(::UnityEngine::Quaternion  value) ;

/// @brief Method ScaleFloatToUShort, addr 0x1815905c0, size 0x40, virtual false, abstract: false, final false
static inline uint16_t ScaleFloatToUShort(float_t  value, float_t  minValue, float_t  maxValue, uint16_t  minTarget, uint16_t  maxTarget) ;

/// @brief Method ScaleToFloat, addr 0x181590600, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ScaleToFloat(::Mirror::Vector3Long  value, float_t  precision) ;

/// @brief Method ScaleToFloat, addr 0x181590710, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ScaleToFloat(int64_t  x, int64_t  y, int64_t  z, float_t  precision) ;

/// @brief Method ScaleToFloat, addr 0x1815906a0, size 0x70, virtual false, abstract: false, final false
static inline float_t ScaleToFloat(int64_t  value, float_t  precision) ;

/// @brief Method ScaleToLong, addr 0x181517b10, size 0xd0, virtual false, abstract: false, final false
static inline bool ScaleToLong(::UnityEngine::Vector3  value, float_t  precision, ::by_ref<::Mirror::Vector3Long>  quantized) ;

/// @brief Method ScaleToLong, addr 0x181590850, size 0x80, virtual false, abstract: false, final false
static inline bool ScaleToLong(::UnityEngine::Vector3  value, float_t  precision, ::by_ref<int64_t>  x, ::by_ref<int64_t>  y, ::by_ref<int64_t>  z) ;

/// @brief Method ScaleToLong, addr 0x1815907b0, size 0xa0, virtual false, abstract: false, final false
static inline bool ScaleToLong(float_t  value, float_t  precision, ::by_ref<int64_t>  result) ;

/// @brief Method ScaleUShortToFloat, addr 0x1815908d0, size 0x40, virtual false, abstract: false, final false
static inline float_t ScaleUShortToFloat(uint16_t  value, uint16_t  minValue, uint16_t  maxValue, float_t  minTarget, float_t  maxTarget) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Compression() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Compression", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Compression(Compression && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Compression", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Compression(Compression const& ) = delete;

/// @brief Field QuaternionMaxRange offset 0xffffffff size 0x4
static constexpr float_t  QuaternionMaxRange{static_cast<float_t>(0.707107f)};

/// @brief Field QuaternionMinRange offset 0xffffffff size 0x4
static constexpr float_t  QuaternionMinRange{static_cast<float_t>(-0.707107f)};

/// @brief Field TenBitsMax offset 0xffffffff size 0x2
static constexpr uint16_t  TenBitsMax{static_cast<uint16_t>(0x3ffu)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18376};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::Compression) == 0x10, "Size mismatch!");

} // namespace end def Mirror

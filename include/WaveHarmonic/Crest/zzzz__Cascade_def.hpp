#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Cascade.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Cascade)
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
struct Cascade;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::Cascade);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Cascade, "WaveHarmonic.Crest", "Cascade");
// Dependencies UnityEngine.Vector2
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.Cascade
struct CORDL_TYPE Cascade {
public:
// Declarations
 __declspec(property(get=get_Packed)) ::UnityEngine::Vector4  Packed;

 __declspec(property(get=get_TexelRect)) ::UnityEngine::Rect  TexelRect;

/// @brief Method .ctor, addr 0x182552750, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector2  snapped, float_t  texel, int32_t  resolution) ;

/// @brief Method get_Packed, addr 0x18227bb90, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 get_Packed() ;

/// @brief Method get_TexelRect, addr 0x1825527a0, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get_TexelRect() ;

// Ctor Parameters []
// @brief default ctor
constexpr Cascade() ;

// Ctor Parameters [CppParam { name: "_SnappedPosition", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "_Texel", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_Resolution", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Cascade(::UnityEngine::Vector2  _SnappedPosition, float_t  _Texel, int32_t  _Resolution) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16483};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _SnappedPosition, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Vector2  _SnappedPosition;

/// @brief Field _Texel, offset: 0x8, size: 0x4, def value: None
 float_t  _Texel;

/// @brief Field _Resolution, offset: 0xc, size: 0x4, def value: None
 int32_t  _Resolution;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Cascade, _SnappedPosition) == 0x0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Cascade, _Texel) == 0x8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Cascade, _Resolution) == 0xc, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Cascade) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest

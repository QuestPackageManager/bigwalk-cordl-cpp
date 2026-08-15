#pragma once
// IWYU pragma private; include "GlobalNamespace/EmitterInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(EmitterInfo)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct EmitterInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EmitterInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EmitterInfo, "", "EmitterInfo");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: EmitterInfo
struct CORDL_TYPE EmitterInfo {
public:
// Declarations
/// @brief Method .ctor, addr 0x1803255b0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  direction, float_t  attenuation) ;

/// @brief Method op_Addition, addr 0x1803255f0, size 0x60, virtual false, abstract: false, final false
static inline ::GlobalNamespace::EmitterInfo op_Addition(::GlobalNamespace::EmitterInfo  a, ::GlobalNamespace::EmitterInfo  b) ;

/// @brief Method op_Division, addr 0x180325650, size 0x50, virtual false, abstract: false, final false
static inline ::GlobalNamespace::EmitterInfo op_Division(::GlobalNamespace::EmitterInfo  a, float_t  divisor) ;

/// @brief Method op_Multiply, addr 0x1803256a0, size 0x90, virtual false, abstract: false, final false
static inline ::GlobalNamespace::EmitterInfo op_Multiply(::GlobalNamespace::EmitterInfo  a, float_t  multiplier) ;

// Ctor Parameters []
// @brief default ctor
constexpr EmitterInfo() ;

// Ctor Parameters [CppParam { name: "Direction", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "Attenuation", ty: "float_t", modifiers: "", def_value: None }]
constexpr EmitterInfo(::UnityEngine::Vector3  Direction, float_t  Attenuation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4790};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Direction, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  Direction;

/// @brief Field Attenuation, offset: 0xc, size: 0x4, def value: None
 float_t  Attenuation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EmitterInfo, Direction) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EmitterInfo, Attenuation) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EmitterInfo) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

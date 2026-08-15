#pragma once
// IWYU pragma private; include "GlobalNamespace/OceanSoundSample.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EmitterInfo_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OceanSoundSample)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct OceanSoundSample;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OceanSoundSample);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OceanSoundSample, "", "OceanSoundSample");
// Dependencies EmitterInfo
namespace GlobalNamespace {
// Is value type: true
// CS Name: OceanSoundSample
struct CORDL_TYPE OceanSoundSample {
public:
// Declarations
/// @brief Field _identity, offset 0xffffffff, size 0x80 
 __declspec(property(get=getStaticF__identity, put=setStaticF__identity)) ::GlobalNamespace::OceanSoundSample  _identity;

/// @brief Field _zero, offset 0xffffffff, size 0x80 
 __declspec(property(get=getStaticF__zero, put=setStaticF__zero)) ::GlobalNamespace::OceanSoundSample  _zero;

/// @brief Method Normalize, addr 0x1803260f0, size 0x410, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OceanSoundSample Normalize(::GlobalNamespace::OceanSoundSample  a) ;

/// @brief Method .ctor, addr 0x180326e20, size 0x320, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  dirSE, ::UnityEngine::Vector3  dirSW, ::UnityEngine::Vector3  dirNW, ::UnityEngine::Vector3  dirNE, float_t  lvlSE, float_t  lvlSW, float_t  lvlNW, float_t  lvlNE, ::UnityEngine::Vector3  dirFarSE, ::UnityEngine::Vector3  dirFarSW, ::UnityEngine::Vector3  dirFarNW, ::UnityEngine::Vector3  dirFarNE, float_t  lvlFarSE, float_t  lvlFarSW, float_t  lvlFarNW, float_t  lvlFarNE) ;

static inline ::GlobalNamespace::OceanSoundSample getStaticF__identity() ;

static inline ::GlobalNamespace::OceanSoundSample getStaticF__zero() ;

/// @brief Method get_Identity, addr 0x180327140, size 0x80, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OceanSoundSample get_Identity() ;

/// @brief Method get_Zero, addr 0x1803271c0, size 0x90, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OceanSoundSample get_Zero() ;

/// @brief Method op_Addition, addr 0x180327250, size 0x350, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OceanSoundSample op_Addition(::GlobalNamespace::OceanSoundSample  a, ::GlobalNamespace::OceanSoundSample  b) ;

/// @brief Method op_Division, addr 0x1803275a0, size 0x2a0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OceanSoundSample op_Division(::GlobalNamespace::OceanSoundSample  a, float_t  divisor) ;

/// @brief Method op_Multiply, addr 0x180327840, size 0x2a0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OceanSoundSample op_Multiply(::GlobalNamespace::OceanSoundSample  a, float_t  multiplier) ;

static inline void setStaticF__identity(::GlobalNamespace::OceanSoundSample  value) ;

static inline void setStaticF__zero(::GlobalNamespace::OceanSoundSample  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OceanSoundSample() ;

// Ctor Parameters [CppParam { name: "EmitterSE", ty: "::GlobalNamespace::EmitterInfo", modifiers: "", def_value: None }, CppParam { name: "EmitterSW", ty: "::GlobalNamespace::EmitterInfo", modifiers: "", def_value: None }, CppParam { name: "EmitterNW", ty: "::GlobalNamespace::EmitterInfo", modifiers: "", def_value: None }, CppParam { name: "EmitterNE", ty: "::GlobalNamespace::EmitterInfo", modifiers: "", def_value: None }, CppParam { name: "EmitterFarSE", ty: "::GlobalNamespace::EmitterInfo", modifiers: "", def_value: None }, CppParam { name: "EmitterFarSW", ty: "::GlobalNamespace::EmitterInfo", modifiers: "", def_value: None }, CppParam { name: "EmitterFarNW", ty: "::GlobalNamespace::EmitterInfo", modifiers: "", def_value: None }, CppParam { name: "EmitterFarNE", ty: "::GlobalNamespace::EmitterInfo", modifiers: "", def_value: None }]
constexpr OceanSoundSample(::GlobalNamespace::EmitterInfo  EmitterSE, ::GlobalNamespace::EmitterInfo  EmitterSW, ::GlobalNamespace::EmitterInfo  EmitterNW, ::GlobalNamespace::EmitterInfo  EmitterNE, ::GlobalNamespace::EmitterInfo  EmitterFarSE, ::GlobalNamespace::EmitterInfo  EmitterFarSW, ::GlobalNamespace::EmitterInfo  EmitterFarNW, ::GlobalNamespace::EmitterInfo  EmitterFarNE) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4793};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field EmitterSE, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::EmitterInfo  EmitterSE;

/// @brief Field EmitterSW, offset: 0x10, size: 0x10, def value: None
 ::GlobalNamespace::EmitterInfo  EmitterSW;

/// @brief Field EmitterNW, offset: 0x20, size: 0x10, def value: None
 ::GlobalNamespace::EmitterInfo  EmitterNW;

/// @brief Field EmitterNE, offset: 0x30, size: 0x10, def value: None
 ::GlobalNamespace::EmitterInfo  EmitterNE;

/// @brief Field EmitterFarSE, offset: 0x40, size: 0x10, def value: None
 ::GlobalNamespace::EmitterInfo  EmitterFarSE;

/// @brief Field EmitterFarSW, offset: 0x50, size: 0x10, def value: None
 ::GlobalNamespace::EmitterInfo  EmitterFarSW;

/// @brief Field EmitterFarNW, offset: 0x60, size: 0x10, def value: None
 ::GlobalNamespace::EmitterInfo  EmitterFarNW;

/// @brief Field EmitterFarNE, offset: 0x70, size: 0x10, def value: None
 ::GlobalNamespace::EmitterInfo  EmitterFarNE;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OceanSoundSample, EmitterSE) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OceanSoundSample, EmitterSW) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OceanSoundSample, EmitterNW) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OceanSoundSample, EmitterNE) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OceanSoundSample, EmitterFarSE) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OceanSoundSample, EmitterFarSW) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OceanSoundSample, EmitterFarNW) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OceanSoundSample, EmitterFarNE) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OceanSoundSample) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace

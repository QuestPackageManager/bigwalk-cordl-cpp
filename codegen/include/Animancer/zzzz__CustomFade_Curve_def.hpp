#pragma once
// IWYU pragma private; include "Animancer/CustomFade_Curve.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__CustomFade_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CustomFade_Curve)
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomFade_Curve;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomFade_Curve*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomFade_Curve*, "Animancer", "CustomFade/Curve");
// Dependencies Animancer.CustomFade
namespace GlobalNamespace {
// Is value type: false
// CS Name: Animancer.CustomFade/Curve
class CORDL_TYPE CustomFade_Curve : public ::Animancer::CustomFade {
public:
// Declarations
/// @brief Field _Curve, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__Curve, put=__cordl_internal_set__Curve)) ::UnityEngine::AnimationCurve*  _Curve;

/// @brief Method Acquire, addr 0x180307680, size 0x70, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CustomFade_Curve* Acquire(::UnityEngine::AnimationCurve*  curve) ;

/// @brief Method CalculateWeight, addr 0x1803076f0, size 0x20, virtual true, abstract: false, final false
inline float_t CalculateWeight(float_t  progress) ;

static inline ::GlobalNamespace::CustomFade_Curve* New_ctor() ;

/// @brief Method Release, addr 0x180307710, size 0x40, virtual true, abstract: false, final false
inline void Release() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__Curve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__Curve() ;

constexpr void __cordl_internal_set__Curve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method .ctor, addr 0x180307750, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomFade_Curve() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomFade_Curve", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomFade_Curve(CustomFade_Curve && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomFade_Curve", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomFade_Curve(CustomFade_Curve const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18165};

/// @brief Field _Curve, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____Curve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomFade_Curve, ____Curve) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomFade_Curve) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace

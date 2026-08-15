#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectTween.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckStateFilter_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PeckEffectTween)
namespace GlobalNamespace {
class IOccasional;
}
namespace GlobalNamespace {
class OccasionalPartner;
}
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class TrackedPeckState;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckEffectTween;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckEffectTween*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectTween*, "", "PeckEffectTween");
// Dependencies PeckStateFilter, PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectTween
class CORDL_TYPE PeckEffectTween : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnTween, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTween, put=__cordl_internal_set_OnTween)) ::System::Action_1<float_t>*  OnTween;

/// @brief Field animationCurve, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_animationCurve, put=__cordl_internal_set_animationCurve)) ::UnityEngine::AnimationCurve*  animationCurve;

/// @brief Field duration, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field occasionalPartner, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_occasionalPartner, put=__cordl_internal_set_occasionalPartner)) ::UnityW<::GlobalNamespace::OccasionalPartner>  occasionalPartner;

/// @brief Field peckSystemReference, offset 0x40, size 0x28 
 __declspec(property(get=__cordl_internal_get_peckSystemReference, put=__cordl_internal_set_peckSystemReference)) ::GlobalNamespace::PeckSystemReference  peckSystemReference;

/// @brief Field stateFilter, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_stateFilter, put=__cordl_internal_set_stateFilter)) ::GlobalNamespace::PeckStateFilter  stateFilter;

/// @brief Field timeAtPeck, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeAtPeck, put=__cordl_internal_set_timeAtPeck)) float_t  timeAtPeck;

/// @brief Field useCustomCurve, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_useCustomCurve, put=__cordl_internal_set_useCustomCurve)) bool  useCustomCurve;

/// @brief Convert operator to "::GlobalNamespace::IOccasional"
constexpr operator  ::GlobalNamespace::IOccasional*() noexcept;

/// @brief Method Awake, addr 0x180450770, size 0xb0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectTween* New_ctor() ;

/// @brief Method OccasionalUpdate, addr 0x180450820, size 0xd0, virtual true, abstract: false, final true
inline void OccasionalUpdate() ;

/// @brief Method OnPeck, addr 0x1804508f0, size 0x120, virtual false, abstract: false, final false
inline void OnPeck(::GlobalNamespace::PeckContext  peckContext, ::GlobalNamespace::TrackedPeckState*  trackedPeckState) ;

/// @brief Method UpdateTween, addr 0x180450a10, size 0x50, virtual false, abstract: false, final false
inline void UpdateTween(float_t  t) ;

constexpr ::System::Action_1<float_t>* const& __cordl_internal_get_OnTween() const;

constexpr ::System::Action_1<float_t>*& __cordl_internal_get_OnTween() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_animationCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_animationCurve() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr ::UnityW<::GlobalNamespace::OccasionalPartner> const& __cordl_internal_get_occasionalPartner() const;

constexpr ::UnityW<::GlobalNamespace::OccasionalPartner>& __cordl_internal_get_occasionalPartner() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_peckSystemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_peckSystemReference() ;

constexpr ::GlobalNamespace::PeckStateFilter const& __cordl_internal_get_stateFilter() const;

constexpr ::GlobalNamespace::PeckStateFilter& __cordl_internal_get_stateFilter() ;

constexpr float_t const& __cordl_internal_get_timeAtPeck() const;

constexpr float_t& __cordl_internal_get_timeAtPeck() ;

constexpr bool const& __cordl_internal_get_useCustomCurve() const;

constexpr bool& __cordl_internal_get_useCustomCurve() ;

constexpr void __cordl_internal_set_OnTween(::System::Action_1<float_t>*  value) ;

constexpr void __cordl_internal_set_animationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_occasionalPartner(::UnityW<::GlobalNamespace::OccasionalPartner>  value) ;

constexpr void __cordl_internal_set_peckSystemReference(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_stateFilter(::GlobalNamespace::PeckStateFilter  value) ;

constexpr void __cordl_internal_set_timeAtPeck(float_t  value) ;

constexpr void __cordl_internal_set_useCustomCurve(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IOccasional"
constexpr ::GlobalNamespace::IOccasional* i___GlobalNamespace__IOccasional() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectTween() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectTween", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectTween(PeckEffectTween && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectTween", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectTween(PeckEffectTween const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5421};

/// @brief Field stateFilter, offset: 0x20, size: 0x10, def value: None
 ::GlobalNamespace::PeckStateFilter  ___stateFilter;

/// @brief Field duration, offset: 0x30, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field useCustomCurve, offset: 0x34, size: 0x1, def value: None
 bool  ___useCustomCurve;

/// @brief Field animationCurve, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___animationCurve;

/// @brief Field peckSystemReference, offset: 0x40, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___peckSystemReference;

/// @brief Field occasionalPartner, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OccasionalPartner>  ___occasionalPartner;

/// @brief Field timeAtPeck, offset: 0x70, size: 0x4, def value: None
 float_t  ___timeAtPeck;

/// @brief Field OnTween, offset: 0x78, size: 0x8, def value: None
 ::System::Action_1<float_t>*  ___OnTween;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectTween, ___stateFilter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTween, ___duration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTween, ___useCustomCurve) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTween, ___animationCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTween, ___peckSystemReference) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTween, ___occasionalPartner) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTween, ___timeAtPeck) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTween, ___OnTween) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectTween) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace

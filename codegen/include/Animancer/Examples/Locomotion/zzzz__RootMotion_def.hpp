#pragma once
// IWYU pragma private; include "Animancer/Examples/Locomotion/RootMotion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__ClipTransition_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RootMotion)
namespace Animancer::Examples::Locomotion {
class RootMotion_MotionTransition;
}
namespace Animancer {
class AnimancerComponent;
}
namespace Animancer {
class AnimancerState;
}
// Forward declare root types
namespace Animancer::Examples::Locomotion {
class RootMotion;
}
namespace Animancer::Examples::Locomotion {
class RootMotion_MotionTransition;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::Locomotion::RootMotion*);
MARK_REF_T(::Animancer::Examples::Locomotion::RootMotion_MotionTransition*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::Locomotion::RootMotion*, "Animancer.Examples.Locomotion", "RootMotion");
DEFINE_IL2CPP_CLASS(::Animancer::Examples::Locomotion::RootMotion_MotionTransition*, "Animancer.Examples.Locomotion", "RootMotion/MotionTransition");
// Dependencies Animancer.ClipTransition
namespace Animancer::Examples::Locomotion {
// Is value type: false
// CS Name: Animancer.Examples.Locomotion.RootMotion/MotionTransition
class CORDL_TYPE RootMotion_MotionTransition : public ::Animancer::ClipTransition {
public:
// Declarations
/// @brief Field _ApplyRootMotion, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__ApplyRootMotion, put=__cordl_internal_set__ApplyRootMotion)) bool  _ApplyRootMotion;

/// @brief Method Apply, addr 0x1802fea10, size 0x70, virtual true, abstract: false, final false
inline void Apply(::Animancer::AnimancerState*  state) ;

static inline ::Animancer::Examples::Locomotion::RootMotion_MotionTransition* New_ctor() ;

constexpr bool const& __cordl_internal_get__ApplyRootMotion() const;

constexpr bool& __cordl_internal_get__ApplyRootMotion() ;

constexpr void __cordl_internal_set__ApplyRootMotion(bool  value) ;

/// @brief Method .ctor, addr 0x1802fea80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RootMotion_MotionTransition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RootMotion_MotionTransition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RootMotion_MotionTransition(RootMotion_MotionTransition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion_MotionTransition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RootMotion_MotionTransition(RootMotion_MotionTransition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20016};

/// @brief Field _ApplyRootMotion, offset: 0x48, size: 0x1, def value: None
 bool  ____ApplyRootMotion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::Locomotion::RootMotion_MotionTransition, ____ApplyRootMotion) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::Locomotion::RootMotion_MotionTransition) == 0x50, "Size mismatch!");

} // namespace end def Animancer::Examples::Locomotion
// Dependencies Animancer.Examples.Locomotion.RootMotion::MotionTransition, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Animancer::Examples::Locomotion {
// Is value type: false
// CS Name: Animancer.Examples.Locomotion.RootMotion
class CORDL_TYPE RootMotion : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using MotionTransition = ::Animancer::Examples::Locomotion::RootMotion_MotionTransition;

/// @brief Field _Animancer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animancer, put=__cordl_internal_set__Animancer)) ::UnityW<::Animancer::AnimancerComponent>  _Animancer;

/// @brief Field _Animations, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animations, put=__cordl_internal_set__Animations)) ::ArrayW<::Animancer::Examples::Locomotion::RootMotion_MotionTransition*>  _Animations;

/// @brief Field _MaxDistance, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaxDistance, put=__cordl_internal_set__MaxDistance)) float_t  _MaxDistance;

/// @brief Field _Start, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get__Start, put=__cordl_internal_set__Start)) ::UnityEngine::Vector3  _Start;

/// @brief Method FixedUpdate, addr 0x180300ef0, size 0xd0, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::Animancer::Examples::Locomotion::RootMotion* New_ctor() ;

/// @brief Method OnEnable, addr 0x180300fc0, size 0x60, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Play, addr 0x180301020, size 0x40, virtual false, abstract: false, final false
inline void Play(int32_t  index) ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get__Animancer() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get__Animancer() ;

constexpr ::ArrayW<::Animancer::Examples::Locomotion::RootMotion_MotionTransition*> const& __cordl_internal_get__Animations() const;

constexpr ::ArrayW<::Animancer::Examples::Locomotion::RootMotion_MotionTransition*>& __cordl_internal_get__Animations() ;

constexpr float_t const& __cordl_internal_get__MaxDistance() const;

constexpr float_t& __cordl_internal_get__MaxDistance() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__Start() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__Start() ;

constexpr void __cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set__Animations(::ArrayW<::Animancer::Examples::Locomotion::RootMotion_MotionTransition*>  value) ;

constexpr void __cordl_internal_set__MaxDistance(float_t  value) ;

constexpr void __cordl_internal_set__Start(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RootMotion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RootMotion", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RootMotion(RootMotion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RootMotion(RootMotion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20017};

/// @brief Field _Animancer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ____Animancer;

/// @brief Field _MaxDistance, offset: 0x28, size: 0x4, def value: None
 float_t  ____MaxDistance;

/// @brief Field _Animations, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::Animancer::Examples::Locomotion::RootMotion_MotionTransition*>  ____Animations;

/// @brief Field _Start, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____Start;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::Locomotion::RootMotion, ____Animancer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Locomotion::RootMotion, ____MaxDistance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Locomotion::RootMotion, ____Animations) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Locomotion::RootMotion, ____Start) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::Locomotion::RootMotion) == 0x48, "Size mismatch!");

} // namespace end def Animancer::Examples::Locomotion

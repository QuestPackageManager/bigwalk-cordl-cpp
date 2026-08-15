#pragma once
// IWYU pragma private; include "Animancer/Examples/Jobs/SimpleLeanComponent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SimpleLeanComponent)
namespace Animancer::Examples::Jobs {
class SimpleLean;
}
namespace Animancer {
class AnimancerComponent;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Animancer::Examples::Jobs {
class SimpleLeanComponent;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::Jobs::SimpleLeanComponent*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::Jobs::SimpleLeanComponent*, "Animancer.Examples.Jobs", "SimpleLeanComponent");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Transform
namespace Animancer::Examples::Jobs {
// Is value type: false
// CS Name: Animancer.Examples.Jobs.SimpleLeanComponent
class CORDL_TYPE SimpleLeanComponent : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Angle, put=set_Angle)) float_t  Angle;

/// @brief Field _Animancer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animancer, put=__cordl_internal_set__Animancer)) ::UnityW<::Animancer::AnimancerComponent>  _Animancer;

/// @brief Field _Axis, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Axis, put=__cordl_internal_set__Axis)) ::UnityW<::UnityEngine::Transform>  _Axis;

/// @brief Field _Bones, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Bones, put=__cordl_internal_set__Bones)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  _Bones;

/// @brief Field _Lean, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Lean, put=__cordl_internal_set__Lean)) ::Animancer::Examples::Jobs::SimpleLean*  _Lean;

/// @brief Method Awake, addr 0x180301280, size 0x200, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Animancer::Examples::Jobs::SimpleLeanComponent* New_ctor() ;

/// @brief Method Update, addr 0x180301480, size 0xd0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get__Animancer() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get__Animancer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__Axis() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__Axis() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get__Bones() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get__Bones() ;

constexpr ::Animancer::Examples::Jobs::SimpleLean* const& __cordl_internal_get__Lean() const;

constexpr ::Animancer::Examples::Jobs::SimpleLean*& __cordl_internal_get__Lean() ;

constexpr void __cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set__Axis(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__Bones(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set__Lean(::Animancer::Examples::Jobs::SimpleLean*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Angle, addr 0x180301550, size 0x20, virtual false, abstract: false, final false
inline float_t get_Angle() ;

/// @brief Method set_Angle, addr 0x180301570, size 0x20, virtual false, abstract: false, final false
inline void set_Angle(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimpleLeanComponent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimpleLeanComponent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleLeanComponent(SimpleLeanComponent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleLeanComponent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleLeanComponent(SimpleLeanComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19961};

/// @brief Field _Animancer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ____Animancer;

/// @brief Field _Bones, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ____Bones;

/// @brief Field _Lean, offset: 0x30, size: 0x8, def value: None
 ::Animancer::Examples::Jobs::SimpleLean*  ____Lean;

/// @brief Field _Axis, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____Axis;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::Jobs::SimpleLeanComponent, ____Animancer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Jobs::SimpleLeanComponent, ____Bones) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Jobs::SimpleLeanComponent, ____Lean) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Jobs::SimpleLeanComponent, ____Axis) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::Jobs::SimpleLeanComponent) == 0x40, "Size mismatch!");

} // namespace end def Animancer::Examples::Jobs

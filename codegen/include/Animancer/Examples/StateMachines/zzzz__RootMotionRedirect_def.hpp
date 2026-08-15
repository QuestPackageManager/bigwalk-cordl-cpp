#pragma once
// IWYU pragma private; include "Animancer/Examples/StateMachines/RootMotionRedirect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RootMotionRedirect)
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace Animancer::Examples::StateMachines {
class RootMotionRedirect;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::StateMachines::RootMotionRedirect*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::StateMachines::RootMotionRedirect*, "Animancer.Examples.StateMachines", "RootMotionRedirect");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer::Examples::StateMachines {
// Is value type: false
// CS Name: Animancer.Examples.StateMachines.RootMotionRedirect
class CORDL_TYPE RootMotionRedirect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _Animator, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animator, put=__cordl_internal_set__Animator)) ::UnityW<::UnityEngine::Animator>  _Animator;

/// @brief Field _Rigidbody, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Rigidbody, put=__cordl_internal_set__Rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  _Rigidbody;

static inline ::Animancer::Examples::StateMachines::RootMotionRedirect* New_ctor() ;

/// @brief Method OnAnimatorMove, addr 0x180300c50, size 0x2a0, virtual false, abstract: false, final false
inline void OnAnimatorMove() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get__Animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get__Animator() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__Rigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__Rigidbody() ;

constexpr void __cordl_internal_set__Animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set__Rigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RootMotionRedirect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RootMotionRedirect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RootMotionRedirect(RootMotionRedirect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RootMotionRedirect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RootMotionRedirect(RootMotionRedirect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20003};

/// @brief Field _Rigidbody, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____Rigidbody;

/// @brief Field _Animator, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ____Animator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::StateMachines::RootMotionRedirect, ____Rigidbody) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::StateMachines::RootMotionRedirect, ____Animator) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::StateMachines::RootMotionRedirect) == 0x30, "Size mismatch!");

} // namespace end def Animancer::Examples::StateMachines

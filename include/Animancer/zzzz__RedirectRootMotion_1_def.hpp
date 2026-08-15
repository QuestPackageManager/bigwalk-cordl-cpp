#pragma once
// IWYU pragma private; include "Animancer/RedirectRootMotion_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RedirectRootMotion_1)
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace Animancer {
template<typename T>
class RedirectRootMotion_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Animancer::RedirectRootMotion_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Animancer::RedirectRootMotion_1, "Animancer", "RedirectRootMotion`1");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Animancer.RedirectRootMotion`1<T>
class CORDL_TYPE RedirectRootMotion_1 : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Animator)) ::UnityW<::UnityEngine::Animator>  Animator;

 __declspec(property(get=get_ApplyRootMotion)) bool  ApplyRootMotion;

 __declspec(property(get=get_Target)) T  Target;

/// @brief Field _Animator, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animator, put=__cordl_internal_set__Animator)) ::UnityW<::UnityEngine::Animator>  _Animator;

/// @brief Field _Target, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Target, put=__cordl_internal_set__Target)) T  _Target;

static inline ::Animancer::RedirectRootMotion_1<T>* New_ctor() ;

/// @brief Method OnAnimatorMove, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnAnimatorMove() ;

/// @brief Method OnValidate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnValidate() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get__Animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get__Animator() ;

constexpr T const& __cordl_internal_get__Target() const;

constexpr T& __cordl_internal_get__Target() ;

constexpr void __cordl_internal_set__Animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set__Target(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Animator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<::UnityW<::UnityEngine::Animator>> get_Animator() ;

/// @brief Method get_ApplyRootMotion, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_ApplyRootMotion() ;

/// @brief Method get_Target, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<T> get_Target() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RedirectRootMotion_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RedirectRootMotion_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RedirectRootMotion_1(RedirectRootMotion_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RedirectRootMotion_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RedirectRootMotion_1(RedirectRootMotion_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18194};

/// @brief Field _Animator, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ____Animator;

/// @brief Field _Target, offset: 0x28, size: 0x8, def value: None
 T  ____Target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer

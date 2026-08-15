#pragma once
// IWYU pragma private; include "Animancer/Examples/Jobs/TwoBoneIK.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TwoBoneIK)
namespace Animancer {
class AnimancerComponent;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Animancer::Examples::Jobs {
class TwoBoneIK;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::Jobs::TwoBoneIK*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::Jobs::TwoBoneIK*, "Animancer.Examples.Jobs", "TwoBoneIK");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer::Examples::Jobs {
// Is value type: false
// CS Name: Animancer.Examples.Jobs.TwoBoneIK
class CORDL_TYPE TwoBoneIK : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _Animancer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animancer, put=__cordl_internal_set__Animancer)) ::UnityW<::Animancer::AnimancerComponent>  _Animancer;

/// @brief Field _EndBone, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__EndBone, put=__cordl_internal_set__EndBone)) ::UnityW<::UnityEngine::Transform>  _EndBone;

/// @brief Field _Target, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Target, put=__cordl_internal_set__Target)) ::UnityW<::UnityEngine::Transform>  _Target;

/// @brief Method Awake, addr 0x180303200, size 0x110, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Animancer::Examples::Jobs::TwoBoneIK* New_ctor() ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get__Animancer() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get__Animancer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__EndBone() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__EndBone() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__Target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__Target() ;

constexpr void __cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set__EndBone(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__Target(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TwoBoneIK() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TwoBoneIK", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TwoBoneIK(TwoBoneIK && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TwoBoneIK", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TwoBoneIK(TwoBoneIK const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19955};

/// @brief Field _Animancer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ____Animancer;

/// @brief Field _EndBone, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____EndBone;

/// @brief Field _Target, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____Target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::Jobs::TwoBoneIK, ____Animancer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Jobs::TwoBoneIK, ____EndBone) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Jobs::TwoBoneIK, ____Target) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::Jobs::TwoBoneIK) == 0x38, "Size mismatch!");

} // namespace end def Animancer::Examples::Jobs

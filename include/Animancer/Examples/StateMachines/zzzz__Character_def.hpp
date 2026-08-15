#pragma once
// IWYU pragma private; include "Animancer/Examples/StateMachines/Character.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(Character)
namespace Animancer::Examples::StateMachines {
class CharacterParameters;
}
namespace Animancer::Examples::StateMachines {
class CharacterState_StateMachine;
}
namespace Animancer::Examples::StateMachines {
class Equipment;
}
namespace Animancer::Examples::StateMachines {
class HealthPool;
}
namespace Animancer {
class AnimancerComponent;
}
// Forward declare root types
namespace Animancer::Examples::StateMachines {
class Character;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::StateMachines::Character*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::StateMachines::Character*, "Animancer.Examples.StateMachines", "Character");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer::Examples::StateMachines {
// Is value type: false
// CS Name: Animancer.Examples.StateMachines.Character
class CORDL_TYPE Character : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Animancer)) ::UnityW<::Animancer::AnimancerComponent>  Animancer;

 __declspec(property(get=get_Equipment)) ::UnityW<::Animancer::Examples::StateMachines::Equipment>  Equipment;

 __declspec(property(get=get_Health)) ::UnityW<::Animancer::Examples::StateMachines::HealthPool>  Health;

 __declspec(property(get=get_Parameters)) ::Animancer::Examples::StateMachines::CharacterParameters*  Parameters;

 __declspec(property(get=get_StateMachine)) ::Animancer::Examples::StateMachines::CharacterState_StateMachine*  StateMachine;

/// @brief Field _Animancer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animancer, put=__cordl_internal_set__Animancer)) ::UnityW<::Animancer::AnimancerComponent>  _Animancer;

/// @brief Field _Equipment, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__Equipment, put=__cordl_internal_set__Equipment)) ::UnityW<::Animancer::Examples::StateMachines::Equipment>  _Equipment;

/// @brief Field _Health, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Health, put=__cordl_internal_set__Health)) ::UnityW<::Animancer::Examples::StateMachines::HealthPool>  _Health;

/// @brief Field _Parameters, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Parameters, put=__cordl_internal_set__Parameters)) ::Animancer::Examples::StateMachines::CharacterParameters*  _Parameters;

/// @brief Field _StateMachine, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__StateMachine, put=__cordl_internal_set__StateMachine)) ::Animancer::Examples::StateMachines::CharacterState_StateMachine*  _StateMachine;

/// @brief Method Awake, addr 0x1802f8500, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Animancer::Examples::StateMachines::Character* New_ctor() ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get__Animancer() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get__Animancer() ;

constexpr ::UnityW<::Animancer::Examples::StateMachines::Equipment> const& __cordl_internal_get__Equipment() const;

constexpr ::UnityW<::Animancer::Examples::StateMachines::Equipment>& __cordl_internal_get__Equipment() ;

constexpr ::UnityW<::Animancer::Examples::StateMachines::HealthPool> const& __cordl_internal_get__Health() const;

constexpr ::UnityW<::Animancer::Examples::StateMachines::HealthPool>& __cordl_internal_get__Health() ;

constexpr ::Animancer::Examples::StateMachines::CharacterParameters* const& __cordl_internal_get__Parameters() const;

constexpr ::Animancer::Examples::StateMachines::CharacterParameters*& __cordl_internal_get__Parameters() ;

constexpr ::Animancer::Examples::StateMachines::CharacterState_StateMachine* const& __cordl_internal_get__StateMachine() const;

constexpr ::Animancer::Examples::StateMachines::CharacterState_StateMachine*& __cordl_internal_get__StateMachine() ;

constexpr void __cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set__Equipment(::UnityW<::Animancer::Examples::StateMachines::Equipment>  value) ;

constexpr void __cordl_internal_set__Health(::UnityW<::Animancer::Examples::StateMachines::HealthPool>  value) ;

constexpr void __cordl_internal_set__Parameters(::Animancer::Examples::StateMachines::CharacterParameters*  value) ;

constexpr void __cordl_internal_set__StateMachine(::Animancer::Examples::StateMachines::CharacterState_StateMachine*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Animancer, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::Animancer::AnimancerComponent> get_Animancer() ;

/// @brief Method get_Equipment, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::Animancer::Examples::StateMachines::Equipment> get_Equipment() ;

/// @brief Method get_Health, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::Animancer::Examples::StateMachines::HealthPool> get_Health() ;

/// @brief Method get_Parameters, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::Animancer::Examples::StateMachines::CharacterParameters* get_Parameters() ;

/// @brief Method get_StateMachine, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::Animancer::Examples::StateMachines::CharacterState_StateMachine* get_StateMachine() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Character() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Character", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Character(Character && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Character", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Character(Character const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19993};

/// @brief Field _Animancer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ____Animancer;

/// @brief Field _StateMachine, offset: 0x28, size: 0x8, def value: None
 ::Animancer::Examples::StateMachines::CharacterState_StateMachine*  ____StateMachine;

/// @brief Field _Health, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Animancer::Examples::StateMachines::HealthPool>  ____Health;

/// @brief Field _Parameters, offset: 0x38, size: 0x8, def value: None
 ::Animancer::Examples::StateMachines::CharacterParameters*  ____Parameters;

/// @brief Field _Equipment, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Animancer::Examples::StateMachines::Equipment>  ____Equipment;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::StateMachines::Character, ____Animancer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::StateMachines::Character, ____StateMachine) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::StateMachines::Character, ____Health) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::StateMachines::Character, ____Parameters) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::StateMachines::Character, ____Equipment) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::StateMachines::Character) == 0x48, "Size mismatch!");

} // namespace end def Animancer::Examples::StateMachines

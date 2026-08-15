#pragma once
// IWYU pragma private; include "Animancer/Examples/StateMachines/Equipment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(Equipment)
namespace Animancer::Examples::StateMachines {
class Weapon;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Animancer::Examples::StateMachines {
class Equipment;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::StateMachines::Equipment*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::StateMachines::Equipment*, "Animancer.Examples.StateMachines", "Equipment");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer::Examples::StateMachines {
// Is value type: false
// CS Name: Animancer.Examples.StateMachines.Equipment
class CORDL_TYPE Equipment : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Weapon, put=set_Weapon)) ::UnityW<::Animancer::Examples::StateMachines::Weapon>  Weapon;

/// @brief Field _Weapon, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Weapon, put=__cordl_internal_set__Weapon)) ::UnityW<::Animancer::Examples::StateMachines::Weapon>  _Weapon;

/// @brief Field _WeaponHolder, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__WeaponHolder, put=__cordl_internal_set__WeaponHolder)) ::UnityW<::UnityEngine::Transform>  _WeaponHolder;

/// @brief Method AttachWeapon, addr 0x1802faf60, size 0x100, virtual false, abstract: false, final false
inline void AttachWeapon() ;

/// @brief Method Awake, addr 0x1802fb060, size 0x10, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DetachWeapon, addr 0x1802fb070, size 0x90, virtual false, abstract: false, final false
inline void DetachWeapon() ;

static inline ::Animancer::Examples::StateMachines::Equipment* New_ctor() ;

constexpr ::UnityW<::Animancer::Examples::StateMachines::Weapon> const& __cordl_internal_get__Weapon() const;

constexpr ::UnityW<::Animancer::Examples::StateMachines::Weapon>& __cordl_internal_get__Weapon() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__WeaponHolder() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__WeaponHolder() ;

constexpr void __cordl_internal_set__Weapon(::UnityW<::Animancer::Examples::StateMachines::Weapon>  value) ;

constexpr void __cordl_internal_set__WeaponHolder(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Weapon, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::Animancer::Examples::StateMachines::Weapon> get_Weapon() ;

/// @brief Method set_Weapon, addr 0x1802fb100, size 0xb0, virtual false, abstract: false, final false
inline void set_Weapon(::Animancer::Examples::StateMachines::Weapon*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Equipment() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Equipment", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Equipment(Equipment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Equipment", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Equipment(Equipment const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20006};

/// @brief Field _WeaponHolder, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____WeaponHolder;

/// @brief Field _Weapon, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Animancer::Examples::StateMachines::Weapon>  ____Weapon;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::StateMachines::Equipment, ____WeaponHolder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::StateMachines::Equipment, ____Weapon) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::StateMachines::Equipment) == 0x30, "Size mismatch!");

} // namespace end def Animancer::Examples::StateMachines

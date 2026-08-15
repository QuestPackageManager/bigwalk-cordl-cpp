#pragma once
// IWYU pragma private; include "Animancer/Examples/AnimatorControllers/GameKit/GameKitCharacterBrain.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GameKitCharacterBrain)
namespace Animancer::Examples::AnimatorControllers::GameKit {
class AirborneState;
}
namespace Animancer::Examples::AnimatorControllers::GameKit {
class CharacterState;
}
namespace Animancer::Examples::AnimatorControllers::GameKit {
class Character;
}
namespace Animancer::FSM {
template<typename TState>
class StateMachine_1_InputBuffer;
}
// Forward declare root types
namespace Animancer::Examples::AnimatorControllers::GameKit {
class GameKitCharacterBrain;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain*, "Animancer.Examples.AnimatorControllers.GameKit", "GameKitCharacterBrain");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer::Examples::AnimatorControllers::GameKit {
// Is value type: false
// CS Name: Animancer.Examples.AnimatorControllers.GameKit.GameKitCharacterBrain
class CORDL_TYPE GameKitCharacterBrain : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _Attack, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Attack, put=__cordl_internal_set__Attack)) ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>  _Attack;

/// @brief Field _AttackInputTimeOut, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__AttackInputTimeOut, put=__cordl_internal_set__AttackInputTimeOut)) float_t  _AttackInputTimeOut;

/// @brief Field _Character, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Character, put=__cordl_internal_set__Character)) ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::Character>  _Character;

/// @brief Field _InputBuffer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__InputBuffer, put=__cordl_internal_set__InputBuffer)) ::Animancer::FSM::StateMachine_1_InputBuffer<::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>>*  _InputBuffer;

/// @brief Field _Jump, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Jump, put=__cordl_internal_set__Jump)) ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::AirborneState>  _Jump;

/// @brief Method Awake, addr 0x1802fbb00, size 0x70, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain* New_ctor() ;

/// @brief Method Update, addr 0x1802fbeb0, size 0x110, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateActions, addr 0x1802fbb70, size 0x110, virtual false, abstract: false, final false
inline void UpdateActions() ;

/// @brief Method UpdateMovement, addr 0x1802fbc80, size 0x230, virtual false, abstract: false, final false
inline void UpdateMovement() ;

constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState> const& __cordl_internal_get__Attack() const;

constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>& __cordl_internal_get__Attack() ;

constexpr float_t const& __cordl_internal_get__AttackInputTimeOut() const;

constexpr float_t& __cordl_internal_get__AttackInputTimeOut() ;

constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::Character> const& __cordl_internal_get__Character() const;

constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::Character>& __cordl_internal_get__Character() ;

constexpr ::Animancer::FSM::StateMachine_1_InputBuffer<::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>>* const& __cordl_internal_get__InputBuffer() const;

constexpr ::Animancer::FSM::StateMachine_1_InputBuffer<::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>>*& __cordl_internal_get__InputBuffer() ;

constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::AirborneState> const& __cordl_internal_get__Jump() const;

constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::AirborneState>& __cordl_internal_get__Jump() ;

constexpr void __cordl_internal_set__Attack(::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>  value) ;

constexpr void __cordl_internal_set__AttackInputTimeOut(float_t  value) ;

constexpr void __cordl_internal_set__Character(::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::Character>  value) ;

constexpr void __cordl_internal_set__InputBuffer(::Animancer::FSM::StateMachine_1_InputBuffer<::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>>*  value) ;

constexpr void __cordl_internal_set__Jump(::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::AirborneState>  value) ;

/// @brief Method .ctor, addr 0x1802fbfc0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameKitCharacterBrain() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameKitCharacterBrain", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameKitCharacterBrain(GameKitCharacterBrain && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameKitCharacterBrain", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameKitCharacterBrain(GameKitCharacterBrain const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19970};

/// @brief Field _Character, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::Character>  ____Character;

/// @brief Field _Jump, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::AirborneState>  ____Jump;

/// @brief Field _Attack, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>  ____Attack;

/// @brief Field _AttackInputTimeOut, offset: 0x38, size: 0x4, def value: None
 float_t  ____AttackInputTimeOut;

/// @brief Field _InputBuffer, offset: 0x40, size: 0x8, def value: None
 ::Animancer::FSM::StateMachine_1_InputBuffer<::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>>*  ____InputBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain, ____Character) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain, ____Jump) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain, ____Attack) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain, ____AttackInputTimeOut) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain, ____InputBuffer) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain) == 0x48, "Size mismatch!");

} // namespace end def Animancer::Examples::AnimatorControllers::GameKit

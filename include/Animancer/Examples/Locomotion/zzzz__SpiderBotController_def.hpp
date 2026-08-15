#pragma once
// IWYU pragma private; include "Animancer/Examples/Locomotion/SpiderBotController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SpiderBotController)
namespace Animancer::Examples::FineControl {
class SpiderBot;
}
namespace Animancer {
template<typename TParameter>
class MixerState_1;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Animancer::Examples::Locomotion {
class SpiderBotController;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::Locomotion::SpiderBotController*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::Locomotion::SpiderBotController*, "Animancer.Examples.Locomotion", "SpiderBotController");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Animancer::Examples::Locomotion {
// Is value type: false
// CS Name: Animancer.Examples.Locomotion.SpiderBotController
class CORDL_TYPE SpiderBotController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _Body, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Body, put=__cordl_internal_set__Body)) ::UnityW<::UnityEngine::Rigidbody>  _Body;

/// @brief Field _MoveState, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__MoveState, put=__cordl_internal_set__MoveState)) ::Animancer::MixerState_1<::UnityEngine::Vector2>*  _MoveState;

/// @brief Field _MovementDirection, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get__MovementDirection, put=__cordl_internal_set__MovementDirection)) ::UnityEngine::Vector3  _MovementDirection;

/// @brief Field _MovementSpeed, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__MovementSpeed, put=__cordl_internal_set__MovementSpeed)) float_t  _MovementSpeed;

/// @brief Field _SpiderBot, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__SpiderBot, put=__cordl_internal_set__SpiderBot)) ::UnityW<::Animancer::Examples::FineControl::SpiderBot>  _SpiderBot;

/// @brief Field _SprintMultiplier, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__SprintMultiplier, put=__cordl_internal_set__SprintMultiplier)) float_t  _SprintMultiplier;

/// @brief Field _TurnSpeed, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__TurnSpeed, put=__cordl_internal_set__TurnSpeed)) float_t  _TurnSpeed;

/// @brief Method Awake, addr 0x1803018a0, size 0xf0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0x180301990, size 0x70, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method GetMovementDirection, addr 0x180301a00, size 0x200, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetMovementDirection() ;

static inline ::Animancer::Examples::Locomotion::SpiderBotController* New_ctor() ;

/// @brief Method Update, addr 0x180301c00, size 0x560, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__Body() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__Body() ;

constexpr ::Animancer::MixerState_1<::UnityEngine::Vector2>* const& __cordl_internal_get__MoveState() const;

constexpr ::Animancer::MixerState_1<::UnityEngine::Vector2>*& __cordl_internal_get__MoveState() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__MovementDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__MovementDirection() ;

constexpr float_t const& __cordl_internal_get__MovementSpeed() const;

constexpr float_t& __cordl_internal_get__MovementSpeed() ;

constexpr ::UnityW<::Animancer::Examples::FineControl::SpiderBot> const& __cordl_internal_get__SpiderBot() const;

constexpr ::UnityW<::Animancer::Examples::FineControl::SpiderBot>& __cordl_internal_get__SpiderBot() ;

constexpr float_t const& __cordl_internal_get__SprintMultiplier() const;

constexpr float_t& __cordl_internal_get__SprintMultiplier() ;

constexpr float_t const& __cordl_internal_get__TurnSpeed() const;

constexpr float_t& __cordl_internal_get__TurnSpeed() ;

constexpr void __cordl_internal_set__Body(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set__MoveState(::Animancer::MixerState_1<::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set__MovementDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__MovementSpeed(float_t  value) ;

constexpr void __cordl_internal_set__SpiderBot(::UnityW<::Animancer::Examples::FineControl::SpiderBot>  value) ;

constexpr void __cordl_internal_set__SprintMultiplier(float_t  value) ;

constexpr void __cordl_internal_set__TurnSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0x180302160, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpiderBotController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpiderBotController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpiderBotController(SpiderBotController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpiderBotController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpiderBotController(SpiderBotController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20021};

/// @brief Field _SpiderBot, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::Examples::FineControl::SpiderBot>  ____SpiderBot;

/// @brief Field _Body, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____Body;

/// @brief Field _TurnSpeed, offset: 0x30, size: 0x4, def value: None
 float_t  ____TurnSpeed;

/// @brief Field _MovementSpeed, offset: 0x34, size: 0x4, def value: None
 float_t  ____MovementSpeed;

/// @brief Field _SprintMultiplier, offset: 0x38, size: 0x4, def value: None
 float_t  ____SprintMultiplier;

/// @brief Field _MoveState, offset: 0x40, size: 0x8, def value: None
 ::Animancer::MixerState_1<::UnityEngine::Vector2>*  ____MoveState;

/// @brief Field _MovementDirection, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____MovementDirection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::Locomotion::SpiderBotController, ____SpiderBot) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Locomotion::SpiderBotController, ____Body) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Locomotion::SpiderBotController, ____TurnSpeed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Locomotion::SpiderBotController, ____MovementSpeed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Locomotion::SpiderBotController, ____SprintMultiplier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Locomotion::SpiderBotController, ____MoveState) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Locomotion::SpiderBotController, ____MovementDirection) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::Locomotion::SpiderBotController) == 0x58, "Size mismatch!");

} // namespace end def Animancer::Examples::Locomotion

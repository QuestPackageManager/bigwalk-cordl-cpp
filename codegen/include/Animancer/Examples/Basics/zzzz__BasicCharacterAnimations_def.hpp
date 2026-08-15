#pragma once
// IWYU pragma private; include "Animancer/Examples/Basics/BasicCharacterAnimations.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BasicCharacterAnimations)
namespace Animancer::Examples::Basics {
struct BasicCharacterAnimations_State;
}
namespace Animancer {
class AnimancerComponent;
}
namespace Animancer {
class ClipTransition;
}
// Forward declare root types
namespace Animancer::Examples::Basics {
struct BasicCharacterAnimations_State;
}
namespace Animancer::Examples::Basics {
class BasicCharacterAnimations;
}
// Write type traits
MARK_VAL_T(::Animancer::Examples::Basics::BasicCharacterAnimations_State);
MARK_REF_T(::Animancer::Examples::Basics::BasicCharacterAnimations*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::Basics::BasicCharacterAnimations_State, "Animancer.Examples.Basics", "BasicCharacterAnimations/State");
DEFINE_IL2CPP_CLASS(::Animancer::Examples::Basics::BasicCharacterAnimations*, "Animancer.Examples.Basics", "BasicCharacterAnimations");
// Dependencies 
namespace Animancer::Examples::Basics {
// Is value type: true
// CS Name: Animancer.Examples.Basics.BasicCharacterAnimations/State
struct CORDL_TYPE BasicCharacterAnimations_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BasicCharacterAnimations_State_Unwrapped
enum struct __BasicCharacterAnimations_State_Unwrapped : int32_t {
__E_NotActing = static_cast<int32_t>(0x0),
__E_Acting = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BasicCharacterAnimations_State_Unwrapped () const noexcept {
return static_cast<__BasicCharacterAnimations_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BasicCharacterAnimations_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BasicCharacterAnimations_State(int32_t  value__) noexcept;

/// @brief Field Acting value: I32(1)
static ::Animancer::Examples::Basics::BasicCharacterAnimations_State const Acting;

/// @brief Field NotActing value: I32(0)
static ::Animancer::Examples::Basics::BasicCharacterAnimations_State const NotActing;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20033};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::Basics::BasicCharacterAnimations_State, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::Basics::BasicCharacterAnimations_State) == 0x4, "Size mismatch!");

} // namespace end def Animancer::Examples::Basics
// Dependencies Animancer.Examples.Basics.BasicCharacterAnimations::State, UnityEngine.MonoBehaviour
namespace Animancer::Examples::Basics {
// Is value type: false
// CS Name: Animancer.Examples.Basics.BasicCharacterAnimations
class CORDL_TYPE BasicCharacterAnimations : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using State = ::Animancer::Examples::Basics::BasicCharacterAnimations_State;

/// @brief Field _Action, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Action, put=__cordl_internal_set__Action)) ::Animancer::ClipTransition*  _Action;

/// @brief Field _Animancer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animancer, put=__cordl_internal_set__Animancer)) ::UnityW<::Animancer::AnimancerComponent>  _Animancer;

/// @brief Field _CurrentState, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentState, put=__cordl_internal_set__CurrentState)) ::Animancer::Examples::Basics::BasicCharacterAnimations_State  _CurrentState;

/// @brief Field _Idle, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Idle, put=__cordl_internal_set__Idle)) ::Animancer::ClipTransition*  _Idle;

/// @brief Field _Move, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Move, put=__cordl_internal_set__Move)) ::Animancer::ClipTransition*  _Move;

/// @brief Method Awake, addr 0x1802f6db0, size 0x80, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Animancer::Examples::Basics::BasicCharacterAnimations* New_ctor() ;

/// @brief Method OnActionEnd, addr 0x1802f6e30, size 0x70, virtual false, abstract: false, final false
inline void OnActionEnd() ;

/// @brief Method Update, addr 0x1802f6f60, size 0xb0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateAction, addr 0x1802f6ea0, size 0x50, virtual false, abstract: false, final false
inline void UpdateAction() ;

/// @brief Method UpdateMovement, addr 0x1802f6ef0, size 0x70, virtual false, abstract: false, final false
inline void UpdateMovement() ;

constexpr ::Animancer::ClipTransition* const& __cordl_internal_get__Action() const;

constexpr ::Animancer::ClipTransition*& __cordl_internal_get__Action() ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get__Animancer() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get__Animancer() ;

constexpr ::Animancer::Examples::Basics::BasicCharacterAnimations_State const& __cordl_internal_get__CurrentState() const;

constexpr ::Animancer::Examples::Basics::BasicCharacterAnimations_State& __cordl_internal_get__CurrentState() ;

constexpr ::Animancer::ClipTransition* const& __cordl_internal_get__Idle() const;

constexpr ::Animancer::ClipTransition*& __cordl_internal_get__Idle() ;

constexpr ::Animancer::ClipTransition* const& __cordl_internal_get__Move() const;

constexpr ::Animancer::ClipTransition*& __cordl_internal_get__Move() ;

constexpr void __cordl_internal_set__Action(::Animancer::ClipTransition*  value) ;

constexpr void __cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set__CurrentState(::Animancer::Examples::Basics::BasicCharacterAnimations_State  value) ;

constexpr void __cordl_internal_set__Idle(::Animancer::ClipTransition*  value) ;

constexpr void __cordl_internal_set__Move(::Animancer::ClipTransition*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BasicCharacterAnimations() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BasicCharacterAnimations", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BasicCharacterAnimations(BasicCharacterAnimations && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BasicCharacterAnimations", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BasicCharacterAnimations(BasicCharacterAnimations const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20034};

/// @brief Field _Animancer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ____Animancer;

/// @brief Field _Idle, offset: 0x28, size: 0x8, def value: None
 ::Animancer::ClipTransition*  ____Idle;

/// @brief Field _Move, offset: 0x30, size: 0x8, def value: None
 ::Animancer::ClipTransition*  ____Move;

/// @brief Field _Action, offset: 0x38, size: 0x8, def value: None
 ::Animancer::ClipTransition*  ____Action;

/// @brief Field _CurrentState, offset: 0x40, size: 0x4, def value: None
 ::Animancer::Examples::Basics::BasicCharacterAnimations_State  ____CurrentState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::Basics::BasicCharacterAnimations, ____Animancer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Basics::BasicCharacterAnimations, ____Idle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Basics::BasicCharacterAnimations, ____Move) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Basics::BasicCharacterAnimations, ____Action) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Basics::BasicCharacterAnimations, ____CurrentState) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::Basics::BasicCharacterAnimations) == 0x48, "Size mismatch!");

} // namespace end def Animancer::Examples::Basics

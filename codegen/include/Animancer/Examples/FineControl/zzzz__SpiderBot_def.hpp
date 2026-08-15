#pragma once
// IWYU pragma private; include "Animancer/Examples/FineControl/SpiderBot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SpiderBot)
namespace Animancer {
class AnimancerComponent;
}
namespace Animancer {
class ClipTransition;
}
namespace Animancer {
class ITransition;
}
// Forward declare root types
namespace Animancer::Examples::FineControl {
class SpiderBot;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::FineControl::SpiderBot*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::FineControl::SpiderBot*, "Animancer.Examples.FineControl", "SpiderBot");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer::Examples::FineControl {
// Is value type: false
// CS Name: Animancer.Examples.FineControl.SpiderBot
class CORDL_TYPE SpiderBot : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Animancer)) ::UnityW<::Animancer::AnimancerComponent>  Animancer;

 __declspec(property(get=get_IsMoving, put=set_IsMoving)) bool  IsMoving;

 __declspec(property(get=get_Move)) ::Animancer::ITransition*  Move;

/// @brief Field _Animancer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animancer, put=__cordl_internal_set__Animancer)) ::UnityW<::Animancer::AnimancerComponent>  _Animancer;

/// @brief Field _IsMoving, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsMoving, put=__cordl_internal_set__IsMoving)) bool  _IsMoving;

/// @brief Field _Move, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Move, put=__cordl_internal_set__Move)) ::Animancer::ITransition*  _Move;

/// @brief Field _WakeUp, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__WakeUp, put=__cordl_internal_set__WakeUp)) ::Animancer::ClipTransition*  _WakeUp;

/// @brief Method Awake, addr 0x180302180, size 0xc0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GoToSleep, addr 0x180302240, size 0xa0, virtual false, abstract: false, final false
inline void GoToSleep() ;

static inline ::Animancer::Examples::FineControl::SpiderBot* New_ctor() ;

/// @brief Method OnWakeUpEnd, addr 0x1803022e0, size 0x70, virtual false, abstract: false, final false
inline void OnWakeUpEnd() ;

/// @brief Method WakeUp, addr 0x180302350, size 0x70, virtual false, abstract: false, final false
inline void WakeUp() ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get__Animancer() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get__Animancer() ;

constexpr bool const& __cordl_internal_get__IsMoving() const;

constexpr bool& __cordl_internal_get__IsMoving() ;

constexpr ::Animancer::ITransition* const& __cordl_internal_get__Move() const;

constexpr ::Animancer::ITransition*& __cordl_internal_get__Move() ;

constexpr ::Animancer::ClipTransition* const& __cordl_internal_get__WakeUp() const;

constexpr ::Animancer::ClipTransition*& __cordl_internal_get__WakeUp() ;

constexpr void __cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set__IsMoving(bool  value) ;

constexpr void __cordl_internal_set__Move(::Animancer::ITransition*  value) ;

constexpr void __cordl_internal_set__WakeUp(::Animancer::ClipTransition*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Animancer, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::Animancer::AnimancerComponent> get_Animancer() ;

/// @brief Method get_IsMoving, addr 0x1803023c0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsMoving() ;

/// @brief Method get_Move, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::Animancer::ITransition* get_Move() ;

/// @brief Method set_IsMoving, addr 0x1803023d0, size 0xf0, virtual false, abstract: false, final false
inline void set_IsMoving(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpiderBot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpiderBot", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpiderBot(SpiderBot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpiderBot", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpiderBot(SpiderBot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20023};

/// @brief Field _Animancer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ____Animancer;

/// @brief Field _WakeUp, offset: 0x28, size: 0x8, def value: None
 ::Animancer::ClipTransition*  ____WakeUp;

/// @brief Field _Move, offset: 0x30, size: 0x8, def value: None
 ::Animancer::ITransition*  ____Move;

/// @brief Field _IsMoving, offset: 0x38, size: 0x1, def value: None
 bool  ____IsMoving;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::FineControl::SpiderBot, ____Animancer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::FineControl::SpiderBot, ____WakeUp) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::FineControl::SpiderBot, ____Move) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::FineControl::SpiderBot, ____IsMoving) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::FineControl::SpiderBot) == 0x40, "Size mismatch!");

} // namespace end def Animancer::Examples::FineControl

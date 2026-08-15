#pragma once
// IWYU pragma private; include "GlobalNamespace/TimerDialController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimerDialController)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PeckSwitch;
}
namespace GlobalNamespace {
struct TimerDialController_DialState;
}
namespace GlobalNamespace {
class TrackedPeckState;
}
namespace GlobalNamespace {
class ValidatorDisplay;
}
// Forward declare root types
namespace GlobalNamespace {
struct TimerDialController_DialState;
}
namespace GlobalNamespace {
class TimerDialController;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TimerDialController_DialState);
MARK_REF_T(::GlobalNamespace::TimerDialController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimerDialController_DialState, "", "TimerDialController/DialState");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimerDialController*, "", "TimerDialController");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TimerDialController/DialState
struct CORDL_TYPE TimerDialController_DialState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TimerDialController_DialState_Unwrapped
enum struct __TimerDialController_DialState_Unwrapped : int32_t {
__E_Off = static_cast<int32_t>(0x0),
__E_Primed = static_cast<int32_t>(0x1),
__E_Satisfied = static_cast<int32_t>(0x2),
__E_Failure = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TimerDialController_DialState_Unwrapped () const noexcept {
return static_cast<__TimerDialController_DialState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TimerDialController_DialState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TimerDialController_DialState(int32_t  value__) noexcept;

/// @brief Field Failure value: I32(3)
static ::GlobalNamespace::TimerDialController_DialState const Failure;

/// @brief Field Off value: I32(0)
static ::GlobalNamespace::TimerDialController_DialState const Off;

/// @brief Field Primed value: I32(1)
static ::GlobalNamespace::TimerDialController_DialState const Primed;

/// @brief Field Satisfied value: I32(2)
static ::GlobalNamespace::TimerDialController_DialState const Satisfied;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5130};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimerDialController_DialState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TimerDialController_DialState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PeckSystemReference, TimerDialController::DialState, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TimerDialController
class CORDL_TYPE TimerDialController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DialState = ::GlobalNamespace::TimerDialController_DialState;

/// @brief Field dialState, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_dialState, put=__cordl_internal_set_dialState)) ::GlobalNamespace::TimerDialController_DialState  dialState;

/// @brief Field earlyFailureSystem, offset 0x78, size 0x28 
 __declspec(property(get=__cordl_internal_get_earlyFailureSystem, put=__cordl_internal_set_earlyFailureSystem)) ::GlobalNamespace::PeckSystemReference  earlyFailureSystem;

/// @brief Field ignitionSystem, offset 0x28, size 0x28 
 __declspec(property(get=__cordl_internal_get_ignitionSystem, put=__cordl_internal_set_ignitionSystem)) ::GlobalNamespace::PeckSystemReference  ignitionSystem;

/// @brief Field isPrimedSystem, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_isPrimedSystem, put=__cordl_internal_set_isPrimedSystem)) ::UnityW<::GlobalNamespace::TrackedPeckState>  isPrimedSystem;

/// @brief Field logVerbose, offset 0xbc, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field outcomeSwitchFailure, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_outcomeSwitchFailure, put=__cordl_internal_set_outcomeSwitchFailure)) ::UnityW<::GlobalNamespace::PeckSwitch>  outcomeSwitchFailure;

/// @brief Field outcomeSwitchSucess, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_outcomeSwitchSucess, put=__cordl_internal_set_outcomeSwitchSucess)) ::UnityW<::GlobalNamespace::PeckSwitch>  outcomeSwitchSucess;

/// @brief Field period, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_period, put=__cordl_internal_set_period)) float_t  period;

/// @brief Field satisfiedSystem, offset 0x50, size 0x28 
 __declspec(property(get=__cordl_internal_get_satisfiedSystem, put=__cordl_internal_set_satisfiedSystem)) ::GlobalNamespace::PeckSystemReference  satisfiedSystem;

/// @brief Field startOfPeriod, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_startOfPeriod, put=__cordl_internal_set_startOfPeriod)) double_t  startOfPeriod;

/// @brief Field startOfSequence, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_startOfSequence, put=__cordl_internal_set_startOfSequence)) double_t  startOfSequence;

/// @brief Field validatorDisplay, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_validatorDisplay, put=__cordl_internal_set_validatorDisplay)) ::UnityW<::GlobalNamespace::ValidatorDisplay>  validatorDisplay;

/// @brief Method Awake, addr 0x180418cf0, size 0xc0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DoMidnight, addr 0x180418db0, size 0x1b0, virtual false, abstract: false, final false
inline void DoMidnight() ;

/// @brief Method EarlyFailurePeck, addr 0x180418f60, size 0x90, virtual false, abstract: false, final false
inline void EarlyFailurePeck(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method Failure, addr 0x180418ff0, size 0xa0, virtual false, abstract: false, final false
inline void Failure() ;

/// @brief Method GetNormalizedTime, addr 0x180419090, size 0x40, virtual false, abstract: false, final false
inline float_t GetNormalizedTime() ;

/// @brief Method IgnitionPeck, addr 0x1804190d0, size 0xa0, virtual false, abstract: false, final false
inline void IgnitionPeck(::GlobalNamespace::PeckContext  peckContext) ;

static inline ::GlobalNamespace::TimerDialController* New_ctor() ;

/// @brief Method SatisfiedPeck, addr 0x180419170, size 0x80, virtual false, abstract: false, final false
inline void SatisfiedPeck(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method SetPrimed, addr 0x1804191f0, size 0x60, virtual false, abstract: false, final false
inline void SetPrimed(bool  isPrimed) ;

/// @brief Method Stop, addr 0x180419250, size 0x30, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method Success, addr 0x180419280, size 0xa0, virtual false, abstract: false, final false
inline void Success() ;

/// @brief Method Update, addr 0x180419320, size 0x140, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::GlobalNamespace::TimerDialController_DialState const& __cordl_internal_get_dialState() const;

constexpr ::GlobalNamespace::TimerDialController_DialState& __cordl_internal_get_dialState() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_earlyFailureSystem() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_earlyFailureSystem() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_ignitionSystem() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_ignitionSystem() ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_isPrimedSystem() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_isPrimedSystem() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_outcomeSwitchFailure() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_outcomeSwitchFailure() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_outcomeSwitchSucess() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_outcomeSwitchSucess() ;

constexpr float_t const& __cordl_internal_get_period() const;

constexpr float_t& __cordl_internal_get_period() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_satisfiedSystem() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_satisfiedSystem() ;

constexpr double_t const& __cordl_internal_get_startOfPeriod() const;

constexpr double_t& __cordl_internal_get_startOfPeriod() ;

constexpr double_t const& __cordl_internal_get_startOfSequence() const;

constexpr double_t& __cordl_internal_get_startOfSequence() ;

constexpr ::UnityW<::GlobalNamespace::ValidatorDisplay> const& __cordl_internal_get_validatorDisplay() const;

constexpr ::UnityW<::GlobalNamespace::ValidatorDisplay>& __cordl_internal_get_validatorDisplay() ;

constexpr void __cordl_internal_set_dialState(::GlobalNamespace::TimerDialController_DialState  value) ;

constexpr void __cordl_internal_set_earlyFailureSystem(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_ignitionSystem(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_isPrimedSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_outcomeSwitchFailure(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_outcomeSwitchSucess(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_period(float_t  value) ;

constexpr void __cordl_internal_set_satisfiedSystem(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_startOfPeriod(double_t  value) ;

constexpr void __cordl_internal_set_startOfSequence(double_t  value) ;

constexpr void __cordl_internal_set_validatorDisplay(::UnityW<::GlobalNamespace::ValidatorDisplay>  value) ;

/// @brief Method .ctor, addr 0x180419460, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimerDialController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimerDialController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimerDialController(TimerDialController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimerDialController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimerDialController(TimerDialController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5131};

/// @brief Field validatorDisplay, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ValidatorDisplay>  ___validatorDisplay;

/// @brief Field ignitionSystem, offset: 0x28, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___ignitionSystem;

/// @brief Field satisfiedSystem, offset: 0x50, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___satisfiedSystem;

/// @brief Field earlyFailureSystem, offset: 0x78, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___earlyFailureSystem;

/// @brief Field outcomeSwitchSucess, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___outcomeSwitchSucess;

/// @brief Field outcomeSwitchFailure, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___outcomeSwitchFailure;

/// @brief Field isPrimedSystem, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___isPrimedSystem;

/// @brief Field period, offset: 0xb8, size: 0x4, def value: None
 float_t  ___period;

/// @brief Field logVerbose, offset: 0xbc, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field dialState, offset: 0xc0, size: 0x4, def value: None
 ::GlobalNamespace::TimerDialController_DialState  ___dialState;

/// @brief Field startOfSequence, offset: 0xc8, size: 0x8, def value: None
 double_t  ___startOfSequence;

/// @brief Field startOfPeriod, offset: 0xd0, size: 0x8, def value: None
 double_t  ___startOfPeriod;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimerDialController, ___validatorDisplay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimerDialController, ___ignitionSystem) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimerDialController, ___satisfiedSystem) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimerDialController, ___earlyFailureSystem) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimerDialController, ___outcomeSwitchSucess) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimerDialController, ___outcomeSwitchFailure) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimerDialController, ___isPrimedSystem) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimerDialController, ___period) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimerDialController, ___logVerbose) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimerDialController, ___dialState) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimerDialController, ___startOfSequence) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimerDialController, ___startOfPeriod) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TimerDialController) == 0xd8, "Size mismatch!");

} // namespace end def GlobalNamespace

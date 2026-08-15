#pragma once
// IWYU pragma private; include "GlobalNamespace/CountingController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckStateFilter_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CountingController)
namespace GlobalNamespace {
struct CountingController_CountingState;
}
namespace GlobalNamespace {
class CountingDisplay;
}
namespace GlobalNamespace {
class CountingMachine;
}
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PeckSwitch;
}
namespace GlobalNamespace {
class PulseGenerator;
}
namespace GlobalNamespace {
class ValidatorDisplay;
}
// Forward declare root types
namespace GlobalNamespace {
struct CountingController_CountingState;
}
namespace GlobalNamespace {
class CountingController;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CountingController_CountingState);
MARK_REF_T(::GlobalNamespace::CountingController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CountingController_CountingState, "", "CountingController/CountingState");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CountingController*, "", "CountingController");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: CountingController/CountingState
struct CORDL_TYPE CountingController_CountingState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CountingController_CountingState_Unwrapped
enum struct __CountingController_CountingState_Unwrapped : int32_t {
__E_Idle = static_cast<int32_t>(0x0),
__E_Playback = static_cast<int32_t>(0x1),
__E_Input = static_cast<int32_t>(0x2),
__E_Validating = static_cast<int32_t>(0x3),
__E_Blocked = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CountingController_CountingState_Unwrapped () const noexcept {
return static_cast<__CountingController_CountingState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CountingController_CountingState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CountingController_CountingState(int32_t  value__) noexcept;

/// @brief Field Blocked value: I32(4)
static ::GlobalNamespace::CountingController_CountingState const Blocked;

/// @brief Field Idle value: I32(0)
static ::GlobalNamespace::CountingController_CountingState const Idle;

/// @brief Field Input value: I32(2)
static ::GlobalNamespace::CountingController_CountingState const Input;

/// @brief Field Playback value: I32(1)
static ::GlobalNamespace::CountingController_CountingState const Playback;

/// @brief Field Validating value: I32(3)
static ::GlobalNamespace::CountingController_CountingState const Validating;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5036};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CountingController_CountingState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CountingController_CountingState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies CountingController::CountingState, PeckStateFilter, PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CountingController
class CORDL_TYPE CountingController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CountingState = ::GlobalNamespace::CountingController_CountingState;

/// @brief Field SetToBlockedFilter, offset 0xf0, size 0x10 
 __declspec(property(get=__cordl_internal_get_SetToBlockedFilter, put=__cordl_internal_set_SetToBlockedFilter)) ::GlobalNamespace::PeckStateFilter  SetToBlockedFilter;

/// @brief Field SetToIdleFilter, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get_SetToIdleFilter, put=__cordl_internal_set_SetToIdleFilter)) ::GlobalNamespace::PeckStateFilter  SetToIdleFilter;

/// @brief Field SetToPlayback, offset 0x78, size 0x28 
 __declspec(property(get=__cordl_internal_get_SetToPlayback, put=__cordl_internal_set_SetToPlayback)) ::GlobalNamespace::PeckSystemReference  SetToPlayback;

/// @brief Field countingDisplay, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_countingDisplay, put=__cordl_internal_set_countingDisplay)) ::UnityW<::GlobalNamespace::CountingDisplay>  countingDisplay;

/// @brief Field countingMachine, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_countingMachine, put=__cordl_internal_set_countingMachine)) ::UnityW<::GlobalNamespace::CountingMachine>  countingMachine;

/// @brief Field countingState, offset 0x164, size 0x4 
 __declspec(property(get=__cordl_internal_get_countingState, put=__cordl_internal_set_countingState)) ::GlobalNamespace::CountingController_CountingState  countingState;

/// @brief Field drumRollDuration, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get_drumRollDuration, put=__cordl_internal_set_drumRollDuration)) float_t  drumRollDuration;

/// @brief Field failureSwitch, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_failureSwitch, put=__cordl_internal_set_failureSwitch)) ::UnityW<::GlobalNamespace::PeckSwitch>  failureSwitch;

 __declspec(property(get=get_isServer)) bool  isServer;

/// @brief Field logVerbose, offset 0x160, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field playbackPrimeSwitch, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_playbackPrimeSwitch, put=__cordl_internal_set_playbackPrimeSwitch)) ::UnityW<::GlobalNamespace::PeckSwitch>  playbackPrimeSwitch;

/// @brief Field playbackUnprimeSwitch, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_playbackUnprimeSwitch, put=__cordl_internal_set_playbackUnprimeSwitch)) ::UnityW<::GlobalNamespace::PeckSwitch>  playbackUnprimeSwitch;

/// @brief Field pulseGenerator, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_pulseGenerator, put=__cordl_internal_set_pulseGenerator)) ::UnityW<::GlobalNamespace::PulseGenerator>  pulseGenerator;

/// @brief Field setToBlocked, offset 0xc8, size 0x28 
 __declspec(property(get=__cordl_internal_get_setToBlocked, put=__cordl_internal_set_setToBlocked)) ::GlobalNamespace::PeckSystemReference  setToBlocked;

/// @brief Field setToIdle, offset 0x40, size 0x28 
 __declspec(property(get=__cordl_internal_get_setToIdle, put=__cordl_internal_set_setToIdle)) ::GlobalNamespace::PeckSystemReference  setToIdle;

/// @brief Field setToValidating, offset 0xa0, size 0x28 
 __declspec(property(get=__cordl_internal_get_setToValidating, put=__cordl_internal_set_setToValidating)) ::GlobalNamespace::PeckSystemReference  setToValidating;

/// @brief Field stateSystem, offset 0x120, size 0x28 
 __declspec(property(get=__cordl_internal_get_stateSystem, put=__cordl_internal_set_stateSystem)) ::GlobalNamespace::PeckSystemReference  stateSystem;

/// @brief Field timeDrumRollStart, offset 0x15c, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeDrumRollStart, put=__cordl_internal_set_timeDrumRollStart)) float_t  timeDrumRollStart;

/// @brief Field validationPrimeSwitch, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_validationPrimeSwitch, put=__cordl_internal_set_validationPrimeSwitch)) ::UnityW<::GlobalNamespace::PeckSwitch>  validationPrimeSwitch;

/// @brief Field validationUnprimeSwitch, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_validationUnprimeSwitch, put=__cordl_internal_set_validationUnprimeSwitch)) ::UnityW<::GlobalNamespace::PeckSwitch>  validationUnprimeSwitch;

/// @brief Field validatorDisplay, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_validatorDisplay, put=__cordl_internal_set_validatorDisplay)) ::UnityW<::GlobalNamespace::ValidatorDisplay>  validatorDisplay;

/// @brief Field victorySwitch, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_victorySwitch, put=__cordl_internal_set_victorySwitch)) ::UnityW<::GlobalNamespace::PeckSwitch>  victorySwitch;

/// @brief Method AfterDrumRoll, addr 0x1803fa8b0, size 0x180, virtual false, abstract: false, final false
inline void AfterDrumRoll() ;

/// @brief Method Awake, addr 0x1803faa30, size 0x1d0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::CountingController* New_ctor() ;

/// @brief Method OnSequenceFinishPlayback, addr 0x1803fac00, size 0x10, virtual false, abstract: false, final false
inline void OnSequenceFinishPlayback() ;

/// @brief Method SetCountingState, addr 0x1803fac10, size 0x530, virtual false, abstract: false, final false
inline void SetCountingState(::GlobalNamespace::CountingController_CountingState  newCountingState) ;

/// @brief Method SetToBlockedPeck, addr 0x1803fb140, size 0x50, virtual false, abstract: false, final false
inline void SetToBlockedPeck(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method SetToIdlePeck, addr 0x1803fb190, size 0x50, virtual false, abstract: false, final false
inline void SetToIdlePeck(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method SetToPlaybackPeck, addr 0x1803fb1e0, size 0x20, virtual false, abstract: false, final false
inline void SetToPlaybackPeck(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method SetToValidatingPeck, addr 0x1803fb200, size 0x20, virtual false, abstract: false, final false
inline void SetToValidatingPeck(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method Start, addr 0x1803fb220, size 0x10, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x1803fb230, size 0x120, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::GlobalNamespace::PeckStateFilter const& __cordl_internal_get_SetToBlockedFilter() const;

constexpr ::GlobalNamespace::PeckStateFilter& __cordl_internal_get_SetToBlockedFilter() ;

constexpr ::GlobalNamespace::PeckStateFilter const& __cordl_internal_get_SetToIdleFilter() const;

constexpr ::GlobalNamespace::PeckStateFilter& __cordl_internal_get_SetToIdleFilter() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_SetToPlayback() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_SetToPlayback() ;

constexpr ::UnityW<::GlobalNamespace::CountingDisplay> const& __cordl_internal_get_countingDisplay() const;

constexpr ::UnityW<::GlobalNamespace::CountingDisplay>& __cordl_internal_get_countingDisplay() ;

constexpr ::UnityW<::GlobalNamespace::CountingMachine> const& __cordl_internal_get_countingMachine() const;

constexpr ::UnityW<::GlobalNamespace::CountingMachine>& __cordl_internal_get_countingMachine() ;

constexpr ::GlobalNamespace::CountingController_CountingState const& __cordl_internal_get_countingState() const;

constexpr ::GlobalNamespace::CountingController_CountingState& __cordl_internal_get_countingState() ;

constexpr float_t const& __cordl_internal_get_drumRollDuration() const;

constexpr float_t& __cordl_internal_get_drumRollDuration() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_failureSwitch() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_failureSwitch() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_playbackPrimeSwitch() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_playbackPrimeSwitch() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_playbackUnprimeSwitch() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_playbackUnprimeSwitch() ;

constexpr ::UnityW<::GlobalNamespace::PulseGenerator> const& __cordl_internal_get_pulseGenerator() const;

constexpr ::UnityW<::GlobalNamespace::PulseGenerator>& __cordl_internal_get_pulseGenerator() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_setToBlocked() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_setToBlocked() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_setToIdle() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_setToIdle() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_setToValidating() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_setToValidating() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_stateSystem() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_stateSystem() ;

constexpr float_t const& __cordl_internal_get_timeDrumRollStart() const;

constexpr float_t& __cordl_internal_get_timeDrumRollStart() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_validationPrimeSwitch() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_validationPrimeSwitch() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_validationUnprimeSwitch() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_validationUnprimeSwitch() ;

constexpr ::UnityW<::GlobalNamespace::ValidatorDisplay> const& __cordl_internal_get_validatorDisplay() const;

constexpr ::UnityW<::GlobalNamespace::ValidatorDisplay>& __cordl_internal_get_validatorDisplay() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_victorySwitch() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_victorySwitch() ;

constexpr void __cordl_internal_set_SetToBlockedFilter(::GlobalNamespace::PeckStateFilter  value) ;

constexpr void __cordl_internal_set_SetToIdleFilter(::GlobalNamespace::PeckStateFilter  value) ;

constexpr void __cordl_internal_set_SetToPlayback(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_countingDisplay(::UnityW<::GlobalNamespace::CountingDisplay>  value) ;

constexpr void __cordl_internal_set_countingMachine(::UnityW<::GlobalNamespace::CountingMachine>  value) ;

constexpr void __cordl_internal_set_countingState(::GlobalNamespace::CountingController_CountingState  value) ;

constexpr void __cordl_internal_set_drumRollDuration(float_t  value) ;

constexpr void __cordl_internal_set_failureSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_playbackPrimeSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_playbackUnprimeSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_pulseGenerator(::UnityW<::GlobalNamespace::PulseGenerator>  value) ;

constexpr void __cordl_internal_set_setToBlocked(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_setToIdle(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_setToValidating(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_stateSystem(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_timeDrumRollStart(float_t  value) ;

constexpr void __cordl_internal_set_validationPrimeSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_validationUnprimeSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_validatorDisplay(::UnityW<::GlobalNamespace::ValidatorDisplay>  value) ;

constexpr void __cordl_internal_set_victorySwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

/// @brief Method .ctor, addr 0x1803fb350, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_isServer, addr 0x1803fb370, size 0x20, virtual false, abstract: false, final false
inline bool get_isServer() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CountingController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CountingController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CountingController(CountingController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CountingController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CountingController(CountingController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5037};

/// @brief Field pulseGenerator, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PulseGenerator>  ___pulseGenerator;

/// @brief Field countingMachine, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CountingMachine>  ___countingMachine;

/// @brief Field validatorDisplay, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ValidatorDisplay>  ___validatorDisplay;

/// @brief Field countingDisplay, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CountingDisplay>  ___countingDisplay;

/// @brief Field setToIdle, offset: 0x40, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___setToIdle;

/// @brief Field SetToIdleFilter, offset: 0x68, size: 0x10, def value: None
 ::GlobalNamespace::PeckStateFilter  ___SetToIdleFilter;

/// @brief Field SetToPlayback, offset: 0x78, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___SetToPlayback;

/// @brief Field setToValidating, offset: 0xa0, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___setToValidating;

/// @brief Field setToBlocked, offset: 0xc8, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___setToBlocked;

/// @brief Field SetToBlockedFilter, offset: 0xf0, size: 0x10, def value: None
 ::GlobalNamespace::PeckStateFilter  ___SetToBlockedFilter;

/// @brief Field validationPrimeSwitch, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___validationPrimeSwitch;

/// @brief Field validationUnprimeSwitch, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___validationUnprimeSwitch;

/// @brief Field playbackPrimeSwitch, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___playbackPrimeSwitch;

/// @brief Field playbackUnprimeSwitch, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___playbackUnprimeSwitch;

/// @brief Field stateSystem, offset: 0x120, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___stateSystem;

/// @brief Field victorySwitch, offset: 0x148, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___victorySwitch;

/// @brief Field failureSwitch, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___failureSwitch;

/// @brief Field drumRollDuration, offset: 0x158, size: 0x4, def value: None
 float_t  ___drumRollDuration;

/// @brief Field timeDrumRollStart, offset: 0x15c, size: 0x4, def value: None
 float_t  ___timeDrumRollStart;

/// @brief Field logVerbose, offset: 0x160, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field countingState, offset: 0x164, size: 0x4, def value: None
 ::GlobalNamespace::CountingController_CountingState  ___countingState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CountingController, ___pulseGenerator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingController, ___countingMachine) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingController, ___validatorDisplay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingController, ___countingDisplay) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingController, ___setToIdle) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingController, ___SetToIdleFilter) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingController, ___SetToPlayback) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingController, ___setToValidating) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingController, ___setToBlocked) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingController, ___SetToBlockedFilter) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingController, ___validationPrimeSwitch) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingController, ___validationUnprimeSwitch) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingController, ___playbackPrimeSwitch) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingController, ___playbackUnprimeSwitch) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingController, ___stateSystem) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingController, ___victorySwitch) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingController, ___failureSwitch) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingController, ___drumRollDuration) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingController, ___timeDrumRollStart) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingController, ___logVerbose) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingController, ___countingState) == 0x164, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CountingController) == 0x168, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectTimer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckStateFilter_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PeckEffectTimer)
namespace GlobalNamespace {
class IOccasional;
}
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PeckSwitch;
}
namespace GlobalNamespace {
class TrackedPeckState;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckEffectTimer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckEffectTimer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectTimer*, "", "PeckEffectTimer");
// Dependencies PeckStateFilter, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectTimer
class CORDL_TYPE PeckEffectTimer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field duration, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field endTime, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_endTime, put=__cordl_internal_set_endTime)) double_t  endTime;

/// @brief Field logVerbose, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field onFinish, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFinish, put=__cordl_internal_set_onFinish)) ::UnityW<::GlobalNamespace::PeckSwitch>  onFinish;

/// @brief Field onTimerChange, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_onTimerChange, put=__cordl_internal_set_onTimerChange)) ::System::Action*  onTimerChange;

/// @brief Field onTimerFinish, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_onTimerFinish, put=__cordl_internal_set_onTimerFinish)) ::System::Action*  onTimerFinish;

/// @brief Field onTimerStart, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_onTimerStart, put=__cordl_internal_set_onTimerStart)) ::System::Action*  onTimerStart;

/// @brief Field stateFilter, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_stateFilter, put=__cordl_internal_set_stateFilter)) ::GlobalNamespace::PeckStateFilter  stateFilter;

/// @brief Field timerActive, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_timerActive, put=__cordl_internal_set_timerActive)) bool  timerActive;

/// @brief Field trackedStateSystem, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_trackedStateSystem, put=__cordl_internal_set_trackedStateSystem)) ::UnityW<::GlobalNamespace::TrackedPeckState>  trackedStateSystem;

/// @brief Convert operator to "::GlobalNamespace::IOccasional"
constexpr operator  ::GlobalNamespace::IOccasional*() noexcept;

/// @brief Method Awake, addr 0x18044fd90, size 0x70, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetNormalizedTimeRemaining, addr 0x18044fe00, size 0x50, virtual false, abstract: false, final false
inline float_t GetNormalizedTimeRemaining() ;

/// @brief Method GetTimeRemaining, addr 0x18044fe50, size 0x40, virtual false, abstract: false, final false
inline float_t GetTimeRemaining() ;

static inline ::GlobalNamespace::PeckEffectTimer* New_ctor() ;

/// @brief Method OccasionalUpdate, addr 0x18044fe90, size 0x210, virtual true, abstract: false, final true
inline void OccasionalUpdate() ;

/// @brief Method OnDestroy, addr 0x1804500a0, size 0x60, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Peck, addr 0x180450100, size 0x1d0, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method SetTimerActive, addr 0x1804502d0, size 0x80, virtual false, abstract: false, final false
inline void SetTimerActive(bool  active) ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr double_t const& __cordl_internal_get_endTime() const;

constexpr double_t& __cordl_internal_get_endTime() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onFinish() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onFinish() ;

constexpr ::System::Action* const& __cordl_internal_get_onTimerChange() const;

constexpr ::System::Action*& __cordl_internal_get_onTimerChange() ;

constexpr ::System::Action* const& __cordl_internal_get_onTimerFinish() const;

constexpr ::System::Action*& __cordl_internal_get_onTimerFinish() ;

constexpr ::System::Action* const& __cordl_internal_get_onTimerStart() const;

constexpr ::System::Action*& __cordl_internal_get_onTimerStart() ;

constexpr ::GlobalNamespace::PeckStateFilter const& __cordl_internal_get_stateFilter() const;

constexpr ::GlobalNamespace::PeckStateFilter& __cordl_internal_get_stateFilter() ;

constexpr bool const& __cordl_internal_get_timerActive() const;

constexpr bool& __cordl_internal_get_timerActive() ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_trackedStateSystem() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_trackedStateSystem() ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_endTime(double_t  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_onFinish(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_onTimerChange(::System::Action*  value) ;

constexpr void __cordl_internal_set_onTimerFinish(::System::Action*  value) ;

constexpr void __cordl_internal_set_onTimerStart(::System::Action*  value) ;

constexpr void __cordl_internal_set_stateFilter(::GlobalNamespace::PeckStateFilter  value) ;

constexpr void __cordl_internal_set_timerActive(bool  value) ;

constexpr void __cordl_internal_set_trackedStateSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_onTimerFinish, addr 0x180450350, size 0x80, virtual false, abstract: false, final false
inline void add_onTimerFinish(::System::Action*  value) ;

/// @brief Method add_onTimerStart, addr 0x1804503d0, size 0x80, virtual false, abstract: false, final false
inline void add_onTimerStart(::System::Action*  value) ;

/// @brief Convert to "::GlobalNamespace::IOccasional"
constexpr ::GlobalNamespace::IOccasional* i___GlobalNamespace__IOccasional() noexcept;

/// @brief Method remove_onTimerFinish, addr 0x180450450, size 0x80, virtual false, abstract: false, final false
inline void remove_onTimerFinish(::System::Action*  value) ;

/// @brief Method remove_onTimerStart, addr 0x1804504d0, size 0x80, virtual false, abstract: false, final false
inline void remove_onTimerStart(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectTimer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectTimer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectTimer(PeckEffectTimer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectTimer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectTimer(PeckEffectTimer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5418};

/// @brief Field trackedStateSystem, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___trackedStateSystem;

/// @brief Field stateFilter, offset: 0x28, size: 0x10, def value: None
 ::GlobalNamespace::PeckStateFilter  ___stateFilter;

/// @brief Field duration, offset: 0x38, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field onFinish, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onFinish;

/// @brief Field logVerbose, offset: 0x48, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field timerActive, offset: 0x49, size: 0x1, def value: None
 bool  ___timerActive;

/// @brief Field endTime, offset: 0x50, size: 0x8, def value: None
 double_t  ___endTime;

/// @brief Field onTimerChange, offset: 0x58, size: 0x8, def value: None
 ::System::Action*  ___onTimerChange;

/// @brief Field onTimerStart, offset: 0x60, size: 0x8, def value: None
 ::System::Action*  ___onTimerStart;

/// @brief Field onTimerFinish, offset: 0x68, size: 0x8, def value: None
 ::System::Action*  ___onTimerFinish;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectTimer, ___trackedStateSystem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTimer, ___stateFilter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTimer, ___duration) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTimer, ___onFinish) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTimer, ___logVerbose) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTimer, ___timerActive) == 0x49, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTimer, ___endTime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTimer, ___onTimerChange) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTimer, ___onTimerStart) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTimer, ___onTimerFinish) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectTimer) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace

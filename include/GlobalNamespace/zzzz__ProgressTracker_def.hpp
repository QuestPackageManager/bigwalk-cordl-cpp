#pragma once
// IWYU pragma private; include "GlobalNamespace/ProgressTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProgressTracker)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class IOccasional;
}
namespace GlobalNamespace {
class OccasionalPartner;
}
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PeckSwitch;
}
namespace GlobalNamespace {
struct ProgressDisplay_ProgressBarState;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
class ProgressTracker;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ProgressTracker*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressTracker*, "", "ProgressTracker");
// Dependencies AudioAsset, PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressTracker
class CORDL_TYPE ProgressTracker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field FinishSound, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_FinishSound, put=__cordl_internal_set_FinishSound)) ::UnityW<::GlobalNamespace::AudioAsset>  FinishSound;

/// @brief Field IncrementSounds, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_IncrementSounds, put=__cordl_internal_set_IncrementSounds)) ::ArrayW<::UnityW<::GlobalNamespace::AudioAsset>>  IncrementSounds;

/// @brief Field ResetSound, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ResetSound, put=__cordl_internal_set_ResetSound)) ::UnityW<::GlobalNamespace::AudioAsset>  ResetSound;

/// @brief Field ResetZeroSound, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_ResetZeroSound, put=__cordl_internal_set_ResetZeroSound)) ::UnityW<::GlobalNamespace::AudioAsset>  ResetZeroSound;

 __declspec(property(get=get_currentValue, put=set_currentValue)) int32_t  currentValue;

/// @brief Field incrementSystem, offset 0x50, size 0x28 
 __declspec(property(get=__cordl_internal_get_incrementSystem, put=__cordl_internal_set_incrementSystem)) ::GlobalNamespace::PeckSystemReference  incrementSystem;

/// @brief Field isInVictoryCountdown, offset 0xd1, size 0x1 
 __declspec(property(get=__cordl_internal_get_isInVictoryCountdown, put=__cordl_internal_set_isInVictoryCountdown)) bool  isInVictoryCountdown;

 __declspec(property(get=get_isServer)) bool  isServer;

/// @brief Field logVerbose, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field occasionalPartner, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_occasionalPartner, put=__cordl_internal_set_occasionalPartner)) ::UnityW<::GlobalNamespace::OccasionalPartner>  occasionalPartner;

/// @brief Field onTransition, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_onTransition, put=__cordl_internal_set_onTransition)) ::System::Action_2<float_t,::GlobalNamespace::ProgressDisplay_ProgressBarState>*  onTransition;

/// @brief Field onVictory, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_onVictory, put=__cordl_internal_set_onVictory)) ::UnityW<::GlobalNamespace::PeckSwitch>  onVictory;

/// @brief Field requiredIncrements, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_requiredIncrements, put=__cordl_internal_set_requiredIncrements)) int32_t  requiredIncrements;

/// @brief Field resetSystem, offset 0x78, size 0x28 
 __declspec(property(get=__cordl_internal_get_resetSystem, put=__cordl_internal_set_resetSystem)) ::GlobalNamespace::PeckSystemReference  resetSystem;

/// @brief Field timeAtVictoryCountDownStart, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeAtVictoryCountDownStart, put=__cordl_internal_set_timeAtVictoryCountDownStart)) float_t  timeAtVictoryCountDownStart;

/// @brief Field valueStorageSystem, offset 0x28, size 0x28 
 __declspec(property(get=__cordl_internal_get_valueStorageSystem, put=__cordl_internal_set_valueStorageSystem)) ::GlobalNamespace::PeckSystemReference  valueStorageSystem;

/// @brief Field victoryCountdownDuration, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_victoryCountdownDuration, put=__cordl_internal_set_victoryCountdownDuration)) float_t  victoryCountdownDuration;

/// @brief Convert operator to "::GlobalNamespace::IOccasional"
constexpr operator  ::GlobalNamespace::IOccasional*() noexcept;

/// @brief Method Awake, addr 0x180411230, size 0xe0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetCurrentValue, addr 0x1803fbd00, size 0x20, virtual false, abstract: false, final false
inline int32_t GetCurrentValue() ;

/// @brief Method GetNormalizedValue, addr 0x180411310, size 0x30, virtual false, abstract: false, final false
inline float_t GetNormalizedValue() ;

/// @brief Method Increment, addr 0x180411340, size 0xd0, virtual false, abstract: false, final false
inline void Increment(::GlobalNamespace::PeckContext  peckContext) ;

static inline ::GlobalNamespace::ProgressTracker* New_ctor() ;

/// @brief Method OccasionalUpdate, addr 0x180411410, size 0x100, virtual true, abstract: false, final true
inline void OccasionalUpdate() ;

/// @brief Method OnValueChange, addr 0x180411510, size 0xd0, virtual false, abstract: false, final false
inline void OnValueChange(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method Reset, addr 0x1804115e0, size 0x100, virtual false, abstract: false, final false
inline void Reset(::GlobalNamespace::PeckContext  peckContext) ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_FinishSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_FinishSound() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioAsset>> const& __cordl_internal_get_IncrementSounds() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioAsset>>& __cordl_internal_get_IncrementSounds() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_ResetSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_ResetSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_ResetZeroSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_ResetZeroSound() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_incrementSystem() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_incrementSystem() ;

constexpr bool const& __cordl_internal_get_isInVictoryCountdown() const;

constexpr bool& __cordl_internal_get_isInVictoryCountdown() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::OccasionalPartner> const& __cordl_internal_get_occasionalPartner() const;

constexpr ::UnityW<::GlobalNamespace::OccasionalPartner>& __cordl_internal_get_occasionalPartner() ;

constexpr ::System::Action_2<float_t,::GlobalNamespace::ProgressDisplay_ProgressBarState>* const& __cordl_internal_get_onTransition() const;

constexpr ::System::Action_2<float_t,::GlobalNamespace::ProgressDisplay_ProgressBarState>*& __cordl_internal_get_onTransition() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onVictory() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onVictory() ;

constexpr int32_t const& __cordl_internal_get_requiredIncrements() const;

constexpr int32_t& __cordl_internal_get_requiredIncrements() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_resetSystem() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_resetSystem() ;

constexpr float_t const& __cordl_internal_get_timeAtVictoryCountDownStart() const;

constexpr float_t& __cordl_internal_get_timeAtVictoryCountDownStart() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_valueStorageSystem() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_valueStorageSystem() ;

constexpr float_t const& __cordl_internal_get_victoryCountdownDuration() const;

constexpr float_t& __cordl_internal_get_victoryCountdownDuration() ;

constexpr void __cordl_internal_set_FinishSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_IncrementSounds(::ArrayW<::UnityW<::GlobalNamespace::AudioAsset>>  value) ;

constexpr void __cordl_internal_set_ResetSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_ResetZeroSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_incrementSystem(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_isInVictoryCountdown(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_occasionalPartner(::UnityW<::GlobalNamespace::OccasionalPartner>  value) ;

constexpr void __cordl_internal_set_onTransition(::System::Action_2<float_t,::GlobalNamespace::ProgressDisplay_ProgressBarState>*  value) ;

constexpr void __cordl_internal_set_onVictory(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_requiredIncrements(int32_t  value) ;

constexpr void __cordl_internal_set_resetSystem(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_timeAtVictoryCountDownStart(float_t  value) ;

constexpr void __cordl_internal_set_valueStorageSystem(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_victoryCountdownDuration(float_t  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_currentValue, addr 0x1803fbd00, size 0x20, virtual false, abstract: false, final false
inline int32_t get_currentValue() ;

/// @brief Method get_isServer, addr 0x1803fbd20, size 0x20, virtual false, abstract: false, final false
inline bool get_isServer() ;

/// @brief Convert to "::GlobalNamespace::IOccasional"
constexpr ::GlobalNamespace::IOccasional* i___GlobalNamespace__IOccasional() noexcept;

/// @brief Method set_currentValue, addr 0x1803fbd40, size 0x80, virtual false, abstract: false, final false
inline void set_currentValue(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressTracker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressTracker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressTracker(ProgressTracker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressTracker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressTracker(ProgressTracker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5109};

/// @brief Field requiredIncrements, offset: 0x20, size: 0x4, def value: None
 int32_t  ___requiredIncrements;

/// @brief Field victoryCountdownDuration, offset: 0x24, size: 0x4, def value: None
 float_t  ___victoryCountdownDuration;

/// @brief Field valueStorageSystem, offset: 0x28, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___valueStorageSystem;

/// @brief Field incrementSystem, offset: 0x50, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___incrementSystem;

/// @brief Field resetSystem, offset: 0x78, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___resetSystem;

/// @brief Field onVictory, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onVictory;

/// @brief Field occasionalPartner, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OccasionalPartner>  ___occasionalPartner;

/// @brief Field IncrementSounds, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::AudioAsset>>  ___IncrementSounds;

/// @brief Field FinishSound, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___FinishSound;

/// @brief Field ResetSound, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___ResetSound;

/// @brief Field ResetZeroSound, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___ResetZeroSound;

/// @brief Field logVerbose, offset: 0xd0, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field isInVictoryCountdown, offset: 0xd1, size: 0x1, def value: None
 bool  ___isInVictoryCountdown;

/// @brief Field timeAtVictoryCountDownStart, offset: 0xd4, size: 0x4, def value: None
 float_t  ___timeAtVictoryCountDownStart;

/// @brief Field onTransition, offset: 0xd8, size: 0x8, def value: None
 ::System::Action_2<float_t,::GlobalNamespace::ProgressDisplay_ProgressBarState>*  ___onTransition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressTracker, ___requiredIncrements) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressTracker, ___victoryCountdownDuration) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressTracker, ___valueStorageSystem) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressTracker, ___incrementSystem) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressTracker, ___resetSystem) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressTracker, ___onVictory) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressTracker, ___occasionalPartner) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressTracker, ___IncrementSounds) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressTracker, ___FinishSound) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressTracker, ___ResetSound) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressTracker, ___ResetZeroSound) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressTracker, ___logVerbose) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressTracker, ___isInVictoryCountdown) == 0xd1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressTracker, ___timeAtVictoryCountDownStart) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressTracker, ___onTransition) == 0xd8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressTracker) == 0xe0, "Size mismatch!");

} // namespace end def GlobalNamespace

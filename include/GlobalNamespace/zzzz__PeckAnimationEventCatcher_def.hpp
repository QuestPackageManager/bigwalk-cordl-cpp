#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckAnimationEventCatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PeckAnimationEventCatcher)
// Forward declare root types
namespace GlobalNamespace {
class PeckAnimationEventCatcher;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckAnimationEventCatcher*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckAnimationEventCatcher*, "", "PeckAnimationEventCatcher");
// Dependencies PeckSwitch, UnityEngine.Events.UnityEvent, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckAnimationEventCatcher
class CORDL_TYPE PeckAnimationEventCatcher : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field logVerbose, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field peckSwitches, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_peckSwitches, put=__cordl_internal_set_peckSwitches)) ::ArrayW<::UnityW<::GlobalNamespace::PeckSwitch>>  peckSwitches;

/// @brief Field unityEvents, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_unityEvents, put=__cordl_internal_set_unityEvents)) ::ArrayW<::UnityEngine::Events::UnityEvent*>  unityEvents;

static inline ::GlobalNamespace::PeckAnimationEventCatcher* New_ctor() ;

/// @brief Method TriggerSwitch, addr 0x1804463e0, size 0x180, virtual false, abstract: false, final false
inline void TriggerSwitch(int32_t  index) ;

/// @brief Method TriggerUnityEvent, addr 0x180446560, size 0x60, virtual false, abstract: false, final false
inline void TriggerUnityEvent(int32_t  index) ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::PeckSwitch>> const& __cordl_internal_get_peckSwitches() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::PeckSwitch>>& __cordl_internal_get_peckSwitches() ;

constexpr ::ArrayW<::UnityEngine::Events::UnityEvent*> const& __cordl_internal_get_unityEvents() const;

constexpr ::ArrayW<::UnityEngine::Events::UnityEvent*>& __cordl_internal_get_unityEvents() ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_peckSwitches(::ArrayW<::UnityW<::GlobalNamespace::PeckSwitch>>  value) ;

constexpr void __cordl_internal_set_unityEvents(::ArrayW<::UnityEngine::Events::UnityEvent*>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckAnimationEventCatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckAnimationEventCatcher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckAnimationEventCatcher(PeckAnimationEventCatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckAnimationEventCatcher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckAnimationEventCatcher(PeckAnimationEventCatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5334};

/// @brief Field peckSwitches, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::PeckSwitch>>  ___peckSwitches;

/// @brief Field unityEvents, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Events::UnityEvent*>  ___unityEvents;

/// @brief Field logVerbose, offset: 0x30, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckAnimationEventCatcher, ___peckSwitches) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckAnimationEventCatcher, ___unityEvents) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckAnimationEventCatcher, ___logVerbose) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckAnimationEventCatcher) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace

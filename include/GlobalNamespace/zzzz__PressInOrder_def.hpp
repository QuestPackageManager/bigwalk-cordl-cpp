#pragma once
// IWYU pragma private; include "GlobalNamespace/PressInOrder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckCondition_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PressInOrder)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PeckSwitch;
}
namespace GlobalNamespace {
class ProgressTracker;
}
namespace GlobalNamespace {
class TrackedPeckState;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
// Forward declare root types
namespace GlobalNamespace {
class PressInOrder;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PressInOrder*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PressInOrder*, "", "PressInOrder");
// Dependencies PeckCondition, PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PressInOrder
class CORDL_TYPE PressInOrder : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field currentlyIndicated, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentlyIndicated, put=__cordl_internal_set_currentlyIndicated)) int32_t  currentlyIndicated;

/// @brief Field desiredIndex, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_desiredIndex, put=__cordl_internal_set_desiredIndex)) int32_t  desiredIndex;

/// @brief Field failureSwitch, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_failureSwitch, put=__cordl_internal_set_failureSwitch)) ::UnityW<::GlobalNamespace::PeckSwitch>  failureSwitch;

/// @brief Field hidePanelCondition, offset 0x50, size 0x40 
 __declspec(property(get=__cordl_internal_get_hidePanelCondition, put=__cordl_internal_set_hidePanelCondition)) ::GlobalNamespace::PeckCondition  hidePanelCondition;

/// @brief Field hotPanel, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_hotPanel, put=__cordl_internal_set_hotPanel)) ::UnityW<::GlobalNamespace::TrackedPeckState>  hotPanel;

/// @brief Field hotPotatoMode, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get_hotPotatoMode, put=__cordl_internal_set_hotPotatoMode)) bool  hotPotatoMode;

/// @brief Field inputPressStates, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputPressStates, put=__cordl_internal_set_inputPressStates)) ::ArrayW<bool>  inputPressStates;

/// @brief Field inputs, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputs, put=__cordl_internal_set_inputs)) ::ArrayW<::GlobalNamespace::PeckSystemReference>  inputs;

/// @brief Field isActive, offset 0xbc, size 0x1 
 __declspec(property(get=__cordl_internal_get_isActive, put=__cordl_internal_set_isActive)) bool  isActive;

/// @brief Field isActiveSystem, offset 0x28, size 0x28 
 __declspec(property(get=__cordl_internal_get_isActiveSystem, put=__cordl_internal_set_isActiveSystem)) ::GlobalNamespace::PeckSystemReference  isActiveSystem;

/// @brief Field logVerbose, offset 0xb4, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field onAnyOutcome, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_onAnyOutcome, put=__cordl_internal_set_onAnyOutcome)) ::UnityW<::GlobalNamespace::PeckSwitch>  onAnyOutcome;

/// @brief Field onInput, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_onInput, put=__cordl_internal_set_onInput)) ::System::Action_2<int32_t,bool>*  onInput;

/// @brief Field onSetDesired, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSetDesired, put=__cordl_internal_set_onSetDesired)) ::System::Action_3<int32_t,bool,::UnityW<::GlobalNamespace::TrackedPeckState>>*  onSetDesired;

/// @brief Field progressTracker, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressTracker, put=__cordl_internal_set_progressTracker)) ::UnityW<::GlobalNamespace::ProgressTracker>  progressTracker;

/// @brief Field resetWhenInactive, offset 0xb3, size 0x1 
 __declspec(property(get=__cordl_internal_get_resetWhenInactive, put=__cordl_internal_set_resetWhenInactive)) bool  resetWhenInactive;

/// @brief Field startAcitve, offset 0xb1, size 0x1 
 __declspec(property(get=__cordl_internal_get_startAcitve, put=__cordl_internal_set_startAcitve)) bool  startAcitve;

/// @brief Field sucessSwitch, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_sucessSwitch, put=__cordl_internal_set_sucessSwitch)) ::UnityW<::GlobalNamespace::PeckSwitch>  sucessSwitch;

/// @brief Field unprimeOthers, offset 0xb2, size 0x1 
 __declspec(property(get=__cordl_internal_get_unprimeOthers, put=__cordl_internal_set_unprimeOthers)) bool  unprimeOthers;

/// @brief Method Awake, addr 0x18040fd60, size 0x190, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method HidePanelChange, addr 0x18040fef0, size 0x10, virtual false, abstract: false, final false
inline void HidePanelChange(::GlobalNamespace::PeckContext  peckContext) ;

static inline ::GlobalNamespace::PressInOrder* New_ctor() ;

/// @brief Method OnInput, addr 0x18040ff00, size 0x370, virtual false, abstract: false, final false
inline void OnInput(::GlobalNamespace::PeckContext  peckContext, ::GlobalNamespace::TrackedPeckState*  trackedPeckState) ;

/// @brief Method RefreshIndication, addr 0x180410270, size 0x1b0, virtual false, abstract: false, final false
inline void RefreshIndication() ;

/// @brief Method SetActive, addr 0x180410420, size 0x210, virtual false, abstract: false, final false
inline void SetActive(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method SetOff, addr 0x180410630, size 0x190, virtual false, abstract: false, final false
inline void SetOff() ;

/// @brief Method SetRandom, addr 0x1804107c0, size 0xb0, virtual false, abstract: false, final false
inline void SetRandom() ;

constexpr int32_t const& __cordl_internal_get_currentlyIndicated() const;

constexpr int32_t& __cordl_internal_get_currentlyIndicated() ;

constexpr int32_t const& __cordl_internal_get_desiredIndex() const;

constexpr int32_t& __cordl_internal_get_desiredIndex() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_failureSwitch() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_failureSwitch() ;

constexpr ::GlobalNamespace::PeckCondition const& __cordl_internal_get_hidePanelCondition() const;

constexpr ::GlobalNamespace::PeckCondition& __cordl_internal_get_hidePanelCondition() ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_hotPanel() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_hotPanel() ;

constexpr bool const& __cordl_internal_get_hotPotatoMode() const;

constexpr bool& __cordl_internal_get_hotPotatoMode() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_inputPressStates() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_inputPressStates() ;

constexpr ::ArrayW<::GlobalNamespace::PeckSystemReference> const& __cordl_internal_get_inputs() const;

constexpr ::ArrayW<::GlobalNamespace::PeckSystemReference>& __cordl_internal_get_inputs() ;

constexpr bool const& __cordl_internal_get_isActive() const;

constexpr bool& __cordl_internal_get_isActive() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_isActiveSystem() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_isActiveSystem() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onAnyOutcome() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onAnyOutcome() ;

constexpr ::System::Action_2<int32_t,bool>* const& __cordl_internal_get_onInput() const;

constexpr ::System::Action_2<int32_t,bool>*& __cordl_internal_get_onInput() ;

constexpr ::System::Action_3<int32_t,bool,::UnityW<::GlobalNamespace::TrackedPeckState>>* const& __cordl_internal_get_onSetDesired() const;

constexpr ::System::Action_3<int32_t,bool,::UnityW<::GlobalNamespace::TrackedPeckState>>*& __cordl_internal_get_onSetDesired() ;

constexpr ::UnityW<::GlobalNamespace::ProgressTracker> const& __cordl_internal_get_progressTracker() const;

constexpr ::UnityW<::GlobalNamespace::ProgressTracker>& __cordl_internal_get_progressTracker() ;

constexpr bool const& __cordl_internal_get_resetWhenInactive() const;

constexpr bool& __cordl_internal_get_resetWhenInactive() ;

constexpr bool const& __cordl_internal_get_startAcitve() const;

constexpr bool& __cordl_internal_get_startAcitve() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_sucessSwitch() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_sucessSwitch() ;

constexpr bool const& __cordl_internal_get_unprimeOthers() const;

constexpr bool& __cordl_internal_get_unprimeOthers() ;

constexpr void __cordl_internal_set_currentlyIndicated(int32_t  value) ;

constexpr void __cordl_internal_set_desiredIndex(int32_t  value) ;

constexpr void __cordl_internal_set_failureSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_hidePanelCondition(::GlobalNamespace::PeckCondition  value) ;

constexpr void __cordl_internal_set_hotPanel(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

constexpr void __cordl_internal_set_hotPotatoMode(bool  value) ;

constexpr void __cordl_internal_set_inputPressStates(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_inputs(::ArrayW<::GlobalNamespace::PeckSystemReference>  value) ;

constexpr void __cordl_internal_set_isActive(bool  value) ;

constexpr void __cordl_internal_set_isActiveSystem(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_onAnyOutcome(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_onInput(::System::Action_2<int32_t,bool>*  value) ;

constexpr void __cordl_internal_set_onSetDesired(::System::Action_3<int32_t,bool,::UnityW<::GlobalNamespace::TrackedPeckState>>*  value) ;

constexpr void __cordl_internal_set_progressTracker(::UnityW<::GlobalNamespace::ProgressTracker>  value) ;

constexpr void __cordl_internal_set_resetWhenInactive(bool  value) ;

constexpr void __cordl_internal_set_startAcitve(bool  value) ;

constexpr void __cordl_internal_set_sucessSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_unprimeOthers(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PressInOrder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PressInOrder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PressInOrder(PressInOrder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PressInOrder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PressInOrder(PressInOrder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5106};

/// @brief Field inputs, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PeckSystemReference>  ___inputs;

/// @brief Field isActiveSystem, offset: 0x28, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___isActiveSystem;

/// @brief Field hidePanelCondition, offset: 0x50, size: 0x40, def value: None
 ::GlobalNamespace::PeckCondition  ___hidePanelCondition;

/// @brief Field sucessSwitch, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___sucessSwitch;

/// @brief Field failureSwitch, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___failureSwitch;

/// @brief Field onAnyOutcome, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onAnyOutcome;

/// @brief Field progressTracker, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressTracker>  ___progressTracker;

/// @brief Field hotPotatoMode, offset: 0xb0, size: 0x1, def value: None
 bool  ___hotPotatoMode;

/// @brief Field startAcitve, offset: 0xb1, size: 0x1, def value: None
 bool  ___startAcitve;

/// @brief Field unprimeOthers, offset: 0xb2, size: 0x1, def value: None
 bool  ___unprimeOthers;

/// @brief Field resetWhenInactive, offset: 0xb3, size: 0x1, def value: None
 bool  ___resetWhenInactive;

/// @brief Field logVerbose, offset: 0xb4, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field desiredIndex, offset: 0xb8, size: 0x4, def value: None
 int32_t  ___desiredIndex;

/// @brief Field isActive, offset: 0xbc, size: 0x1, def value: None
 bool  ___isActive;

/// @brief Field onInput, offset: 0xc0, size: 0x8, def value: None
 ::System::Action_2<int32_t,bool>*  ___onInput;

/// @brief Field onSetDesired, offset: 0xc8, size: 0x8, def value: None
 ::System::Action_3<int32_t,bool,::UnityW<::GlobalNamespace::TrackedPeckState>>*  ___onSetDesired;

/// @brief Field hotPanel, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___hotPanel;

/// @brief Field currentlyIndicated, offset: 0xd8, size: 0x4, def value: None
 int32_t  ___currentlyIndicated;

/// @brief Field inputPressStates, offset: 0xe0, size: 0x8, def value: None
 ::ArrayW<bool>  ___inputPressStates;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PressInOrder, ___inputs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PressInOrder, ___isActiveSystem) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PressInOrder, ___hidePanelCondition) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PressInOrder, ___sucessSwitch) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PressInOrder, ___failureSwitch) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PressInOrder, ___onAnyOutcome) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PressInOrder, ___progressTracker) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PressInOrder, ___hotPotatoMode) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PressInOrder, ___startAcitve) == 0xb1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PressInOrder, ___unprimeOthers) == 0xb2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PressInOrder, ___resetWhenInactive) == 0xb3, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PressInOrder, ___logVerbose) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PressInOrder, ___desiredIndex) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PressInOrder, ___isActive) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PressInOrder, ___onInput) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PressInOrder, ___onSetDesired) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PressInOrder, ___hotPanel) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PressInOrder, ___currentlyIndicated) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PressInOrder, ___inputPressStates) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PressInOrder) == 0xe8, "Size mismatch!");

} // namespace end def GlobalNamespace

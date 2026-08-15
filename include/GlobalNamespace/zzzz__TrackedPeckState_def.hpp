#pragma once
// IWYU pragma private; include "GlobalNamespace/TrackedPeckState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckOutputPort_def.hpp"
#include "GlobalNamespace/zzzz__SavableSystem_def.hpp"
#include "GlobalNamespace/zzzz__SeaShell_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TrackedPeckState)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PeckSwitch;
}
namespace GlobalNamespace {
struct PeckSystemReference;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class SaveIdentity;
}
namespace GlobalNamespace {
class TrackedPeckState___c;
}
namespace LobbyNetworking {
class ITicketed;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T>
class Comparison_1;
}
// Forward declare root types
namespace GlobalNamespace {
class TrackedPeckState;
}
namespace GlobalNamespace {
class TrackedPeckState___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TrackedPeckState*);
MARK_REF_T(::GlobalNamespace::TrackedPeckState___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TrackedPeckState*, "", "TrackedPeckState");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TrackedPeckState___c*, "", "TrackedPeckState/<>c");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TrackedPeckState/<>c
class CORDL_TYPE TrackedPeckState___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::TrackedPeckState___c*  __9;

/// @brief Field <>9__26_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_0, put=setStaticF___9__26_0)) ::System::Comparison_1<::GlobalNamespace::PeckSystemReference>*  __9__26_0;

static inline ::GlobalNamespace::TrackedPeckState___c* New_ctor() ;

/// @brief Method <AddEffect>b__26_0, addr 0x18045a3b0, size 0x20, virtual false, abstract: false, final false
inline int32_t _AddEffect_b__26_0(::GlobalNamespace::PeckSystemReference  a, ::GlobalNamespace::PeckSystemReference  b) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::TrackedPeckState___c* getStaticF___9() ;

static inline ::System::Comparison_1<::GlobalNamespace::PeckSystemReference>* getStaticF___9__26_0() ;

static inline void setStaticF___9(::GlobalNamespace::TrackedPeckState___c*  value) ;

static inline void setStaticF___9__26_0(::System::Comparison_1<::GlobalNamespace::PeckSystemReference>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrackedPeckState___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrackedPeckState___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackedPeckState___c(TrackedPeckState___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackedPeckState___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackedPeckState___c(TrackedPeckState___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5357};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::TrackedPeckState___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PeckContext, PeckOutputPort, SavableSystem, SeaShell::ShellReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TrackedPeckState
class CORDL_TYPE TrackedPeckState : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::TrackedPeckState___c;

/// @brief Field _firedOnce, offset 0x9a, size 0x1 
 __declspec(property(get=__cordl_internal_get__firedOnce, put=__cordl_internal_set__firedOnce)) bool  _firedOnce;

/// @brief Field <ticket>k__BackingField, offset 0xa8, size 0x2 
 __declspec(property(get=__cordl_internal_get__ticket_k__BackingField, put=__cordl_internal_set__ticket_k__BackingField)) uint16_t  _ticket_k__BackingField;

/// @brief Field currentPeckContext, offset 0x38, size 0x18 
 __declspec(property(get=__cordl_internal_get_currentPeckContext, put=__cordl_internal_set_currentPeckContext)) ::GlobalNamespace::PeckContext  currentPeckContext;

/// @brief Field eventName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_eventName, put=setStaticF_eventName)) ::StringW  eventName;

/// @brief Field hasInitialState, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasInitialState, put=__cordl_internal_set_hasInitialState)) bool  hasInitialState;

/// @brief Field ignoreStateRepeats, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignoreStateRepeats, put=__cordl_internal_set_ignoreStateRepeats)) bool  ignoreStateRepeats;

/// @brief Field initialState, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialState, put=__cordl_internal_set_initialState)) int32_t  initialState;

/// @brief Field isInitialized, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_isInitialized, put=__cordl_internal_set_isInitialized)) bool  isInitialized;

 __declspec(property(get=get_isServer)) bool  isServer;

/// @brief Field label, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_label, put=__cordl_internal_set_label)) ::StringW  label;

/// @brief Field logVerbose, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field onPeck, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPeck, put=__cordl_internal_set_onPeck)) ::System::Action_1<::GlobalNamespace::PeckContext>*  onPeck;

/// @brief Field onPeckWithSystem, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPeckWithSystem, put=__cordl_internal_set_onPeckWithSystem)) ::System::Action_2<::GlobalNamespace::PeckContext,::UnityW<::GlobalNamespace::TrackedPeckState>>*  onPeckWithSystem;

/// @brief Field peckContextForPrediction, offset 0x50, size 0x18 
 __declspec(property(get=__cordl_internal_get_peckContextForPrediction, put=__cordl_internal_set_peckContextForPrediction)) ::GlobalNamespace::PeckContext  peckContextForPrediction;

/// @brief Field port, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_port, put=__cordl_internal_set_port)) ::GlobalNamespace::PeckOutputPort  port;

/// @brief Field savableSystem, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_savableSystem, put=__cordl_internal_set_savableSystem)) ::GlobalNamespace::SavableSystem  savableSystem;

/// @brief Field saveIdentity, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_saveIdentity, put=__cordl_internal_set_saveIdentity)) ::UnityW<::GlobalNamespace::SaveIdentity>  saveIdentity;

/// @brief Field shellReference, offset 0x9c, size 0xc 
 __declspec(property(get=__cordl_internal_get_shellReference, put=__cordl_internal_set_shellReference)) ::GlobalNamespace::SeaShell_ShellReference  shellReference;

/// @brief Field systemRefences, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_systemRefences, put=__cordl_internal_set_systemRefences)) ::System::Collections::Generic::List_1<::GlobalNamespace::PeckSystemReference>*  systemRefences;

 __declspec(property(get=get_ticket, put=set_ticket)) uint16_t  ticket;

/// @brief Field treatPredictionsAsAlreadyPredicted, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get_treatPredictionsAsAlreadyPredicted, put=__cordl_internal_set_treatPredictionsAsAlreadyPredicted)) bool  treatPredictionsAsAlreadyPredicted;

/// @brief Convert operator to "::LobbyNetworking::ITicketed"
constexpr operator  ::LobbyNetworking::ITicketed*() noexcept;

/// @brief Method AddEffect, addr 0x180458ca0, size 0xa0, virtual false, abstract: false, final false
inline void AddEffect(::System::Action_1<::GlobalNamespace::PeckContext>*  effectOnPeck) ;

/// @brief Method AddEffect, addr 0x180458d40, size 0xa0, virtual false, abstract: false, final false
inline void AddEffect(::System::Action_2<::GlobalNamespace::PeckContext,::UnityW<::GlobalNamespace::TrackedPeckState>>*  effectOnPeck) ;

/// @brief Method AddEffect, addr 0x180458ab0, size 0x1f0, virtual false, abstract: false, final false
inline void AddEffect(::GlobalNamespace::PeckSystemReference  systemReference) ;

/// @brief Method DoPeck, addr 0x180458de0, size 0x580, virtual false, abstract: false, final false
inline void DoPeck(::GlobalNamespace::PeckContext  peckContext, bool  isPrediction) ;

/// @brief Method Initialize, addr 0x180459360, size 0x190, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::TrackedPeckState* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x180380080, size 0x10, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1804594f0, size 0x60, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PredictPeck, addr 0x180459550, size 0xe0, virtual false, abstract: false, final false
inline void PredictPeck(::GlobalNamespace::PeckContext  peckContext, ::GlobalNamespace::PeckSwitch*  peckSwitch) ;

/// @brief Method ReTrigger, addr 0x180459630, size 0xe0, virtual false, abstract: false, final false
inline void ReTrigger(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method Reject, addr 0x180459710, size 0x90, virtual false, abstract: false, final false
inline void Reject() ;

/// @brief Method ServerRejectPrediction, addr 0x1804597a0, size 0x200, virtual false, abstract: false, final false
inline void ServerRejectPrediction(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

/// @brief Method SetState, addr 0x180459ee0, size 0x80, virtual false, abstract: false, final false
inline void SetState(int32_t  intValue) ;

/// @brief Method SetState, addr 0x1804599a0, size 0x540, virtual false, abstract: false, final false
inline void SetState(::GlobalNamespace::PeckContext  newPeckContext) ;

/// @brief Method Start, addr 0x180459f60, size 0x30, virtual false, abstract: false, final false
inline void Start() ;

constexpr bool const& __cordl_internal_get__firedOnce() const;

constexpr bool& __cordl_internal_get__firedOnce() ;

constexpr uint16_t const& __cordl_internal_get__ticket_k__BackingField() const;

constexpr uint16_t& __cordl_internal_get__ticket_k__BackingField() ;

constexpr ::GlobalNamespace::PeckContext const& __cordl_internal_get_currentPeckContext() const;

constexpr ::GlobalNamespace::PeckContext& __cordl_internal_get_currentPeckContext() ;

constexpr bool const& __cordl_internal_get_hasInitialState() const;

constexpr bool& __cordl_internal_get_hasInitialState() ;

constexpr bool const& __cordl_internal_get_ignoreStateRepeats() const;

constexpr bool& __cordl_internal_get_ignoreStateRepeats() ;

constexpr int32_t const& __cordl_internal_get_initialState() const;

constexpr int32_t& __cordl_internal_get_initialState() ;

constexpr bool const& __cordl_internal_get_isInitialized() const;

constexpr bool& __cordl_internal_get_isInitialized() ;

constexpr ::StringW const& __cordl_internal_get_label() const;

constexpr ::StringW& __cordl_internal_get_label() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::System::Action_1<::GlobalNamespace::PeckContext>* const& __cordl_internal_get_onPeck() const;

constexpr ::System::Action_1<::GlobalNamespace::PeckContext>*& __cordl_internal_get_onPeck() ;

constexpr ::System::Action_2<::GlobalNamespace::PeckContext,::UnityW<::GlobalNamespace::TrackedPeckState>>* const& __cordl_internal_get_onPeckWithSystem() const;

constexpr ::System::Action_2<::GlobalNamespace::PeckContext,::UnityW<::GlobalNamespace::TrackedPeckState>>*& __cordl_internal_get_onPeckWithSystem() ;

constexpr ::GlobalNamespace::PeckContext const& __cordl_internal_get_peckContextForPrediction() const;

constexpr ::GlobalNamespace::PeckContext& __cordl_internal_get_peckContextForPrediction() ;

constexpr ::GlobalNamespace::PeckOutputPort const& __cordl_internal_get_port() const;

constexpr ::GlobalNamespace::PeckOutputPort& __cordl_internal_get_port() ;

constexpr ::GlobalNamespace::SavableSystem const& __cordl_internal_get_savableSystem() const;

constexpr ::GlobalNamespace::SavableSystem& __cordl_internal_get_savableSystem() ;

constexpr ::UnityW<::GlobalNamespace::SaveIdentity> const& __cordl_internal_get_saveIdentity() const;

constexpr ::UnityW<::GlobalNamespace::SaveIdentity>& __cordl_internal_get_saveIdentity() ;

constexpr ::GlobalNamespace::SeaShell_ShellReference const& __cordl_internal_get_shellReference() const;

constexpr ::GlobalNamespace::SeaShell_ShellReference& __cordl_internal_get_shellReference() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PeckSystemReference>* const& __cordl_internal_get_systemRefences() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PeckSystemReference>*& __cordl_internal_get_systemRefences() ;

constexpr bool const& __cordl_internal_get_treatPredictionsAsAlreadyPredicted() const;

constexpr bool& __cordl_internal_get_treatPredictionsAsAlreadyPredicted() ;

constexpr void __cordl_internal_set__firedOnce(bool  value) ;

constexpr void __cordl_internal_set__ticket_k__BackingField(uint16_t  value) ;

constexpr void __cordl_internal_set_currentPeckContext(::GlobalNamespace::PeckContext  value) ;

constexpr void __cordl_internal_set_hasInitialState(bool  value) ;

constexpr void __cordl_internal_set_ignoreStateRepeats(bool  value) ;

constexpr void __cordl_internal_set_initialState(int32_t  value) ;

constexpr void __cordl_internal_set_isInitialized(bool  value) ;

constexpr void __cordl_internal_set_label(::StringW  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_onPeck(::System::Action_1<::GlobalNamespace::PeckContext>*  value) ;

constexpr void __cordl_internal_set_onPeckWithSystem(::System::Action_2<::GlobalNamespace::PeckContext,::UnityW<::GlobalNamespace::TrackedPeckState>>*  value) ;

constexpr void __cordl_internal_set_peckContextForPrediction(::GlobalNamespace::PeckContext  value) ;

constexpr void __cordl_internal_set_port(::GlobalNamespace::PeckOutputPort  value) ;

constexpr void __cordl_internal_set_savableSystem(::GlobalNamespace::SavableSystem  value) ;

constexpr void __cordl_internal_set_saveIdentity(::UnityW<::GlobalNamespace::SaveIdentity>  value) ;

constexpr void __cordl_internal_set_shellReference(::GlobalNamespace::SeaShell_ShellReference  value) ;

constexpr void __cordl_internal_set_systemRefences(::System::Collections::Generic::List_1<::GlobalNamespace::PeckSystemReference>*  value) ;

constexpr void __cordl_internal_set_treatPredictionsAsAlreadyPredicted(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_eventName() ;

/// @brief Method get_isServer, addr 0x1803163c0, size 0x40, virtual false, abstract: false, final false
inline bool get_isServer() ;

/// @brief Method get_ticket, addr 0x180459fd0, size 0x10, virtual true, abstract: false, final true
inline uint16_t get_ticket() ;

/// @brief Convert to "::LobbyNetworking::ITicketed"
constexpr ::LobbyNetworking::ITicketed* i___LobbyNetworking__ITicketed() noexcept;

static inline void setStaticF_eventName(::StringW  value) ;

/// @brief Method set_ticket, addr 0x180459fe0, size 0x10, virtual true, abstract: false, final true
inline void set_ticket(uint16_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrackedPeckState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrackedPeckState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackedPeckState(TrackedPeckState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackedPeckState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackedPeckState(TrackedPeckState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5358};

/// @brief Field label, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___label;

/// @brief Field hasInitialState, offset: 0x28, size: 0x1, def value: None
 bool  ___hasInitialState;

/// @brief Field initialState, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___initialState;

/// @brief Field ignoreStateRepeats, offset: 0x30, size: 0x1, def value: None
 bool  ___ignoreStateRepeats;

/// @brief Field currentPeckContext, offset: 0x38, size: 0x18, def value: None
 ::GlobalNamespace::PeckContext  ___currentPeckContext;

/// @brief Field peckContextForPrediction, offset: 0x50, size: 0x18, def value: None
 ::GlobalNamespace::PeckContext  ___peckContextForPrediction;

/// @brief Field port, offset: 0x68, size: 0x4, def value: None
 ::GlobalNamespace::PeckOutputPort  ___port;

/// @brief Field savableSystem, offset: 0x6c, size: 0x4, def value: None
 ::GlobalNamespace::SavableSystem  ___savableSystem;

/// @brief Field saveIdentity, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SaveIdentity>  ___saveIdentity;

/// @brief Field logVerbose, offset: 0x78, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field systemRefences, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::PeckSystemReference>*  ___systemRefences;

/// @brief Field onPeck, offset: 0x88, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::PeckContext>*  ___onPeck;

/// @brief Field onPeckWithSystem, offset: 0x90, size: 0x8, def value: None
 ::System::Action_2<::GlobalNamespace::PeckContext,::UnityW<::GlobalNamespace::TrackedPeckState>>*  ___onPeckWithSystem;

/// @brief Field isInitialized, offset: 0x98, size: 0x1, def value: None
 bool  ___isInitialized;

/// @brief Field treatPredictionsAsAlreadyPredicted, offset: 0x99, size: 0x1, def value: None
 bool  ___treatPredictionsAsAlreadyPredicted;

/// @brief Field _firedOnce, offset: 0x9a, size: 0x1, def value: None
 bool  ____firedOnce;

/// @brief Field shellReference, offset: 0x9c, size: 0xc, def value: None
 ::GlobalNamespace::SeaShell_ShellReference  ___shellReference;

/// @brief Field <ticket>k__BackingField, offset: 0xa8, size: 0x2, def value: None
 uint16_t  ____ticket_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TrackedPeckState, ___label) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedPeckState, ___hasInitialState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedPeckState, ___initialState) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedPeckState, ___ignoreStateRepeats) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedPeckState, ___currentPeckContext) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedPeckState, ___peckContextForPrediction) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedPeckState, ___port) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedPeckState, ___savableSystem) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedPeckState, ___saveIdentity) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedPeckState, ___logVerbose) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedPeckState, ___systemRefences) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedPeckState, ___onPeck) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedPeckState, ___onPeckWithSystem) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedPeckState, ___isInitialized) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedPeckState, ___treatPredictionsAsAlreadyPredicted) == 0x99, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedPeckState, ____firedOnce) == 0x9a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedPeckState, ___shellReference) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedPeckState, ____ticket_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TrackedPeckState) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace

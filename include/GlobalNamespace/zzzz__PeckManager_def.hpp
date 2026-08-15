#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PeckManager)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
struct PeckManager__DelayedSetReadyForEffects_d__12;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
struct SeaShell_ShellReference;
}
namespace GlobalNamespace {
class TrackedPeckState;
}
namespace Mirror {
class NetworkBehaviour;
}
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
class NetworkConnection;
}
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
template<typename TKey,typename TValue>
class SyncDictionary_2;
}
namespace Mirror {
template<typename TKey,typename TValue>
struct SyncIDictionary_2_Operation;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckManager;
}
namespace GlobalNamespace {
struct PeckManager__DelayedSetReadyForEffects_d__12;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckManager*);
MARK_VAL_T(::GlobalNamespace::PeckManager__DelayedSetReadyForEffects_d__12);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckManager*, "", "PeckManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckManager__DelayedSetReadyForEffects_d__12, "", "PeckManager/<DelayedSetReadyForEffects>d__12");
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckManager/<DelayedSetReadyForEffects>d__12
struct CORDL_TYPE PeckManager__DelayedSetReadyForEffects_d__12 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18045a280, size 0x130, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18038a820, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr PeckManager__DelayedSetReadyForEffects_d__12() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PeckManager>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: None }]
constexpr PeckManager__DelayedSetReadyForEffects_d__12(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::PeckManager>  __4__this, ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5338};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckManager>  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x1, def value: None
 ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckManager__DelayedSetReadyForEffects_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckManager__DelayedSetReadyForEffects_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckManager__DelayedSetReadyForEffects_d__12, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckManager__DelayedSetReadyForEffects_d__12, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckManager__DelayedSetReadyForEffects_d__12) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Mirror.NetworkBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckManager
class CORDL_TYPE PeckManager : public ::Mirror::NetworkBehaviour {
public:
// Declarations
using _DelayedSetReadyForEffects_d__12 = ::GlobalNamespace::PeckManager__DelayedSetReadyForEffects_d__12;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GlobalNamespace::PeckManager>  _instance;

/// @brief Field <isReadyForEffects>k__BackingField, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__isReadyForEffects_k__BackingField, put=__cordl_internal_set__isReadyForEffects_k__BackingField)) bool  _isReadyForEffects_k__BackingField;

/// @brief Field initializationQueue, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_initializationQueue, put=setStaticF_initializationQueue)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TrackedPeckState>>*  initializationQueue;

 __declspec(property(get=get_isReadyForEffects, put=set_isReadyForEffects)) bool  isReadyForEffects;

/// @brief Field peckContexts, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_peckContexts, put=__cordl_internal_set_peckContexts)) ::Mirror::SyncDictionary_2<::GlobalNamespace::SeaShell_ShellReference,::GlobalNamespace::PeckContext>*  peckContexts;

/// @brief Method Awake, addr 0x180451640, size 0x50, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DelayedInitialize, addr 0x180451690, size 0x1c0, virtual false, abstract: false, final false
static inline void DelayedInitialize(::GlobalNamespace::TrackedPeckState*  trackedPeckState) ;

/// @brief Method DelayedSetReadyForEffects, addr 0x180451850, size 0x90, virtual false, abstract: false, final false
inline void DelayedSetReadyForEffects() ;

/// @brief Method InvokeUserCode_Reject__NetworkConnection__ShellReference, addr 0x1804518e0, size 0x1b0, virtual false, abstract: false, final false
static inline void InvokeUserCode_Reject__NetworkConnection__ShellReference(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_Retrigger__ShellReference__PeckContext, addr 0x180451a90, size 0x240, virtual false, abstract: false, final false
static inline void InvokeUserCode_Retrigger__ShellReference__PeckContext(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::GlobalNamespace::PeckManager* New_ctor() ;

/// @brief Method OnContextChange, addr 0x180451cd0, size 0xc0, virtual false, abstract: false, final false
inline void OnContextChange(::Mirror::SyncIDictionary_2_Operation<::GlobalNamespace::SeaShell_ShellReference,::GlobalNamespace::PeckContext>  op, ::GlobalNamespace::SeaShell_ShellReference  key, ::GlobalNamespace::PeckContext  item) ;

/// @brief Method OnStartClient, addr 0x180451d90, size 0x300, virtual true, abstract: false, final false
inline void OnStartClient() ;

/// @brief Method Reject, addr 0x180452090, size 0xf0, virtual false, abstract: false, final false
inline void Reject(::Mirror::NetworkConnection*  target, ::GlobalNamespace::SeaShell_ShellReference  shellReference) ;

/// @brief Method Retrigger, addr 0x180452180, size 0x110, virtual false, abstract: false, final false
inline void Retrigger(::GlobalNamespace::SeaShell_ShellReference  shellReference, ::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method SendContext, addr 0x180452290, size 0xb0, virtual false, abstract: false, final false
inline void SendContext(::GlobalNamespace::SeaShell_ShellReference  shellReference, ::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method ServerReject, addr 0x180452340, size 0x1b0, virtual false, abstract: false, final false
static inline void ServerReject(::GlobalNamespace::TrackedPeckState*  peckState, ::GlobalNamespace::PlayerCharacter*  player) ;

/// @brief Method ServerRetrigger, addr 0x1804524f0, size 0x1e0, virtual false, abstract: false, final false
static inline void ServerRetrigger(::GlobalNamespace::TrackedPeckState*  peckState, ::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method SetState, addr 0x1804526d0, size 0x170, virtual false, abstract: false, final false
static inline void SetState(::GlobalNamespace::TrackedPeckState*  peckState, ::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method UserCode_Reject__NetworkConnection__ShellReference, addr 0x180452840, size 0xd0, virtual false, abstract: false, final false
inline void UserCode_Reject__NetworkConnection__ShellReference(::Mirror::NetworkConnection*  target, ::GlobalNamespace::SeaShell_ShellReference  shellReference) ;

/// @brief Method UserCode_Retrigger__ShellReference__PeckContext, addr 0x180452910, size 0x150, virtual false, abstract: false, final false
inline void UserCode_Retrigger__ShellReference__PeckContext(::GlobalNamespace::SeaShell_ShellReference  shellReference, ::GlobalNamespace::PeckContext  peckContext) ;

constexpr bool const& __cordl_internal_get__isReadyForEffects_k__BackingField() const;

constexpr bool& __cordl_internal_get__isReadyForEffects_k__BackingField() ;

constexpr ::Mirror::SyncDictionary_2<::GlobalNamespace::SeaShell_ShellReference,::GlobalNamespace::PeckContext>* const& __cordl_internal_get_peckContexts() const;

constexpr ::Mirror::SyncDictionary_2<::GlobalNamespace::SeaShell_ShellReference,::GlobalNamespace::PeckContext>*& __cordl_internal_get_peckContexts() ;

constexpr void __cordl_internal_set__isReadyForEffects_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_peckContexts(::Mirror::SyncDictionary_2<::GlobalNamespace::SeaShell_ShellReference,::GlobalNamespace::PeckContext>*  value) ;

/// @brief Method .ctor, addr 0x180452b10, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::PeckManager> getStaticF__instance() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TrackedPeckState>>* getStaticF_initializationQueue() ;

/// @brief Method get_Instance, addr 0x180452b70, size 0x40, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::PeckManager> get_Instance() ;

/// @brief Method get_isReadyForEffects, addr 0x180347a60, size 0xe0, virtual false, abstract: false, final false
inline bool get_isReadyForEffects() ;

static inline void setStaticF__instance(::UnityW<::GlobalNamespace::PeckManager>  value) ;

static inline void setStaticF_initializationQueue(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TrackedPeckState>>*  value) ;

/// @brief Method set_isReadyForEffects, addr 0x180452bb0, size 0x10, virtual false, abstract: false, final false
inline void set_isReadyForEffects(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckManager(PeckManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckManager(PeckManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5339};

/// @brief Field <isReadyForEffects>k__BackingField, offset: 0x68, size: 0x1, def value: None
 bool  ____isReadyForEffects_k__BackingField;

/// @brief Field peckContexts, offset: 0x70, size: 0x8, def value: None
 ::Mirror::SyncDictionary_2<::GlobalNamespace::SeaShell_ShellReference,::GlobalNamespace::PeckContext>*  ___peckContexts;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckManager, ____isReadyForEffects_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckManager, ___peckContexts) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckManager) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "Mirror/FizzySteam/LegacyClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/FizzySteam/zzzz__LegacyCommon_def.hpp"
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LegacyClient)
namespace Mirror::FizzySteam {
class FizzySteamworks;
}
namespace Mirror::FizzySteam {
class IClient;
}
namespace Mirror::FizzySteam {
struct LegacyClient__Connect_d__23;
}
namespace Mirror::FizzySteam {
class LegacyClient___c__DisplayClass22_0;
}
namespace Mirror::FizzySteam {
struct LegacyCommon_InternalMessages;
}
namespace Steamworks {
struct CSteamID;
}
namespace Steamworks {
struct P2PSessionRequest_t;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Mirror::FizzySteam {
class LegacyClient;
}
namespace Mirror::FizzySteam {
class LegacyClient___c__DisplayClass22_0;
}
namespace Mirror::FizzySteam {
struct LegacyClient__Connect_d__23;
}
// Write type traits
MARK_REF_T(::Mirror::FizzySteam::LegacyClient*);
MARK_REF_T(::Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0*);
MARK_VAL_T(::Mirror::FizzySteam::LegacyClient__Connect_d__23);
DEFINE_IL2CPP_CLASS(::Mirror::FizzySteam::LegacyClient*, "Mirror.FizzySteam", "LegacyClient");
DEFINE_IL2CPP_CLASS(::Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0*, "Mirror.FizzySteam", "LegacyClient/<>c__DisplayClass22_0");
DEFINE_IL2CPP_CLASS(::Mirror::FizzySteam::LegacyClient__Connect_d__23, "Mirror.FizzySteam", "LegacyClient/<Connect>d__23");
// Dependencies System.Object
namespace Mirror::FizzySteam {
// Is value type: false
// CS Name: Mirror.FizzySteam.LegacyClient/<>c__DisplayClass22_0
class CORDL_TYPE LegacyClient___c__DisplayClass22_0 : public ::System::Object {
public:
// Declarations
/// @brief Field transport, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_transport, put=__cordl_internal_set_transport)) ::UnityW<::Mirror::FizzySteam::FizzySteamworks>  transport;

static inline ::Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0* New_ctor() ;

/// @brief Method <CreateClient>b__0, addr 0x1806311e0, size 0x30, virtual false, abstract: false, final false
inline void _CreateClient_b__0() ;

/// @brief Method <CreateClient>b__1, addr 0x180631210, size 0x30, virtual false, abstract: false, final false
inline void _CreateClient_b__1() ;

/// @brief Method <CreateClient>b__2, addr 0x180631240, size 0x70, virtual false, abstract: false, final false
inline void _CreateClient_b__2(::ArrayW<uint8_t>  data, int32_t  channel) ;

constexpr ::UnityW<::Mirror::FizzySteam::FizzySteamworks> const& __cordl_internal_get_transport() const;

constexpr ::UnityW<::Mirror::FizzySteam::FizzySteamworks>& __cordl_internal_get_transport() ;

constexpr void __cordl_internal_set_transport(::UnityW<::Mirror::FizzySteam::FizzySteamworks>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LegacyClient___c__DisplayClass22_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LegacyClient___c__DisplayClass22_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LegacyClient___c__DisplayClass22_0(LegacyClient___c__DisplayClass22_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LegacyClient___c__DisplayClass22_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LegacyClient___c__DisplayClass22_0(LegacyClient___c__DisplayClass22_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20894};

/// @brief Field transport, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Mirror::FizzySteam::FizzySteamworks>  ___transport;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0, ___transport) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0) == 0x18, "Size mismatch!");

} // namespace end def Mirror::FizzySteam
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Mirror::FizzySteam {
// Is value type: true
// CS Name: Mirror.FizzySteam.LegacyClient/<Connect>d__23
struct CORDL_TYPE LegacyClient__Connect_d__23 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x180630360, size 0x600, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18038a820, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LegacyClient__Connect_d__23() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Mirror::FizzySteam::LegacyClient*", modifiers: "", def_value: None }, CppParam { name: "host", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_connectedCompleteTask_5__2", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }, CppParam { name: "_timeOutTask_5__3", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None }]
constexpr LegacyClient__Connect_d__23(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::Mirror::FizzySteam::LegacyClient*  __4__this, ::StringW  host, ::System::Threading::Tasks::Task*  _connectedCompleteTask_5__2, ::System::Threading::Tasks::Task*  _timeOutTask_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20895};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Mirror::FizzySteam::LegacyClient*  __4__this;

/// @brief Field host, offset: 0x30, size: 0x8, def value: None
 ::StringW  host;

/// @brief Field <connectedCompleteTask>5__2, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  _connectedCompleteTask_5__2;

/// @brief Field <timeOutTask>5__3, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  _timeOutTask_5__3;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::FizzySteam::LegacyClient__Connect_d__23, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::LegacyClient__Connect_d__23, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::LegacyClient__Connect_d__23, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::LegacyClient__Connect_d__23, host) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::LegacyClient__Connect_d__23, _connectedCompleteTask_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::LegacyClient__Connect_d__23, _timeOutTask_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::LegacyClient__Connect_d__23, __u__1) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Mirror::FizzySteam::LegacyClient__Connect_d__23) == 0x50, "Size mismatch!");

} // namespace end def Mirror::FizzySteam
// Dependencies Mirror.FizzySteam.LegacyCommon, Steamworks.CSteamID, System.TimeSpan
namespace Mirror::FizzySteam {
// Is value type: false
// CS Name: Mirror.FizzySteam.LegacyClient
class CORDL_TYPE LegacyClient : public ::Mirror::FizzySteam::LegacyCommon {
public:
// Declarations
using _Connect_d__23 = ::Mirror::FizzySteam::LegacyClient__Connect_d__23;

using __c__DisplayClass22_0 = ::Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0;

 __declspec(property(get=get_Connected, put=set_Connected)) bool  Connected;

/// @brief Field ConnectionTimeout, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConnectionTimeout, put=__cordl_internal_set_ConnectionTimeout)) ::System::TimeSpan  ConnectionTimeout;

 __declspec(property(get=get_Error, put=set_Error)) bool  Error;

/// @brief Field OnConnected, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnConnected, put=__cordl_internal_set_OnConnected)) ::System::Action*  OnConnected;

/// @brief Field OnDisconnected, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDisconnected, put=__cordl_internal_set_OnDisconnected)) ::System::Action*  OnDisconnected;

/// @brief Field OnReceivedData, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnReceivedData, put=__cordl_internal_set_OnReceivedData)) ::System::Action_2<::ArrayW<uint8_t>,int32_t>*  OnReceivedData;

/// @brief Field <Connected>k__BackingField, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__Connected_k__BackingField, put=__cordl_internal_set__Connected_k__BackingField)) bool  _Connected_k__BackingField;

/// @brief Field <Error>k__BackingField, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get__Error_k__BackingField, put=__cordl_internal_set__Error_k__BackingField)) bool  _Error_k__BackingField;

/// @brief Field cancelToken, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancelToken, put=__cordl_internal_set_cancelToken)) ::System::Threading::CancellationTokenSource*  cancelToken;

/// @brief Field connectedComplete, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectedComplete, put=__cordl_internal_set_connectedComplete)) ::System::Threading::Tasks::TaskCompletionSource_1<::System::Threading::Tasks::Task*>*  connectedComplete;

/// @brief Field hostSteamID, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_hostSteamID, put=__cordl_internal_set_hostSteamID)) ::Steamworks::CSteamID  hostSteamID;

/// @brief Convert operator to "::Mirror::FizzySteam::IClient"
constexpr operator  ::Mirror::FizzySteam::IClient*() noexcept;

/// @brief Method Connect, addr 0x18062bcb0, size 0xb0, virtual false, abstract: false, final false
inline void Connect(::StringW  host) ;

/// @brief Method CreateClient, addr 0x18062bd60, size 0x320, virtual false, abstract: false, final false
static inline ::Mirror::FizzySteam::LegacyClient* CreateClient(::Mirror::FizzySteam::FizzySteamworks*  transport, ::StringW  host) ;

/// @brief Method Disconnect, addr 0x18062c080, size 0xf0, virtual true, abstract: false, final true
inline void Disconnect() ;

/// @brief Method FlushData, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void FlushData() ;

static inline ::Mirror::FizzySteam::LegacyClient* New_ctor(::Mirror::FizzySteam::FizzySteamworks*  transport) ;

/// @brief Method OnConnectionFailed, addr 0x18062c170, size 0x30, virtual true, abstract: false, final false
inline void OnConnectionFailed(::Steamworks::CSteamID  remoteId) ;

/// @brief Method OnNewConnection, addr 0x18062c1a0, size 0x70, virtual true, abstract: false, final false
inline void OnNewConnection(::Steamworks::P2PSessionRequest_t  result) ;

/// @brief Method OnReceiveData, addr 0x18062c210, size 0xa0, virtual true, abstract: false, final false
inline void OnReceiveData(::ArrayW<uint8_t>  data, ::Steamworks::CSteamID  clientSteamID, int32_t  channel) ;

/// @brief Method OnReceiveInternalData, addr 0x18062c2b0, size 0xa0, virtual true, abstract: false, final false
inline void OnReceiveInternalData(::Mirror::FizzySteam::LegacyCommon_InternalMessages  type, ::Steamworks::CSteamID  clientSteamID) ;

/// @brief Method Send, addr 0x18062c350, size 0x50, virtual true, abstract: false, final true
inline void Send(::ArrayW<uint8_t>  data, int32_t  channelId) ;

/// @brief Method SetConnectedComplete, addr 0x18062c3a0, size 0x30, virtual false, abstract: false, final false
inline void SetConnectedComplete() ;

constexpr ::System::TimeSpan const& __cordl_internal_get_ConnectionTimeout() const;

constexpr ::System::TimeSpan& __cordl_internal_get_ConnectionTimeout() ;

constexpr ::System::Action* const& __cordl_internal_get_OnConnected() const;

constexpr ::System::Action*& __cordl_internal_get_OnConnected() ;

constexpr ::System::Action* const& __cordl_internal_get_OnDisconnected() const;

constexpr ::System::Action*& __cordl_internal_get_OnDisconnected() ;

constexpr ::System::Action_2<::ArrayW<uint8_t>,int32_t>* const& __cordl_internal_get_OnReceivedData() const;

constexpr ::System::Action_2<::ArrayW<uint8_t>,int32_t>*& __cordl_internal_get_OnReceivedData() ;

constexpr bool const& __cordl_internal_get__Connected_k__BackingField() const;

constexpr bool& __cordl_internal_get__Connected_k__BackingField() ;

constexpr bool const& __cordl_internal_get__Error_k__BackingField() const;

constexpr bool& __cordl_internal_get__Error_k__BackingField() ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get_cancelToken() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get_cancelToken() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Threading::Tasks::Task*>* const& __cordl_internal_get_connectedComplete() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Threading::Tasks::Task*>*& __cordl_internal_get_connectedComplete() ;

constexpr ::Steamworks::CSteamID const& __cordl_internal_get_hostSteamID() const;

constexpr ::Steamworks::CSteamID& __cordl_internal_get_hostSteamID() ;

constexpr void __cordl_internal_set_ConnectionTimeout(::System::TimeSpan  value) ;

constexpr void __cordl_internal_set_OnConnected(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnDisconnected(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnReceivedData(::System::Action_2<::ArrayW<uint8_t>,int32_t>*  value) ;

constexpr void __cordl_internal_set__Connected_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Error_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_cancelToken(::System::Threading::CancellationTokenSource*  value) ;

constexpr void __cordl_internal_set_connectedComplete(::System::Threading::Tasks::TaskCompletionSource_1<::System::Threading::Tasks::Task*>*  value) ;

constexpr void __cordl_internal_set_hostSteamID(::Steamworks::CSteamID  value) ;

/// @brief Method .ctor, addr 0x18062c3d0, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::Mirror::FizzySteam::FizzySteamworks*  transport) ;

/// @brief Method add_OnConnected, addr 0x18062c460, size 0x80, virtual false, abstract: false, final false
inline void add_OnConnected(::System::Action*  value) ;

/// @brief Method add_OnDisconnected, addr 0x18062c4e0, size 0x80, virtual false, abstract: false, final false
inline void add_OnDisconnected(::System::Action*  value) ;

/// @brief Method add_OnReceivedData, addr 0x18062c560, size 0x90, virtual false, abstract: false, final false
inline void add_OnReceivedData(::System::Action_2<::ArrayW<uint8_t>,int32_t>*  value) ;

/// @brief Method get_Connected, addr 0x1803561b0, size 0x10, virtual true, abstract: false, final true
inline bool get_Connected() ;

/// @brief Method get_Error, addr 0x18049c410, size 0x10, virtual true, abstract: false, final true
inline bool get_Error() ;

/// @brief Convert to "::Mirror::FizzySteam::IClient"
constexpr ::Mirror::FizzySteam::IClient* i___Mirror__FizzySteam__IClient() noexcept;

/// @brief Method remove_OnConnected, addr 0x18062c5f0, size 0x80, virtual false, abstract: false, final false
inline void remove_OnConnected(::System::Action*  value) ;

/// @brief Method remove_OnDisconnected, addr 0x18062c670, size 0x80, virtual false, abstract: false, final false
inline void remove_OnDisconnected(::System::Action*  value) ;

/// @brief Method remove_OnReceivedData, addr 0x18062c6f0, size 0x90, virtual false, abstract: false, final false
inline void remove_OnReceivedData(::System::Action_2<::ArrayW<uint8_t>,int32_t>*  value) ;

/// @brief Method set_Connected, addr 0x180499eb0, size 0x10, virtual false, abstract: false, final false
inline void set_Connected(bool  value) ;

/// @brief Method set_Error, addr 0x18049c420, size 0x10, virtual false, abstract: false, final false
inline void set_Error(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LegacyClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LegacyClient", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LegacyClient(LegacyClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LegacyClient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LegacyClient(LegacyClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20896};

/// @brief Field <Connected>k__BackingField, offset: 0x30, size: 0x1, def value: None
 bool  ____Connected_k__BackingField;

/// @brief Field <Error>k__BackingField, offset: 0x31, size: 0x1, def value: None
 bool  ____Error_k__BackingField;

/// @brief Field OnReceivedData, offset: 0x38, size: 0x8, def value: None
 ::System::Action_2<::ArrayW<uint8_t>,int32_t>*  ___OnReceivedData;

/// @brief Field OnConnected, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  ___OnConnected;

/// @brief Field OnDisconnected, offset: 0x48, size: 0x8, def value: None
 ::System::Action*  ___OnDisconnected;

/// @brief Field ConnectionTimeout, offset: 0x50, size: 0x8, def value: None
 ::System::TimeSpan  ___ConnectionTimeout;

/// @brief Field hostSteamID, offset: 0x58, size: 0x8, def value: None
 ::Steamworks::CSteamID  ___hostSteamID;

/// @brief Field connectedComplete, offset: 0x60, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::System::Threading::Tasks::Task*>*  ___connectedComplete;

/// @brief Field cancelToken, offset: 0x68, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ___cancelToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::FizzySteam::LegacyClient, ____Connected_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::LegacyClient, ____Error_k__BackingField) == 0x31, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::LegacyClient, ___OnReceivedData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::LegacyClient, ___OnConnected) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::LegacyClient, ___OnDisconnected) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::LegacyClient, ___ConnectionTimeout) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::LegacyClient, ___hostSteamID) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::LegacyClient, ___connectedComplete) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::LegacyClient, ___cancelToken) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Mirror::FizzySteam::LegacyClient) == 0x70, "Size mismatch!");

} // namespace end def Mirror::FizzySteam

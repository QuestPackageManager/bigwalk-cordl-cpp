#pragma once
// IWYU pragma private; include "Mirror/FizzySteam/NextClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/FizzySteam/zzzz__NextCommon_def.hpp"
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__HSteamNetConnection_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NextClient)
namespace Mirror::FizzySteam {
class FizzySteamworks;
}
namespace Mirror::FizzySteam {
class IClient;
}
namespace Mirror::FizzySteam {
struct NextClient__Connect_d__26;
}
namespace Mirror::FizzySteam {
class NextClient___c__DisplayClass25_0;
}
namespace Mirror::FizzySteam {
class NextClient___c__DisplayClass31_0;
}
namespace Steamworks {
template<typename T>
class Callback_1;
}
namespace Steamworks {
struct SteamNetConnectionStatusChangedCallback_t;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
class NextClient;
}
namespace Mirror::FizzySteam {
class NextClient___c__DisplayClass25_0;
}
namespace Mirror::FizzySteam {
class NextClient___c__DisplayClass31_0;
}
namespace Mirror::FizzySteam {
struct NextClient__Connect_d__26;
}
// Write type traits
MARK_REF_T(::Mirror::FizzySteam::NextClient*);
MARK_REF_T(::Mirror::FizzySteam::NextClient___c__DisplayClass25_0*);
MARK_REF_T(::Mirror::FizzySteam::NextClient___c__DisplayClass31_0*);
MARK_VAL_T(::Mirror::FizzySteam::NextClient__Connect_d__26);
DEFINE_IL2CPP_CLASS(::Mirror::FizzySteam::NextClient*, "Mirror.FizzySteam", "NextClient");
DEFINE_IL2CPP_CLASS(::Mirror::FizzySteam::NextClient___c__DisplayClass25_0*, "Mirror.FizzySteam", "NextClient/<>c__DisplayClass25_0");
DEFINE_IL2CPP_CLASS(::Mirror::FizzySteam::NextClient___c__DisplayClass31_0*, "Mirror.FizzySteam", "NextClient/<>c__DisplayClass31_0");
DEFINE_IL2CPP_CLASS(::Mirror::FizzySteam::NextClient__Connect_d__26, "Mirror.FizzySteam", "NextClient/<Connect>d__26");
// Dependencies System.Object
namespace Mirror::FizzySteam {
// Is value type: false
// CS Name: Mirror.FizzySteam.NextClient/<>c__DisplayClass25_0
class CORDL_TYPE NextClient___c__DisplayClass25_0 : public ::System::Object {
public:
// Declarations
/// @brief Field transport, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_transport, put=__cordl_internal_set_transport)) ::UnityW<::Mirror::FizzySteam::FizzySteamworks>  transport;

static inline ::Mirror::FizzySteam::NextClient___c__DisplayClass25_0* New_ctor() ;

/// @brief Method <CreateClient>b__0, addr 0x1806311e0, size 0x30, virtual false, abstract: false, final false
inline void _CreateClient_b__0() ;

/// @brief Method <CreateClient>b__1, addr 0x180631210, size 0x30, virtual false, abstract: false, final false
inline void _CreateClient_b__1() ;

/// @brief Method <CreateClient>b__2, addr 0x180631240, size 0x70, virtual false, abstract: false, final false
inline void _CreateClient_b__2(::ArrayW<uint8_t>  data, int32_t  ch) ;

constexpr ::UnityW<::Mirror::FizzySteam::FizzySteamworks> const& __cordl_internal_get_transport() const;

constexpr ::UnityW<::Mirror::FizzySteam::FizzySteamworks>& __cordl_internal_get_transport() ;

constexpr void __cordl_internal_set_transport(::UnityW<::Mirror::FizzySteam::FizzySteamworks>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NextClient___c__DisplayClass25_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NextClient___c__DisplayClass25_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NextClient___c__DisplayClass25_0(NextClient___c__DisplayClass25_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NextClient___c__DisplayClass25_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NextClient___c__DisplayClass25_0(NextClient___c__DisplayClass25_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20902};

/// @brief Field transport, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Mirror::FizzySteam::FizzySteamworks>  ___transport;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::FizzySteam::NextClient___c__DisplayClass25_0, ___transport) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Mirror::FizzySteam::NextClient___c__DisplayClass25_0) == 0x18, "Size mismatch!");

} // namespace end def Mirror::FizzySteam
// Dependencies System.Object
namespace Mirror::FizzySteam {
// Is value type: false
// CS Name: Mirror.FizzySteam.NextClient/<>c__DisplayClass31_0
class CORDL_TYPE NextClient___c__DisplayClass31_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Mirror::FizzySteam::NextClient*  __4__this;

/// @brief Field ch, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_ch, put=__cordl_internal_set_ch)) int32_t  ch;

/// @brief Field data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::ArrayW<uint8_t>  data;

static inline ::Mirror::FizzySteam::NextClient___c__DisplayClass31_0* New_ctor() ;

/// @brief Method <ReceiveData>b__0, addr 0x1806312b0, size 0x40, virtual false, abstract: false, final false
inline void _ReceiveData_b__0() ;

constexpr ::Mirror::FizzySteam::NextClient* const& __cordl_internal_get___4__this() const;

constexpr ::Mirror::FizzySteam::NextClient*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get_ch() const;

constexpr int32_t& __cordl_internal_get_ch() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_data() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___4__this(::Mirror::FizzySteam::NextClient*  value) ;

constexpr void __cordl_internal_set_ch(int32_t  value) ;

constexpr void __cordl_internal_set_data(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NextClient___c__DisplayClass31_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NextClient___c__DisplayClass31_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NextClient___c__DisplayClass31_0(NextClient___c__DisplayClass31_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NextClient___c__DisplayClass31_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NextClient___c__DisplayClass31_0(NextClient___c__DisplayClass31_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20903};

/// @brief Field data, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___data;

/// @brief Field ch, offset: 0x18, size: 0x4, def value: None
 int32_t  ___ch;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Mirror::FizzySteam::NextClient*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::FizzySteam::NextClient___c__DisplayClass31_0, ___data) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::NextClient___c__DisplayClass31_0, ___ch) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::NextClient___c__DisplayClass31_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Mirror::FizzySteam::NextClient___c__DisplayClass31_0) == 0x28, "Size mismatch!");

} // namespace end def Mirror::FizzySteam
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Mirror::FizzySteam {
// Is value type: true
// CS Name: Mirror.FizzySteam.NextClient/<Connect>d__26
struct CORDL_TYPE NextClient__Connect_d__26 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x180630960, size 0x6f0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18038a820, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr NextClient__Connect_d__26() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Mirror::FizzySteam::NextClient*", modifiers: "", def_value: None }, CppParam { name: "host", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_connectedCompleteTask_5__2", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }, CppParam { name: "_timeOutTask_5__3", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None }]
constexpr NextClient__Connect_d__26(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::Mirror::FizzySteam::NextClient*  __4__this, ::StringW  host, ::System::Threading::Tasks::Task*  _connectedCompleteTask_5__2, ::System::Threading::Tasks::Task*  _timeOutTask_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20904};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Mirror::FizzySteam::NextClient*  __4__this;

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
static_assert(offsetof(::Mirror::FizzySteam::NextClient__Connect_d__26, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::NextClient__Connect_d__26, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::NextClient__Connect_d__26, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::NextClient__Connect_d__26, host) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::NextClient__Connect_d__26, _connectedCompleteTask_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::NextClient__Connect_d__26, _timeOutTask_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::NextClient__Connect_d__26, __u__1) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Mirror::FizzySteam::NextClient__Connect_d__26) == 0x50, "Size mismatch!");

} // namespace end def Mirror::FizzySteam
// Dependencies Mirror.FizzySteam.NextCommon, Steamworks.CSteamID, Steamworks.HSteamNetConnection, System.TimeSpan
namespace Mirror::FizzySteam {
// Is value type: false
// CS Name: Mirror.FizzySteam.NextClient
class CORDL_TYPE NextClient : public ::Mirror::FizzySteam::NextCommon {
public:
// Declarations
using _Connect_d__26 = ::Mirror::FizzySteam::NextClient__Connect_d__26;

using __c__DisplayClass25_0 = ::Mirror::FizzySteam::NextClient___c__DisplayClass25_0;

using __c__DisplayClass31_0 = ::Mirror::FizzySteam::NextClient___c__DisplayClass31_0;

/// @brief Field BufferedData, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_BufferedData, put=__cordl_internal_set_BufferedData)) ::System::Collections::Generic::List_1<::System::Action*>*  BufferedData;

 __declspec(property(get=get_Connected, put=set_Connected)) bool  Connected;

/// @brief Field ConnectionTimeout, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConnectionTimeout, put=__cordl_internal_set_ConnectionTimeout)) ::System::TimeSpan  ConnectionTimeout;

 __declspec(property(get=get_Error, put=set_Error)) bool  Error;

/// @brief Field HostConnection, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_HostConnection, put=__cordl_internal_set_HostConnection)) ::Steamworks::HSteamNetConnection  HostConnection;

/// @brief Field OnConnected, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnConnected, put=__cordl_internal_set_OnConnected)) ::System::Action*  OnConnected;

/// @brief Field OnDisconnected, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDisconnected, put=__cordl_internal_set_OnDisconnected)) ::System::Action*  OnDisconnected;

/// @brief Field OnReceivedData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnReceivedData, put=__cordl_internal_set_OnReceivedData)) ::System::Action_2<::ArrayW<uint8_t>,int32_t>*  OnReceivedData;

/// @brief Field <Connected>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__Connected_k__BackingField, put=__cordl_internal_set__Connected_k__BackingField)) bool  _Connected_k__BackingField;

/// @brief Field <Error>k__BackingField, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get__Error_k__BackingField, put=__cordl_internal_set__Error_k__BackingField)) bool  _Error_k__BackingField;

/// @brief Field c_onConnectionChange, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_c_onConnectionChange, put=__cordl_internal_set_c_onConnectionChange)) ::Steamworks::Callback_1<::Steamworks::SteamNetConnectionStatusChangedCallback_t>*  c_onConnectionChange;

/// @brief Field cancelToken, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancelToken, put=__cordl_internal_set_cancelToken)) ::System::Threading::CancellationTokenSource*  cancelToken;

/// @brief Field connectedComplete, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectedComplete, put=__cordl_internal_set_connectedComplete)) ::System::Threading::Tasks::TaskCompletionSource_1<::System::Threading::Tasks::Task*>*  connectedComplete;

/// @brief Field hostSteamID, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_hostSteamID, put=__cordl_internal_set_hostSteamID)) ::Steamworks::CSteamID  hostSteamID;

/// @brief Convert operator to "::Mirror::FizzySteam::IClient"
constexpr operator  ::Mirror::FizzySteam::IClient*() noexcept;

/// @brief Method Connect, addr 0x18062df10, size 0xb0, virtual false, abstract: false, final false
inline void Connect(::StringW  host) ;

/// @brief Method CreateClient, addr 0x18062dfc0, size 0x2f0, virtual false, abstract: false, final false
static inline ::Mirror::FizzySteam::NextClient* CreateClient(::Mirror::FizzySteam::FizzySteamworks*  transport, ::StringW  host) ;

/// @brief Method Disconnect, addr 0x18062e2b0, size 0x80, virtual true, abstract: false, final true
inline void Disconnect() ;

/// @brief Method Dispose, addr 0x18062e330, size 0x40, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method FlushData, addr 0x18062e370, size 0x10, virtual true, abstract: false, final true
inline void FlushData() ;

/// @brief Method InternalDisconnect, addr 0x18062e380, size 0x60, virtual false, abstract: false, final false
inline void InternalDisconnect() ;

static inline ::Mirror::FizzySteam::NextClient* New_ctor(::Mirror::FizzySteam::FizzySteamworks*  transport) ;

/// @brief Method OnConnectionFailed, addr 0x180551510, size 0x30, virtual false, abstract: false, final false
inline void OnConnectionFailed() ;

/// @brief Method OnConnectionStatusChanged, addr 0x18062e3e0, size 0x260, virtual false, abstract: false, final false
inline void OnConnectionStatusChanged(::Steamworks::SteamNetConnectionStatusChangedCallback_t  param) ;

/// @brief Method ReceiveData, addr 0x18062e640, size 0x230, virtual true, abstract: false, final true
inline void ReceiveData() ;

/// @brief Method Send, addr 0x18062e870, size 0xe0, virtual true, abstract: false, final true
inline void Send(::ArrayW<uint8_t>  data, int32_t  channelId) ;

/// @brief Method SetConnectedComplete, addr 0x18062e950, size 0x30, virtual false, abstract: false, final false
inline void SetConnectedComplete() ;

constexpr ::System::Collections::Generic::List_1<::System::Action*>* const& __cordl_internal_get_BufferedData() const;

constexpr ::System::Collections::Generic::List_1<::System::Action*>*& __cordl_internal_get_BufferedData() ;

constexpr ::System::TimeSpan const& __cordl_internal_get_ConnectionTimeout() const;

constexpr ::System::TimeSpan& __cordl_internal_get_ConnectionTimeout() ;

constexpr ::Steamworks::HSteamNetConnection const& __cordl_internal_get_HostConnection() const;

constexpr ::Steamworks::HSteamNetConnection& __cordl_internal_get_HostConnection() ;

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

constexpr ::Steamworks::Callback_1<::Steamworks::SteamNetConnectionStatusChangedCallback_t>* const& __cordl_internal_get_c_onConnectionChange() const;

constexpr ::Steamworks::Callback_1<::Steamworks::SteamNetConnectionStatusChangedCallback_t>*& __cordl_internal_get_c_onConnectionChange() ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get_cancelToken() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get_cancelToken() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Threading::Tasks::Task*>* const& __cordl_internal_get_connectedComplete() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Threading::Tasks::Task*>*& __cordl_internal_get_connectedComplete() ;

constexpr ::Steamworks::CSteamID const& __cordl_internal_get_hostSteamID() const;

constexpr ::Steamworks::CSteamID& __cordl_internal_get_hostSteamID() ;

constexpr void __cordl_internal_set_BufferedData(::System::Collections::Generic::List_1<::System::Action*>*  value) ;

constexpr void __cordl_internal_set_ConnectionTimeout(::System::TimeSpan  value) ;

constexpr void __cordl_internal_set_HostConnection(::Steamworks::HSteamNetConnection  value) ;

constexpr void __cordl_internal_set_OnConnected(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnDisconnected(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnReceivedData(::System::Action_2<::ArrayW<uint8_t>,int32_t>*  value) ;

constexpr void __cordl_internal_set__Connected_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Error_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_c_onConnectionChange(::Steamworks::Callback_1<::Steamworks::SteamNetConnectionStatusChangedCallback_t>*  value) ;

constexpr void __cordl_internal_set_cancelToken(::System::Threading::CancellationTokenSource*  value) ;

constexpr void __cordl_internal_set_connectedComplete(::System::Threading::Tasks::TaskCompletionSource_1<::System::Threading::Tasks::Task*>*  value) ;

constexpr void __cordl_internal_set_hostSteamID(::Steamworks::CSteamID  value) ;

/// @brief Method .ctor, addr 0x18062e980, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::Mirror::FizzySteam::FizzySteamworks*  transport) ;

/// @brief Method add_OnConnected, addr 0x18062ea20, size 0x80, virtual false, abstract: false, final false
inline void add_OnConnected(::System::Action*  value) ;

/// @brief Method add_OnDisconnected, addr 0x18062eaa0, size 0x80, virtual false, abstract: false, final false
inline void add_OnDisconnected(::System::Action*  value) ;

/// @brief Method add_OnReceivedData, addr 0x18062eb20, size 0x90, virtual false, abstract: false, final false
inline void add_OnReceivedData(::System::Action_2<::ArrayW<uint8_t>,int32_t>*  value) ;

/// @brief Method get_Connected, addr 0x180392490, size 0x10, virtual true, abstract: false, final true
inline bool get_Connected() ;

/// @brief Method get_Error, addr 0x180503b10, size 0x10, virtual true, abstract: false, final true
inline bool get_Error() ;

/// @brief Convert to "::Mirror::FizzySteam::IClient"
constexpr ::Mirror::FizzySteam::IClient* i___Mirror__FizzySteam__IClient() noexcept;

/// @brief Method remove_OnConnected, addr 0x18062ebb0, size 0x80, virtual false, abstract: false, final false
inline void remove_OnConnected(::System::Action*  value) ;

/// @brief Method remove_OnDisconnected, addr 0x18062ec30, size 0x80, virtual false, abstract: false, final false
inline void remove_OnDisconnected(::System::Action*  value) ;

/// @brief Method remove_OnReceivedData, addr 0x18062ecb0, size 0x90, virtual false, abstract: false, final false
inline void remove_OnReceivedData(::System::Action_2<::ArrayW<uint8_t>,int32_t>*  value) ;

/// @brief Method set_Connected, addr 0x1803924a0, size 0x10, virtual false, abstract: false, final false
inline void set_Connected(bool  value) ;

/// @brief Method set_Error, addr 0x180503b60, size 0x10, virtual false, abstract: false, final false
inline void set_Error(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NextClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NextClient", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NextClient(NextClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NextClient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NextClient(NextClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20905};

/// @brief Field <Connected>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____Connected_k__BackingField;

/// @brief Field <Error>k__BackingField, offset: 0x11, size: 0x1, def value: None
 bool  ____Error_k__BackingField;

/// @brief Field ConnectionTimeout, offset: 0x18, size: 0x8, def value: None
 ::System::TimeSpan  ___ConnectionTimeout;

/// @brief Field OnReceivedData, offset: 0x20, size: 0x8, def value: None
 ::System::Action_2<::ArrayW<uint8_t>,int32_t>*  ___OnReceivedData;

/// @brief Field OnConnected, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  ___OnConnected;

/// @brief Field OnDisconnected, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  ___OnDisconnected;

/// @brief Field c_onConnectionChange, offset: 0x38, size: 0x8, def value: None
 ::Steamworks::Callback_1<::Steamworks::SteamNetConnectionStatusChangedCallback_t>*  ___c_onConnectionChange;

/// @brief Field cancelToken, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ___cancelToken;

/// @brief Field connectedComplete, offset: 0x48, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::System::Threading::Tasks::Task*>*  ___connectedComplete;

/// @brief Field hostSteamID, offset: 0x50, size: 0x8, def value: None
 ::Steamworks::CSteamID  ___hostSteamID;

/// @brief Field HostConnection, offset: 0x58, size: 0x4, def value: None
 ::Steamworks::HSteamNetConnection  ___HostConnection;

/// @brief Field BufferedData, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Action*>*  ___BufferedData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::FizzySteam::NextClient, ____Connected_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::NextClient, ____Error_k__BackingField) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::NextClient, ___ConnectionTimeout) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::NextClient, ___OnReceivedData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::NextClient, ___OnConnected) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::NextClient, ___OnDisconnected) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::NextClient, ___c_onConnectionChange) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::NextClient, ___cancelToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::NextClient, ___connectedComplete) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::NextClient, ___hostSteamID) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::NextClient, ___HostConnection) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::NextClient, ___BufferedData) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Mirror::FizzySteam::NextClient) == 0x68, "Size mismatch!");

} // namespace end def Mirror::FizzySteam

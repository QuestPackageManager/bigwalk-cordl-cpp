#pragma once
// IWYU pragma private; include "EpicTransport/Client.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/P2P/zzzz__SocketId_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "EpicTransport/zzzz__Common_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Client)
namespace Epic::OnlineServices::P2P {
struct OnIncomingConnectionRequestInfo;
}
namespace Epic::OnlineServices::P2P {
struct SocketId;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace EpicTransport {
struct Client__Connect_d__31;
}
namespace EpicTransport {
struct Client__OnSessionFound_d__27;
}
namespace EpicTransport {
class Client___c__DisplayClass26_0;
}
namespace EpicTransport {
struct Common_InternalMessages;
}
namespace EpicTransport {
class EosTransport;
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
namespace EpicTransport {
class Client;
}
namespace EpicTransport {
class Client___c__DisplayClass26_0;
}
namespace EpicTransport {
struct Client__Connect_d__31;
}
namespace EpicTransport {
struct Client__OnSessionFound_d__27;
}
// Write type traits
MARK_REF_T(::EpicTransport::Client*);
MARK_REF_T(::EpicTransport::Client___c__DisplayClass26_0*);
MARK_VAL_T(::EpicTransport::Client__Connect_d__31);
MARK_VAL_T(::EpicTransport::Client__OnSessionFound_d__27);
DEFINE_IL2CPP_CLASS(::EpicTransport::Client*, "EpicTransport", "Client");
DEFINE_IL2CPP_CLASS(::EpicTransport::Client___c__DisplayClass26_0*, "EpicTransport", "Client/<>c__DisplayClass26_0");
DEFINE_IL2CPP_CLASS(::EpicTransport::Client__Connect_d__31, "EpicTransport", "Client/<Connect>d__31");
DEFINE_IL2CPP_CLASS(::EpicTransport::Client__OnSessionFound_d__27, "EpicTransport", "Client/<OnSessionFound>d__27");
// Dependencies System.Object
namespace EpicTransport {
// Is value type: false
// CS Name: EpicTransport.Client/<>c__DisplayClass26_0
class CORDL_TYPE Client___c__DisplayClass26_0 : public ::System::Object {
public:
// Declarations
/// @brief Field transport, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_transport, put=__cordl_internal_set_transport)) ::UnityW<::EpicTransport::EosTransport>  transport;

static inline ::EpicTransport::Client___c__DisplayClass26_0* New_ctor() ;

/// @brief Method <CreateClient>b__0, addr 0x1806311e0, size 0x30, virtual false, abstract: false, final false
inline void _CreateClient_b__0() ;

/// @brief Method <CreateClient>b__1, addr 0x180631210, size 0x30, virtual false, abstract: false, final false
inline void _CreateClient_b__1() ;

/// @brief Method <CreateClient>b__2, addr 0x180631240, size 0x70, virtual false, abstract: false, final false
inline void _CreateClient_b__2(::ArrayW<uint8_t>  data, int32_t  channel) ;

constexpr ::UnityW<::EpicTransport::EosTransport> const& __cordl_internal_get_transport() const;

constexpr ::UnityW<::EpicTransport::EosTransport>& __cordl_internal_get_transport() ;

constexpr void __cordl_internal_set_transport(::UnityW<::EpicTransport::EosTransport>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Client___c__DisplayClass26_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Client___c__DisplayClass26_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Client___c__DisplayClass26_0(Client___c__DisplayClass26_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Client___c__DisplayClass26_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Client___c__DisplayClass26_0(Client___c__DisplayClass26_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19040};

/// @brief Field transport, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::EpicTransport::EosTransport>  ___transport;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::EpicTransport::Client___c__DisplayClass26_0, ___transport) == 0x10, "Offset mismatch!");

static_assert(sizeof(::EpicTransport::Client___c__DisplayClass26_0) == 0x18, "Size mismatch!");

} // namespace end def EpicTransport
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder
namespace EpicTransport {
// Is value type: true
// CS Name: EpicTransport.Client/<Connect>d__31
struct CORDL_TYPE Client__Connect_d__31 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18158d7c0, size 0x170, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18038a820, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr Client__Connect_d__31() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::EpicTransport::Client*", modifiers: "", def_value: None }, CppParam { name: "host", ty: "::StringW", modifiers: "", def_value: None }]
constexpr Client__Connect_d__31(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::EpicTransport::Client*  __4__this, ::StringW  host) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19041};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::EpicTransport::Client*  __4__this;

/// @brief Field host, offset: 0x30, size: 0x8, def value: None
 ::StringW  host;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::EpicTransport::Client__Connect_d__31, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Client__Connect_d__31, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Client__Connect_d__31, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Client__Connect_d__31, host) == 0x30, "Offset mismatch!");

static_assert(sizeof(::EpicTransport::Client__Connect_d__31) == 0x38, "Size mismatch!");

} // namespace end def EpicTransport
// Dependencies Epic.OnlineServices.Result, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace EpicTransport {
// Is value type: true
// CS Name: EpicTransport.Client/<OnSessionFound>d__27
struct CORDL_TYPE Client__OnSessionFound_d__27 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18158da90, size 0x7c0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18038a820, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr Client__OnSessionFound_d__27() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "result", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::EpicTransport::Client*", modifiers: "", def_value: None }, CppParam { name: "_host_5__2", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_connectedCompleteTask_5__3", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None }]
constexpr Client__OnSessionFound_d__27(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::Epic::OnlineServices::Result  result, ::EpicTransport::Client*  __4__this, ::StringW  _host_5__2, ::System::Threading::Tasks::Task*  _connectedCompleteTask_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19042};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field result, offset: 0x28, size: 0x4, def value: None
 ::Epic::OnlineServices::Result  result;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::EpicTransport::Client*  __4__this;

/// @brief Field <host>5__2, offset: 0x38, size: 0x8, def value: None
 ::StringW  _host_5__2;

/// @brief Field <connectedCompleteTask>5__3, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  _connectedCompleteTask_5__3;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::EpicTransport::Client__OnSessionFound_d__27, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Client__OnSessionFound_d__27, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Client__OnSessionFound_d__27, result) == 0x28, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Client__OnSessionFound_d__27, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Client__OnSessionFound_d__27, _host_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Client__OnSessionFound_d__27, _connectedCompleteTask_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Client__OnSessionFound_d__27, __u__1) == 0x48, "Offset mismatch!");

static_assert(sizeof(::EpicTransport::Client__OnSessionFound_d__27) == 0x50, "Size mismatch!");

} // namespace end def EpicTransport
// Dependencies Epic.OnlineServices.P2P.SocketId, EpicTransport.Common, System.TimeSpan
namespace EpicTransport {
// Is value type: false
// CS Name: EpicTransport.Client
class CORDL_TYPE Client : public ::EpicTransport::Common {
public:
// Declarations
using _Connect_d__31 = ::EpicTransport::Client__Connect_d__31;

using _OnSessionFound_d__27 = ::EpicTransport::Client__OnSessionFound_d__27;

using __c__DisplayClass26_0 = ::EpicTransport::Client___c__DisplayClass26_0;

 __declspec(property(get=get_Connected, put=set_Connected)) bool  Connected;

/// @brief Field ConnectionTimeout, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConnectionTimeout, put=__cordl_internal_set_ConnectionTimeout)) ::System::TimeSpan  ConnectionTimeout;

 __declspec(property(get=get_Error, put=set_Error)) bool  Error;

 __declspec(property(get=get_HadEstablishedSession)) bool  HadEstablishedSession;

/// @brief Field OnConnected, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnConnected, put=__cordl_internal_set_OnConnected)) ::System::Action*  OnConnected;

/// @brief Field OnDisconnected, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDisconnected, put=__cordl_internal_set_OnDisconnected)) ::System::Action*  OnDisconnected;

/// @brief Field OnReceivedData, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnReceivedData, put=__cordl_internal_set_OnReceivedData)) ::System::Action_2<::ArrayW<uint8_t>,int32_t>*  OnReceivedData;

/// @brief Field <Connected>k__BackingField, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get__Connected_k__BackingField, put=__cordl_internal_set__Connected_k__BackingField)) bool  _Connected_k__BackingField;

/// @brief Field <Error>k__BackingField, offset 0xa9, size 0x1 
 __declspec(property(get=__cordl_internal_get__Error_k__BackingField, put=__cordl_internal_set__Error_k__BackingField)) bool  _Error_k__BackingField;

/// @brief Field cancelToken, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancelToken, put=__cordl_internal_set_cancelToken)) ::System::Threading::CancellationTokenSource*  cancelToken;

/// @brief Field connectedComplete, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectedComplete, put=__cordl_internal_set_connectedComplete)) ::System::Threading::Tasks::TaskCompletionSource_1<::System::Threading::Tasks::Task*>*  connectedComplete;

/// @brief Field hostAddress, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_hostAddress, put=__cordl_internal_set_hostAddress)) ::StringW  hostAddress;

/// @brief Field hostProductId, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_hostProductId, put=__cordl_internal_set_hostProductId)) ::Epic::OnlineServices::ProductUserId*  hostProductId;

/// @brief Field isConnecting, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get_isConnecting, put=__cordl_internal_set_isConnecting)) bool  isConnecting;

/// @brief Field serverId, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_serverId, put=__cordl_internal_set_serverId)) ::Epic::OnlineServices::ProductUserId*  serverId;

/// @brief Field socketId, offset 0x80, size 0x20 
 __declspec(property(get=__cordl_internal_get_socketId, put=__cordl_internal_set_socketId)) ::Epic::OnlineServices::P2P::SocketId  socketId;

/// @brief Method Connect, addr 0x1815803c0, size 0xb0, virtual false, abstract: false, final false
inline void Connect(::StringW  host) ;

/// @brief Method CreateClient, addr 0x181580470, size 0x3a0, virtual false, abstract: false, final false
static inline ::EpicTransport::Client* CreateClient(::EpicTransport::EosTransport*  transport, ::StringW  host) ;

/// @brief Method Disconnect, addr 0x181580810, size 0x240, virtual false, abstract: false, final false
inline void Disconnect() ;

/// @brief Method Dispose, addr 0x181580a50, size 0xf0, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method EosNotInitialized, addr 0x181580b40, size 0x30, virtual false, abstract: false, final false
inline void EosNotInitialized() ;

static inline ::EpicTransport::Client* New_ctor(::EpicTransport::EosTransport*  transport) ;

/// @brief Method OnConnectionFailed, addr 0x181580b40, size 0x30, virtual true, abstract: false, final false
inline void OnConnectionFailed(::Epic::OnlineServices::ProductUserId*  remoteId) ;

/// @brief Method OnNewConnection, addr 0x181580b70, size 0x200, virtual true, abstract: false, final false
inline void OnNewConnection(::by_ref<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfo>  result) ;

/// @brief Method OnReceiveData, addr 0x181580d70, size 0x90, virtual true, abstract: false, final false
inline void OnReceiveData(::ArrayW<uint8_t>  data, ::Epic::OnlineServices::ProductUserId*  clientUserId, int32_t  channel) ;

/// @brief Method OnReceiveInternalData, addr 0x181580e00, size 0x150, virtual true, abstract: false, final false
inline void OnReceiveInternalData(::EpicTransport::Common_InternalMessages  type, ::Epic::OnlineServices::ProductUserId*  clientUserId, ::Epic::OnlineServices::P2P::SocketId  socketId) ;

/// @brief Method OnSessionFound, addr 0x181580f50, size 0xa0, virtual false, abstract: false, final false
inline void OnSessionFound(::Epic::OnlineServices::Result  result) ;

/// @brief Method Send, addr 0x181580ff0, size 0x50, virtual false, abstract: false, final false
inline void Send(::ArrayW<uint8_t>  data, int32_t  channelId) ;

/// @brief Method SetConnectedComplete, addr 0x181581040, size 0x50, virtual false, abstract: false, final false
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

constexpr ::StringW const& __cordl_internal_get_hostAddress() const;

constexpr ::StringW& __cordl_internal_get_hostAddress() ;

constexpr ::Epic::OnlineServices::ProductUserId* const& __cordl_internal_get_hostProductId() const;

constexpr ::Epic::OnlineServices::ProductUserId*& __cordl_internal_get_hostProductId() ;

constexpr bool const& __cordl_internal_get_isConnecting() const;

constexpr bool& __cordl_internal_get_isConnecting() ;

constexpr ::Epic::OnlineServices::ProductUserId* const& __cordl_internal_get_serverId() const;

constexpr ::Epic::OnlineServices::ProductUserId*& __cordl_internal_get_serverId() ;

constexpr ::Epic::OnlineServices::P2P::SocketId const& __cordl_internal_get_socketId() const;

constexpr ::Epic::OnlineServices::P2P::SocketId& __cordl_internal_get_socketId() ;

constexpr void __cordl_internal_set_ConnectionTimeout(::System::TimeSpan  value) ;

constexpr void __cordl_internal_set_OnConnected(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnDisconnected(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnReceivedData(::System::Action_2<::ArrayW<uint8_t>,int32_t>*  value) ;

constexpr void __cordl_internal_set__Connected_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Error_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_cancelToken(::System::Threading::CancellationTokenSource*  value) ;

constexpr void __cordl_internal_set_connectedComplete(::System::Threading::Tasks::TaskCompletionSource_1<::System::Threading::Tasks::Task*>*  value) ;

constexpr void __cordl_internal_set_hostAddress(::StringW  value) ;

constexpr void __cordl_internal_set_hostProductId(::Epic::OnlineServices::ProductUserId*  value) ;

constexpr void __cordl_internal_set_isConnecting(bool  value) ;

constexpr void __cordl_internal_set_serverId(::Epic::OnlineServices::ProductUserId*  value) ;

constexpr void __cordl_internal_set_socketId(::Epic::OnlineServices::P2P::SocketId  value) ;

/// @brief Method .ctor, addr 0x181581090, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::EpicTransport::EosTransport*  transport) ;

/// @brief Method add_OnConnected, addr 0x181581110, size 0x90, virtual false, abstract: false, final false
inline void add_OnConnected(::System::Action*  value) ;

/// @brief Method add_OnDisconnected, addr 0x1815811a0, size 0x90, virtual false, abstract: false, final false
inline void add_OnDisconnected(::System::Action*  value) ;

/// @brief Method add_OnReceivedData, addr 0x181581230, size 0xa0, virtual false, abstract: false, final false
inline void add_OnReceivedData(::System::Action_2<::ArrayW<uint8_t>,int32_t>*  value) ;

/// @brief Method get_Connected, addr 0x1803b2c80, size 0x10, virtual false, abstract: false, final false
inline bool get_Connected() ;

/// @brief Method get_Error, addr 0x1803b2d40, size 0x10, virtual false, abstract: false, final false
inline bool get_Error() ;

/// @brief Method get_HadEstablishedSession, addr 0x1803b2c80, size 0x10, virtual true, abstract: false, final false
inline bool get_HadEstablishedSession() ;

/// @brief Method remove_OnConnected, addr 0x1815812d0, size 0x90, virtual false, abstract: false, final false
inline void remove_OnConnected(::System::Action*  value) ;

/// @brief Method remove_OnDisconnected, addr 0x181581360, size 0x90, virtual false, abstract: false, final false
inline void remove_OnDisconnected(::System::Action*  value) ;

/// @brief Method remove_OnReceivedData, addr 0x1815813f0, size 0xa0, virtual false, abstract: false, final false
inline void remove_OnReceivedData(::System::Action_2<::ArrayW<uint8_t>,int32_t>*  value) ;

/// @brief Method set_Connected, addr 0x1803b30e0, size 0x10, virtual false, abstract: false, final false
inline void set_Connected(bool  value) ;

/// @brief Method set_Error, addr 0x181581490, size 0x10, virtual false, abstract: false, final false
inline void set_Error(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Client() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Client", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Client(Client && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Client", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Client(Client const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19043};

/// @brief Field socketId, offset: 0x80, size: 0x20, def value: None
 ::Epic::OnlineServices::P2P::SocketId  ___socketId;

/// @brief Field serverId, offset: 0xa0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  ___serverId;

/// @brief Field <Connected>k__BackingField, offset: 0xa8, size: 0x1, def value: None
 bool  ____Connected_k__BackingField;

/// @brief Field <Error>k__BackingField, offset: 0xa9, size: 0x1, def value: None
 bool  ____Error_k__BackingField;

/// @brief Field OnReceivedData, offset: 0xb0, size: 0x8, def value: None
 ::System::Action_2<::ArrayW<uint8_t>,int32_t>*  ___OnReceivedData;

/// @brief Field OnConnected, offset: 0xb8, size: 0x8, def value: None
 ::System::Action*  ___OnConnected;

/// @brief Field OnDisconnected, offset: 0xc0, size: 0x8, def value: None
 ::System::Action*  ___OnDisconnected;

/// @brief Field ConnectionTimeout, offset: 0xc8, size: 0x8, def value: None
 ::System::TimeSpan  ___ConnectionTimeout;

/// @brief Field isConnecting, offset: 0xd0, size: 0x1, def value: None
 bool  ___isConnecting;

/// @brief Field hostAddress, offset: 0xd8, size: 0x8, def value: None
 ::StringW  ___hostAddress;

/// @brief Field hostProductId, offset: 0xe0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  ___hostProductId;

/// @brief Field connectedComplete, offset: 0xe8, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::System::Threading::Tasks::Task*>*  ___connectedComplete;

/// @brief Field cancelToken, offset: 0xf0, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ___cancelToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::EpicTransport::Client, ___socketId) == 0x80, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Client, ___serverId) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Client, ____Connected_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Client, ____Error_k__BackingField) == 0xa9, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Client, ___OnReceivedData) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Client, ___OnConnected) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Client, ___OnDisconnected) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Client, ___ConnectionTimeout) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Client, ___isConnecting) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Client, ___hostAddress) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Client, ___hostProductId) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Client, ___connectedComplete) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Client, ___cancelToken) == 0xf0, "Offset mismatch!");

static_assert(sizeof(::EpicTransport::Client) == 0xf8, "Size mismatch!");

} // namespace end def EpicTransport

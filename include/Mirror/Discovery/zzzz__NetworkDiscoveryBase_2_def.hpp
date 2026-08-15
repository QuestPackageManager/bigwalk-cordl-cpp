#pragma once
// IWYU pragma private; include "Mirror/Discovery/NetworkDiscoveryBase_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Sockets/zzzz__UdpReceiveResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkDiscoveryBase_2)
namespace Mirror::Discovery {
template<typename Request,typename Response>
struct NetworkDiscoveryBase_2__ClientListenAsync_d__30;
}
namespace Mirror::Discovery {
template<typename Request,typename Response>
struct NetworkDiscoveryBase_2__ReceiveGameBroadcastAsync_d__33;
}
namespace Mirror::Discovery {
template<typename Request,typename Response>
struct NetworkDiscoveryBase_2__ReceiveRequestAsync_d__23;
}
namespace Mirror::Discovery {
template<typename Request,typename Response>
struct NetworkDiscoveryBase_2__ServerListenAsync_d__22;
}
namespace Mirror::Discovery {
template<typename TResponseType>
class ServerFoundUnityEvent_1;
}
namespace Mirror {
class Transport;
}
namespace System::Net::Sockets {
class UdpClient;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace Mirror::Discovery {
template<typename Request,typename Response>
class NetworkDiscoveryBase_2;
}
namespace Mirror::Discovery {
template<typename Request,typename Response>
struct NetworkDiscoveryBase_2__ClientListenAsync_d__30;
}
namespace Mirror::Discovery {
template<typename Request,typename Response>
struct NetworkDiscoveryBase_2__ReceiveGameBroadcastAsync_d__33;
}
namespace Mirror::Discovery {
template<typename Request,typename Response>
struct NetworkDiscoveryBase_2__ReceiveRequestAsync_d__23;
}
namespace Mirror::Discovery {
template<typename Request,typename Response>
struct NetworkDiscoveryBase_2__ServerListenAsync_d__22;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Mirror::Discovery::NetworkDiscoveryBase_2);
MARK_GEN_VAL_T(::Mirror::Discovery::NetworkDiscoveryBase_2__ClientListenAsync_d__30);
MARK_GEN_VAL_T(::Mirror::Discovery::NetworkDiscoveryBase_2__ReceiveGameBroadcastAsync_d__33);
MARK_GEN_VAL_T(::Mirror::Discovery::NetworkDiscoveryBase_2__ReceiveRequestAsync_d__23);
MARK_GEN_VAL_T(::Mirror::Discovery::NetworkDiscoveryBase_2__ServerListenAsync_d__22);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Mirror::Discovery::NetworkDiscoveryBase_2, "Mirror.Discovery", "NetworkDiscoveryBase`2");
DEFINE_IL2CPP_GEN_CLASS(::Mirror::Discovery::NetworkDiscoveryBase_2__ClientListenAsync_d__30, "Mirror.Discovery", "NetworkDiscoveryBase`2/<ClientListenAsync>d__30");
DEFINE_IL2CPP_GEN_CLASS(::Mirror::Discovery::NetworkDiscoveryBase_2__ReceiveGameBroadcastAsync_d__33, "Mirror.Discovery", "NetworkDiscoveryBase`2/<ReceiveGameBroadcastAsync>d__33");
DEFINE_IL2CPP_GEN_CLASS(::Mirror::Discovery::NetworkDiscoveryBase_2__ReceiveRequestAsync_d__23, "Mirror.Discovery", "NetworkDiscoveryBase`2/<ReceiveRequestAsync>d__23");
DEFINE_IL2CPP_GEN_CLASS(::Mirror::Discovery::NetworkDiscoveryBase_2__ServerListenAsync_d__22, "Mirror.Discovery", "NetworkDiscoveryBase`2/<ServerListenAsync>d__22");
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace Mirror::Discovery {
// cpp template
template<typename Request,typename Response>
// Is value type: true
// CS Name: Mirror.Discovery.NetworkDiscoveryBase`2/<ClientListenAsync>d__30<Request,Response>
struct CORDL_TYPE NetworkDiscoveryBase_2__ClientListenAsync_d__30 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkDiscoveryBase_2__ClientListenAsync_d__30() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<Request,Response>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr NetworkDiscoveryBase_2__ClientListenAsync_d__30(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<Request,Response>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19258};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<Request,Response>  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mirror::Discovery
// Dependencies System.Net.Sockets.UdpReceiveResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Mirror::Discovery {
// cpp template
template<typename Request,typename Response>
// Is value type: true
// CS Name: Mirror.Discovery.NetworkDiscoveryBase`2/<ReceiveGameBroadcastAsync>d__33<Request,Response>
struct CORDL_TYPE NetworkDiscoveryBase_2__ReceiveGameBroadcastAsync_d__33 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkDiscoveryBase_2__ReceiveGameBroadcastAsync_d__33() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "udpClient", ty: "::System::Net::Sockets::UdpClient*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<Request,Response>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Sockets::UdpReceiveResult>", modifiers: "", def_value: None }]
constexpr NetworkDiscoveryBase_2__ReceiveGameBroadcastAsync_d__33(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Net::Sockets::UdpClient*  udpClient, ::UnityW<Request,Response>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Sockets::UdpReceiveResult>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19259};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field udpClient, offset: 0x20, size: 0x8, def value: None
 ::System::Net::Sockets::UdpClient*  udpClient;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<Request,Response>  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Sockets::UdpReceiveResult>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mirror::Discovery
// Dependencies System.Net.Sockets.UdpReceiveResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Mirror::Discovery {
// cpp template
template<typename Request,typename Response>
// Is value type: true
// CS Name: Mirror.Discovery.NetworkDiscoveryBase`2/<ReceiveRequestAsync>d__23<Request,Response>
struct CORDL_TYPE NetworkDiscoveryBase_2__ReceiveRequestAsync_d__23 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkDiscoveryBase_2__ReceiveRequestAsync_d__23() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "udpClient", ty: "::System::Net::Sockets::UdpClient*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<Request,Response>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Sockets::UdpReceiveResult>", modifiers: "", def_value: None }]
constexpr NetworkDiscoveryBase_2__ReceiveRequestAsync_d__23(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Net::Sockets::UdpClient*  udpClient, ::UnityW<Request,Response>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Sockets::UdpReceiveResult>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19260};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field udpClient, offset: 0x20, size: 0x8, def value: None
 ::System::Net::Sockets::UdpClient*  udpClient;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<Request,Response>  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Sockets::UdpReceiveResult>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mirror::Discovery
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace Mirror::Discovery {
// cpp template
template<typename Request,typename Response>
// Is value type: true
// CS Name: Mirror.Discovery.NetworkDiscoveryBase`2/<ServerListenAsync>d__22<Request,Response>
struct CORDL_TYPE NetworkDiscoveryBase_2__ServerListenAsync_d__22 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkDiscoveryBase_2__ServerListenAsync_d__22() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<Request,Response>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr NetworkDiscoveryBase_2__ServerListenAsync_d__22(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<Request,Response>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19261};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<Request,Response>  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mirror::Discovery
// Dependencies UnityEngine.MonoBehaviour
namespace Mirror::Discovery {
// cpp template
template<typename Request,typename Response>
// Is value type: false
// CS Name: Mirror.Discovery.NetworkDiscoveryBase`2<Request,Response>
class CORDL_TYPE NetworkDiscoveryBase_2 : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _ClientListenAsync_d__30 = ::Mirror::Discovery::NetworkDiscoveryBase_2__ClientListenAsync_d__30<Request, Response>;

using _ReceiveGameBroadcastAsync_d__33 = ::Mirror::Discovery::NetworkDiscoveryBase_2__ReceiveGameBroadcastAsync_d__33<Request, Response>;

using _ReceiveRequestAsync_d__23 = ::Mirror::Discovery::NetworkDiscoveryBase_2__ReceiveRequestAsync_d__23<Request, Response>;

using _ServerListenAsync_d__22 = ::Mirror::Discovery::NetworkDiscoveryBase_2__ServerListenAsync_d__22<Request, Response>;

/// @brief Field ActiveDiscoveryInterval, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_ActiveDiscoveryInterval, put=__cordl_internal_set_ActiveDiscoveryInterval)) float_t  ActiveDiscoveryInterval;

/// @brief Field BroadcastAddress, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_BroadcastAddress, put=__cordl_internal_set_BroadcastAddress)) ::StringW  BroadcastAddress;

/// @brief Field OnServerFound, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnServerFound, put=__cordl_internal_set_OnServerFound)) ::Mirror::Discovery::ServerFoundUnityEvent_1<Response>*  OnServerFound;

 __declspec(property(get=get_ServerId, put=set_ServerId)) int64_t  ServerId;

/// @brief Field <ServerId>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__ServerId_k__BackingField, put=__cordl_internal_set__ServerId_k__BackingField)) int64_t  _ServerId_k__BackingField;

/// @brief Field clientUdpClient, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_clientUdpClient, put=__cordl_internal_set_clientUdpClient)) ::System::Net::Sockets::UdpClient*  clientUdpClient;

/// @brief Field enableActiveDiscovery, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableActiveDiscovery, put=__cordl_internal_set_enableActiveDiscovery)) bool  enableActiveDiscovery;

/// @brief Field secretHandshake, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_secretHandshake, put=__cordl_internal_set_secretHandshake)) int64_t  secretHandshake;

/// @brief Field serverBroadcastListenPort, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_serverBroadcastListenPort, put=__cordl_internal_set_serverBroadcastListenPort)) int32_t  serverBroadcastListenPort;

/// @brief Field serverUdpClient, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_serverUdpClient, put=__cordl_internal_set_serverUdpClient)) ::System::Net::Sockets::UdpClient*  serverUdpClient;

/// @brief Field transport, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_transport, put=__cordl_internal_set_transport)) ::UnityW<::Mirror::Transport>  transport;

/// @brief Method AdvertiseServer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AdvertiseServer() ;

/// @brief Method BeginMulticastLock, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void BeginMulticastLock() ;

/// @brief Method BroadcastDiscoveryRequest, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void BroadcastDiscoveryRequest() ;

/// @brief Method ClientListenAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ClientListenAsync() ;

/// @brief Method EndpMulticastLock, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void EndpMulticastLock() ;

/// @brief Method GetRequest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline Request GetRequest() ;

static inline ::Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>* New_ctor() ;

/// @brief Method OnApplicationQuit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnApplicationQuit() ;

/// @brief Method OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method ProcessClientRequest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ProcessClientRequest(Request  request, ::System::Net::IPEndPoint*  endpoint) ;

/// @brief Method ProcessRequest, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline Response ProcessRequest(Request  request, ::System::Net::IPEndPoint*  endpoint) ;

/// @brief Method ProcessResponse, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ProcessResponse(Response  response, ::System::Net::IPEndPoint*  endpoint) ;

/// @brief Method RandomLong, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline int64_t RandomLong() ;

/// @brief Method ReceiveGameBroadcastAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ReceiveGameBroadcastAsync(::System::Net::Sockets::UdpClient*  udpClient) ;

/// @brief Method ReceiveRequestAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ReceiveRequestAsync(::System::Net::Sockets::UdpClient*  udpClient) ;

/// @brief Method ServerListenAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ServerListenAsync() ;

/// @brief Method Shutdown, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Shutdown() ;

/// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method StartDiscovery, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void StartDiscovery() ;

/// @brief Method StopDiscovery, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void StopDiscovery() ;

constexpr float_t const& __cordl_internal_get_ActiveDiscoveryInterval() const;

constexpr float_t& __cordl_internal_get_ActiveDiscoveryInterval() ;

constexpr ::StringW const& __cordl_internal_get_BroadcastAddress() const;

constexpr ::StringW& __cordl_internal_get_BroadcastAddress() ;

constexpr ::Mirror::Discovery::ServerFoundUnityEvent_1<Response>* const& __cordl_internal_get_OnServerFound() const;

constexpr ::Mirror::Discovery::ServerFoundUnityEvent_1<Response>*& __cordl_internal_get_OnServerFound() ;

constexpr int64_t const& __cordl_internal_get__ServerId_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__ServerId_k__BackingField() ;

constexpr ::System::Net::Sockets::UdpClient* const& __cordl_internal_get_clientUdpClient() const;

constexpr ::System::Net::Sockets::UdpClient*& __cordl_internal_get_clientUdpClient() ;

constexpr bool const& __cordl_internal_get_enableActiveDiscovery() const;

constexpr bool& __cordl_internal_get_enableActiveDiscovery() ;

constexpr int64_t const& __cordl_internal_get_secretHandshake() const;

constexpr int64_t& __cordl_internal_get_secretHandshake() ;

constexpr int32_t const& __cordl_internal_get_serverBroadcastListenPort() const;

constexpr int32_t& __cordl_internal_get_serverBroadcastListenPort() ;

constexpr ::System::Net::Sockets::UdpClient* const& __cordl_internal_get_serverUdpClient() const;

constexpr ::System::Net::Sockets::UdpClient*& __cordl_internal_get_serverUdpClient() ;

constexpr ::UnityW<::Mirror::Transport> const& __cordl_internal_get_transport() const;

constexpr ::UnityW<::Mirror::Transport>& __cordl_internal_get_transport() ;

constexpr void __cordl_internal_set_ActiveDiscoveryInterval(float_t  value) ;

constexpr void __cordl_internal_set_BroadcastAddress(::StringW  value) ;

constexpr void __cordl_internal_set_OnServerFound(::Mirror::Discovery::ServerFoundUnityEvent_1<Response>*  value) ;

constexpr void __cordl_internal_set__ServerId_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set_clientUdpClient(::System::Net::Sockets::UdpClient*  value) ;

constexpr void __cordl_internal_set_enableActiveDiscovery(bool  value) ;

constexpr void __cordl_internal_set_secretHandshake(int64_t  value) ;

constexpr void __cordl_internal_set_serverBroadcastListenPort(int32_t  value) ;

constexpr void __cordl_internal_set_serverUdpClient(::System::Net::Sockets::UdpClient*  value) ;

constexpr void __cordl_internal_set_transport(::UnityW<::Mirror::Transport>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ServerId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int64_t get_ServerId() ;

/// @brief Method get_SupportedOnThisPlatform, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool get_SupportedOnThisPlatform() ;

/// @brief Method set_ServerId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_ServerId(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkDiscoveryBase_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkDiscoveryBase_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkDiscoveryBase_2(NetworkDiscoveryBase_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkDiscoveryBase_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkDiscoveryBase_2(NetworkDiscoveryBase_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19262};

/// @brief Field enableActiveDiscovery, offset: 0x20, size: 0x1, def value: None
 bool  ___enableActiveDiscovery;

/// @brief Field BroadcastAddress, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___BroadcastAddress;

/// @brief Field serverBroadcastListenPort, offset: 0x30, size: 0x4, def value: None
 int32_t  ___serverBroadcastListenPort;

/// @brief Field ActiveDiscoveryInterval, offset: 0x34, size: 0x4, def value: None
 float_t  ___ActiveDiscoveryInterval;

/// @brief Field transport, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Mirror::Transport>  ___transport;

/// @brief Field OnServerFound, offset: 0x40, size: 0x8, def value: None
 ::Mirror::Discovery::ServerFoundUnityEvent_1<Response>*  ___OnServerFound;

/// @brief Field secretHandshake, offset: 0x48, size: 0x8, def value: None
 int64_t  ___secretHandshake;

/// @brief Field <ServerId>k__BackingField, offset: 0x50, size: 0x8, def value: None
 int64_t  ____ServerId_k__BackingField;

/// @brief Field serverUdpClient, offset: 0x58, size: 0x8, def value: None
 ::System::Net::Sockets::UdpClient*  ___serverUdpClient;

/// @brief Field clientUdpClient, offset: 0x60, size: 0x8, def value: None
 ::System::Net::Sockets::UdpClient*  ___clientUdpClient;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mirror::Discovery

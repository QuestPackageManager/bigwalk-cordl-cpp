#pragma once
// IWYU pragma private; include "Mirror/Discovery/NetworkDiscoveryBase_2.hpp"
#include "System/Net/Sockets/zzzz__UdpReceiveResult_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Mirror/Discovery/zzzz__NetworkDiscoveryBase_2_def.hpp"
#include "Mirror/Discovery/zzzz__NetworkDiscoveryBase_2_def.hpp"
#include "Mirror/Discovery/zzzz__ServerFoundUnityEvent_1_def.hpp"
#include "Mirror/zzzz__Transport_def.hpp"
#include "System/Net/Sockets/zzzz__UdpClient_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
template<typename Request,typename Response>
inline void Mirror::Discovery::NetworkDiscoveryBase_2__ClientListenAsync_d__30<Request,Response>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryBase_2__ClientListenAsync_d__30<Request,Response>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename Request,typename Response>
inline void Mirror::Discovery::NetworkDiscoveryBase_2__ClientListenAsync_d__30<Request,Response>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryBase_2__ClientListenAsync_d__30<Request,Response>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename Request,typename Response>
constexpr  Mirror::Discovery::NetworkDiscoveryBase_2__ClientListenAsync_d__30<Request,Response>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename Request,typename Response>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Mirror::Discovery::NetworkDiscoveryBase_2__ClientListenAsync_d__30<Request,Response>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<Request,Response>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
template<typename Request,typename Response>
constexpr ::Mirror::Discovery::NetworkDiscoveryBase_2__ClientListenAsync_d__30<Request,Response>::NetworkDiscoveryBase_2__ClientListenAsync_d__30(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<Request,Response>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
template<typename Request,typename Response>
constexpr ::Mirror::Discovery::NetworkDiscoveryBase_2__ClientListenAsync_d__30<Request,Response>::NetworkDiscoveryBase_2__ClientListenAsync_d__30()   {
}
template<typename Request,typename Response>
inline void Mirror::Discovery::NetworkDiscoveryBase_2__ReceiveGameBroadcastAsync_d__33<Request,Response>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryBase_2__ReceiveGameBroadcastAsync_d__33<Request,Response>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename Request,typename Response>
inline void Mirror::Discovery::NetworkDiscoveryBase_2__ReceiveGameBroadcastAsync_d__33<Request,Response>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryBase_2__ReceiveGameBroadcastAsync_d__33<Request,Response>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename Request,typename Response>
constexpr  Mirror::Discovery::NetworkDiscoveryBase_2__ReceiveGameBroadcastAsync_d__33<Request,Response>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename Request,typename Response>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Mirror::Discovery::NetworkDiscoveryBase_2__ReceiveGameBroadcastAsync_d__33<Request,Response>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "udpClient", ty: "::System::Net::Sockets::UdpClient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<Request,Response>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Sockets::UdpReceiveResult>", modifiers: "", def_value: Some("{}") }]
template<typename Request,typename Response>
constexpr ::Mirror::Discovery::NetworkDiscoveryBase_2__ReceiveGameBroadcastAsync_d__33<Request,Response>::NetworkDiscoveryBase_2__ReceiveGameBroadcastAsync_d__33(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Net::Sockets::UdpClient*  udpClient, ::UnityW<Request,Response>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Sockets::UdpReceiveResult>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->udpClient = udpClient;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
template<typename Request,typename Response>
constexpr ::Mirror::Discovery::NetworkDiscoveryBase_2__ReceiveGameBroadcastAsync_d__33<Request,Response>::NetworkDiscoveryBase_2__ReceiveGameBroadcastAsync_d__33()   {
}
template<typename Request,typename Response>
inline void Mirror::Discovery::NetworkDiscoveryBase_2__ReceiveRequestAsync_d__23<Request,Response>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryBase_2__ReceiveRequestAsync_d__23<Request,Response>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename Request,typename Response>
inline void Mirror::Discovery::NetworkDiscoveryBase_2__ReceiveRequestAsync_d__23<Request,Response>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryBase_2__ReceiveRequestAsync_d__23<Request,Response>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename Request,typename Response>
constexpr  Mirror::Discovery::NetworkDiscoveryBase_2__ReceiveRequestAsync_d__23<Request,Response>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename Request,typename Response>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Mirror::Discovery::NetworkDiscoveryBase_2__ReceiveRequestAsync_d__23<Request,Response>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "udpClient", ty: "::System::Net::Sockets::UdpClient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<Request,Response>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Sockets::UdpReceiveResult>", modifiers: "", def_value: Some("{}") }]
template<typename Request,typename Response>
constexpr ::Mirror::Discovery::NetworkDiscoveryBase_2__ReceiveRequestAsync_d__23<Request,Response>::NetworkDiscoveryBase_2__ReceiveRequestAsync_d__23(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Net::Sockets::UdpClient*  udpClient, ::UnityW<Request,Response>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Sockets::UdpReceiveResult>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->udpClient = udpClient;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
template<typename Request,typename Response>
constexpr ::Mirror::Discovery::NetworkDiscoveryBase_2__ReceiveRequestAsync_d__23<Request,Response>::NetworkDiscoveryBase_2__ReceiveRequestAsync_d__23()   {
}
template<typename Request,typename Response>
inline void Mirror::Discovery::NetworkDiscoveryBase_2__ServerListenAsync_d__22<Request,Response>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryBase_2__ServerListenAsync_d__22<Request,Response>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename Request,typename Response>
inline void Mirror::Discovery::NetworkDiscoveryBase_2__ServerListenAsync_d__22<Request,Response>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryBase_2__ServerListenAsync_d__22<Request,Response>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename Request,typename Response>
constexpr  Mirror::Discovery::NetworkDiscoveryBase_2__ServerListenAsync_d__22<Request,Response>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename Request,typename Response>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Mirror::Discovery::NetworkDiscoveryBase_2__ServerListenAsync_d__22<Request,Response>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<Request,Response>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
template<typename Request,typename Response>
constexpr ::Mirror::Discovery::NetworkDiscoveryBase_2__ServerListenAsync_d__22<Request,Response>::NetworkDiscoveryBase_2__ServerListenAsync_d__22(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<Request,Response>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
template<typename Request,typename Response>
constexpr ::Mirror::Discovery::NetworkDiscoveryBase_2__ServerListenAsync_d__22<Request,Response>::NetworkDiscoveryBase_2__ServerListenAsync_d__22()   {
}
template<typename Request,typename Response>
constexpr bool& Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::__cordl_internal_get_enableActiveDiscovery()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableActiveDiscovery;
}
template<typename Request,typename Response>
constexpr bool const& Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::__cordl_internal_get_enableActiveDiscovery() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableActiveDiscovery;
}
template<typename Request,typename Response>
constexpr void Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::__cordl_internal_set_enableActiveDiscovery(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableActiveDiscovery = value;
}
template<typename Request,typename Response>
constexpr ::StringW& Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::__cordl_internal_get_BroadcastAddress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BroadcastAddress;
}
template<typename Request,typename Response>
constexpr ::StringW const& Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::__cordl_internal_get_BroadcastAddress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BroadcastAddress;
}
template<typename Request,typename Response>
constexpr void Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::__cordl_internal_set_BroadcastAddress(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BroadcastAddress = value;
}
template<typename Request,typename Response>
constexpr int32_t& Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::__cordl_internal_get_serverBroadcastListenPort()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverBroadcastListenPort;
}
template<typename Request,typename Response>
constexpr int32_t const& Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::__cordl_internal_get_serverBroadcastListenPort() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverBroadcastListenPort;
}
template<typename Request,typename Response>
constexpr void Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::__cordl_internal_set_serverBroadcastListenPort(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverBroadcastListenPort = value;
}
template<typename Request,typename Response>
constexpr float_t& Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::__cordl_internal_get_ActiveDiscoveryInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveDiscoveryInterval;
}
template<typename Request,typename Response>
constexpr float_t const& Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::__cordl_internal_get_ActiveDiscoveryInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveDiscoveryInterval;
}
template<typename Request,typename Response>
constexpr void Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::__cordl_internal_set_ActiveDiscoveryInterval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ActiveDiscoveryInterval = value;
}
template<typename Request,typename Response>
constexpr ::UnityW<::Mirror::Transport>& Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::__cordl_internal_get_transport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transport;
}
template<typename Request,typename Response>
constexpr ::UnityW<::Mirror::Transport> const& Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::__cordl_internal_get_transport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transport;
}
template<typename Request,typename Response>
constexpr void Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::__cordl_internal_set_transport(::UnityW<::Mirror::Transport>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transport = value;
}
template<typename Request,typename Response>
constexpr ::Mirror::Discovery::ServerFoundUnityEvent_1<Response>*& Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::__cordl_internal_get_OnServerFound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnServerFound;
}
template<typename Request,typename Response>
constexpr ::Mirror::Discovery::ServerFoundUnityEvent_1<Response>* const& Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::__cordl_internal_get_OnServerFound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnServerFound;
}
template<typename Request,typename Response>
constexpr void Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::__cordl_internal_set_OnServerFound(::Mirror::Discovery::ServerFoundUnityEvent_1<Response>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnServerFound = value;
}
template<typename Request,typename Response>
constexpr int64_t& Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::__cordl_internal_get_secretHandshake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secretHandshake;
}
template<typename Request,typename Response>
constexpr int64_t const& Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::__cordl_internal_get_secretHandshake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secretHandshake;
}
template<typename Request,typename Response>
constexpr void Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::__cordl_internal_set_secretHandshake(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___secretHandshake = value;
}
template<typename Request,typename Response>
constexpr int64_t& Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::__cordl_internal_get__ServerId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ServerId_k__BackingField;
}
template<typename Request,typename Response>
constexpr int64_t const& Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::__cordl_internal_get__ServerId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ServerId_k__BackingField;
}
template<typename Request,typename Response>
constexpr void Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::__cordl_internal_set__ServerId_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ServerId_k__BackingField = value;
}
template<typename Request,typename Response>
constexpr ::System::Net::Sockets::UdpClient*& Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::__cordl_internal_get_serverUdpClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverUdpClient;
}
template<typename Request,typename Response>
constexpr ::System::Net::Sockets::UdpClient* const& Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::__cordl_internal_get_serverUdpClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverUdpClient;
}
template<typename Request,typename Response>
constexpr void Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::__cordl_internal_set_serverUdpClient(::System::Net::Sockets::UdpClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverUdpClient = value;
}
template<typename Request,typename Response>
constexpr ::System::Net::Sockets::UdpClient*& Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::__cordl_internal_get_clientUdpClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientUdpClient;
}
template<typename Request,typename Response>
constexpr ::System::Net::Sockets::UdpClient* const& Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::__cordl_internal_get_clientUdpClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientUdpClient;
}
template<typename Request,typename Response>
constexpr void Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::__cordl_internal_set_clientUdpClient(::System::Net::Sockets::UdpClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientUdpClient = value;
}
template<typename Request,typename Response>
inline bool Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::get_SupportedOnThisPlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>*>(),
                        {"get_SupportedOnThisPlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
template<typename Request,typename Response>
inline int64_t Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::get_ServerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>*>(),
                        {"get_ServerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
template<typename Request,typename Response>
inline void Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::set_ServerId(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>*>(),
                        {"set_ServerId", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename Request,typename Response>
inline void Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename Request,typename Response>
inline int64_t Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::RandomLong()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>*>(),
                        {"RandomLong", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
template<typename Request,typename Response>
inline void Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::OnApplicationQuit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>*>(),
                        {"OnApplicationQuit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename Request,typename Response>
inline void Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename Request,typename Response>
inline void Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename Request,typename Response>
inline void Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::Shutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>*>(),
                        {"Shutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename Request,typename Response>
inline void Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::AdvertiseServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>*>(),
                        {"AdvertiseServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename Request,typename Response>
inline ::System::Threading::Tasks::Task* Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::ServerListenAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>*>(),
                        {"ServerListenAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
template<typename Request,typename Response>
inline ::System::Threading::Tasks::Task* Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::ReceiveRequestAsync(::System::Net::Sockets::UdpClient*  udpClient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>*>(),
                        {"ReceiveRequestAsync", {}, {::i2c::type_of<::System::Net::Sockets::UdpClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, udpClient);
}
template<typename Request,typename Response>
inline void Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::ProcessClientRequest(Request  request, ::System::Net::IPEndPoint*  endpoint)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, endpoint);
}
template<typename Request,typename Response>
inline Response Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::ProcessRequest(Request  request, ::System::Net::IPEndPoint*  endpoint)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<Response>(this, ___internal_method, request, endpoint);
}
template<typename Request,typename Response>
inline void Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::BeginMulticastLock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>*>(),
                        {"BeginMulticastLock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename Request,typename Response>
inline void Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::EndpMulticastLock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>*>(),
                        {"EndpMulticastLock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename Request,typename Response>
inline void Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::StartDiscovery()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>*>(),
                        {"StartDiscovery", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename Request,typename Response>
inline void Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::StopDiscovery()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>*>(),
                        {"StopDiscovery", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename Request,typename Response>
inline ::System::Threading::Tasks::Task* Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::ClientListenAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>*>(),
                        {"ClientListenAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
template<typename Request,typename Response>
inline void Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::BroadcastDiscoveryRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>*>(),
                        {"BroadcastDiscoveryRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename Request,typename Response>
inline Request Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::GetRequest()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<Request>(this, ___internal_method);
}
template<typename Request,typename Response>
inline ::System::Threading::Tasks::Task* Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::ReceiveGameBroadcastAsync(::System::Net::Sockets::UdpClient*  udpClient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>*>(),
                        {"ReceiveGameBroadcastAsync", {}, {::i2c::type_of<::System::Net::Sockets::UdpClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, udpClient);
}
template<typename Request,typename Response>
inline void Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::ProcessResponse(Response  response, ::System::Net::IPEndPoint*  endpoint)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response, endpoint);
}
template<typename Request,typename Response>
inline void Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename Request,typename Response>
inline ::Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>* Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>*>());
}
// Ctor Parameters []
template<typename Request,typename Response>
constexpr ::Mirror::Discovery::NetworkDiscoveryBase_2<Request,Response>::NetworkDiscoveryBase_2()   {
}

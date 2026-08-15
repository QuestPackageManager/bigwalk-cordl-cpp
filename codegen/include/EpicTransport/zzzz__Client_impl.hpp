#pragma once
// IWYU pragma private; include "EpicTransport/Client.hpp"
#include "Epic/OnlineServices/P2P/zzzz__SocketId_impl.hpp"
#include "Epic/OnlineServices/zzzz__Result_impl.hpp"
#include "EpicTransport/zzzz__Common_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "EpicTransport/zzzz__Client_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnIncomingConnectionRequestInfo_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__SocketId_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "EpicTransport/zzzz__Client_def.hpp"
#include "EpicTransport/zzzz__Common_def.hpp"
#include "EpicTransport/zzzz__EosTransport_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::EpicTransport::Client___c__DisplayClass26_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Client___c__DisplayClass26_0::*)()>(&::EpicTransport::Client___c__DisplayClass26_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client___c__DisplayClass26_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Client___c__DisplayClass26_0._CreateClient_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Client___c__DisplayClass26_0::*)()>(&::EpicTransport::Client___c__DisplayClass26_0::_CreateClient_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1806311e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client___c__DisplayClass26_0*>(),
                        {"<CreateClient>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Client___c__DisplayClass26_0._CreateClient_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Client___c__DisplayClass26_0::*)()>(&::EpicTransport::Client___c__DisplayClass26_0::_CreateClient_b__1)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180631210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client___c__DisplayClass26_0*>(),
                        {"<CreateClient>b__1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Client___c__DisplayClass26_0._CreateClient_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Client___c__DisplayClass26_0::*)(::ArrayW<uint8_t>, int32_t)>(&::EpicTransport::Client___c__DisplayClass26_0::_CreateClient_b__2)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180631240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client___c__DisplayClass26_0*>(),
                        {"<CreateClient>b__2", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::EpicTransport::EosTransport>& EpicTransport::Client___c__DisplayClass26_0::__cordl_internal_get_transport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transport;
}
constexpr ::UnityW<::EpicTransport::EosTransport> const& EpicTransport::Client___c__DisplayClass26_0::__cordl_internal_get_transport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transport;
}
constexpr void EpicTransport::Client___c__DisplayClass26_0::__cordl_internal_set_transport(::UnityW<::EpicTransport::EosTransport>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transport = value;
}
inline void EpicTransport::Client___c__DisplayClass26_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client___c__DisplayClass26_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void EpicTransport::Client___c__DisplayClass26_0::_CreateClient_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client___c__DisplayClass26_0*>(),
                        {"<CreateClient>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void EpicTransport::Client___c__DisplayClass26_0::_CreateClient_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client___c__DisplayClass26_0*>(),
                        {"<CreateClient>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void EpicTransport::Client___c__DisplayClass26_0::_CreateClient_b__2(::ArrayW<uint8_t>  data, int32_t  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client___c__DisplayClass26_0*>(),
                        {"<CreateClient>b__2", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channel);
}
inline ::EpicTransport::Client___c__DisplayClass26_0* EpicTransport::Client___c__DisplayClass26_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::EpicTransport::Client___c__DisplayClass26_0*>());
}
// Ctor Parameters []
constexpr ::EpicTransport::Client___c__DisplayClass26_0::Client___c__DisplayClass26_0()   {
}
//  Writing Method size for method: ::EpicTransport::Client__Connect_d__31.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Client__Connect_d__31::*)()>(&::EpicTransport::Client__Connect_d__31::MoveNext)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18158d7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client__Connect_d__31>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Client__Connect_d__31.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Client__Connect_d__31::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::EpicTransport::Client__Connect_d__31::SetStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18038a820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client__Connect_d__31>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void EpicTransport::Client__Connect_d__31::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client__Connect_d__31>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void EpicTransport::Client__Connect_d__31::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client__Connect_d__31>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  EpicTransport::Client__Connect_d__31::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* EpicTransport::Client__Connect_d__31::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::EpicTransport::Client*", modifiers: "", def_value: Some("{}") }, CppParam { name: "host", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::EpicTransport::Client__Connect_d__31::Client__Connect_d__31(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::EpicTransport::Client*  __4__this, ::StringW  host) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->host = host;
}
// Ctor Parameters []
constexpr ::EpicTransport::Client__Connect_d__31::Client__Connect_d__31()   {
}
//  Writing Method size for method: ::EpicTransport::Client__OnSessionFound_d__27.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Client__OnSessionFound_d__27::*)()>(&::EpicTransport::Client__OnSessionFound_d__27::MoveNext)> {
  constexpr static std::size_t size = 0x7c0;
  constexpr static std::size_t addrs = 0x18158da90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client__OnSessionFound_d__27>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Client__OnSessionFound_d__27.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Client__OnSessionFound_d__27::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::EpicTransport::Client__OnSessionFound_d__27::SetStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18038a820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client__OnSessionFound_d__27>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void EpicTransport::Client__OnSessionFound_d__27::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client__OnSessionFound_d__27>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void EpicTransport::Client__OnSessionFound_d__27::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client__OnSessionFound_d__27>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  EpicTransport::Client__OnSessionFound_d__27::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* EpicTransport::Client__OnSessionFound_d__27::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "result", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::EpicTransport::Client*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_host_5__2", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_connectedCompleteTask_5__3", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>", modifiers: "", def_value: Some("{}") }]
constexpr ::EpicTransport::Client__OnSessionFound_d__27::Client__OnSessionFound_d__27(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::Epic::OnlineServices::Result  result, ::EpicTransport::Client*  __4__this, ::StringW  _host_5__2, ::System::Threading::Tasks::Task*  _connectedCompleteTask_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->result = result;
this->__4__this = __4__this;
this->_host_5__2 = _host_5__2;
this->_connectedCompleteTask_5__3 = _connectedCompleteTask_5__3;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::EpicTransport::Client__OnSessionFound_d__27::Client__OnSessionFound_d__27()   {
}
//  Writing Method size for method: ::EpicTransport::Client.get_Connected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::EpicTransport::Client::*)()>(&::EpicTransport::Client::get_Connected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"get_Connected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Client.set_Connected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Client::*)(bool)>(&::EpicTransport::Client::set_Connected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b30e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"set_Connected", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Client.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::EpicTransport::Client::*)()>(&::EpicTransport::Client::get_Error)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"get_Error", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Client.set_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Client::*)(bool)>(&::EpicTransport::Client::set_Error)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181581490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"set_Error", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Client.add_OnReceivedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Client::*)(::System::Action_2<::ArrayW<uint8_t>,int32_t>*)>(&::EpicTransport::Client::add_OnReceivedData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181581230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"add_OnReceivedData", {}, {::i2c::type_of<::System::Action_2<::ArrayW<uint8_t>,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Client.remove_OnReceivedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Client::*)(::System::Action_2<::ArrayW<uint8_t>,int32_t>*)>(&::EpicTransport::Client::remove_OnReceivedData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1815813f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"remove_OnReceivedData", {}, {::i2c::type_of<::System::Action_2<::ArrayW<uint8_t>,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Client.add_OnConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Client::*)(::System::Action*)>(&::EpicTransport::Client::add_OnConnected)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181581110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"add_OnConnected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Client.remove_OnConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Client::*)(::System::Action*)>(&::EpicTransport::Client::remove_OnConnected)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1815812d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"remove_OnConnected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Client.add_OnDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Client::*)(::System::Action*)>(&::EpicTransport::Client::add_OnDisconnected)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1815811a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"add_OnDisconnected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Client.remove_OnDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Client::*)(::System::Action*)>(&::EpicTransport::Client::remove_OnDisconnected)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181581360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"remove_OnDisconnected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Client._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Client::*)(::EpicTransport::EosTransport*)>(&::EpicTransport::Client::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181581090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {".ctor", {}, {::i2c::type_of<::EpicTransport::EosTransport*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Client.CreateClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::EpicTransport::Client* (*)(::EpicTransport::EosTransport*, ::StringW)>(&::EpicTransport::Client::CreateClient)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x181580470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"CreateClient", {}, {::i2c::type_of<::EpicTransport::EosTransport*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Client.OnSessionFound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Client::*)(::Epic::OnlineServices::Result)>(&::EpicTransport::Client::OnSessionFound)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181580f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"OnSessionFound", {}, {::i2c::type_of<::Epic::OnlineServices::Result>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Client.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Client::*)()>(&::EpicTransport::Client::Dispose)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181580a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Client.get_HadEstablishedSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::EpicTransport::Client::*)()>(&::EpicTransport::Client::get_HadEstablishedSession)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::EpicTransport::Client*>(),
                    {::i2c::class_of<::EpicTransport::Client*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Client.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Client::*)(::StringW)>(&::EpicTransport::Client::Connect)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1815803c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"Connect", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Client.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Client::*)()>(&::EpicTransport::Client::Disconnect)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x181580810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"Disconnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Client.SetConnectedComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Client::*)()>(&::EpicTransport::Client::SetConnectedComplete)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181581040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"SetConnectedComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Client.OnReceiveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Client::*)(::ArrayW<uint8_t>, ::Epic::OnlineServices::ProductUserId*, int32_t)>(&::EpicTransport::Client::OnReceiveData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181580d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::EpicTransport::Client*>(),
                    {::i2c::class_of<::EpicTransport::Client*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Client.OnNewConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Client::*)(::by_ref<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfo>)>(&::EpicTransport::Client::OnNewConnection)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x181580b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::EpicTransport::Client*>(),
                    {::i2c::class_of<::EpicTransport::Client*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Client.OnReceiveInternalData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Client::*)(::EpicTransport::Common_InternalMessages, ::Epic::OnlineServices::ProductUserId*, ::Epic::OnlineServices::P2P::SocketId)>(&::EpicTransport::Client::OnReceiveInternalData)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181580e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::EpicTransport::Client*>(),
                    {::i2c::class_of<::EpicTransport::Client*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Client.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Client::*)(::ArrayW<uint8_t>, int32_t)>(&::EpicTransport::Client::Send)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181580ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"Send", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Client.OnConnectionFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Client::*)(::Epic::OnlineServices::ProductUserId*)>(&::EpicTransport::Client::OnConnectionFailed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181580b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::EpicTransport::Client*>(),
                    {::i2c::class_of<::EpicTransport::Client*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Client.EosNotInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Client::*)()>(&::EpicTransport::Client::EosNotInitialized)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181580b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"EosNotInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Epic::OnlineServices::P2P::SocketId& EpicTransport::Client::__cordl_internal_get_socketId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___socketId;
}
constexpr ::Epic::OnlineServices::P2P::SocketId const& EpicTransport::Client::__cordl_internal_get_socketId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___socketId;
}
constexpr void EpicTransport::Client::__cordl_internal_set_socketId(::Epic::OnlineServices::P2P::SocketId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___socketId = value;
}
constexpr ::Epic::OnlineServices::ProductUserId*& EpicTransport::Client::__cordl_internal_get_serverId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverId;
}
constexpr ::Epic::OnlineServices::ProductUserId* const& EpicTransport::Client::__cordl_internal_get_serverId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverId;
}
constexpr void EpicTransport::Client::__cordl_internal_set_serverId(::Epic::OnlineServices::ProductUserId*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverId = value;
}
constexpr bool& EpicTransport::Client::__cordl_internal_get__Connected_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Connected_k__BackingField;
}
constexpr bool const& EpicTransport::Client::__cordl_internal_get__Connected_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Connected_k__BackingField;
}
constexpr void EpicTransport::Client::__cordl_internal_set__Connected_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Connected_k__BackingField = value;
}
constexpr bool& EpicTransport::Client::__cordl_internal_get__Error_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
constexpr bool const& EpicTransport::Client::__cordl_internal_get__Error_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
constexpr void EpicTransport::Client::__cordl_internal_set__Error_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Error_k__BackingField = value;
}
constexpr ::System::Action_2<::ArrayW<uint8_t>,int32_t>*& EpicTransport::Client::__cordl_internal_get_OnReceivedData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReceivedData;
}
constexpr ::System::Action_2<::ArrayW<uint8_t>,int32_t>* const& EpicTransport::Client::__cordl_internal_get_OnReceivedData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReceivedData;
}
constexpr void EpicTransport::Client::__cordl_internal_set_OnReceivedData(::System::Action_2<::ArrayW<uint8_t>,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnReceivedData = value;
}
constexpr ::System::Action*& EpicTransport::Client::__cordl_internal_get_OnConnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnected;
}
constexpr ::System::Action* const& EpicTransport::Client::__cordl_internal_get_OnConnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnected;
}
constexpr void EpicTransport::Client::__cordl_internal_set_OnConnected(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnConnected = value;
}
constexpr ::System::Action*& EpicTransport::Client::__cordl_internal_get_OnDisconnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDisconnected;
}
constexpr ::System::Action* const& EpicTransport::Client::__cordl_internal_get_OnDisconnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDisconnected;
}
constexpr void EpicTransport::Client::__cordl_internal_set_OnDisconnected(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDisconnected = value;
}
constexpr ::System::TimeSpan& EpicTransport::Client::__cordl_internal_get_ConnectionTimeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectionTimeout;
}
constexpr ::System::TimeSpan const& EpicTransport::Client::__cordl_internal_get_ConnectionTimeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectionTimeout;
}
constexpr void EpicTransport::Client::__cordl_internal_set_ConnectionTimeout(::System::TimeSpan  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConnectionTimeout = value;
}
constexpr bool& EpicTransport::Client::__cordl_internal_get_isConnecting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isConnecting;
}
constexpr bool const& EpicTransport::Client::__cordl_internal_get_isConnecting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isConnecting;
}
constexpr void EpicTransport::Client::__cordl_internal_set_isConnecting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isConnecting = value;
}
constexpr ::StringW& EpicTransport::Client::__cordl_internal_get_hostAddress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostAddress;
}
constexpr ::StringW const& EpicTransport::Client::__cordl_internal_get_hostAddress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostAddress;
}
constexpr void EpicTransport::Client::__cordl_internal_set_hostAddress(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hostAddress = value;
}
constexpr ::Epic::OnlineServices::ProductUserId*& EpicTransport::Client::__cordl_internal_get_hostProductId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostProductId;
}
constexpr ::Epic::OnlineServices::ProductUserId* const& EpicTransport::Client::__cordl_internal_get_hostProductId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostProductId;
}
constexpr void EpicTransport::Client::__cordl_internal_set_hostProductId(::Epic::OnlineServices::ProductUserId*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hostProductId = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Threading::Tasks::Task*>*& EpicTransport::Client::__cordl_internal_get_connectedComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectedComplete;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Threading::Tasks::Task*>* const& EpicTransport::Client::__cordl_internal_get_connectedComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectedComplete;
}
constexpr void EpicTransport::Client::__cordl_internal_set_connectedComplete(::System::Threading::Tasks::TaskCompletionSource_1<::System::Threading::Tasks::Task*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectedComplete = value;
}
constexpr ::System::Threading::CancellationTokenSource*& EpicTransport::Client::__cordl_internal_get_cancelToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancelToken;
}
constexpr ::System::Threading::CancellationTokenSource* const& EpicTransport::Client::__cordl_internal_get_cancelToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancelToken;
}
constexpr void EpicTransport::Client::__cordl_internal_set_cancelToken(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancelToken = value;
}
inline bool EpicTransport::Client::get_Connected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"get_Connected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void EpicTransport::Client::set_Connected(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"set_Connected", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool EpicTransport::Client::get_Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"get_Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void EpicTransport::Client::set_Error(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"set_Error", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void EpicTransport::Client::add_OnReceivedData(::System::Action_2<::ArrayW<uint8_t>,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"add_OnReceivedData", {}, {::i2c::type_of<::System::Action_2<::ArrayW<uint8_t>,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void EpicTransport::Client::remove_OnReceivedData(::System::Action_2<::ArrayW<uint8_t>,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"remove_OnReceivedData", {}, {::i2c::type_of<::System::Action_2<::ArrayW<uint8_t>,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void EpicTransport::Client::add_OnConnected(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"add_OnConnected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void EpicTransport::Client::remove_OnConnected(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"remove_OnConnected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void EpicTransport::Client::add_OnDisconnected(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"add_OnDisconnected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void EpicTransport::Client::remove_OnDisconnected(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"remove_OnDisconnected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void EpicTransport::Client::_ctor(::EpicTransport::EosTransport*  transport)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {".ctor", {}, {::i2c::type_of<::EpicTransport::EosTransport*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transport);
}
inline ::EpicTransport::Client* EpicTransport::Client::CreateClient(::EpicTransport::EosTransport*  transport, ::StringW  host)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"CreateClient", {}, {::i2c::type_of<::EpicTransport::EosTransport*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::EpicTransport::Client*>(nullptr, ___internal_method, transport, host);
}
inline void EpicTransport::Client::OnSessionFound(::Epic::OnlineServices::Result  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"OnSessionFound", {}, {::i2c::type_of<::Epic::OnlineServices::Result>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void EpicTransport::Client::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool EpicTransport::Client::get_HadEstablishedSession()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::EpicTransport::Client*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void EpicTransport::Client::Connect(::StringW  host)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"Connect", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, host);
}
inline void EpicTransport::Client::Disconnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"Disconnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void EpicTransport::Client::SetConnectedComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"SetConnectedComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void EpicTransport::Client::OnReceiveData(::ArrayW<uint8_t>  data, ::Epic::OnlineServices::ProductUserId*  clientUserId, int32_t  channel)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::EpicTransport::Client*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, clientUserId, channel);
}
inline void EpicTransport::Client::OnNewConnection(::by_ref<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfo>  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::EpicTransport::Client*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void EpicTransport::Client::OnReceiveInternalData(::EpicTransport::Common_InternalMessages  type, ::Epic::OnlineServices::ProductUserId*  clientUserId, ::Epic::OnlineServices::P2P::SocketId  socketId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::EpicTransport::Client*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, clientUserId, socketId);
}
inline void EpicTransport::Client::Send(::ArrayW<uint8_t>  data, int32_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"Send", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channelId);
}
inline void EpicTransport::Client::OnConnectionFailed(::Epic::OnlineServices::ProductUserId*  remoteId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::EpicTransport::Client*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, remoteId);
}
inline void EpicTransport::Client::EosNotInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Client*>(),
                        {"EosNotInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::EpicTransport::Client* EpicTransport::Client::New_ctor(::EpicTransport::EosTransport*  transport)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::EpicTransport::Client*>(transport));
}
// Ctor Parameters []
constexpr ::EpicTransport::Client::Client()   {
}

#pragma once
// IWYU pragma private; include "Mirror/FizzySteam/LegacyClient.hpp"
#include "Mirror/FizzySteam/zzzz__LegacyCommon_impl.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "Mirror/FizzySteam/zzzz__LegacyClient_def.hpp"
#include "Mirror/FizzySteam/zzzz__FizzySteamworks_def.hpp"
#include "Mirror/FizzySteam/zzzz__IClient_def.hpp"
#include "Mirror/FizzySteam/zzzz__LegacyClient_def.hpp"
#include "Mirror/FizzySteam/zzzz__LegacyCommon_def.hpp"
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__P2PSessionRequest_t_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0::*)()>(&::Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0._CreateClient_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0::*)()>(&::Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0::_CreateClient_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1806311e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0*>(),
                        {"<CreateClient>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0._CreateClient_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0::*)()>(&::Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0::_CreateClient_b__1)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180631210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0*>(),
                        {"<CreateClient>b__1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0._CreateClient_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0::*)(::ArrayW<uint8_t>, int32_t)>(&::Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0::_CreateClient_b__2)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180631240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0*>(),
                        {"<CreateClient>b__2", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Mirror::FizzySteam::FizzySteamworks>& Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0::__cordl_internal_get_transport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transport;
}
constexpr ::UnityW<::Mirror::FizzySteam::FizzySteamworks> const& Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0::__cordl_internal_get_transport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transport;
}
constexpr void Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0::__cordl_internal_set_transport(::UnityW<::Mirror::FizzySteam::FizzySteamworks>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transport = value;
}
inline void Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0::_CreateClient_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0*>(),
                        {"<CreateClient>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0::_CreateClient_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0*>(),
                        {"<CreateClient>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0::_CreateClient_b__2(::ArrayW<uint8_t>  data, int32_t  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0*>(),
                        {"<CreateClient>b__2", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channel);
}
inline ::Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0* Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0*>());
}
// Ctor Parameters []
constexpr ::Mirror::FizzySteam::LegacyClient___c__DisplayClass22_0::LegacyClient___c__DisplayClass22_0()   {
}
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyClient__Connect_d__23.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyClient__Connect_d__23::*)()>(&::Mirror::FizzySteam::LegacyClient__Connect_d__23::MoveNext)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x180630360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient__Connect_d__23>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyClient__Connect_d__23.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyClient__Connect_d__23::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Mirror::FizzySteam::LegacyClient__Connect_d__23::SetStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18038a820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient__Connect_d__23>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::FizzySteam::LegacyClient__Connect_d__23::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient__Connect_d__23>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Mirror::FizzySteam::LegacyClient__Connect_d__23::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient__Connect_d__23>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Mirror::FizzySteam::LegacyClient__Connect_d__23::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Mirror::FizzySteam::LegacyClient__Connect_d__23::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Mirror::FizzySteam::LegacyClient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "host", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_connectedCompleteTask_5__2", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_timeOutTask_5__3", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::FizzySteam::LegacyClient__Connect_d__23::LegacyClient__Connect_d__23(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::Mirror::FizzySteam::LegacyClient*  __4__this, ::StringW  host, ::System::Threading::Tasks::Task*  _connectedCompleteTask_5__2, ::System::Threading::Tasks::Task*  _timeOutTask_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->host = host;
this->_connectedCompleteTask_5__2 = _connectedCompleteTask_5__2;
this->_timeOutTask_5__3 = _timeOutTask_5__3;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Mirror::FizzySteam::LegacyClient__Connect_d__23::LegacyClient__Connect_d__23()   {
}
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyClient.get_Connected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::FizzySteam::LegacyClient::*)()>(&::Mirror::FizzySteam::LegacyClient::get_Connected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803561b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {"get_Connected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyClient.set_Connected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyClient::*)(bool)>(&::Mirror::FizzySteam::LegacyClient::set_Connected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180499eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {"set_Connected", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyClient.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::FizzySteam::LegacyClient::*)()>(&::Mirror::FizzySteam::LegacyClient::get_Error)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049c410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {"get_Error", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyClient.set_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyClient::*)(bool)>(&::Mirror::FizzySteam::LegacyClient::set_Error)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049c420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {"set_Error", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyClient.add_OnReceivedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyClient::*)(::System::Action_2<::ArrayW<uint8_t>,int32_t>*)>(&::Mirror::FizzySteam::LegacyClient::add_OnReceivedData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18062c560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {"add_OnReceivedData", {}, {::i2c::type_of<::System::Action_2<::ArrayW<uint8_t>,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyClient.remove_OnReceivedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyClient::*)(::System::Action_2<::ArrayW<uint8_t>,int32_t>*)>(&::Mirror::FizzySteam::LegacyClient::remove_OnReceivedData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18062c6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {"remove_OnReceivedData", {}, {::i2c::type_of<::System::Action_2<::ArrayW<uint8_t>,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyClient.add_OnConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyClient::*)(::System::Action*)>(&::Mirror::FizzySteam::LegacyClient::add_OnConnected)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18062c460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {"add_OnConnected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyClient.remove_OnConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyClient::*)(::System::Action*)>(&::Mirror::FizzySteam::LegacyClient::remove_OnConnected)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18062c5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {"remove_OnConnected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyClient.add_OnDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyClient::*)(::System::Action*)>(&::Mirror::FizzySteam::LegacyClient::add_OnDisconnected)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18062c4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {"add_OnDisconnected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyClient.remove_OnDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyClient::*)(::System::Action*)>(&::Mirror::FizzySteam::LegacyClient::remove_OnDisconnected)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18062c670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {"remove_OnDisconnected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyClient._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyClient::*)(::Mirror::FizzySteam::FizzySteamworks*)>(&::Mirror::FizzySteam::LegacyClient::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18062c3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {".ctor", {}, {::i2c::type_of<::Mirror::FizzySteam::FizzySteamworks*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyClient.CreateClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::FizzySteam::LegacyClient* (*)(::Mirror::FizzySteam::FizzySteamworks*, ::StringW)>(&::Mirror::FizzySteam::LegacyClient::CreateClient)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x18062bd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {"CreateClient", {}, {::i2c::type_of<::Mirror::FizzySteam::FizzySteamworks*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyClient.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyClient::*)(::StringW)>(&::Mirror::FizzySteam::LegacyClient::Connect)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18062bcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {"Connect", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyClient.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyClient::*)()>(&::Mirror::FizzySteam::LegacyClient::Disconnect)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18062c080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {"Disconnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyClient.SetConnectedComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyClient::*)()>(&::Mirror::FizzySteam::LegacyClient::SetConnectedComplete)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18062c3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {"SetConnectedComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyClient.OnReceiveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyClient::*)(::ArrayW<uint8_t>, ::Steamworks::CSteamID, int32_t)>(&::Mirror::FizzySteam::LegacyClient::OnReceiveData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18062c210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyClient.OnNewConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyClient::*)(::Steamworks::P2PSessionRequest_t)>(&::Mirror::FizzySteam::LegacyClient::OnNewConnection)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18062c1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyClient.OnReceiveInternalData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyClient::*)(::Mirror::FizzySteam::LegacyCommon_InternalMessages, ::Steamworks::CSteamID)>(&::Mirror::FizzySteam::LegacyClient::OnReceiveInternalData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18062c2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyClient.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyClient::*)(::ArrayW<uint8_t>, int32_t)>(&::Mirror::FizzySteam::LegacyClient::Send)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18062c350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {"Send", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyClient.OnConnectionFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyClient::*)(::Steamworks::CSteamID)>(&::Mirror::FizzySteam::LegacyClient::OnConnectionFailed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18062c170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyClient.FlushData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyClient::*)()>(&::Mirror::FizzySteam::LegacyClient::FlushData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {"FlushData", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Mirror::FizzySteam::LegacyClient::__cordl_internal_get__Connected_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Connected_k__BackingField;
}
constexpr bool const& Mirror::FizzySteam::LegacyClient::__cordl_internal_get__Connected_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Connected_k__BackingField;
}
constexpr void Mirror::FizzySteam::LegacyClient::__cordl_internal_set__Connected_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Connected_k__BackingField = value;
}
constexpr bool& Mirror::FizzySteam::LegacyClient::__cordl_internal_get__Error_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
constexpr bool const& Mirror::FizzySteam::LegacyClient::__cordl_internal_get__Error_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
constexpr void Mirror::FizzySteam::LegacyClient::__cordl_internal_set__Error_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Error_k__BackingField = value;
}
constexpr ::System::Action_2<::ArrayW<uint8_t>,int32_t>*& Mirror::FizzySteam::LegacyClient::__cordl_internal_get_OnReceivedData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReceivedData;
}
constexpr ::System::Action_2<::ArrayW<uint8_t>,int32_t>* const& Mirror::FizzySteam::LegacyClient::__cordl_internal_get_OnReceivedData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReceivedData;
}
constexpr void Mirror::FizzySteam::LegacyClient::__cordl_internal_set_OnReceivedData(::System::Action_2<::ArrayW<uint8_t>,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnReceivedData = value;
}
constexpr ::System::Action*& Mirror::FizzySteam::LegacyClient::__cordl_internal_get_OnConnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnected;
}
constexpr ::System::Action* const& Mirror::FizzySteam::LegacyClient::__cordl_internal_get_OnConnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnected;
}
constexpr void Mirror::FizzySteam::LegacyClient::__cordl_internal_set_OnConnected(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnConnected = value;
}
constexpr ::System::Action*& Mirror::FizzySteam::LegacyClient::__cordl_internal_get_OnDisconnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDisconnected;
}
constexpr ::System::Action* const& Mirror::FizzySteam::LegacyClient::__cordl_internal_get_OnDisconnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDisconnected;
}
constexpr void Mirror::FizzySteam::LegacyClient::__cordl_internal_set_OnDisconnected(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDisconnected = value;
}
constexpr ::System::TimeSpan& Mirror::FizzySteam::LegacyClient::__cordl_internal_get_ConnectionTimeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectionTimeout;
}
constexpr ::System::TimeSpan const& Mirror::FizzySteam::LegacyClient::__cordl_internal_get_ConnectionTimeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectionTimeout;
}
constexpr void Mirror::FizzySteam::LegacyClient::__cordl_internal_set_ConnectionTimeout(::System::TimeSpan  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConnectionTimeout = value;
}
constexpr ::Steamworks::CSteamID& Mirror::FizzySteam::LegacyClient::__cordl_internal_get_hostSteamID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostSteamID;
}
constexpr ::Steamworks::CSteamID const& Mirror::FizzySteam::LegacyClient::__cordl_internal_get_hostSteamID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostSteamID;
}
constexpr void Mirror::FizzySteam::LegacyClient::__cordl_internal_set_hostSteamID(::Steamworks::CSteamID  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hostSteamID = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Threading::Tasks::Task*>*& Mirror::FizzySteam::LegacyClient::__cordl_internal_get_connectedComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectedComplete;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Threading::Tasks::Task*>* const& Mirror::FizzySteam::LegacyClient::__cordl_internal_get_connectedComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectedComplete;
}
constexpr void Mirror::FizzySteam::LegacyClient::__cordl_internal_set_connectedComplete(::System::Threading::Tasks::TaskCompletionSource_1<::System::Threading::Tasks::Task*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectedComplete = value;
}
constexpr ::System::Threading::CancellationTokenSource*& Mirror::FizzySteam::LegacyClient::__cordl_internal_get_cancelToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancelToken;
}
constexpr ::System::Threading::CancellationTokenSource* const& Mirror::FizzySteam::LegacyClient::__cordl_internal_get_cancelToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancelToken;
}
constexpr void Mirror::FizzySteam::LegacyClient::__cordl_internal_set_cancelToken(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancelToken = value;
}
inline bool Mirror::FizzySteam::LegacyClient::get_Connected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {"get_Connected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::FizzySteam::LegacyClient::set_Connected(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {"set_Connected", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Mirror::FizzySteam::LegacyClient::get_Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {"get_Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::FizzySteam::LegacyClient::set_Error(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {"set_Error", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::FizzySteam::LegacyClient::add_OnReceivedData(::System::Action_2<::ArrayW<uint8_t>,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {"add_OnReceivedData", {}, {::i2c::type_of<::System::Action_2<::ArrayW<uint8_t>,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::FizzySteam::LegacyClient::remove_OnReceivedData(::System::Action_2<::ArrayW<uint8_t>,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {"remove_OnReceivedData", {}, {::i2c::type_of<::System::Action_2<::ArrayW<uint8_t>,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::FizzySteam::LegacyClient::add_OnConnected(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {"add_OnConnected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::FizzySteam::LegacyClient::remove_OnConnected(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {"remove_OnConnected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::FizzySteam::LegacyClient::add_OnDisconnected(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {"add_OnDisconnected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::FizzySteam::LegacyClient::remove_OnDisconnected(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {"remove_OnDisconnected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::FizzySteam::LegacyClient::_ctor(::Mirror::FizzySteam::FizzySteamworks*  transport)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {".ctor", {}, {::i2c::type_of<::Mirror::FizzySteam::FizzySteamworks*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transport);
}
inline ::Mirror::FizzySteam::LegacyClient* Mirror::FizzySteam::LegacyClient::CreateClient(::Mirror::FizzySteam::FizzySteamworks*  transport, ::StringW  host)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {"CreateClient", {}, {::i2c::type_of<::Mirror::FizzySteam::FizzySteamworks*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::FizzySteam::LegacyClient*>(nullptr, ___internal_method, transport, host);
}
inline void Mirror::FizzySteam::LegacyClient::Connect(::StringW  host)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {"Connect", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, host);
}
inline void Mirror::FizzySteam::LegacyClient::Disconnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {"Disconnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::LegacyClient::SetConnectedComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {"SetConnectedComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::LegacyClient::OnReceiveData(::ArrayW<uint8_t>  data, ::Steamworks::CSteamID  clientSteamID, int32_t  channel)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, clientSteamID, channel);
}
inline void Mirror::FizzySteam::LegacyClient::OnNewConnection(::Steamworks::P2PSessionRequest_t  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Mirror::FizzySteam::LegacyClient::OnReceiveInternalData(::Mirror::FizzySteam::LegacyCommon_InternalMessages  type, ::Steamworks::CSteamID  clientSteamID)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, clientSteamID);
}
inline void Mirror::FizzySteam::LegacyClient::Send(::ArrayW<uint8_t>  data, int32_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {"Send", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channelId);
}
inline void Mirror::FizzySteam::LegacyClient::OnConnectionFailed(::Steamworks::CSteamID  remoteId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, remoteId);
}
inline void Mirror::FizzySteam::LegacyClient::FlushData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyClient*>(),
                        {"FlushData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::FizzySteam::LegacyClient* Mirror::FizzySteam::LegacyClient::New_ctor(::Mirror::FizzySteam::FizzySteamworks*  transport)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::FizzySteam::LegacyClient*>(transport));
}
/// @brief Convert operator to "::Mirror::FizzySteam::IClient"
constexpr  Mirror::FizzySteam::LegacyClient::operator ::Mirror::FizzySteam::IClient*() noexcept {
return static_cast<::Mirror::FizzySteam::IClient*>(static_cast<void*>(this));
}
/// @brief Convert to "::Mirror::FizzySteam::IClient"
constexpr ::Mirror::FizzySteam::IClient* Mirror::FizzySteam::LegacyClient::i___Mirror__FizzySteam__IClient() noexcept {
return static_cast<::Mirror::FizzySteam::IClient*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mirror::FizzySteam::LegacyClient::LegacyClient()   {
}

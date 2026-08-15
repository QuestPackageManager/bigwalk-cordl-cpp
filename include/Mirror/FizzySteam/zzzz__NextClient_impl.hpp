#pragma once
// IWYU pragma private; include "Mirror/FizzySteam/NextClient.hpp"
#include "Mirror/FizzySteam/zzzz__NextCommon_impl.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__HSteamNetConnection_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "Mirror/FizzySteam/zzzz__NextClient_def.hpp"
#include "Mirror/FizzySteam/zzzz__FizzySteamworks_def.hpp"
#include "Mirror/FizzySteam/zzzz__IClient_def.hpp"
#include "Mirror/FizzySteam/zzzz__NextClient_def.hpp"
#include "Steamworks/zzzz__Callback_1_def.hpp"
#include "Steamworks/zzzz__SteamNetConnectionStatusChangedCallback_t_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Mirror::FizzySteam::NextClient___c__DisplayClass25_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextClient___c__DisplayClass25_0::*)()>(&::Mirror::FizzySteam::NextClient___c__DisplayClass25_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient___c__DisplayClass25_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextClient___c__DisplayClass25_0._CreateClient_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextClient___c__DisplayClass25_0::*)()>(&::Mirror::FizzySteam::NextClient___c__DisplayClass25_0::_CreateClient_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1806311e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient___c__DisplayClass25_0*>(),
                        {"<CreateClient>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextClient___c__DisplayClass25_0._CreateClient_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextClient___c__DisplayClass25_0::*)()>(&::Mirror::FizzySteam::NextClient___c__DisplayClass25_0::_CreateClient_b__1)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180631210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient___c__DisplayClass25_0*>(),
                        {"<CreateClient>b__1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextClient___c__DisplayClass25_0._CreateClient_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextClient___c__DisplayClass25_0::*)(::ArrayW<uint8_t>, int32_t)>(&::Mirror::FizzySteam::NextClient___c__DisplayClass25_0::_CreateClient_b__2)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180631240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient___c__DisplayClass25_0*>(),
                        {"<CreateClient>b__2", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Mirror::FizzySteam::FizzySteamworks>& Mirror::FizzySteam::NextClient___c__DisplayClass25_0::__cordl_internal_get_transport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transport;
}
constexpr ::UnityW<::Mirror::FizzySteam::FizzySteamworks> const& Mirror::FizzySteam::NextClient___c__DisplayClass25_0::__cordl_internal_get_transport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transport;
}
constexpr void Mirror::FizzySteam::NextClient___c__DisplayClass25_0::__cordl_internal_set_transport(::UnityW<::Mirror::FizzySteam::FizzySteamworks>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transport = value;
}
inline void Mirror::FizzySteam::NextClient___c__DisplayClass25_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient___c__DisplayClass25_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::NextClient___c__DisplayClass25_0::_CreateClient_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient___c__DisplayClass25_0*>(),
                        {"<CreateClient>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::NextClient___c__DisplayClass25_0::_CreateClient_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient___c__DisplayClass25_0*>(),
                        {"<CreateClient>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::NextClient___c__DisplayClass25_0::_CreateClient_b__2(::ArrayW<uint8_t>  data, int32_t  ch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient___c__DisplayClass25_0*>(),
                        {"<CreateClient>b__2", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, ch);
}
inline ::Mirror::FizzySteam::NextClient___c__DisplayClass25_0* Mirror::FizzySteam::NextClient___c__DisplayClass25_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::FizzySteam::NextClient___c__DisplayClass25_0*>());
}
// Ctor Parameters []
constexpr ::Mirror::FizzySteam::NextClient___c__DisplayClass25_0::NextClient___c__DisplayClass25_0()   {
}
//  Writing Method size for method: ::Mirror::FizzySteam::NextClient___c__DisplayClass31_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextClient___c__DisplayClass31_0::*)()>(&::Mirror::FizzySteam::NextClient___c__DisplayClass31_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient___c__DisplayClass31_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextClient___c__DisplayClass31_0._ReceiveData_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextClient___c__DisplayClass31_0::*)()>(&::Mirror::FizzySteam::NextClient___c__DisplayClass31_0::_ReceiveData_b__0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1806312b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient___c__DisplayClass31_0*>(),
                        {"<ReceiveData>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Mirror::FizzySteam::NextClient___c__DisplayClass31_0::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::ArrayW<uint8_t> const& Mirror::FizzySteam::NextClient___c__DisplayClass31_0::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void Mirror::FizzySteam::NextClient___c__DisplayClass31_0::__cordl_internal_set_data(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr int32_t& Mirror::FizzySteam::NextClient___c__DisplayClass31_0::__cordl_internal_get_ch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ch;
}
constexpr int32_t const& Mirror::FizzySteam::NextClient___c__DisplayClass31_0::__cordl_internal_get_ch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ch;
}
constexpr void Mirror::FizzySteam::NextClient___c__DisplayClass31_0::__cordl_internal_set_ch(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ch = value;
}
constexpr ::Mirror::FizzySteam::NextClient*& Mirror::FizzySteam::NextClient___c__DisplayClass31_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Mirror::FizzySteam::NextClient* const& Mirror::FizzySteam::NextClient___c__DisplayClass31_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Mirror::FizzySteam::NextClient___c__DisplayClass31_0::__cordl_internal_set___4__this(::Mirror::FizzySteam::NextClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Mirror::FizzySteam::NextClient___c__DisplayClass31_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient___c__DisplayClass31_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::NextClient___c__DisplayClass31_0::_ReceiveData_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient___c__DisplayClass31_0*>(),
                        {"<ReceiveData>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::FizzySteam::NextClient___c__DisplayClass31_0* Mirror::FizzySteam::NextClient___c__DisplayClass31_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::FizzySteam::NextClient___c__DisplayClass31_0*>());
}
// Ctor Parameters []
constexpr ::Mirror::FizzySteam::NextClient___c__DisplayClass31_0::NextClient___c__DisplayClass31_0()   {
}
//  Writing Method size for method: ::Mirror::FizzySteam::NextClient__Connect_d__26.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextClient__Connect_d__26::*)()>(&::Mirror::FizzySteam::NextClient__Connect_d__26::MoveNext)> {
  constexpr static std::size_t size = 0x6f0;
  constexpr static std::size_t addrs = 0x180630960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient__Connect_d__26>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextClient__Connect_d__26.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextClient__Connect_d__26::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Mirror::FizzySteam::NextClient__Connect_d__26::SetStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18038a820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient__Connect_d__26>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::FizzySteam::NextClient__Connect_d__26::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient__Connect_d__26>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Mirror::FizzySteam::NextClient__Connect_d__26::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient__Connect_d__26>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Mirror::FizzySteam::NextClient__Connect_d__26::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Mirror::FizzySteam::NextClient__Connect_d__26::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Mirror::FizzySteam::NextClient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "host", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_connectedCompleteTask_5__2", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_timeOutTask_5__3", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::FizzySteam::NextClient__Connect_d__26::NextClient__Connect_d__26(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::Mirror::FizzySteam::NextClient*  __4__this, ::StringW  host, ::System::Threading::Tasks::Task*  _connectedCompleteTask_5__2, ::System::Threading::Tasks::Task*  _timeOutTask_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->host = host;
this->_connectedCompleteTask_5__2 = _connectedCompleteTask_5__2;
this->_timeOutTask_5__3 = _timeOutTask_5__3;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Mirror::FizzySteam::NextClient__Connect_d__26::NextClient__Connect_d__26()   {
}
//  Writing Method size for method: ::Mirror::FizzySteam::NextClient.get_Connected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::FizzySteam::NextClient::*)()>(&::Mirror::FizzySteam::NextClient::get_Connected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"get_Connected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextClient.set_Connected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextClient::*)(bool)>(&::Mirror::FizzySteam::NextClient::set_Connected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"set_Connected", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextClient.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::FizzySteam::NextClient::*)()>(&::Mirror::FizzySteam::NextClient::get_Error)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"get_Error", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextClient.set_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextClient::*)(bool)>(&::Mirror::FizzySteam::NextClient::set_Error)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"set_Error", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextClient.add_OnReceivedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextClient::*)(::System::Action_2<::ArrayW<uint8_t>,int32_t>*)>(&::Mirror::FizzySteam::NextClient::add_OnReceivedData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18062eb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"add_OnReceivedData", {}, {::i2c::type_of<::System::Action_2<::ArrayW<uint8_t>,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextClient.remove_OnReceivedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextClient::*)(::System::Action_2<::ArrayW<uint8_t>,int32_t>*)>(&::Mirror::FizzySteam::NextClient::remove_OnReceivedData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18062ecb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"remove_OnReceivedData", {}, {::i2c::type_of<::System::Action_2<::ArrayW<uint8_t>,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextClient.add_OnConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextClient::*)(::System::Action*)>(&::Mirror::FizzySteam::NextClient::add_OnConnected)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18062ea20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"add_OnConnected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextClient.remove_OnConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextClient::*)(::System::Action*)>(&::Mirror::FizzySteam::NextClient::remove_OnConnected)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18062ebb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"remove_OnConnected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextClient.add_OnDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextClient::*)(::System::Action*)>(&::Mirror::FizzySteam::NextClient::add_OnDisconnected)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18062eaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"add_OnDisconnected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextClient.remove_OnDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextClient::*)(::System::Action*)>(&::Mirror::FizzySteam::NextClient::remove_OnDisconnected)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18062ec30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"remove_OnDisconnected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextClient._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextClient::*)(::Mirror::FizzySteam::FizzySteamworks*)>(&::Mirror::FizzySteam::NextClient::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18062e980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {".ctor", {}, {::i2c::type_of<::Mirror::FizzySteam::FizzySteamworks*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextClient.CreateClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::FizzySteam::NextClient* (*)(::Mirror::FizzySteam::FizzySteamworks*, ::StringW)>(&::Mirror::FizzySteam::NextClient::CreateClient)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x18062dfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"CreateClient", {}, {::i2c::type_of<::Mirror::FizzySteam::FizzySteamworks*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextClient.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextClient::*)(::StringW)>(&::Mirror::FizzySteam::NextClient::Connect)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18062df10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"Connect", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextClient.OnConnectionStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextClient::*)(::Steamworks::SteamNetConnectionStatusChangedCallback_t)>(&::Mirror::FizzySteam::NextClient::OnConnectionStatusChanged)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x18062e3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"OnConnectionStatusChanged", {}, {::i2c::type_of<::Steamworks::SteamNetConnectionStatusChangedCallback_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextClient.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextClient::*)()>(&::Mirror::FizzySteam::NextClient::Disconnect)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18062e2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"Disconnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextClient.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextClient::*)()>(&::Mirror::FizzySteam::NextClient::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18062e330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextClient.InternalDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextClient::*)()>(&::Mirror::FizzySteam::NextClient::InternalDisconnect)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18062e380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"InternalDisconnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextClient.ReceiveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextClient::*)()>(&::Mirror::FizzySteam::NextClient::ReceiveData)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x18062e640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"ReceiveData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextClient.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextClient::*)(::ArrayW<uint8_t>, int32_t)>(&::Mirror::FizzySteam::NextClient::Send)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18062e870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"Send", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextClient.SetConnectedComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextClient::*)()>(&::Mirror::FizzySteam::NextClient::SetConnectedComplete)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18062e950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"SetConnectedComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextClient.OnConnectionFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextClient::*)()>(&::Mirror::FizzySteam::NextClient::OnConnectionFailed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180551510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"OnConnectionFailed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextClient.FlushData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextClient::*)()>(&::Mirror::FizzySteam::NextClient::FlushData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18062e370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"FlushData", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Mirror::FizzySteam::NextClient::__cordl_internal_get__Connected_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Connected_k__BackingField;
}
constexpr bool const& Mirror::FizzySteam::NextClient::__cordl_internal_get__Connected_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Connected_k__BackingField;
}
constexpr void Mirror::FizzySteam::NextClient::__cordl_internal_set__Connected_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Connected_k__BackingField = value;
}
constexpr bool& Mirror::FizzySteam::NextClient::__cordl_internal_get__Error_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
constexpr bool const& Mirror::FizzySteam::NextClient::__cordl_internal_get__Error_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
constexpr void Mirror::FizzySteam::NextClient::__cordl_internal_set__Error_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Error_k__BackingField = value;
}
constexpr ::System::TimeSpan& Mirror::FizzySteam::NextClient::__cordl_internal_get_ConnectionTimeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectionTimeout;
}
constexpr ::System::TimeSpan const& Mirror::FizzySteam::NextClient::__cordl_internal_get_ConnectionTimeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectionTimeout;
}
constexpr void Mirror::FizzySteam::NextClient::__cordl_internal_set_ConnectionTimeout(::System::TimeSpan  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConnectionTimeout = value;
}
constexpr ::System::Action_2<::ArrayW<uint8_t>,int32_t>*& Mirror::FizzySteam::NextClient::__cordl_internal_get_OnReceivedData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReceivedData;
}
constexpr ::System::Action_2<::ArrayW<uint8_t>,int32_t>* const& Mirror::FizzySteam::NextClient::__cordl_internal_get_OnReceivedData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReceivedData;
}
constexpr void Mirror::FizzySteam::NextClient::__cordl_internal_set_OnReceivedData(::System::Action_2<::ArrayW<uint8_t>,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnReceivedData = value;
}
constexpr ::System::Action*& Mirror::FizzySteam::NextClient::__cordl_internal_get_OnConnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnected;
}
constexpr ::System::Action* const& Mirror::FizzySteam::NextClient::__cordl_internal_get_OnConnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnected;
}
constexpr void Mirror::FizzySteam::NextClient::__cordl_internal_set_OnConnected(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnConnected = value;
}
constexpr ::System::Action*& Mirror::FizzySteam::NextClient::__cordl_internal_get_OnDisconnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDisconnected;
}
constexpr ::System::Action* const& Mirror::FizzySteam::NextClient::__cordl_internal_get_OnDisconnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDisconnected;
}
constexpr void Mirror::FizzySteam::NextClient::__cordl_internal_set_OnDisconnected(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDisconnected = value;
}
constexpr ::Steamworks::Callback_1<::Steamworks::SteamNetConnectionStatusChangedCallback_t>*& Mirror::FizzySteam::NextClient::__cordl_internal_get_c_onConnectionChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___c_onConnectionChange;
}
constexpr ::Steamworks::Callback_1<::Steamworks::SteamNetConnectionStatusChangedCallback_t>* const& Mirror::FizzySteam::NextClient::__cordl_internal_get_c_onConnectionChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___c_onConnectionChange;
}
constexpr void Mirror::FizzySteam::NextClient::__cordl_internal_set_c_onConnectionChange(::Steamworks::Callback_1<::Steamworks::SteamNetConnectionStatusChangedCallback_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___c_onConnectionChange = value;
}
constexpr ::System::Threading::CancellationTokenSource*& Mirror::FizzySteam::NextClient::__cordl_internal_get_cancelToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancelToken;
}
constexpr ::System::Threading::CancellationTokenSource* const& Mirror::FizzySteam::NextClient::__cordl_internal_get_cancelToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancelToken;
}
constexpr void Mirror::FizzySteam::NextClient::__cordl_internal_set_cancelToken(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancelToken = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Threading::Tasks::Task*>*& Mirror::FizzySteam::NextClient::__cordl_internal_get_connectedComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectedComplete;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Threading::Tasks::Task*>* const& Mirror::FizzySteam::NextClient::__cordl_internal_get_connectedComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectedComplete;
}
constexpr void Mirror::FizzySteam::NextClient::__cordl_internal_set_connectedComplete(::System::Threading::Tasks::TaskCompletionSource_1<::System::Threading::Tasks::Task*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectedComplete = value;
}
constexpr ::Steamworks::CSteamID& Mirror::FizzySteam::NextClient::__cordl_internal_get_hostSteamID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostSteamID;
}
constexpr ::Steamworks::CSteamID const& Mirror::FizzySteam::NextClient::__cordl_internal_get_hostSteamID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostSteamID;
}
constexpr void Mirror::FizzySteam::NextClient::__cordl_internal_set_hostSteamID(::Steamworks::CSteamID  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hostSteamID = value;
}
constexpr ::Steamworks::HSteamNetConnection& Mirror::FizzySteam::NextClient::__cordl_internal_get_HostConnection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HostConnection;
}
constexpr ::Steamworks::HSteamNetConnection const& Mirror::FizzySteam::NextClient::__cordl_internal_get_HostConnection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HostConnection;
}
constexpr void Mirror::FizzySteam::NextClient::__cordl_internal_set_HostConnection(::Steamworks::HSteamNetConnection  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HostConnection = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Action*>*& Mirror::FizzySteam::NextClient::__cordl_internal_get_BufferedData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BufferedData;
}
constexpr ::System::Collections::Generic::List_1<::System::Action*>* const& Mirror::FizzySteam::NextClient::__cordl_internal_get_BufferedData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BufferedData;
}
constexpr void Mirror::FizzySteam::NextClient::__cordl_internal_set_BufferedData(::System::Collections::Generic::List_1<::System::Action*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BufferedData = value;
}
inline bool Mirror::FizzySteam::NextClient::get_Connected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"get_Connected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::FizzySteam::NextClient::set_Connected(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"set_Connected", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Mirror::FizzySteam::NextClient::get_Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"get_Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::FizzySteam::NextClient::set_Error(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"set_Error", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::FizzySteam::NextClient::add_OnReceivedData(::System::Action_2<::ArrayW<uint8_t>,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"add_OnReceivedData", {}, {::i2c::type_of<::System::Action_2<::ArrayW<uint8_t>,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::FizzySteam::NextClient::remove_OnReceivedData(::System::Action_2<::ArrayW<uint8_t>,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"remove_OnReceivedData", {}, {::i2c::type_of<::System::Action_2<::ArrayW<uint8_t>,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::FizzySteam::NextClient::add_OnConnected(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"add_OnConnected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::FizzySteam::NextClient::remove_OnConnected(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"remove_OnConnected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::FizzySteam::NextClient::add_OnDisconnected(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"add_OnDisconnected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::FizzySteam::NextClient::remove_OnDisconnected(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"remove_OnDisconnected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::FizzySteam::NextClient::_ctor(::Mirror::FizzySteam::FizzySteamworks*  transport)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {".ctor", {}, {::i2c::type_of<::Mirror::FizzySteam::FizzySteamworks*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transport);
}
inline ::Mirror::FizzySteam::NextClient* Mirror::FizzySteam::NextClient::CreateClient(::Mirror::FizzySteam::FizzySteamworks*  transport, ::StringW  host)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"CreateClient", {}, {::i2c::type_of<::Mirror::FizzySteam::FizzySteamworks*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::FizzySteam::NextClient*>(nullptr, ___internal_method, transport, host);
}
inline void Mirror::FizzySteam::NextClient::Connect(::StringW  host)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"Connect", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, host);
}
inline void Mirror::FizzySteam::NextClient::OnConnectionStatusChanged(::Steamworks::SteamNetConnectionStatusChangedCallback_t  param)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"OnConnectionStatusChanged", {}, {::i2c::type_of<::Steamworks::SteamNetConnectionStatusChangedCallback_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, param);
}
inline void Mirror::FizzySteam::NextClient::Disconnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"Disconnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::NextClient::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::NextClient::InternalDisconnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"InternalDisconnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::NextClient::ReceiveData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"ReceiveData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::NextClient::Send(::ArrayW<uint8_t>  data, int32_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"Send", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channelId);
}
inline void Mirror::FizzySteam::NextClient::SetConnectedComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"SetConnectedComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::NextClient::OnConnectionFailed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"OnConnectionFailed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::NextClient::FlushData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextClient*>(),
                        {"FlushData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::FizzySteam::NextClient* Mirror::FizzySteam::NextClient::New_ctor(::Mirror::FizzySteam::FizzySteamworks*  transport)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::FizzySteam::NextClient*>(transport));
}
/// @brief Convert operator to "::Mirror::FizzySteam::IClient"
constexpr  Mirror::FizzySteam::NextClient::operator ::Mirror::FizzySteam::IClient*() noexcept {
return static_cast<::Mirror::FizzySteam::IClient*>(static_cast<void*>(this));
}
/// @brief Convert to "::Mirror::FizzySteam::IClient"
constexpr ::Mirror::FizzySteam::IClient* Mirror::FizzySteam::NextClient::i___Mirror__FizzySteam__IClient() noexcept {
return static_cast<::Mirror::FizzySteam::IClient*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mirror::FizzySteam::NextClient::NextClient()   {
}

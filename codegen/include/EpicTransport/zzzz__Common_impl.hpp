#pragma once
// IWYU pragma private; include "EpicTransport/Common.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_impl.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnPeerConnectionInterruptedInfo_impl.hpp"
#include "Epic/OnlineServices/P2P/zzzz__PacketReliability_impl.hpp"
#include "Epic/OnlineServices/P2P/zzzz__SocketId_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "EpicTransport/zzzz__Common_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnIncomingConnectionRequestCallback_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnIncomingConnectionRequestInfo_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnPeerConnectionEstablishedInfo_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnPeerConnectionInterruptedInfo_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnRemoteConnectionClosedCallback_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnRemoteConnectionClosedInfo_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__P2PInterface_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__SocketId_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "EpicTransport/zzzz__Common_def.hpp"
#include "EpicTransport/zzzz__EosTransport_def.hpp"
#include "EpicTransport/zzzz__Packet_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::EpicTransport::Common_InternalMessages::Common_InternalMessages(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::EpicTransport::Common_InternalMessages::Common_InternalMessages()   {
}
constexpr ::EpicTransport::Common_InternalMessages  EpicTransport::Common_InternalMessages::CONNECT{static_cast<uint8_t>(0x0u)};
constexpr ::EpicTransport::Common_InternalMessages  EpicTransport::Common_InternalMessages::ACCEPT_CONNECT{static_cast<uint8_t>(0x1u)};
constexpr ::EpicTransport::Common_InternalMessages  EpicTransport::Common_InternalMessages::DISCONNECT{static_cast<uint8_t>(0x2u)};
constexpr ::EpicTransport::Common_InternalMessages  EpicTransport::Common_InternalMessages::SERVER_FULL{static_cast<uint8_t>(0x3u)};
// Ctor Parameters [CppParam { name: "productUserId", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "channel", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::EpicTransport::Common_PacketKey::Common_PacketKey(::Epic::OnlineServices::ProductUserId*  productUserId, uint8_t  channel) noexcept  {
this->productUserId = productUserId;
this->channel = channel;
}
// Ctor Parameters []
constexpr ::EpicTransport::Common_PacketKey::Common_PacketKey()   {
}
//  Writing Method size for method: ::EpicTransport::Common__DelayedClose_d__35._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Common__DelayedClose_d__35::*)(int32_t)>(&::EpicTransport::Common__DelayedClose_d__35::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common__DelayedClose_d__35*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Common__DelayedClose_d__35.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Common__DelayedClose_d__35::*)()>(&::EpicTransport::Common__DelayedClose_d__35::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common__DelayedClose_d__35*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Common__DelayedClose_d__35.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::EpicTransport::Common__DelayedClose_d__35::*)()>(&::EpicTransport::Common__DelayedClose_d__35::MoveNext)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18158d930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common__DelayedClose_d__35*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Common__DelayedClose_d__35.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::EpicTransport::Common__DelayedClose_d__35::*)()>(&::EpicTransport::Common__DelayedClose_d__35::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common__DelayedClose_d__35*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Common__DelayedClose_d__35.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Common__DelayedClose_d__35::*)()>(&::EpicTransport::Common__DelayedClose_d__35::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common__DelayedClose_d__35*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Common__DelayedClose_d__35.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::EpicTransport::Common__DelayedClose_d__35::*)()>(&::EpicTransport::Common__DelayedClose_d__35::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common__DelayedClose_d__35*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& EpicTransport::Common__DelayedClose_d__35::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& EpicTransport::Common__DelayedClose_d__35::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void EpicTransport::Common__DelayedClose_d__35::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& EpicTransport::Common__DelayedClose_d__35::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& EpicTransport::Common__DelayedClose_d__35::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void EpicTransport::Common__DelayedClose_d__35::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::EpicTransport::Common*& EpicTransport::Common__DelayedClose_d__35::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::EpicTransport::Common* const& EpicTransport::Common__DelayedClose_d__35::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void EpicTransport::Common__DelayedClose_d__35::__cordl_internal_set___4__this(::EpicTransport::Common*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Epic::OnlineServices::ProductUserId*& EpicTransport::Common__DelayedClose_d__35::__cordl_internal_get_clientUserID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientUserID;
}
constexpr ::Epic::OnlineServices::ProductUserId* const& EpicTransport::Common__DelayedClose_d__35::__cordl_internal_get_clientUserID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientUserID;
}
constexpr void EpicTransport::Common__DelayedClose_d__35::__cordl_internal_set_clientUserID(::Epic::OnlineServices::ProductUserId*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientUserID = value;
}
constexpr ::Epic::OnlineServices::P2P::SocketId& EpicTransport::Common__DelayedClose_d__35::__cordl_internal_get_socketId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___socketId;
}
constexpr ::Epic::OnlineServices::P2P::SocketId const& EpicTransport::Common__DelayedClose_d__35::__cordl_internal_get_socketId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___socketId;
}
constexpr void EpicTransport::Common__DelayedClose_d__35::__cordl_internal_set_socketId(::Epic::OnlineServices::P2P::SocketId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___socketId = value;
}
inline void EpicTransport::Common__DelayedClose_d__35::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common__DelayedClose_d__35*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void EpicTransport::Common__DelayedClose_d__35::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common__DelayedClose_d__35*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool EpicTransport::Common__DelayedClose_d__35::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common__DelayedClose_d__35*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* EpicTransport::Common__DelayedClose_d__35::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common__DelayedClose_d__35*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void EpicTransport::Common__DelayedClose_d__35::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common__DelayedClose_d__35*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* EpicTransport::Common__DelayedClose_d__35::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common__DelayedClose_d__35*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::EpicTransport::Common__DelayedClose_d__35* EpicTransport::Common__DelayedClose_d__35::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::EpicTransport::Common__DelayedClose_d__35*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  EpicTransport::Common__DelayedClose_d__35::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* EpicTransport::Common__DelayedClose_d__35::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  EpicTransport::Common__DelayedClose_d__35::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* EpicTransport::Common__DelayedClose_d__35::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  EpicTransport::Common__DelayedClose_d__35::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* EpicTransport::Common__DelayedClose_d__35::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::EpicTransport::Common__DelayedClose_d__35::Common__DelayedClose_d__35()   {
}
//  Writing Method size for method: ::EpicTransport::Common__RearmP2PNotifications_d__21.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Common__RearmP2PNotifications_d__21::*)()>(&::EpicTransport::Common__RearmP2PNotifications_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x18158e250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common__RearmP2PNotifications_d__21>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Common__RearmP2PNotifications_d__21.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Common__RearmP2PNotifications_d__21::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::EpicTransport::Common__RearmP2PNotifications_d__21::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common__RearmP2PNotifications_d__21>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void EpicTransport::Common__RearmP2PNotifications_d__21::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common__RearmP2PNotifications_d__21>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void EpicTransport::Common__RearmP2PNotifications_d__21::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common__RearmP2PNotifications_d__21>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  EpicTransport::Common__RearmP2PNotifications_d__21::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* EpicTransport::Common__RearmP2PNotifications_d__21::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::EpicTransport::Common*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_deadline_5__2", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::EpicTransport::Common__RearmP2PNotifications_d__21::Common__RearmP2PNotifications_d__21(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::EpicTransport::Common*  __4__this, float_t  _deadline_5__2, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_deadline_5__2 = _deadline_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::EpicTransport::Common__RearmP2PNotifications_d__21::Common__RearmP2PNotifications_d__21()   {
}
//  Writing Method size for method: ::EpicTransport::Common__WaitAndForceDisconnect_d__24.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Common__WaitAndForceDisconnect_d__24::*)()>(&::EpicTransport::Common__WaitAndForceDisconnect_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x930;
  constexpr static std::size_t addrs = 0x18158eef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common__WaitAndForceDisconnect_d__24>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Common__WaitAndForceDisconnect_d__24.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Common__WaitAndForceDisconnect_d__24::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::EpicTransport::Common__WaitAndForceDisconnect_d__24::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common__WaitAndForceDisconnect_d__24>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void EpicTransport::Common__WaitAndForceDisconnect_d__24::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common__WaitAndForceDisconnect_d__24>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void EpicTransport::Common__WaitAndForceDisconnect_d__24::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common__WaitAndForceDisconnect_d__24>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  EpicTransport::Common__WaitAndForceDisconnect_d__24::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* EpicTransport::Common__WaitAndForceDisconnect_d__24::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "delay", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty: "::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedInfo", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::EpicTransport::Common__WaitAndForceDisconnect_d__24::Common__WaitAndForceDisconnect_d__24(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, float_t  delay, ::System::Threading::CancellationToken  token, ::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedInfo  data, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->delay = delay;
this->token = token;
this->data = data;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::EpicTransport::Common__WaitAndForceDisconnect_d__24::Common__WaitAndForceDisconnect_d__24()   {
}
//  Writing Method size for method: ::EpicTransport::Common.get_internal_ch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::EpicTransport::Common::*)()>(&::EpicTransport::Common::get_internal_ch)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f4180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common*>(),
                        {"get_internal_ch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Common._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Common::*)(::EpicTransport::EosTransport*)>(&::EpicTransport::Common::_ctor)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x181583290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common*>(),
                        {".ctor", {}, {::i2c::type_of<::EpicTransport::EosTransport*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Common.ArmEOSNotifications
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Common::*)()>(&::EpicTransport::Common::ArmEOSNotifications)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x1815814a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common*>(),
                        {"ArmEOSNotifications", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Common.RearmP2PNotifications
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskVoid (::EpicTransport::Common::*)()>(&::EpicTransport::Common::RearmP2PNotifications)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181581f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common*>(),
                        {"RearmP2PNotifications", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Common.OnConnectionEstablish
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Common::*)(::by_ref<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>)>(&::EpicTransport::Common::OnConnectionEstablish)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181581d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common*>(),
                        {"OnConnectionEstablish", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Common.OnInterrupt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Common::*)(::by_ref<::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedInfo>)>(&::EpicTransport::Common::OnInterrupt)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x181581d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common*>(),
                        {"OnInterrupt", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Common.WaitAndForceDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskVoid (::EpicTransport::Common::*)(::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedInfo, float_t, ::System::Threading::CancellationToken)>(&::EpicTransport::Common::WaitAndForceDisconnect)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1815830e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common*>(),
                        {"WaitAndForceDisconnect", {}, {::i2c::type_of<::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedInfo>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Common.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Common::*)()>(&::EpicTransport::Common::Dispose)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1815819c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Common.OnNewConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Common::*)(::by_ref<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfo>)>(&::EpicTransport::Common::OnNewConnection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::EpicTransport::Common*>(),
                    {::i2c::class_of<::EpicTransport::Common*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Common.get_HadEstablishedSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::EpicTransport::Common::*)()>(&::EpicTransport::Common::get_HadEstablishedSession)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::EpicTransport::Common*>(),
                    {::i2c::class_of<::EpicTransport::Common*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Common.OnConnectFail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Common::*)(::by_ref<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfo>)>(&::EpicTransport::Common::OnConnectFail)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x181581a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common*>(),
                        {"OnConnectFail", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Common.SendInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Common::*)(::Epic::OnlineServices::ProductUserId*, ::Epic::OnlineServices::P2P::SocketId, ::EpicTransport::Common_InternalMessages)>(&::EpicTransport::Common::SendInternal)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x181582cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common*>(),
                        {"SendInternal", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>(), ::i2c::type_of<::Epic::OnlineServices::P2P::SocketId>(), ::i2c::type_of<::EpicTransport::Common_InternalMessages>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Common.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Common::*)(::Epic::OnlineServices::ProductUserId*, ::Epic::OnlineServices::P2P::SocketId, ::ArrayW<uint8_t>, uint8_t)>(&::EpicTransport::Common::Send)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x181582ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common*>(),
                        {"Send", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>(), ::i2c::type_of<::Epic::OnlineServices::P2P::SocketId>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Common.Receive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::EpicTransport::Common::*)(::by_ref<::Epic::OnlineServices::ProductUserId*>, ::by_ref<::Epic::OnlineServices::P2P::SocketId>, ::by_ref<::System::ArraySegment_1<uint8_t>>, uint8_t)>(&::EpicTransport::Common::Receive)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x181582af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common*>(),
                        {"Receive", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::ProductUserId*>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::SocketId>>(), ::i2c::type_of<::by_ref<::System::ArraySegment_1<uint8_t>>>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Common.CloseP2PSessionWithUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Common::*)(::Epic::OnlineServices::ProductUserId*, ::Epic::OnlineServices::P2P::SocketId)>(&::EpicTransport::Common::CloseP2PSessionWithUser)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1815817b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::EpicTransport::Common*>(),
                    {::i2c::class_of<::EpicTransport::Common*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Common.WaitForClose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Common::*)(::Epic::OnlineServices::ProductUserId*, ::Epic::OnlineServices::P2P::SocketId)>(&::EpicTransport::Common::WaitForClose)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1815831b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common*>(),
                        {"WaitForClose", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>(), ::i2c::type_of<::Epic::OnlineServices::P2P::SocketId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Common.DelayedClose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::EpicTransport::Common::*)(::Epic::OnlineServices::ProductUserId*, ::Epic::OnlineServices::P2P::SocketId)>(&::EpicTransport::Common::DelayedClose)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181581930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common*>(),
                        {"DelayedClose", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>(), ::i2c::type_of<::Epic::OnlineServices::P2P::SocketId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Common.ReceiveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Common::*)()>(&::EpicTransport::Common::ReceiveData)> {
  constexpr static std::size_t size = 0xb10;
  constexpr static std::size_t addrs = 0x181581fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common*>(),
                        {"ReceiveData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Common.OnReceiveInternalData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Common::*)(::EpicTransport::Common_InternalMessages, ::Epic::OnlineServices::ProductUserId*, ::Epic::OnlineServices::P2P::SocketId)>(&::EpicTransport::Common::OnReceiveInternalData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::EpicTransport::Common*>(),
                    {::i2c::class_of<::EpicTransport::Common*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Common.OnReceiveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Common::*)(::ArrayW<uint8_t>, ::Epic::OnlineServices::ProductUserId*, int32_t)>(&::EpicTransport::Common::OnReceiveData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::EpicTransport::Common*>(),
                    {::i2c::class_of<::EpicTransport::Common*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Common.OnConnectionFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Common::*)(::Epic::OnlineServices::ProductUserId*)>(&::EpicTransport::Common::OnConnectionFailed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::EpicTransport::Common*>(),
                    {::i2c::class_of<::EpicTransport::Common*>(), 9}
                ));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Epic::OnlineServices::P2P::PacketReliability>& EpicTransport::Common::__cordl_internal_get_channels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channels;
}
constexpr ::ArrayW<::Epic::OnlineServices::P2P::PacketReliability> const& EpicTransport::Common::__cordl_internal_get_channels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channels;
}
constexpr void EpicTransport::Common::__cordl_internal_set_channels(::ArrayW<::Epic::OnlineServices::P2P::PacketReliability>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channels = value;
}
constexpr ::ArrayW<uint8_t>& EpicTransport::Common::__cordl_internal_get_internalReceiveBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___internalReceiveBuffer;
}
constexpr ::ArrayW<uint8_t> const& EpicTransport::Common::__cordl_internal_get_internalReceiveBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___internalReceiveBuffer;
}
constexpr void EpicTransport::Common::__cordl_internal_set_internalReceiveBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___internalReceiveBuffer = value;
}
constexpr ::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallback*& EpicTransport::Common::__cordl_internal_get_OnIncomingConnectionRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnIncomingConnectionRequest;
}
constexpr ::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallback* const& EpicTransport::Common::__cordl_internal_get_OnIncomingConnectionRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnIncomingConnectionRequest;
}
constexpr void EpicTransport::Common::__cordl_internal_set_OnIncomingConnectionRequest(::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnIncomingConnectionRequest = value;
}
constexpr uint64_t& EpicTransport::Common::__cordl_internal_get_incomingNotificationId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incomingNotificationId;
}
constexpr uint64_t const& EpicTransport::Common::__cordl_internal_get_incomingNotificationId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incomingNotificationId;
}
constexpr void EpicTransport::Common::__cordl_internal_set_incomingNotificationId(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___incomingNotificationId = value;
}
constexpr ::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback*& EpicTransport::Common::__cordl_internal_get_OnRemoteConnectionClosed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRemoteConnectionClosed;
}
constexpr ::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback* const& EpicTransport::Common::__cordl_internal_get_OnRemoteConnectionClosed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRemoteConnectionClosed;
}
constexpr void EpicTransport::Common::__cordl_internal_set_OnRemoteConnectionClosed(::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnRemoteConnectionClosed = value;
}
constexpr uint64_t& EpicTransport::Common::__cordl_internal_get_outgoingNotificationId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outgoingNotificationId;
}
constexpr uint64_t const& EpicTransport::Common::__cordl_internal_get_outgoingNotificationId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outgoingNotificationId;
}
constexpr void EpicTransport::Common::__cordl_internal_set_outgoingNotificationId(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outgoingNotificationId = value;
}
constexpr ::System::Threading::CancellationTokenSource*& EpicTransport::Common::__cordl_internal_get_cancellationTokenSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& EpicTransport::Common::__cordl_internal_get_cancellationTokenSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenSource;
}
constexpr void EpicTransport::Common::__cordl_internal_set_cancellationTokenSource(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationTokenSource = value;
}
constexpr uint64_t& EpicTransport::Common::__cordl_internal_get_peerConnectionInterruptNotificationId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peerConnectionInterruptNotificationId;
}
constexpr uint64_t const& EpicTransport::Common::__cordl_internal_get_peerConnectionInterruptNotificationId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peerConnectionInterruptNotificationId;
}
constexpr void EpicTransport::Common::__cordl_internal_set_peerConnectionInterruptNotificationId(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peerConnectionInterruptNotificationId = value;
}
constexpr uint64_t& EpicTransport::Common::__cordl_internal_get_peerConnectionEstablishNotificationId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peerConnectionEstablishNotificationId;
}
constexpr uint64_t const& EpicTransport::Common::__cordl_internal_get_peerConnectionEstablishNotificationId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peerConnectionEstablishNotificationId;
}
constexpr void EpicTransport::Common::__cordl_internal_set_peerConnectionEstablishNotificationId(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peerConnectionEstablishNotificationId = value;
}
constexpr ::UnityW<::EpicTransport::EosTransport>& EpicTransport::Common::__cordl_internal_get_transport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transport;
}
constexpr ::UnityW<::EpicTransport::EosTransport> const& EpicTransport::Common::__cordl_internal_get_transport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transport;
}
constexpr void EpicTransport::Common::__cordl_internal_set_transport(::UnityW<::EpicTransport::EosTransport>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transport = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& EpicTransport::Common::__cordl_internal_get_deadSockets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deadSockets;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& EpicTransport::Common::__cordl_internal_get_deadSockets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deadSockets;
}
constexpr void EpicTransport::Common::__cordl_internal_set_deadSockets(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deadSockets = value;
}
constexpr bool& EpicTransport::Common::__cordl_internal_get_ignoreAllMessages()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreAllMessages;
}
constexpr bool const& EpicTransport::Common::__cordl_internal_get_ignoreAllMessages() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreAllMessages;
}
constexpr void EpicTransport::Common::__cordl_internal_set_ignoreAllMessages(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignoreAllMessages = value;
}
constexpr ::Epic::OnlineServices::P2P::P2PInterface*& EpicTransport::Common::__cordl_internal_get_p2pInterface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___p2pInterface;
}
constexpr ::Epic::OnlineServices::P2P::P2PInterface* const& EpicTransport::Common::__cordl_internal_get_p2pInterface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___p2pInterface;
}
constexpr void EpicTransport::Common::__cordl_internal_set_p2pInterface(::Epic::OnlineServices::P2P::P2PInterface*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___p2pInterface = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::EpicTransport::Common_PacketKey,::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::EpicTransport::Packet>*>*>*& EpicTransport::Common::__cordl_internal_get_incomingPackets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incomingPackets;
}
constexpr ::System::Collections::Generic::Dictionary_2<::EpicTransport::Common_PacketKey,::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::EpicTransport::Packet>*>*>* const& EpicTransport::Common::__cordl_internal_get_incomingPackets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incomingPackets;
}
constexpr void EpicTransport::Common::__cordl_internal_set_incomingPackets(::System::Collections::Generic::Dictionary_2<::EpicTransport::Common_PacketKey,::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::EpicTransport::Packet>*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___incomingPackets = value;
}
inline void EpicTransport::Common::setStaticF_RECONNECT_TIMER(float_t  value)  {
::cordl_internals::setStaticField<float_t, "RECONNECT_TIMER", ::EpicTransport::Common*>(std::forward<float_t>(value));
}
inline float_t EpicTransport::Common::getStaticF_RECONNECT_TIMER()  {
return ::cordl_internals::getStaticField<float_t, "RECONNECT_TIMER", ::EpicTransport::Common*>();
}
inline int32_t EpicTransport::Common::get_internal_ch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common*>(),
                        {"get_internal_ch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void EpicTransport::Common::_ctor(::EpicTransport::EosTransport*  transport)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common*>(),
                        {".ctor", {}, {::i2c::type_of<::EpicTransport::EosTransport*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transport);
}
inline void EpicTransport::Common::ArmEOSNotifications()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common*>(),
                        {"ArmEOSNotifications", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTaskVoid EpicTransport::Common::RearmP2PNotifications()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common*>(),
                        {"RearmP2PNotifications", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(this, ___internal_method);
}
inline void EpicTransport::Common::OnConnectionEstablish(::by_ref<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common*>(),
                        {"OnConnectionEstablish", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void EpicTransport::Common::OnInterrupt(::by_ref<::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedInfo>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common*>(),
                        {"OnInterrupt", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::Cysharp::Threading::Tasks::UniTaskVoid EpicTransport::Common::WaitAndForceDisconnect(::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedInfo  data, float_t  delay, ::System::Threading::CancellationToken  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common*>(),
                        {"WaitAndForceDisconnect", {}, {::i2c::type_of<::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedInfo>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(this, ___internal_method, data, delay, token);
}
inline void EpicTransport::Common::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void EpicTransport::Common::OnNewConnection(::by_ref<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfo>  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::EpicTransport::Common*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline bool EpicTransport::Common::get_HadEstablishedSession()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::EpicTransport::Common*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void EpicTransport::Common::OnConnectFail(::by_ref<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfo>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common*>(),
                        {"OnConnectFail", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void EpicTransport::Common::SendInternal(::Epic::OnlineServices::ProductUserId*  target, ::Epic::OnlineServices::P2P::SocketId  socketId, ::EpicTransport::Common_InternalMessages  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common*>(),
                        {"SendInternal", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>(), ::i2c::type_of<::Epic::OnlineServices::P2P::SocketId>(), ::i2c::type_of<::EpicTransport::Common_InternalMessages>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, socketId, type);
}
inline void EpicTransport::Common::Send(::Epic::OnlineServices::ProductUserId*  host, ::Epic::OnlineServices::P2P::SocketId  socketId, ::ArrayW<uint8_t>  msgBuffer, uint8_t  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common*>(),
                        {"Send", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>(), ::i2c::type_of<::Epic::OnlineServices::P2P::SocketId>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, host, socketId, msgBuffer, channel);
}
inline bool EpicTransport::Common::Receive(::by_ref<::Epic::OnlineServices::ProductUserId*>  clientProductUserId, ::by_ref<::Epic::OnlineServices::P2P::SocketId>  socketId, ::by_ref<::System::ArraySegment_1<uint8_t>>  receiveBuffer, uint8_t  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common*>(),
                        {"Receive", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::ProductUserId*>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::SocketId>>(), ::i2c::type_of<::by_ref<::System::ArraySegment_1<uint8_t>>>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clientProductUserId, socketId, receiveBuffer, channel);
}
inline void EpicTransport::Common::CloseP2PSessionWithUser(::Epic::OnlineServices::ProductUserId*  clientUserID, ::Epic::OnlineServices::P2P::SocketId  socketId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::EpicTransport::Common*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clientUserID, socketId);
}
inline void EpicTransport::Common::WaitForClose(::Epic::OnlineServices::ProductUserId*  clientUserID, ::Epic::OnlineServices::P2P::SocketId  socketId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common*>(),
                        {"WaitForClose", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>(), ::i2c::type_of<::Epic::OnlineServices::P2P::SocketId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clientUserID, socketId);
}
inline ::System::Collections::IEnumerator* EpicTransport::Common::DelayedClose(::Epic::OnlineServices::ProductUserId*  clientUserID, ::Epic::OnlineServices::P2P::SocketId  socketId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common*>(),
                        {"DelayedClose", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>(), ::i2c::type_of<::Epic::OnlineServices::P2P::SocketId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, clientUserID, socketId);
}
inline void EpicTransport::Common::ReceiveData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Common*>(),
                        {"ReceiveData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void EpicTransport::Common::OnReceiveInternalData(::EpicTransport::Common_InternalMessages  type, ::Epic::OnlineServices::ProductUserId*  clientUserID, ::Epic::OnlineServices::P2P::SocketId  socketId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::EpicTransport::Common*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, clientUserID, socketId);
}
inline void EpicTransport::Common::OnReceiveData(::ArrayW<uint8_t>  data, ::Epic::OnlineServices::ProductUserId*  clientUserID, int32_t  channel)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::EpicTransport::Common*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, clientUserID, channel);
}
inline void EpicTransport::Common::OnConnectionFailed(::Epic::OnlineServices::ProductUserId*  remoteId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::EpicTransport::Common*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, remoteId);
}
inline ::EpicTransport::Common* EpicTransport::Common::New_ctor(::EpicTransport::EosTransport*  transport)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::EpicTransport::Common*>(transport));
}
// Ctor Parameters []
constexpr ::EpicTransport::Common::Common()   {
}

#pragma once
// IWYU pragma private; include "Mirror/Authenticators/BasicAuthenticator.hpp"
#include "Mirror/zzzz__NetworkAuthenticator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/Authenticators/zzzz__BasicAuthenticator_def.hpp"
#include "Mirror/Authenticators/zzzz__BasicAuthenticator_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkConnection_def.hpp"
#include "Mirror/zzzz__NetworkMessage_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr  Mirror::Authenticators::BasicAuthenticator_AuthRequestMessage::operator ::Mirror::NetworkMessage*()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* Mirror::Authenticators::BasicAuthenticator_AuthRequestMessage::i___Mirror__NetworkMessage()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "authUsername", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "authPassword", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::Authenticators::BasicAuthenticator_AuthRequestMessage::BasicAuthenticator_AuthRequestMessage(::StringW  authUsername, ::StringW  authPassword) noexcept  {
this->authUsername = authUsername;
this->authPassword = authPassword;
}
// Ctor Parameters []
constexpr ::Mirror::Authenticators::BasicAuthenticator_AuthRequestMessage::BasicAuthenticator_AuthRequestMessage()   {
}
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr  Mirror::Authenticators::BasicAuthenticator_AuthResponseMessage::operator ::Mirror::NetworkMessage*()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* Mirror::Authenticators::BasicAuthenticator_AuthResponseMessage::i___Mirror__NetworkMessage()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "code", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::Authenticators::BasicAuthenticator_AuthResponseMessage::BasicAuthenticator_AuthResponseMessage(uint8_t  code, ::StringW  message) noexcept  {
this->code = code;
this->message = message;
}
// Ctor Parameters []
constexpr ::Mirror::Authenticators::BasicAuthenticator_AuthResponseMessage::BasicAuthenticator_AuthResponseMessage()   {
}
//  Writing Method size for method: ::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::*)(int32_t)>(&::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::*)()>(&::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::*)()>(&::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181517960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::*)()>(&::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::*)()>(&::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::*)()>(&::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr float_t& Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::__cordl_internal_get_waitTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitTime;
}
constexpr float_t const& Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::__cordl_internal_get_waitTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitTime;
}
constexpr void Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::__cordl_internal_set_waitTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitTime = value;
}
constexpr ::UnityW<::Mirror::Authenticators::BasicAuthenticator>& Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Mirror::Authenticators::BasicAuthenticator> const& Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::__cordl_internal_set___4__this(::UnityW<::Mirror::Authenticators::BasicAuthenticator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Mirror::NetworkConnectionToClient*& Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::__cordl_internal_get_conn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conn;
}
constexpr ::Mirror::NetworkConnectionToClient* const& Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::__cordl_internal_get_conn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conn;
}
constexpr void Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::__cordl_internal_set_conn(::Mirror::NetworkConnectionToClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___conn = value;
}
inline void Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11* Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11::BasicAuthenticator__DelayedDisconnect_d__11()   {
}
//  Writing Method size for method: ::Mirror::Authenticators::BasicAuthenticator.OnStartServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::BasicAuthenticator::*)()>(&::Mirror::Authenticators::BasicAuthenticator::OnStartServer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181514010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator*>(),
                    {::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::BasicAuthenticator.OnStopServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::BasicAuthenticator::*)()>(&::Mirror::Authenticators::BasicAuthenticator::OnStopServer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181514070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator*>(),
                    {::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::BasicAuthenticator.OnServerAuthenticate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::BasicAuthenticator::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::Authenticators::BasicAuthenticator::OnServerAuthenticate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator*>(),
                    {::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::BasicAuthenticator.OnAuthRequestMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::BasicAuthenticator::*)(::Mirror::NetworkConnectionToClient*, ::Mirror::Authenticators::BasicAuthenticator_AuthRequestMessage)>(&::Mirror::Authenticators::BasicAuthenticator::OnAuthRequestMessage)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181513d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator*>(),
                        {"OnAuthRequestMessage", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::Authenticators::BasicAuthenticator_AuthRequestMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::BasicAuthenticator.DelayedDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Mirror::Authenticators::BasicAuthenticator::*)(::Mirror::NetworkConnectionToClient*, float_t)>(&::Mirror::Authenticators::BasicAuthenticator::DelayedDisconnect)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181513cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator*>(),
                        {"DelayedDisconnect", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::BasicAuthenticator.OnStartClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::BasicAuthenticator::*)()>(&::Mirror::Authenticators::BasicAuthenticator::OnStartClient)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181513fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator*>(),
                    {::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::BasicAuthenticator.OnStopClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::BasicAuthenticator::*)()>(&::Mirror::Authenticators::BasicAuthenticator::OnStopClient)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181514060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator*>(),
                    {::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::BasicAuthenticator.OnClientAuthenticate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::BasicAuthenticator::*)()>(&::Mirror::Authenticators::BasicAuthenticator::OnClientAuthenticate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181513f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator*>(),
                    {::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::BasicAuthenticator.OnAuthResponseMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::BasicAuthenticator::*)(::Mirror::Authenticators::BasicAuthenticator_AuthResponseMessage)>(&::Mirror::Authenticators::BasicAuthenticator::OnAuthResponseMessage)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181513f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator*>(),
                        {"OnAuthResponseMessage", {}, {::i2c::type_of<::Mirror::Authenticators::BasicAuthenticator_AuthResponseMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::BasicAuthenticator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::BasicAuthenticator::*)()>(&::Mirror::Authenticators::BasicAuthenticator::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181514080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Mirror::Authenticators::BasicAuthenticator::__cordl_internal_get_serverUsername()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverUsername;
}
constexpr ::StringW const& Mirror::Authenticators::BasicAuthenticator::__cordl_internal_get_serverUsername() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverUsername;
}
constexpr void Mirror::Authenticators::BasicAuthenticator::__cordl_internal_set_serverUsername(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverUsername = value;
}
constexpr ::StringW& Mirror::Authenticators::BasicAuthenticator::__cordl_internal_get_serverPassword()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverPassword;
}
constexpr ::StringW const& Mirror::Authenticators::BasicAuthenticator::__cordl_internal_get_serverPassword() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverPassword;
}
constexpr void Mirror::Authenticators::BasicAuthenticator::__cordl_internal_set_serverPassword(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverPassword = value;
}
constexpr ::StringW& Mirror::Authenticators::BasicAuthenticator::__cordl_internal_get_username()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___username;
}
constexpr ::StringW const& Mirror::Authenticators::BasicAuthenticator::__cordl_internal_get_username() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___username;
}
constexpr void Mirror::Authenticators::BasicAuthenticator::__cordl_internal_set_username(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___username = value;
}
constexpr ::StringW& Mirror::Authenticators::BasicAuthenticator::__cordl_internal_get_password()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___password;
}
constexpr ::StringW const& Mirror::Authenticators::BasicAuthenticator::__cordl_internal_get_password() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___password;
}
constexpr void Mirror::Authenticators::BasicAuthenticator::__cordl_internal_set_password(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___password = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnection*>*& Mirror::Authenticators::BasicAuthenticator::__cordl_internal_get_connectionsPendingDisconnect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionsPendingDisconnect;
}
constexpr ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnection*>* const& Mirror::Authenticators::BasicAuthenticator::__cordl_internal_get_connectionsPendingDisconnect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionsPendingDisconnect;
}
constexpr void Mirror::Authenticators::BasicAuthenticator::__cordl_internal_set_connectionsPendingDisconnect(::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnection*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectionsPendingDisconnect = value;
}
inline void Mirror::Authenticators::BasicAuthenticator::OnStartServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Authenticators::BasicAuthenticator::OnStopServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Authenticators::BasicAuthenticator::OnServerAuthenticate(::Mirror::NetworkConnectionToClient*  conn)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline void Mirror::Authenticators::BasicAuthenticator::OnAuthRequestMessage(::Mirror::NetworkConnectionToClient*  conn, ::Mirror::Authenticators::BasicAuthenticator_AuthRequestMessage  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator*>(),
                        {"OnAuthRequestMessage", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::Authenticators::BasicAuthenticator_AuthRequestMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn, msg);
}
inline ::System::Collections::IEnumerator* Mirror::Authenticators::BasicAuthenticator::DelayedDisconnect(::Mirror::NetworkConnectionToClient*  conn, float_t  waitTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator*>(),
                        {"DelayedDisconnect", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, conn, waitTime);
}
inline void Mirror::Authenticators::BasicAuthenticator::OnStartClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Authenticators::BasicAuthenticator::OnStopClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Authenticators::BasicAuthenticator::OnClientAuthenticate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Authenticators::BasicAuthenticator::OnAuthResponseMessage(::Mirror::Authenticators::BasicAuthenticator_AuthResponseMessage  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator*>(),
                        {"OnAuthResponseMessage", {}, {::i2c::type_of<::Mirror::Authenticators::BasicAuthenticator_AuthResponseMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void Mirror::Authenticators::BasicAuthenticator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::BasicAuthenticator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Authenticators::BasicAuthenticator* Mirror::Authenticators::BasicAuthenticator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Authenticators::BasicAuthenticator*>());
}
// Ctor Parameters []
constexpr ::Mirror::Authenticators::BasicAuthenticator::BasicAuthenticator()   {
}

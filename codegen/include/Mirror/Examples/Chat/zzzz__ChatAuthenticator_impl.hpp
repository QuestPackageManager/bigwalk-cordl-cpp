#pragma once
// IWYU pragma private; include "Mirror/Examples/Chat/ChatAuthenticator.hpp"
#include "Mirror/zzzz__NetworkAuthenticator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/Examples/Chat/zzzz__ChatAuthenticator_def.hpp"
#include "Mirror/Examples/Chat/zzzz__ChatAuthenticator_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkConnection_def.hpp"
#include "Mirror/zzzz__NetworkMessage_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr  Mirror::Examples::Chat::ChatAuthenticator_AuthRequestMessage::operator ::Mirror::NetworkMessage*()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* Mirror::Examples::Chat::ChatAuthenticator_AuthRequestMessage::i___Mirror__NetworkMessage()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "authUsername", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::Examples::Chat::ChatAuthenticator_AuthRequestMessage::ChatAuthenticator_AuthRequestMessage(::StringW  authUsername) noexcept  {
this->authUsername = authUsername;
}
// Ctor Parameters []
constexpr ::Mirror::Examples::Chat::ChatAuthenticator_AuthRequestMessage::ChatAuthenticator_AuthRequestMessage()   {
}
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr  Mirror::Examples::Chat::ChatAuthenticator_AuthResponseMessage::operator ::Mirror::NetworkMessage*()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* Mirror::Examples::Chat::ChatAuthenticator_AuthResponseMessage::i___Mirror__NetworkMessage()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "code", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::Examples::Chat::ChatAuthenticator_AuthResponseMessage::ChatAuthenticator_AuthResponseMessage(uint8_t  code, ::StringW  message) noexcept  {
this->code = code;
this->message = message;
}
// Ctor Parameters []
constexpr ::Mirror::Examples::Chat::ChatAuthenticator_AuthResponseMessage::ChatAuthenticator_AuthResponseMessage()   {
}
//  Writing Method size for method: ::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::*)(int32_t)>(&::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::*)()>(&::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::*)()>(&::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181565380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::*)()>(&::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::*)()>(&::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::*)()>(&::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr float_t& Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::__cordl_internal_get_waitTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitTime;
}
constexpr float_t const& Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::__cordl_internal_get_waitTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitTime;
}
constexpr void Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::__cordl_internal_set_waitTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitTime = value;
}
constexpr ::UnityW<::Mirror::Examples::Chat::ChatAuthenticator>& Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Mirror::Examples::Chat::ChatAuthenticator> const& Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::__cordl_internal_set___4__this(::UnityW<::Mirror::Examples::Chat::ChatAuthenticator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Mirror::NetworkConnectionToClient*& Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::__cordl_internal_get_conn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conn;
}
constexpr ::Mirror::NetworkConnectionToClient* const& Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::__cordl_internal_get_conn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conn;
}
constexpr void Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::__cordl_internal_set_conn(::Mirror::NetworkConnectionToClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___conn = value;
}
inline void Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10* Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10::ChatAuthenticator__DelayedDisconnect_d__10()   {
}
//  Writing Method size for method: ::Mirror::Examples::Chat::ChatAuthenticator.ResetStatics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::Examples::Chat::ChatAuthenticator::ResetStatics)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181558180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator*>(),
                        {"ResetStatics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Chat::ChatAuthenticator.OnStartServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Chat::ChatAuthenticator::*)()>(&::Mirror::Examples::Chat::ChatAuthenticator::OnStartServer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181558110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator*>(),
                    {::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Chat::ChatAuthenticator.OnStopServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Chat::ChatAuthenticator::*)()>(&::Mirror::Examples::Chat::ChatAuthenticator::OnStopServer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181558170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator*>(),
                    {::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Chat::ChatAuthenticator.OnServerAuthenticate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Chat::ChatAuthenticator::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::Examples::Chat::ChatAuthenticator::OnServerAuthenticate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator*>(),
                    {::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Chat::ChatAuthenticator.OnAuthRequestMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Chat::ChatAuthenticator::*)(::Mirror::NetworkConnectionToClient*, ::Mirror::Examples::Chat::ChatAuthenticator_AuthRequestMessage)>(&::Mirror::Examples::Chat::ChatAuthenticator::OnAuthRequestMessage)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x181557d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator*>(),
                        {"OnAuthRequestMessage", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::Examples::Chat::ChatAuthenticator_AuthRequestMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Chat::ChatAuthenticator.DelayedDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Mirror::Examples::Chat::ChatAuthenticator::*)(::Mirror::NetworkConnectionToClient*, float_t)>(&::Mirror::Examples::Chat::ChatAuthenticator::DelayedDisconnect)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181557cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator*>(),
                        {"DelayedDisconnect", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Chat::ChatAuthenticator.SetPlayername
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Chat::ChatAuthenticator::*)(::StringW)>(&::Mirror::Examples::Chat::ChatAuthenticator::SetPlayername)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1815581d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator*>(),
                        {"SetPlayername", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Chat::ChatAuthenticator.OnStartClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Chat::ChatAuthenticator::*)()>(&::Mirror::Examples::Chat::ChatAuthenticator::OnStartClient)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1815580c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator*>(),
                    {::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Chat::ChatAuthenticator.OnStopClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Chat::ChatAuthenticator::*)()>(&::Mirror::Examples::Chat::ChatAuthenticator::OnStopClient)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181558160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator*>(),
                    {::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Chat::ChatAuthenticator.OnClientAuthenticate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Chat::ChatAuthenticator::*)()>(&::Mirror::Examples::Chat::ChatAuthenticator::OnClientAuthenticate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181558090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator*>(),
                    {::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Chat::ChatAuthenticator.OnAuthResponseMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Chat::ChatAuthenticator::*)(::Mirror::Examples::Chat::ChatAuthenticator_AuthResponseMessage)>(&::Mirror::Examples::Chat::ChatAuthenticator::OnAuthResponseMessage)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181557f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator*>(),
                        {"OnAuthResponseMessage", {}, {::i2c::type_of<::Mirror::Examples::Chat::ChatAuthenticator_AuthResponseMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Chat::ChatAuthenticator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Chat::ChatAuthenticator::*)()>(&::Mirror::Examples::Chat::ChatAuthenticator::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1815582d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnection*>*& Mirror::Examples::Chat::ChatAuthenticator::__cordl_internal_get_connectionsPendingDisconnect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionsPendingDisconnect;
}
constexpr ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnection*>* const& Mirror::Examples::Chat::ChatAuthenticator::__cordl_internal_get_connectionsPendingDisconnect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionsPendingDisconnect;
}
constexpr void Mirror::Examples::Chat::ChatAuthenticator::__cordl_internal_set_connectionsPendingDisconnect(::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnection*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectionsPendingDisconnect = value;
}
constexpr ::StringW& Mirror::Examples::Chat::ChatAuthenticator::__cordl_internal_get_playerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerName;
}
constexpr ::StringW const& Mirror::Examples::Chat::ChatAuthenticator::__cordl_internal_get_playerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerName;
}
constexpr void Mirror::Examples::Chat::ChatAuthenticator::__cordl_internal_set_playerName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerName = value;
}
inline void Mirror::Examples::Chat::ChatAuthenticator::setStaticF_playerNames(::System::Collections::Generic::HashSet_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "playerNames", ::Mirror::Examples::Chat::ChatAuthenticator*>(std::forward<::System::Collections::Generic::HashSet_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* Mirror::Examples::Chat::ChatAuthenticator::getStaticF_playerNames()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "playerNames", ::Mirror::Examples::Chat::ChatAuthenticator*>();
}
inline void Mirror::Examples::Chat::ChatAuthenticator::ResetStatics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator*>(),
                        {"ResetStatics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::Examples::Chat::ChatAuthenticator::OnStartServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Chat::ChatAuthenticator::OnStopServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Chat::ChatAuthenticator::OnServerAuthenticate(::Mirror::NetworkConnectionToClient*  conn)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline void Mirror::Examples::Chat::ChatAuthenticator::OnAuthRequestMessage(::Mirror::NetworkConnectionToClient*  conn, ::Mirror::Examples::Chat::ChatAuthenticator_AuthRequestMessage  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator*>(),
                        {"OnAuthRequestMessage", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::Examples::Chat::ChatAuthenticator_AuthRequestMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn, msg);
}
inline ::System::Collections::IEnumerator* Mirror::Examples::Chat::ChatAuthenticator::DelayedDisconnect(::Mirror::NetworkConnectionToClient*  conn, float_t  waitTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator*>(),
                        {"DelayedDisconnect", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, conn, waitTime);
}
inline void Mirror::Examples::Chat::ChatAuthenticator::SetPlayername(::StringW  username)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator*>(),
                        {"SetPlayername", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, username);
}
inline void Mirror::Examples::Chat::ChatAuthenticator::OnStartClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Chat::ChatAuthenticator::OnStopClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Chat::ChatAuthenticator::OnClientAuthenticate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Chat::ChatAuthenticator::OnAuthResponseMessage(::Mirror::Examples::Chat::ChatAuthenticator_AuthResponseMessage  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator*>(),
                        {"OnAuthResponseMessage", {}, {::i2c::type_of<::Mirror::Examples::Chat::ChatAuthenticator_AuthResponseMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void Mirror::Examples::Chat::ChatAuthenticator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::ChatAuthenticator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Examples::Chat::ChatAuthenticator* Mirror::Examples::Chat::ChatAuthenticator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::Chat::ChatAuthenticator*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::Chat::ChatAuthenticator::ChatAuthenticator()   {
}

#pragma once
// IWYU pragma private; include "Mirror/Authenticators/HouseAuthenticator.hpp"
#include "GlobalNamespace/zzzz__PlayerCount_impl.hpp"
#include "Mirror/zzzz__NetworkAuthenticator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/Authenticators/zzzz__HouseAuthenticator_def.hpp"
#include "Mirror/Authenticators/zzzz__HouseAuthenticator_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkConnection_def.hpp"
#include "Mirror/zzzz__NetworkMessage_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr  Mirror::Authenticators::HouseAuthenticator_InitialialAuthRequestMessage::operator ::Mirror::NetworkMessage*()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* Mirror::Authenticators::HouseAuthenticator_InitialialAuthRequestMessage::i___Mirror__NetworkMessage()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "playerIdentifier", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "versionNumber", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::Authenticators::HouseAuthenticator_InitialialAuthRequestMessage::HouseAuthenticator_InitialialAuthRequestMessage(::StringW  playerIdentifier, ::StringW  versionNumber) noexcept  {
this->playerIdentifier = playerIdentifier;
this->versionNumber = versionNumber;
}
// Ctor Parameters []
constexpr ::Mirror::Authenticators::HouseAuthenticator_InitialialAuthRequestMessage::HouseAuthenticator_InitialialAuthRequestMessage()   {
}
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr  Mirror::Authenticators::HouseAuthenticator_PasswordResponseMessage::operator ::Mirror::NetworkMessage*()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* Mirror::Authenticators::HouseAuthenticator_PasswordResponseMessage::i___Mirror__NetworkMessage()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "authPassword", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::Authenticators::HouseAuthenticator_PasswordResponseMessage::HouseAuthenticator_PasswordResponseMessage(::StringW  authPassword) noexcept  {
this->authPassword = authPassword;
}
// Ctor Parameters []
constexpr ::Mirror::Authenticators::HouseAuthenticator_PasswordResponseMessage::HouseAuthenticator_PasswordResponseMessage()   {
}
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr  Mirror::Authenticators::HouseAuthenticator_AuthResponseMessage::operator ::Mirror::NetworkMessage*()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* Mirror::Authenticators::HouseAuthenticator_AuthResponseMessage::i___Mirror__NetworkMessage()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "code", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::Authenticators::HouseAuthenticator_AuthResponseMessage::HouseAuthenticator_AuthResponseMessage(uint8_t  code, ::StringW  message) noexcept  {
this->code = code;
this->message = message;
}
// Ctor Parameters []
constexpr ::Mirror::Authenticators::HouseAuthenticator_AuthResponseMessage::HouseAuthenticator_AuthResponseMessage()   {
}
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr  Mirror::Authenticators::HouseAuthenticator_WelcomeMessage::operator ::Mirror::NetworkMessage*()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* Mirror::Authenticators::HouseAuthenticator_WelcomeMessage::i___Mirror__NetworkMessage()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "playerCount", ty: "::GlobalNamespace::PlayerCount", modifiers: "", def_value: Some("{}") }, CppParam { name: "skipAidsActive", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::Authenticators::HouseAuthenticator_WelcomeMessage::HouseAuthenticator_WelcomeMessage(::GlobalNamespace::PlayerCount  playerCount, bool  skipAidsActive) noexcept  {
this->playerCount = playerCount;
this->skipAidsActive = skipAidsActive;
}
// Ctor Parameters []
constexpr ::Mirror::Authenticators::HouseAuthenticator_WelcomeMessage::HouseAuthenticator_WelcomeMessage()   {
}
//  Writing Method size for method: ::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::*)(int32_t)>(&::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::*)()>(&::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::*)()>(&::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::MoveNext)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803d1530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::*)()>(&::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::*)()>(&::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::*)()>(&::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr float_t& Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::__cordl_internal_get_waitTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitTime;
}
constexpr float_t const& Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::__cordl_internal_get_waitTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitTime;
}
constexpr void Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::__cordl_internal_set_waitTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitTime = value;
}
constexpr ::UnityW<::Mirror::Authenticators::HouseAuthenticator>& Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Mirror::Authenticators::HouseAuthenticator> const& Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::__cordl_internal_set___4__this(::UnityW<::Mirror::Authenticators::HouseAuthenticator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Mirror::NetworkConnectionToClient*& Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::__cordl_internal_get_conn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conn;
}
constexpr ::Mirror::NetworkConnectionToClient* const& Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::__cordl_internal_get_conn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conn;
}
constexpr void Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::__cordl_internal_set_conn(::Mirror::NetworkConnectionToClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___conn = value;
}
inline void Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14* Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14::HouseAuthenticator__DelayedDisconnect_d__14()   {
}
//  Writing Method size for method: ::Mirror::Authenticators::HouseAuthenticator.OnStartServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::HouseAuthenticator::*)()>(&::Mirror::Authenticators::HouseAuthenticator::OnStartServer)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803c7b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(),
                    {::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::HouseAuthenticator.OnStopServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::HouseAuthenticator::*)()>(&::Mirror::Authenticators::HouseAuthenticator::OnStopServer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803c7c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(),
                    {::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::HouseAuthenticator.OnServerAuthenticate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::HouseAuthenticator::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::Authenticators::HouseAuthenticator::OnServerAuthenticate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(),
                    {::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::HouseAuthenticator.GetWelcomeMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::Authenticators::HouseAuthenticator_WelcomeMessage (::Mirror::Authenticators::HouseAuthenticator::*)()>(&::Mirror::Authenticators::HouseAuthenticator::GetWelcomeMessage)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1803c7150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(),
                        {"GetWelcomeMessage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::HouseAuthenticator.VersionsAreCompatible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW)>(&::Mirror::Authenticators::HouseAuthenticator::VersionsAreCompatible)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803c7d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(),
                        {"VersionsAreCompatible", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::HouseAuthenticator.OnInitialAuthRequestMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::HouseAuthenticator::*)(::Mirror::NetworkConnectionToClient*, ::Mirror::Authenticators::HouseAuthenticator_InitialialAuthRequestMessage)>(&::Mirror::Authenticators::HouseAuthenticator::OnInitialAuthRequestMessage)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x1803c7600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(),
                        {"OnInitialAuthRequestMessage", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::Authenticators::HouseAuthenticator_InitialialAuthRequestMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::HouseAuthenticator.OnPasswordResponseMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::HouseAuthenticator::*)(::Mirror::NetworkConnectionToClient*, ::Mirror::Authenticators::HouseAuthenticator_PasswordResponseMessage)>(&::Mirror::Authenticators::HouseAuthenticator::OnPasswordResponseMessage)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1803c7970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(),
                        {"OnPasswordResponseMessage", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::Authenticators::HouseAuthenticator_PasswordResponseMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::HouseAuthenticator.DelayedDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Mirror::Authenticators::HouseAuthenticator::*)(::Mirror::NetworkConnectionToClient*, float_t)>(&::Mirror::Authenticators::HouseAuthenticator::DelayedDisconnect)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803c70e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(),
                        {"DelayedDisconnect", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::HouseAuthenticator.OnStartClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::HouseAuthenticator::*)()>(&::Mirror::Authenticators::HouseAuthenticator::OnStartClient)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803c7ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(),
                    {::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::HouseAuthenticator.OnStopClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::HouseAuthenticator::*)()>(&::Mirror::Authenticators::HouseAuthenticator::OnStopClient)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803c7be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(),
                    {::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::HouseAuthenticator.OnClientAuthenticate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::HouseAuthenticator::*)()>(&::Mirror::Authenticators::HouseAuthenticator::OnClientAuthenticate)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1803c74c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(),
                    {::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::HouseAuthenticator.OnAuthResponseMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::HouseAuthenticator::*)(::Mirror::Authenticators::HouseAuthenticator_AuthResponseMessage)>(&::Mirror::Authenticators::HouseAuthenticator::OnAuthResponseMessage)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1803c7250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(),
                        {"OnAuthResponseMessage", {}, {::i2c::type_of<::Mirror::Authenticators::HouseAuthenticator_AuthResponseMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::HouseAuthenticator.OnWelcomeMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::HouseAuthenticator::*)(::Mirror::Authenticators::HouseAuthenticator_WelcomeMessage)>(&::Mirror::Authenticators::HouseAuthenticator::OnWelcomeMessage)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803c7c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(),
                        {"OnWelcomeMessage", {}, {::i2c::type_of<::Mirror::Authenticators::HouseAuthenticator_WelcomeMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::HouseAuthenticator.OnAuthResponseMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::HouseAuthenticator::*)(::Mirror::NetworkConnection*, ::Mirror::Authenticators::HouseAuthenticator_AuthResponseMessage)>(&::Mirror::Authenticators::HouseAuthenticator::OnAuthResponseMessage)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803c74a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(),
                        {"OnAuthResponseMessage", {}, {::i2c::type_of<::Mirror::NetworkConnection*>(), ::i2c::type_of<::Mirror::Authenticators::HouseAuthenticator_AuthResponseMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::HouseAuthenticator.SendPassword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Mirror::Authenticators::HouseAuthenticator::SendPassword)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803c7cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(),
                        {"SendPassword", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::HouseAuthenticator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::HouseAuthenticator::*)()>(&::Mirror::Authenticators::HouseAuthenticator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803c7e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Mirror::Authenticators::HouseAuthenticator::__cordl_internal_get_password()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___password;
}
constexpr ::StringW const& Mirror::Authenticators::HouseAuthenticator::__cordl_internal_get_password() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___password;
}
constexpr void Mirror::Authenticators::HouseAuthenticator::__cordl_internal_set_password(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___password = value;
}
constexpr bool& Mirror::Authenticators::HouseAuthenticator::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& Mirror::Authenticators::HouseAuthenticator::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void Mirror::Authenticators::HouseAuthenticator::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
inline void Mirror::Authenticators::HouseAuthenticator::setStaticF_versionBypassString(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "versionBypassString", ::Mirror::Authenticators::HouseAuthenticator*>(std::forward<::StringW>(value));
}
inline ::StringW Mirror::Authenticators::HouseAuthenticator::getStaticF_versionBypassString()  {
return ::cordl_internals::getStaticField<::StringW, "versionBypassString", ::Mirror::Authenticators::HouseAuthenticator*>();
}
inline void Mirror::Authenticators::HouseAuthenticator::OnStartServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Authenticators::HouseAuthenticator::OnStopServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Authenticators::HouseAuthenticator::OnServerAuthenticate(::Mirror::NetworkConnectionToClient*  conn)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline ::Mirror::Authenticators::HouseAuthenticator_WelcomeMessage Mirror::Authenticators::HouseAuthenticator::GetWelcomeMessage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(),
                        {"GetWelcomeMessage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::Authenticators::HouseAuthenticator_WelcomeMessage>(this, ___internal_method);
}
inline bool Mirror::Authenticators::HouseAuthenticator::VersionsAreCompatible(::StringW  versionA, ::StringW  versionB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(),
                        {"VersionsAreCompatible", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, versionA, versionB);
}
inline void Mirror::Authenticators::HouseAuthenticator::OnInitialAuthRequestMessage(::Mirror::NetworkConnectionToClient*  conn, ::Mirror::Authenticators::HouseAuthenticator_InitialialAuthRequestMessage  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(),
                        {"OnInitialAuthRequestMessage", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::Authenticators::HouseAuthenticator_InitialialAuthRequestMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn, msg);
}
inline void Mirror::Authenticators::HouseAuthenticator::OnPasswordResponseMessage(::Mirror::NetworkConnectionToClient*  conn, ::Mirror::Authenticators::HouseAuthenticator_PasswordResponseMessage  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(),
                        {"OnPasswordResponseMessage", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::Authenticators::HouseAuthenticator_PasswordResponseMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn, msg);
}
inline ::System::Collections::IEnumerator* Mirror::Authenticators::HouseAuthenticator::DelayedDisconnect(::Mirror::NetworkConnectionToClient*  conn, float_t  waitTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(),
                        {"DelayedDisconnect", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, conn, waitTime);
}
inline void Mirror::Authenticators::HouseAuthenticator::OnStartClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Authenticators::HouseAuthenticator::OnStopClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Authenticators::HouseAuthenticator::OnClientAuthenticate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Authenticators::HouseAuthenticator::OnAuthResponseMessage(::Mirror::Authenticators::HouseAuthenticator_AuthResponseMessage  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(),
                        {"OnAuthResponseMessage", {}, {::i2c::type_of<::Mirror::Authenticators::HouseAuthenticator_AuthResponseMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void Mirror::Authenticators::HouseAuthenticator::OnWelcomeMessage(::Mirror::Authenticators::HouseAuthenticator_WelcomeMessage  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(),
                        {"OnWelcomeMessage", {}, {::i2c::type_of<::Mirror::Authenticators::HouseAuthenticator_WelcomeMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void Mirror::Authenticators::HouseAuthenticator::OnAuthResponseMessage(::Mirror::NetworkConnection*  conn, ::Mirror::Authenticators::HouseAuthenticator_AuthResponseMessage  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(),
                        {"OnAuthResponseMessage", {}, {::i2c::type_of<::Mirror::NetworkConnection*>(), ::i2c::type_of<::Mirror::Authenticators::HouseAuthenticator_AuthResponseMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn, msg);
}
inline void Mirror::Authenticators::HouseAuthenticator::SendPassword(::StringW  password)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(),
                        {"SendPassword", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, password);
}
inline void Mirror::Authenticators::HouseAuthenticator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::HouseAuthenticator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Authenticators::HouseAuthenticator* Mirror::Authenticators::HouseAuthenticator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Authenticators::HouseAuthenticator*>());
}
// Ctor Parameters []
constexpr ::Mirror::Authenticators::HouseAuthenticator::HouseAuthenticator()   {
}

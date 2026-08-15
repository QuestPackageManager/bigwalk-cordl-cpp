#pragma once
// IWYU pragma private; include "Mirror/FizzySteam/LegacyCommon.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__EP2PSend_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/FizzySteam/zzzz__LegacyCommon_def.hpp"
#include "Mirror/FizzySteam/zzzz__FizzySteamworks_def.hpp"
#include "Mirror/FizzySteam/zzzz__LegacyCommon_def.hpp"
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__Callback_1_def.hpp"
#include "Steamworks/zzzz__P2PSessionConnectFail_t_def.hpp"
#include "Steamworks/zzzz__P2PSessionRequest_t_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::FizzySteam::LegacyCommon_InternalMessages::LegacyCommon_InternalMessages(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mirror::FizzySteam::LegacyCommon_InternalMessages::LegacyCommon_InternalMessages()   {
}
constexpr ::Mirror::FizzySteam::LegacyCommon_InternalMessages  Mirror::FizzySteam::LegacyCommon_InternalMessages::CONNECT{static_cast<uint8_t>(0x0u)};
constexpr ::Mirror::FizzySteam::LegacyCommon_InternalMessages  Mirror::FizzySteam::LegacyCommon_InternalMessages::ACCEPT_CONNECT{static_cast<uint8_t>(0x1u)};
constexpr ::Mirror::FizzySteam::LegacyCommon_InternalMessages  Mirror::FizzySteam::LegacyCommon_InternalMessages::DISCONNECT{static_cast<uint8_t>(0x2u)};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::*)(int32_t)>(&::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::*)()>(&::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::*)()>(&::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180631050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::*)()>(&::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::*)()>(&::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::*)()>(&::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::Mirror::FizzySteam::LegacyCommon*& Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Mirror::FizzySteam::LegacyCommon* const& Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::__cordl_internal_set___4__this(::Mirror::FizzySteam::LegacyCommon*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Steamworks::CSteamID& Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::__cordl_internal_get_cSteamID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cSteamID;
}
constexpr ::Steamworks::CSteamID const& Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::__cordl_internal_get_cSteamID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cSteamID;
}
constexpr void Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::__cordl_internal_set_cSteamID(::Steamworks::CSteamID  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cSteamID = value;
}
inline void Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16* Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16::LegacyCommon__DelayedClose_d__16()   {
}
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyCommon.get_internal_ch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mirror::FizzySteam::LegacyCommon::*)()>(&::Mirror::FizzySteam::LegacyCommon::get_internal_ch)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f4180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(),
                        {"get_internal_ch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyCommon._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyCommon::*)(::Mirror::FizzySteam::FizzySteamworks*)>(&::Mirror::FizzySteam::LegacyCommon::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18062cd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(),
                        {".ctor", {}, {::i2c::type_of<::Mirror::FizzySteam::FizzySteamworks*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyCommon.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyCommon::*)()>(&::Mirror::FizzySteam::LegacyCommon::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18062c7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyCommon.OnNewConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyCommon::*)(::Steamworks::P2PSessionRequest_t)>(&::Mirror::FizzySteam::LegacyCommon::OnNewConnection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyCommon.OnConnectFail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyCommon::*)(::Steamworks::P2PSessionConnectFail_t)>(&::Mirror::FizzySteam::LegacyCommon::OnConnectFail)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18062c850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(),
                        {"OnConnectFail", {}, {::i2c::type_of<::Steamworks::P2PSessionConnectFail_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyCommon.SendInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyCommon::*)(::Steamworks::CSteamID, ::Mirror::FizzySteam::LegacyCommon_InternalMessages)>(&::Mirror::FizzySteam::LegacyCommon::SendInternal)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18062cbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(),
                        {"SendInternal", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::Mirror::FizzySteam::LegacyCommon_InternalMessages>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyCommon.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyCommon::*)(::Steamworks::CSteamID, ::ArrayW<uint8_t>, int32_t)>(&::Mirror::FizzySteam::LegacyCommon::Send)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18062cc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(),
                        {"Send", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyCommon.Receive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::FizzySteam::LegacyCommon::*)(::by_ref<::Steamworks::CSteamID>, ::by_ref<::ArrayW<uint8_t>>, int32_t)>(&::Mirror::FizzySteam::LegacyCommon::Receive)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18062cb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(),
                        {"Receive", {}, {::i2c::type_of<::by_ref<::Steamworks::CSteamID>>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyCommon.CloseP2PSessionWithUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyCommon::*)(::Steamworks::CSteamID)>(&::Mirror::FizzySteam::LegacyCommon::CloseP2PSessionWithUser)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18062c780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(),
                        {"CloseP2PSessionWithUser", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyCommon.WaitForClose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyCommon::*)(::Steamworks::CSteamID)>(&::Mirror::FizzySteam::LegacyCommon::WaitForClose)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18062ccd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(),
                        {"WaitForClose", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyCommon.DelayedClose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Mirror::FizzySteam::LegacyCommon::*)(::Steamworks::CSteamID)>(&::Mirror::FizzySteam::LegacyCommon::DelayedClose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18062c790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(),
                        {"DelayedClose", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyCommon.ReceiveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyCommon::*)()>(&::Mirror::FizzySteam::LegacyCommon::ReceiveData)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x18062c8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(),
                        {"ReceiveData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyCommon.OnReceiveInternalData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyCommon::*)(::Mirror::FizzySteam::LegacyCommon_InternalMessages, ::Steamworks::CSteamID)>(&::Mirror::FizzySteam::LegacyCommon::OnReceiveInternalData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyCommon.OnReceiveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyCommon::*)(::ArrayW<uint8_t>, ::Steamworks::CSteamID, int32_t)>(&::Mirror::FizzySteam::LegacyCommon::OnReceiveData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyCommon.OnConnectionFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyCommon::*)(::Steamworks::CSteamID)>(&::Mirror::FizzySteam::LegacyCommon::OnConnectionFailed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Steamworks::EP2PSend>& Mirror::FizzySteam::LegacyCommon::__cordl_internal_get_channels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channels;
}
constexpr ::ArrayW<::Steamworks::EP2PSend> const& Mirror::FizzySteam::LegacyCommon::__cordl_internal_get_channels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channels;
}
constexpr void Mirror::FizzySteam::LegacyCommon::__cordl_internal_set_channels(::ArrayW<::Steamworks::EP2PSend>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channels = value;
}
constexpr ::Steamworks::Callback_1<::Steamworks::P2PSessionRequest_t>*& Mirror::FizzySteam::LegacyCommon::__cordl_internal_get_callback_OnNewConnection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback_OnNewConnection;
}
constexpr ::Steamworks::Callback_1<::Steamworks::P2PSessionRequest_t>* const& Mirror::FizzySteam::LegacyCommon::__cordl_internal_get_callback_OnNewConnection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback_OnNewConnection;
}
constexpr void Mirror::FizzySteam::LegacyCommon::__cordl_internal_set_callback_OnNewConnection(::Steamworks::Callback_1<::Steamworks::P2PSessionRequest_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback_OnNewConnection = value;
}
constexpr ::Steamworks::Callback_1<::Steamworks::P2PSessionConnectFail_t>*& Mirror::FizzySteam::LegacyCommon::__cordl_internal_get_callback_OnConnectFail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback_OnConnectFail;
}
constexpr ::Steamworks::Callback_1<::Steamworks::P2PSessionConnectFail_t>* const& Mirror::FizzySteam::LegacyCommon::__cordl_internal_get_callback_OnConnectFail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback_OnConnectFail;
}
constexpr void Mirror::FizzySteam::LegacyCommon::__cordl_internal_set_callback_OnConnectFail(::Steamworks::Callback_1<::Steamworks::P2PSessionConnectFail_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback_OnConnectFail = value;
}
constexpr ::UnityW<::Mirror::FizzySteam::FizzySteamworks>& Mirror::FizzySteam::LegacyCommon::__cordl_internal_get_transport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transport;
}
constexpr ::UnityW<::Mirror::FizzySteam::FizzySteamworks> const& Mirror::FizzySteam::LegacyCommon::__cordl_internal_get_transport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transport;
}
constexpr void Mirror::FizzySteam::LegacyCommon::__cordl_internal_set_transport(::UnityW<::Mirror::FizzySteam::FizzySteamworks>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transport = value;
}
inline int32_t Mirror::FizzySteam::LegacyCommon::get_internal_ch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(),
                        {"get_internal_ch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Mirror::FizzySteam::LegacyCommon::_ctor(::Mirror::FizzySteam::FizzySteamworks*  transport)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(),
                        {".ctor", {}, {::i2c::type_of<::Mirror::FizzySteam::FizzySteamworks*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transport);
}
inline void Mirror::FizzySteam::LegacyCommon::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::LegacyCommon::OnNewConnection(::Steamworks::P2PSessionRequest_t  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Mirror::FizzySteam::LegacyCommon::OnConnectFail(::Steamworks::P2PSessionConnectFail_t  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(),
                        {"OnConnectFail", {}, {::i2c::type_of<::Steamworks::P2PSessionConnectFail_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Mirror::FizzySteam::LegacyCommon::SendInternal(::Steamworks::CSteamID  target, ::Mirror::FizzySteam::LegacyCommon_InternalMessages  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(),
                        {"SendInternal", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::Mirror::FizzySteam::LegacyCommon_InternalMessages>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, type);
}
inline void Mirror::FizzySteam::LegacyCommon::Send(::Steamworks::CSteamID  host, ::ArrayW<uint8_t>  msgBuffer, int32_t  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(),
                        {"Send", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, host, msgBuffer, channel);
}
inline bool Mirror::FizzySteam::LegacyCommon::Receive(::by_ref<::Steamworks::CSteamID>  clientSteamID, ::by_ref<::ArrayW<uint8_t>>  receiveBuffer, int32_t  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(),
                        {"Receive", {}, {::i2c::type_of<::by_ref<::Steamworks::CSteamID>>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clientSteamID, receiveBuffer, channel);
}
inline void Mirror::FizzySteam::LegacyCommon::CloseP2PSessionWithUser(::Steamworks::CSteamID  clientSteamID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(),
                        {"CloseP2PSessionWithUser", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clientSteamID);
}
inline void Mirror::FizzySteam::LegacyCommon::WaitForClose(::Steamworks::CSteamID  cSteamID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(),
                        {"WaitForClose", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cSteamID);
}
inline ::System::Collections::IEnumerator* Mirror::FizzySteam::LegacyCommon::DelayedClose(::Steamworks::CSteamID  cSteamID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(),
                        {"DelayedClose", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, cSteamID);
}
inline void Mirror::FizzySteam::LegacyCommon::ReceiveData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(),
                        {"ReceiveData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::LegacyCommon::OnReceiveInternalData(::Mirror::FizzySteam::LegacyCommon_InternalMessages  type, ::Steamworks::CSteamID  clientSteamID)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, clientSteamID);
}
inline void Mirror::FizzySteam::LegacyCommon::OnReceiveData(::ArrayW<uint8_t>  data, ::Steamworks::CSteamID  clientSteamID, int32_t  channel)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, clientSteamID, channel);
}
inline void Mirror::FizzySteam::LegacyCommon::OnConnectionFailed(::Steamworks::CSteamID  remoteId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::LegacyCommon*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, remoteId);
}
inline ::Mirror::FizzySteam::LegacyCommon* Mirror::FizzySteam::LegacyCommon::New_ctor(::Mirror::FizzySteam::FizzySteamworks*  transport)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::FizzySteam::LegacyCommon*>(transport));
}
// Ctor Parameters []
constexpr ::Mirror::FizzySteam::LegacyCommon::LegacyCommon()   {
}

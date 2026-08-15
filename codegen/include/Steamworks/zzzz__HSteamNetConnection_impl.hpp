#pragma once
// IWYU pragma private; include "Steamworks/HSteamNetConnection.hpp"
#include "Steamworks/zzzz__HSteamNetConnection_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Steamworks::HSteamNetConnection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::HSteamNetConnection::*)(uint32_t)>(&::Steamworks::HSteamNetConnection::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamNetConnection>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamNetConnection.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::HSteamNetConnection::*)()>(&::Steamworks::HSteamNetConnection::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::HSteamNetConnection>(),
                    {::i2c::class_of<::Steamworks::HSteamNetConnection>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamNetConnection.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::HSteamNetConnection::*)(::System::Object*)>(&::Steamworks::HSteamNetConnection::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805aa1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::HSteamNetConnection>(),
                    {::i2c::class_of<::Steamworks::HSteamNetConnection>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamNetConnection.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::HSteamNetConnection::*)()>(&::Steamworks::HSteamNetConnection::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::HSteamNetConnection>(),
                    {::i2c::class_of<::Steamworks::HSteamNetConnection>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamNetConnection.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HSteamNetConnection, ::Steamworks::HSteamNetConnection)>(&::Steamworks::HSteamNetConnection::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamNetConnection>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::Steamworks::HSteamNetConnection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamNetConnection.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HSteamNetConnection, ::Steamworks::HSteamNetConnection)>(&::Steamworks::HSteamNetConnection::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamNetConnection>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::Steamworks::HSteamNetConnection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamNetConnection.op_Explicit___Steamworks__HSteamNetConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HSteamNetConnection (*)(uint32_t)>(&::Steamworks::HSteamNetConnection::op_Explicit___Steamworks__HSteamNetConnection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamNetConnection>(),
                        {"op_Explicit", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamNetConnection.op_Explicit_uint32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::Steamworks::HSteamNetConnection)>(&::Steamworks::HSteamNetConnection::op_Explicit_uint32_t)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamNetConnection>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamNetConnection.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::HSteamNetConnection::*)(::Steamworks::HSteamNetConnection)>(&::Steamworks::HSteamNetConnection::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a82e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamNetConnection>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamNetConnection.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::HSteamNetConnection::*)(::Steamworks::HSteamNetConnection)>(&::Steamworks::HSteamNetConnection::CompareTo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamNetConnection>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>()}}
                    )));
    return ___internal_method;
  }
};
inline void Steamworks::HSteamNetConnection::setStaticF_Invalid(::Steamworks::HSteamNetConnection  value)  {
::cordl_internals::setStaticField<::Steamworks::HSteamNetConnection, "Invalid", ::Steamworks::HSteamNetConnection>(std::forward<::Steamworks::HSteamNetConnection>(value));
}
inline ::Steamworks::HSteamNetConnection Steamworks::HSteamNetConnection::getStaticF_Invalid()  {
return ::cordl_internals::getStaticField<::Steamworks::HSteamNetConnection, "Invalid", ::Steamworks::HSteamNetConnection>();
}
inline void Steamworks::HSteamNetConnection::_ctor(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamNetConnection>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW Steamworks::HSteamNetConnection::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::HSteamNetConnection>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Steamworks::HSteamNetConnection::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::HSteamNetConnection>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::HSteamNetConnection::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::HSteamNetConnection>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Steamworks::HSteamNetConnection::op_Equality(::Steamworks::HSteamNetConnection  x, ::Steamworks::HSteamNetConnection  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamNetConnection>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::Steamworks::HSteamNetConnection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline bool Steamworks::HSteamNetConnection::op_Inequality(::Steamworks::HSteamNetConnection  x, ::Steamworks::HSteamNetConnection  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamNetConnection>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::Steamworks::HSteamNetConnection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline ::Steamworks::HSteamNetConnection Steamworks::HSteamNetConnection::op_Explicit___Steamworks__HSteamNetConnection(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamNetConnection>(),
                        {"op_Explicit", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HSteamNetConnection>(nullptr, ___internal_method, value);
}
inline uint32_t Steamworks::HSteamNetConnection::op_Explicit_uint32_t(::Steamworks::HSteamNetConnection  that)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamNetConnection>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, that);
}
inline bool Steamworks::HSteamNetConnection::Equals(::Steamworks::HSteamNetConnection  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamNetConnection>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::HSteamNetConnection::CompareTo(::Steamworks::HSteamNetConnection  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamNetConnection>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::HSteamNetConnection>"
constexpr  Steamworks::HSteamNetConnection::operator ::System::IEquatable_1<::Steamworks::HSteamNetConnection>*()  {
return static_cast<::System::IEquatable_1<::Steamworks::HSteamNetConnection>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Steamworks::HSteamNetConnection>"
constexpr ::System::IEquatable_1<::Steamworks::HSteamNetConnection>* Steamworks::HSteamNetConnection::i___System__IEquatable_1___Steamworks__HSteamNetConnection_()  {
return static_cast<::System::IEquatable_1<::Steamworks::HSteamNetConnection>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Steamworks::HSteamNetConnection>"
constexpr  Steamworks::HSteamNetConnection::operator ::System::IComparable_1<::Steamworks::HSteamNetConnection>*()  {
return static_cast<::System::IComparable_1<::Steamworks::HSteamNetConnection>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Steamworks::HSteamNetConnection>"
constexpr ::System::IComparable_1<::Steamworks::HSteamNetConnection>* Steamworks::HSteamNetConnection::i___System__IComparable_1___Steamworks__HSteamNetConnection_()  {
return static_cast<::System::IComparable_1<::Steamworks::HSteamNetConnection>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_HSteamNetConnection", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::HSteamNetConnection::HSteamNetConnection(uint32_t  m_HSteamNetConnection) noexcept  {
this->m_HSteamNetConnection = m_HSteamNetConnection;
}
// Ctor Parameters []
constexpr ::Steamworks::HSteamNetConnection::HSteamNetConnection()   {
}

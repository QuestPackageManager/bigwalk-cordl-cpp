#pragma once
// IWYU pragma private; include "Steamworks/HSteamListenSocket.hpp"
#include "Steamworks/zzzz__HSteamListenSocket_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Steamworks::HSteamListenSocket._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::HSteamListenSocket::*)(uint32_t)>(&::Steamworks::HSteamListenSocket::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamListenSocket>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamListenSocket.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::HSteamListenSocket::*)()>(&::Steamworks::HSteamListenSocket::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::HSteamListenSocket>(),
                    {::i2c::class_of<::Steamworks::HSteamListenSocket>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamListenSocket.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::HSteamListenSocket::*)(::System::Object*)>(&::Steamworks::HSteamListenSocket::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805aa100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::HSteamListenSocket>(),
                    {::i2c::class_of<::Steamworks::HSteamListenSocket>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamListenSocket.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::HSteamListenSocket::*)()>(&::Steamworks::HSteamListenSocket::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::HSteamListenSocket>(),
                    {::i2c::class_of<::Steamworks::HSteamListenSocket>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamListenSocket.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HSteamListenSocket, ::Steamworks::HSteamListenSocket)>(&::Steamworks::HSteamListenSocket::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamListenSocket>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::HSteamListenSocket>(), ::i2c::type_of<::Steamworks::HSteamListenSocket>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamListenSocket.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HSteamListenSocket, ::Steamworks::HSteamListenSocket)>(&::Steamworks::HSteamListenSocket::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamListenSocket>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Steamworks::HSteamListenSocket>(), ::i2c::type_of<::Steamworks::HSteamListenSocket>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamListenSocket.op_Explicit___Steamworks__HSteamListenSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HSteamListenSocket (*)(uint32_t)>(&::Steamworks::HSteamListenSocket::op_Explicit___Steamworks__HSteamListenSocket)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamListenSocket>(),
                        {"op_Explicit", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamListenSocket.op_Explicit_uint32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::Steamworks::HSteamListenSocket)>(&::Steamworks::HSteamListenSocket::op_Explicit_uint32_t)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamListenSocket>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::HSteamListenSocket>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamListenSocket.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::HSteamListenSocket::*)(::Steamworks::HSteamListenSocket)>(&::Steamworks::HSteamListenSocket::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a82e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamListenSocket>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::HSteamListenSocket>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamListenSocket.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::HSteamListenSocket::*)(::Steamworks::HSteamListenSocket)>(&::Steamworks::HSteamListenSocket::CompareTo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamListenSocket>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::HSteamListenSocket>()}}
                    )));
    return ___internal_method;
  }
};
inline void Steamworks::HSteamListenSocket::setStaticF_Invalid(::Steamworks::HSteamListenSocket  value)  {
::cordl_internals::setStaticField<::Steamworks::HSteamListenSocket, "Invalid", ::Steamworks::HSteamListenSocket>(std::forward<::Steamworks::HSteamListenSocket>(value));
}
inline ::Steamworks::HSteamListenSocket Steamworks::HSteamListenSocket::getStaticF_Invalid()  {
return ::cordl_internals::getStaticField<::Steamworks::HSteamListenSocket, "Invalid", ::Steamworks::HSteamListenSocket>();
}
inline void Steamworks::HSteamListenSocket::_ctor(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamListenSocket>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW Steamworks::HSteamListenSocket::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::HSteamListenSocket>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Steamworks::HSteamListenSocket::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::HSteamListenSocket>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::HSteamListenSocket::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::HSteamListenSocket>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Steamworks::HSteamListenSocket::op_Equality(::Steamworks::HSteamListenSocket  x, ::Steamworks::HSteamListenSocket  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamListenSocket>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::HSteamListenSocket>(), ::i2c::type_of<::Steamworks::HSteamListenSocket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline bool Steamworks::HSteamListenSocket::op_Inequality(::Steamworks::HSteamListenSocket  x, ::Steamworks::HSteamListenSocket  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamListenSocket>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Steamworks::HSteamListenSocket>(), ::i2c::type_of<::Steamworks::HSteamListenSocket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline ::Steamworks::HSteamListenSocket Steamworks::HSteamListenSocket::op_Explicit___Steamworks__HSteamListenSocket(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamListenSocket>(),
                        {"op_Explicit", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HSteamListenSocket>(nullptr, ___internal_method, value);
}
inline uint32_t Steamworks::HSteamListenSocket::op_Explicit_uint32_t(::Steamworks::HSteamListenSocket  that)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamListenSocket>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::HSteamListenSocket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, that);
}
inline bool Steamworks::HSteamListenSocket::Equals(::Steamworks::HSteamListenSocket  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamListenSocket>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::HSteamListenSocket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::HSteamListenSocket::CompareTo(::Steamworks::HSteamListenSocket  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamListenSocket>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::HSteamListenSocket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::HSteamListenSocket>"
constexpr  Steamworks::HSteamListenSocket::operator ::System::IEquatable_1<::Steamworks::HSteamListenSocket>*()  {
return static_cast<::System::IEquatable_1<::Steamworks::HSteamListenSocket>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Steamworks::HSteamListenSocket>"
constexpr ::System::IEquatable_1<::Steamworks::HSteamListenSocket>* Steamworks::HSteamListenSocket::i___System__IEquatable_1___Steamworks__HSteamListenSocket_()  {
return static_cast<::System::IEquatable_1<::Steamworks::HSteamListenSocket>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Steamworks::HSteamListenSocket>"
constexpr  Steamworks::HSteamListenSocket::operator ::System::IComparable_1<::Steamworks::HSteamListenSocket>*()  {
return static_cast<::System::IComparable_1<::Steamworks::HSteamListenSocket>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Steamworks::HSteamListenSocket>"
constexpr ::System::IComparable_1<::Steamworks::HSteamListenSocket>* Steamworks::HSteamListenSocket::i___System__IComparable_1___Steamworks__HSteamListenSocket_()  {
return static_cast<::System::IComparable_1<::Steamworks::HSteamListenSocket>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_HSteamListenSocket", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::HSteamListenSocket::HSteamListenSocket(uint32_t  m_HSteamListenSocket) noexcept  {
this->m_HSteamListenSocket = m_HSteamListenSocket;
}
// Ctor Parameters []
constexpr ::Steamworks::HSteamListenSocket::HSteamListenSocket()   {
}

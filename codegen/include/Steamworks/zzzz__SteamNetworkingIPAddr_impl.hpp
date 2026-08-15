#pragma once
// IWYU pragma private; include "Steamworks/SteamNetworkingIPAddr.hpp"
#include "Steamworks/zzzz__SteamNetworkingIPAddr_def.hpp"
#include "Steamworks/zzzz__ESteamNetworkingFakeIPType_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamNetworkingIPAddr.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamNetworkingIPAddr::*)()>(&::Steamworks::SteamNetworkingIPAddr::Clear)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805b3de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIPAddr>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingIPAddr.IsIPv6AllZeros
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::SteamNetworkingIPAddr::*)()>(&::Steamworks::SteamNetworkingIPAddr::IsIPv6AllZeros)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805b3ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIPAddr>(),
                        {"IsIPv6AllZeros", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingIPAddr.SetIPv6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamNetworkingIPAddr::*)(::ArrayW<uint8_t>, uint16_t)>(&::Steamworks::SteamNetworkingIPAddr::SetIPv6)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805b4030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIPAddr>(),
                        {"SetIPv6", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingIPAddr.SetIPv4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamNetworkingIPAddr::*)(uint32_t, uint16_t)>(&::Steamworks::SteamNetworkingIPAddr::SetIPv4)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805b3ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIPAddr>(),
                        {"SetIPv4", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingIPAddr.IsIPv4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::SteamNetworkingIPAddr::*)()>(&::Steamworks::SteamNetworkingIPAddr::IsIPv4)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805b3eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIPAddr>(),
                        {"IsIPv4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingIPAddr.GetIPv4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Steamworks::SteamNetworkingIPAddr::*)()>(&::Steamworks::SteamNetworkingIPAddr::GetIPv4)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805b3e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIPAddr>(),
                        {"GetIPv4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingIPAddr.SetIPv6LocalHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamNetworkingIPAddr::*)(uint16_t)>(&::Steamworks::SteamNetworkingIPAddr::SetIPv6LocalHost)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805b4010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIPAddr>(),
                        {"SetIPv6LocalHost", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingIPAddr.IsLocalHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::SteamNetworkingIPAddr::*)()>(&::Steamworks::SteamNetworkingIPAddr::IsLocalHost)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805b3ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIPAddr>(),
                        {"IsLocalHost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingIPAddr.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamNetworkingIPAddr::*)(::by_ref<::StringW>, bool)>(&::Steamworks::SteamNetworkingIPAddr::ToString)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1805b4050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIPAddr>(),
                        {"ToString", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingIPAddr.ParseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::SteamNetworkingIPAddr::*)(::StringW)>(&::Steamworks::SteamNetworkingIPAddr::ParseString)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805b3f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIPAddr>(),
                        {"ParseString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingIPAddr.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::SteamNetworkingIPAddr::*)(::Steamworks::SteamNetworkingIPAddr)>(&::Steamworks::SteamNetworkingIPAddr::Equals)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b3e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIPAddr>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::SteamNetworkingIPAddr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingIPAddr.GetFakeIPType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ESteamNetworkingFakeIPType (::Steamworks::SteamNetworkingIPAddr::*)()>(&::Steamworks::SteamNetworkingIPAddr::GetFakeIPType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805b3e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIPAddr>(),
                        {"GetFakeIPType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingIPAddr.IsFakeIP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::SteamNetworkingIPAddr::*)()>(&::Steamworks::SteamNetworkingIPAddr::IsFakeIP)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b3e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIPAddr>(),
                        {"IsFakeIP", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Steamworks::SteamNetworkingIPAddr::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIPAddr>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool Steamworks::SteamNetworkingIPAddr::IsIPv6AllZeros()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIPAddr>(),
                        {"IsIPv6AllZeros", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Steamworks::SteamNetworkingIPAddr::SetIPv6(::ArrayW<uint8_t>  ipv6, uint16_t  nPort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIPAddr>(),
                        {"SetIPv6", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ipv6, nPort);
}
inline void Steamworks::SteamNetworkingIPAddr::SetIPv4(uint32_t  nIP, uint16_t  nPort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIPAddr>(),
                        {"SetIPv4", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, nIP, nPort);
}
inline bool Steamworks::SteamNetworkingIPAddr::IsIPv4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIPAddr>(),
                        {"IsIPv4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline uint32_t Steamworks::SteamNetworkingIPAddr::GetIPv4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIPAddr>(),
                        {"GetIPv4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Steamworks::SteamNetworkingIPAddr::SetIPv6LocalHost(uint16_t  nPort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIPAddr>(),
                        {"SetIPv6LocalHost", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, nPort);
}
inline bool Steamworks::SteamNetworkingIPAddr::IsLocalHost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIPAddr>(),
                        {"IsLocalHost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Steamworks::SteamNetworkingIPAddr::ToString(::by_ref<::StringW>  buf, bool  bWithPort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIPAddr>(),
                        {"ToString", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, buf, bWithPort);
}
inline bool Steamworks::SteamNetworkingIPAddr::ParseString(::StringW  pszStr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIPAddr>(),
                        {"ParseString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pszStr);
}
inline bool Steamworks::SteamNetworkingIPAddr::Equals(::Steamworks::SteamNetworkingIPAddr  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIPAddr>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::SteamNetworkingIPAddr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, x);
}
inline ::Steamworks::ESteamNetworkingFakeIPType Steamworks::SteamNetworkingIPAddr::GetFakeIPType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIPAddr>(),
                        {"GetFakeIPType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ESteamNetworkingFakeIPType>(*this, ___internal_method);
}
inline bool Steamworks::SteamNetworkingIPAddr::IsFakeIP()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIPAddr>(),
                        {"IsFakeIP", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::SteamNetworkingIPAddr>"
constexpr  Steamworks::SteamNetworkingIPAddr::operator ::System::IEquatable_1<::Steamworks::SteamNetworkingIPAddr>*()  {
return static_cast<::System::IEquatable_1<::Steamworks::SteamNetworkingIPAddr>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Steamworks::SteamNetworkingIPAddr>"
constexpr ::System::IEquatable_1<::Steamworks::SteamNetworkingIPAddr>* Steamworks::SteamNetworkingIPAddr::i___System__IEquatable_1___Steamworks__SteamNetworkingIPAddr_()  {
return static_cast<::System::IEquatable_1<::Steamworks::SteamNetworkingIPAddr>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ipv6", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_port", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SteamNetworkingIPAddr::SteamNetworkingIPAddr(::ArrayW<uint8_t>  m_ipv6, uint16_t  m_port) noexcept  {
this->m_ipv6 = m_ipv6;
this->m_port = m_port;
}
// Ctor Parameters []
constexpr ::Steamworks::SteamNetworkingIPAddr::SteamNetworkingIPAddr()   {
}

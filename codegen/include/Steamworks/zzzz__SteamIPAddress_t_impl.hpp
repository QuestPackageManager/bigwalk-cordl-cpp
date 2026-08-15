#pragma once
// IWYU pragma private; include "Steamworks/SteamIPAddress_t.hpp"
#include "Steamworks/zzzz__ESteamIPType_impl.hpp"
#include "Steamworks/zzzz__SteamIPAddress_t_def.hpp"
#include "Steamworks/zzzz__ESteamIPType_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamIPAddress_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamIPAddress_t::*)(::System::Net::IPAddress*)>(&::Steamworks::SteamIPAddress_t::_ctor)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x1805aec50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamIPAddress_t>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::IPAddress*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamIPAddress_t.ToIPAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPAddress* (::Steamworks::SteamIPAddress_t::*)()>(&::Steamworks::SteamIPAddress_t::ToIPAddress)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805aeb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamIPAddress_t>(),
                        {"ToIPAddress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamIPAddress_t.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::SteamIPAddress_t::*)()>(&::Steamworks::SteamIPAddress_t::ToString)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805aec10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::SteamIPAddress_t>(),
                    {::i2c::class_of<::Steamworks::SteamIPAddress_t>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamIPAddress_t.GetIPType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ESteamIPType (::Steamworks::SteamIPAddress_t::*)()>(&::Steamworks::SteamIPAddress_t::GetIPType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamIPAddress_t>(),
                        {"GetIPType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamIPAddress_t.IsSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::SteamIPAddress_t::*)()>(&::Steamworks::SteamIPAddress_t::IsSet)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805aeaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamIPAddress_t>(),
                        {"IsSet", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Steamworks::SteamIPAddress_t::_ctor(::System::Net::IPAddress*  iPAddress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamIPAddress_t>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::IPAddress*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, iPAddress);
}
inline ::System::Net::IPAddress* Steamworks::SteamIPAddress_t::ToIPAddress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamIPAddress_t>(),
                        {"ToIPAddress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPAddress*>(*this, ___internal_method);
}
inline ::StringW Steamworks::SteamIPAddress_t::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::SteamIPAddress_t>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::Steamworks::ESteamIPType Steamworks::SteamIPAddress_t::GetIPType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamIPAddress_t>(),
                        {"GetIPType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ESteamIPType>(*this, ___internal_method);
}
inline bool Steamworks::SteamIPAddress_t::IsSet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamIPAddress_t>(),
                        {"IsSet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_ip0", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ip1", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eType", ty: "::Steamworks::ESteamIPType", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SteamIPAddress_t::SteamIPAddress_t(int64_t  m_ip0, int64_t  m_ip1, ::Steamworks::ESteamIPType  m_eType) noexcept  {
this->m_ip0 = m_ip0;
this->m_ip1 = m_ip1;
this->m_eType = m_eType;
}
// Ctor Parameters []
constexpr ::Steamworks::SteamIPAddress_t::SteamIPAddress_t()   {
}

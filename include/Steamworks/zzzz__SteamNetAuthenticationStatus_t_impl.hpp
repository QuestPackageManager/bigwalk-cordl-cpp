#pragma once
// IWYU pragma private; include "Steamworks/SteamNetAuthenticationStatus_t.hpp"
#include "Steamworks/zzzz__ESteamNetworkingAvailability_impl.hpp"
#include "Steamworks/zzzz__SteamNetAuthenticationStatus_t_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamNetAuthenticationStatus_t.get_m_debugMsg
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::SteamNetAuthenticationStatus_t::*)()>(&::Steamworks::SteamNetAuthenticationStatus_t::get_m_debugMsg)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18054f030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetAuthenticationStatus_t>(),
                        {"get_m_debugMsg", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetAuthenticationStatus_t.set_m_debugMsg
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamNetAuthenticationStatus_t::*)(::StringW)>(&::Steamworks::SteamNetAuthenticationStatus_t::set_m_debugMsg)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x18054f680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetAuthenticationStatus_t>(),
                        {"set_m_debugMsg", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Steamworks::SteamNetAuthenticationStatus_t::get_m_debugMsg()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetAuthenticationStatus_t>(),
                        {"get_m_debugMsg", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Steamworks::SteamNetAuthenticationStatus_t::set_m_debugMsg(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetAuthenticationStatus_t>(),
                        {"set_m_debugMsg", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_eAvail", ty: "::Steamworks::ESteamNetworkingAvailability", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_debugMsg_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SteamNetAuthenticationStatus_t::SteamNetAuthenticationStatus_t(::Steamworks::ESteamNetworkingAvailability  m_eAvail, ::ArrayW<uint8_t>  m_debugMsg_) noexcept  {
this->m_eAvail = m_eAvail;
this->m_debugMsg_ = m_debugMsg_;
}
// Ctor Parameters []
constexpr ::Steamworks::SteamNetAuthenticationStatus_t::SteamNetAuthenticationStatus_t()   {
}

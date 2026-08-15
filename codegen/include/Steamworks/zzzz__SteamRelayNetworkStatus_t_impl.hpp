#pragma once
// IWYU pragma private; include "Steamworks/SteamRelayNetworkStatus_t.hpp"
#include "Steamworks/zzzz__ESteamNetworkingAvailability_impl.hpp"
#include "Steamworks/zzzz__SteamRelayNetworkStatus_t_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamRelayNetworkStatus_t.get_m_debugMsg
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::SteamRelayNetworkStatus_t::*)()>(&::Steamworks::SteamRelayNetworkStatus_t::get_m_debugMsg)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18054afb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRelayNetworkStatus_t>(),
                        {"get_m_debugMsg", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRelayNetworkStatus_t.set_m_debugMsg
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamRelayNetworkStatus_t::*)(::StringW)>(&::Steamworks::SteamRelayNetworkStatus_t::set_m_debugMsg)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x18054f680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRelayNetworkStatus_t>(),
                        {"set_m_debugMsg", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Steamworks::SteamRelayNetworkStatus_t::get_m_debugMsg()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRelayNetworkStatus_t>(),
                        {"get_m_debugMsg", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Steamworks::SteamRelayNetworkStatus_t::set_m_debugMsg(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRelayNetworkStatus_t>(),
                        {"set_m_debugMsg", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_eAvail", ty: "::Steamworks::ESteamNetworkingAvailability", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bPingMeasurementInProgress", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eAvailNetworkConfig", ty: "::Steamworks::ESteamNetworkingAvailability", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eAvailAnyRelay", ty: "::Steamworks::ESteamNetworkingAvailability", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_debugMsg_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SteamRelayNetworkStatus_t::SteamRelayNetworkStatus_t(::Steamworks::ESteamNetworkingAvailability  m_eAvail, int32_t  m_bPingMeasurementInProgress, ::Steamworks::ESteamNetworkingAvailability  m_eAvailNetworkConfig, ::Steamworks::ESteamNetworkingAvailability  m_eAvailAnyRelay, ::ArrayW<uint8_t>  m_debugMsg_) noexcept  {
this->m_eAvail = m_eAvail;
this->m_bPingMeasurementInProgress = m_bPingMeasurementInProgress;
this->m_eAvailNetworkConfig = m_eAvailNetworkConfig;
this->m_eAvailAnyRelay = m_eAvailAnyRelay;
this->m_debugMsg_ = m_debugMsg_;
}
// Ctor Parameters []
constexpr ::Steamworks::SteamRelayNetworkStatus_t::SteamRelayNetworkStatus_t()   {
}

#pragma once
// IWYU pragma private; include "Steamworks/JoinPartyCallback_t.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__PartyBeaconID_t_impl.hpp"
#include "Steamworks/zzzz__JoinPartyCallback_t_def.hpp"
//  Writing Method size for method: ::Steamworks::JoinPartyCallback_t.get_m_rgchConnectString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::JoinPartyCallback_t::*)()>(&::Steamworks::JoinPartyCallback_t::get_m_rgchConnectString)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x180552c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::JoinPartyCallback_t>(),
                        {"get_m_rgchConnectString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::JoinPartyCallback_t.set_m_rgchConnectString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::JoinPartyCallback_t::*)(::StringW)>(&::Steamworks::JoinPartyCallback_t::set_m_rgchConnectString)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x18054f680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::JoinPartyCallback_t>(),
                        {"set_m_rgchConnectString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Steamworks::JoinPartyCallback_t::get_m_rgchConnectString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::JoinPartyCallback_t>(),
                        {"get_m_rgchConnectString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Steamworks::JoinPartyCallback_t::set_m_rgchConnectString(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::JoinPartyCallback_t>(),
                        {"set_m_rgchConnectString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ulBeaconID", ty: "::Steamworks::PartyBeaconID_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SteamIDBeaconOwner", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_rgchConnectString_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::JoinPartyCallback_t::JoinPartyCallback_t(::Steamworks::EResult  m_eResult, ::Steamworks::PartyBeaconID_t  m_ulBeaconID, ::Steamworks::CSteamID  m_SteamIDBeaconOwner, ::ArrayW<uint8_t>  m_rgchConnectString_) noexcept  {
this->m_eResult = m_eResult;
this->m_ulBeaconID = m_ulBeaconID;
this->m_SteamIDBeaconOwner = m_SteamIDBeaconOwner;
this->m_rgchConnectString_ = m_rgchConnectString_;
}
// Ctor Parameters []
constexpr ::Steamworks::JoinPartyCallback_t::JoinPartyCallback_t()   {
}

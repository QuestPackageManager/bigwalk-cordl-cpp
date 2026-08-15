#pragma once
// IWYU pragma private; include "Steamworks/SteamDatagramRelayAuthTicket.hpp"
#include "Steamworks/zzzz__RTime32_impl.hpp"
#include "Steamworks/zzzz__SteamDatagramHostedAddress_impl.hpp"
#include "Steamworks/zzzz__SteamNetworkingIdentity_impl.hpp"
#include "Steamworks/zzzz__SteamDatagramRelayAuthTicket_def.hpp"
#include "Steamworks/zzzz__SteamDatagramRelayAuthTicket_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ExtraField_SteamDatagramRelayAuthTicket_EType::ExtraField_SteamDatagramRelayAuthTicket_EType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ExtraField_SteamDatagramRelayAuthTicket_EType::ExtraField_SteamDatagramRelayAuthTicket_EType()   {
}
constexpr ::Steamworks::ExtraField_SteamDatagramRelayAuthTicket_EType  Steamworks::ExtraField_SteamDatagramRelayAuthTicket_EType::k_EType_String{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ExtraField_SteamDatagramRelayAuthTicket_EType  Steamworks::ExtraField_SteamDatagramRelayAuthTicket_EType::k_EType_Int{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ExtraField_SteamDatagramRelayAuthTicket_EType  Steamworks::ExtraField_SteamDatagramRelayAuthTicket_EType::k_EType_Fixed64{static_cast<int32_t>(0x2)};
constexpr ::ArrayW<uint8_t>& Steamworks::ExtraField_SteamDatagramRelayAuthTicket_OptionValue::__cordl_internal_get_m_szStringValue()  {
return this->___m_szStringValue;
}
constexpr ::ArrayW<uint8_t> const& Steamworks::ExtraField_SteamDatagramRelayAuthTicket_OptionValue::__cordl_internal_get_m_szStringValue() const {
return this->___m_szStringValue;
}
constexpr void Steamworks::ExtraField_SteamDatagramRelayAuthTicket_OptionValue::__cordl_internal_set_m_szStringValue(::ArrayW<uint8_t>  value)  {
this->___m_szStringValue = value;
}
constexpr int64_t& Steamworks::ExtraField_SteamDatagramRelayAuthTicket_OptionValue::__cordl_internal_get_m_nIntValue()  {
return this->___m_nIntValue;
}
constexpr int64_t const& Steamworks::ExtraField_SteamDatagramRelayAuthTicket_OptionValue::__cordl_internal_get_m_nIntValue() const {
return this->___m_nIntValue;
}
constexpr void Steamworks::ExtraField_SteamDatagramRelayAuthTicket_OptionValue::__cordl_internal_set_m_nIntValue(int64_t  value)  {
this->___m_nIntValue = value;
}
constexpr uint64_t& Steamworks::ExtraField_SteamDatagramRelayAuthTicket_OptionValue::__cordl_internal_get_m_nFixed64Value()  {
return this->___m_nFixed64Value;
}
constexpr uint64_t const& Steamworks::ExtraField_SteamDatagramRelayAuthTicket_OptionValue::__cordl_internal_get_m_nFixed64Value() const {
return this->___m_nFixed64Value;
}
constexpr void Steamworks::ExtraField_SteamDatagramRelayAuthTicket_OptionValue::__cordl_internal_set_m_nFixed64Value(uint64_t  value)  {
this->___m_nFixed64Value = value;
}
// Ctor Parameters [CppParam { name: "m_szStringValue", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nIntValue", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nFixed64Value", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ExtraField_SteamDatagramRelayAuthTicket_OptionValue::ExtraField_SteamDatagramRelayAuthTicket_OptionValue(::ArrayW<uint8_t>  m_szStringValue, int64_t  m_nIntValue, uint64_t  m_nFixed64Value) noexcept  {
this->m_szStringValue = m_szStringValue;
this->m_nIntValue = m_nIntValue;
this->m_nFixed64Value = m_nFixed64Value;
}
// Ctor Parameters []
constexpr ::Steamworks::ExtraField_SteamDatagramRelayAuthTicket_OptionValue::ExtraField_SteamDatagramRelayAuthTicket_OptionValue()   {
}
// Ctor Parameters [CppParam { name: "m_eType", ty: "::Steamworks::ExtraField_SteamDatagramRelayAuthTicket_EType", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_szName", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_val", ty: "::Steamworks::ExtraField_SteamDatagramRelayAuthTicket_OptionValue", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SteamDatagramRelayAuthTicket_ExtraField::SteamDatagramRelayAuthTicket_ExtraField(::Steamworks::ExtraField_SteamDatagramRelayAuthTicket_EType  m_eType, ::ArrayW<uint8_t>  m_szName, ::Steamworks::ExtraField_SteamDatagramRelayAuthTicket_OptionValue  m_val) noexcept  {
this->m_eType = m_eType;
this->m_szName = m_szName;
this->m_val = m_val;
}
// Ctor Parameters []
constexpr ::Steamworks::SteamDatagramRelayAuthTicket_ExtraField::SteamDatagramRelayAuthTicket_ExtraField()   {
}
//  Writing Method size for method: ::Steamworks::SteamDatagramRelayAuthTicket.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamDatagramRelayAuthTicket::*)()>(&::Steamworks::SteamDatagramRelayAuthTicket::Clear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamDatagramRelayAuthTicket>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Steamworks::SteamDatagramRelayAuthTicket::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamDatagramRelayAuthTicket>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_identityGameserver", ty: "::Steamworks::SteamNetworkingIdentity", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_identityAuthorizedClient", ty: "::Steamworks::SteamNetworkingIdentity", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_unPublicIP", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_rtimeTicketExpiry", ty: "::Steamworks::RTime32", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_routing", ty: "::Steamworks::SteamDatagramHostedAddress", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nAppID", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nRestrictToVirtualPort", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nExtraFields", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_vecExtraFields", ty: "::ArrayW<::Steamworks::SteamDatagramRelayAuthTicket_ExtraField>", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SteamDatagramRelayAuthTicket::SteamDatagramRelayAuthTicket(::Steamworks::SteamNetworkingIdentity  m_identityGameserver, ::Steamworks::SteamNetworkingIdentity  m_identityAuthorizedClient, uint32_t  m_unPublicIP, ::Steamworks::RTime32  m_rtimeTicketExpiry, ::Steamworks::SteamDatagramHostedAddress  m_routing, uint32_t  m_nAppID, int32_t  m_nRestrictToVirtualPort, int32_t  m_nExtraFields, ::ArrayW<::Steamworks::SteamDatagramRelayAuthTicket_ExtraField>  m_vecExtraFields) noexcept  {
this->m_identityGameserver = m_identityGameserver;
this->m_identityAuthorizedClient = m_identityAuthorizedClient;
this->m_unPublicIP = m_unPublicIP;
this->m_rtimeTicketExpiry = m_rtimeTicketExpiry;
this->m_routing = m_routing;
this->m_nAppID = m_nAppID;
this->m_nRestrictToVirtualPort = m_nRestrictToVirtualPort;
this->m_nExtraFields = m_nExtraFields;
this->m_vecExtraFields = m_vecExtraFields;
}
// Ctor Parameters []
constexpr ::Steamworks::SteamDatagramRelayAuthTicket::SteamDatagramRelayAuthTicket()   {
}

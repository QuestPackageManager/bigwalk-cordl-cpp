#pragma once
// IWYU pragma private; include "Steamworks/SteamNetConnectionInfo_t.hpp"
#include "Steamworks/zzzz__ESteamNetworkingConnectionState_impl.hpp"
#include "Steamworks/zzzz__HSteamListenSocket_impl.hpp"
#include "Steamworks/zzzz__SteamNetworkingIPAddr_impl.hpp"
#include "Steamworks/zzzz__SteamNetworkingIdentity_impl.hpp"
#include "Steamworks/zzzz__SteamNetworkingPOPID_impl.hpp"
#include "Steamworks/zzzz__SteamNetConnectionInfo_t_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamNetConnectionInfo_t.get_m_szEndDebug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::SteamNetConnectionInfo_t::*)()>(&::Steamworks::SteamNetConnectionInfo_t::get_m_szEndDebug)> {
  constexpr static std::size_t size = 0x1860;
  constexpr static std::size_t addrs = 0x1805a4e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetConnectionInfo_t>(),
                        {"get_m_szEndDebug", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetConnectionInfo_t.set_m_szEndDebug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamNetConnectionInfo_t::*)(::StringW)>(&::Steamworks::SteamNetConnectionInfo_t::set_m_szEndDebug)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x18054f0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetConnectionInfo_t>(),
                        {"set_m_szEndDebug", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetConnectionInfo_t.get_m_szConnectionDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::SteamNetConnectionInfo_t::*)()>(&::Steamworks::SteamNetConnectionInfo_t::get_m_szConnectionDescription)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180581d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetConnectionInfo_t>(),
                        {"get_m_szConnectionDescription", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetConnectionInfo_t.set_m_szConnectionDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamNetConnectionInfo_t::*)(::StringW)>(&::Steamworks::SteamNetConnectionInfo_t::set_m_szConnectionDescription)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x18054f0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetConnectionInfo_t>(),
                        {"set_m_szConnectionDescription", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Steamworks::SteamNetConnectionInfo_t::get_m_szEndDebug()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetConnectionInfo_t>(),
                        {"get_m_szEndDebug", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Steamworks::SteamNetConnectionInfo_t::set_m_szEndDebug(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetConnectionInfo_t>(),
                        {"set_m_szEndDebug", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW Steamworks::SteamNetConnectionInfo_t::get_m_szConnectionDescription()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetConnectionInfo_t>(),
                        {"get_m_szConnectionDescription", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Steamworks::SteamNetConnectionInfo_t::set_m_szConnectionDescription(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetConnectionInfo_t>(),
                        {"set_m_szConnectionDescription", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_identityRemote", ty: "::Steamworks::SteamNetworkingIdentity", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nUserData", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_hListenSocket", ty: "::Steamworks::HSteamListenSocket", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_addrRemote", ty: "::Steamworks::SteamNetworkingIPAddr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m__pad1", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_idPOPRemote", ty: "::Steamworks::SteamNetworkingPOPID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_idPOPRelay", ty: "::Steamworks::SteamNetworkingPOPID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eState", ty: "::Steamworks::ESteamNetworkingConnectionState", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eEndReason", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_szEndDebug_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_szConnectionDescription_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nFlags", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "reserved", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SteamNetConnectionInfo_t::SteamNetConnectionInfo_t(::Steamworks::SteamNetworkingIdentity  m_identityRemote, int64_t  m_nUserData, ::Steamworks::HSteamListenSocket  m_hListenSocket, ::Steamworks::SteamNetworkingIPAddr  m_addrRemote, uint16_t  m__pad1, ::Steamworks::SteamNetworkingPOPID  m_idPOPRemote, ::Steamworks::SteamNetworkingPOPID  m_idPOPRelay, ::Steamworks::ESteamNetworkingConnectionState  m_eState, int32_t  m_eEndReason, ::ArrayW<uint8_t>  m_szEndDebug_, ::ArrayW<uint8_t>  m_szConnectionDescription_, int32_t  m_nFlags, ::ArrayW<uint32_t>  reserved) noexcept  {
this->m_identityRemote = m_identityRemote;
this->m_nUserData = m_nUserData;
this->m_hListenSocket = m_hListenSocket;
this->m_addrRemote = m_addrRemote;
this->m__pad1 = m__pad1;
this->m_idPOPRemote = m_idPOPRemote;
this->m_idPOPRelay = m_idPOPRelay;
this->m_eState = m_eState;
this->m_eEndReason = m_eEndReason;
this->m_szEndDebug_ = m_szEndDebug_;
this->m_szConnectionDescription_ = m_szConnectionDescription_;
this->m_nFlags = m_nFlags;
this->reserved = reserved;
}
// Ctor Parameters []
constexpr ::Steamworks::SteamNetConnectionInfo_t::SteamNetConnectionInfo_t()   {
}

#pragma once
// IWYU pragma private; include "Steamworks/SteamNetworkingMessage_t.hpp"
#include "Steamworks/zzzz__HSteamNetConnection_impl.hpp"
#include "Steamworks/zzzz__SteamNetworkingIdentity_impl.hpp"
#include "Steamworks/zzzz__SteamNetworkingMicroseconds_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Steamworks/zzzz__SteamNetworkingMessage_t_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamNetworkingMessage_t.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamNetworkingMessage_t::*)()>(&::Steamworks::SteamNetworkingMessage_t::Release)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1805b4c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingMessage_t>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingMessage_t.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Steamworks::SteamNetworkingMessage_t::Release)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805b4c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingMessage_t>(),
                        {"Release", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingMessage_t.FromIntPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamNetworkingMessage_t (*)(::System::IntPtr)>(&::Steamworks::SteamNetworkingMessage_t::FromIntPtr)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805b4b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingMessage_t>(),
                        {"FromIntPtr", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline void Steamworks::SteamNetworkingMessage_t::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingMessage_t>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Steamworks::SteamNetworkingMessage_t::Release(::System::IntPtr  pointer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingMessage_t>(),
                        {"Release", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pointer);
}
inline ::Steamworks::SteamNetworkingMessage_t Steamworks::SteamNetworkingMessage_t::FromIntPtr(::System::IntPtr  pointer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingMessage_t>(),
                        {"FromIntPtr", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamNetworkingMessage_t>(nullptr, ___internal_method, pointer);
}
// Ctor Parameters [CppParam { name: "m_pData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_cbSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_conn", ty: "::Steamworks::HSteamNetConnection", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_identityPeer", ty: "::Steamworks::SteamNetworkingIdentity", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nConnUserData", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_usecTimeReceived", ty: "::Steamworks::SteamNetworkingMicroseconds", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nMessageNumber", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pfnFreeData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pfnRelease", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nChannel", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nFlags", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nUserData", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_idxLane", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_pad1__", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SteamNetworkingMessage_t::SteamNetworkingMessage_t(::System::IntPtr  m_pData, int32_t  m_cbSize, ::Steamworks::HSteamNetConnection  m_conn, ::Steamworks::SteamNetworkingIdentity  m_identityPeer, int64_t  m_nConnUserData, ::Steamworks::SteamNetworkingMicroseconds  m_usecTimeReceived, int64_t  m_nMessageNumber, ::System::IntPtr  m_pfnFreeData, ::System::IntPtr  m_pfnRelease, int32_t  m_nChannel, int32_t  m_nFlags, int64_t  m_nUserData, uint16_t  m_idxLane, uint16_t  _pad1__) noexcept  {
this->m_pData = m_pData;
this->m_cbSize = m_cbSize;
this->m_conn = m_conn;
this->m_identityPeer = m_identityPeer;
this->m_nConnUserData = m_nConnUserData;
this->m_usecTimeReceived = m_usecTimeReceived;
this->m_nMessageNumber = m_nMessageNumber;
this->m_pfnFreeData = m_pfnFreeData;
this->m_pfnRelease = m_pfnRelease;
this->m_nChannel = m_nChannel;
this->m_nFlags = m_nFlags;
this->m_nUserData = m_nUserData;
this->m_idxLane = m_idxLane;
this->_pad1__ = _pad1__;
}
// Ctor Parameters []
constexpr ::Steamworks::SteamNetworkingMessage_t::SteamNetworkingMessage_t()   {
}

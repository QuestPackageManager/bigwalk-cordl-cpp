#pragma once
// IWYU pragma private; include "Steamworks/SteamDatagramHostedAddress.hpp"
#include "Steamworks/zzzz__SteamDatagramHostedAddress_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamDatagramHostedAddress.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamDatagramHostedAddress::*)()>(&::Steamworks::SteamDatagramHostedAddress::Clear)> {
  constexpr static std::size_t size = 0x8d0;
  constexpr static std::size_t addrs = 0x1805aaec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamDatagramHostedAddress>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Steamworks::SteamDatagramHostedAddress::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamDatagramHostedAddress>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_cbSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SteamDatagramHostedAddress::SteamDatagramHostedAddress(int32_t  m_cbSize, ::ArrayW<uint8_t>  m_data) noexcept  {
this->m_cbSize = m_cbSize;
this->m_data = m_data;
}
// Ctor Parameters []
constexpr ::Steamworks::SteamDatagramHostedAddress::SteamDatagramHostedAddress()   {
}

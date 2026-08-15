#pragma once
// IWYU pragma private; include "Steamworks/SteamInventoryRequestPricesResult_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__SteamInventoryRequestPricesResult_t_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamInventoryRequestPricesResult_t.get_m_rgchCurrency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::SteamInventoryRequestPricesResult_t::*)()>(&::Steamworks::SteamInventoryRequestPricesResult_t::get_m_rgchCurrency)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18054f030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventoryRequestPricesResult_t>(),
                        {"get_m_rgchCurrency", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventoryRequestPricesResult_t.set_m_rgchCurrency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamInventoryRequestPricesResult_t::*)(::StringW)>(&::Steamworks::SteamInventoryRequestPricesResult_t::set_m_rgchCurrency)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1805a4b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventoryRequestPricesResult_t>(),
                        {"set_m_rgchCurrency", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Steamworks::SteamInventoryRequestPricesResult_t::get_m_rgchCurrency()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventoryRequestPricesResult_t>(),
                        {"get_m_rgchCurrency", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Steamworks::SteamInventoryRequestPricesResult_t::set_m_rgchCurrency(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventoryRequestPricesResult_t>(),
                        {"set_m_rgchCurrency", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_result", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_rgchCurrency_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SteamInventoryRequestPricesResult_t::SteamInventoryRequestPricesResult_t(::Steamworks::EResult  m_result, ::ArrayW<uint8_t>  m_rgchCurrency_) noexcept  {
this->m_result = m_result;
this->m_rgchCurrency_ = m_rgchCurrency_;
}
// Ctor Parameters []
constexpr ::Steamworks::SteamInventoryRequestPricesResult_t::SteamInventoryRequestPricesResult_t()   {
}

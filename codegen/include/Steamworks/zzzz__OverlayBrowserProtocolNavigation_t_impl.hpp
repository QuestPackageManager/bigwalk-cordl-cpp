#pragma once
// IWYU pragma private; include "Steamworks/OverlayBrowserProtocolNavigation_t.hpp"
#include "Steamworks/zzzz__OverlayBrowserProtocolNavigation_t_def.hpp"
//  Writing Method size for method: ::Steamworks::OverlayBrowserProtocolNavigation_t.get_rgchURI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::OverlayBrowserProtocolNavigation_t::*)()>(&::Steamworks::OverlayBrowserProtocolNavigation_t::get_rgchURI)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18054f850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::OverlayBrowserProtocolNavigation_t>(),
                        {"get_rgchURI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::OverlayBrowserProtocolNavigation_t.set_rgchURI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::OverlayBrowserProtocolNavigation_t::*)(::StringW)>(&::Steamworks::OverlayBrowserProtocolNavigation_t::set_rgchURI)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x18057e4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::OverlayBrowserProtocolNavigation_t>(),
                        {"set_rgchURI", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Steamworks::OverlayBrowserProtocolNavigation_t::get_rgchURI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::OverlayBrowserProtocolNavigation_t>(),
                        {"get_rgchURI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Steamworks::OverlayBrowserProtocolNavigation_t::set_rgchURI(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::OverlayBrowserProtocolNavigation_t>(),
                        {"set_rgchURI", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "rgchURI_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::OverlayBrowserProtocolNavigation_t::OverlayBrowserProtocolNavigation_t(::ArrayW<uint8_t>  rgchURI_) noexcept  {
this->rgchURI_ = rgchURI_;
}
// Ctor Parameters []
constexpr ::Steamworks::OverlayBrowserProtocolNavigation_t::OverlayBrowserProtocolNavigation_t()   {
}

#pragma once
// IWYU pragma private; include "Steamworks/GSClientDeny_t.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__EDenyReason_impl.hpp"
#include "Steamworks/zzzz__GSClientDeny_t_def.hpp"
//  Writing Method size for method: ::Steamworks::GSClientDeny_t.get_m_rgchOptionalText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::GSClientDeny_t::*)()>(&::Steamworks::GSClientDeny_t::get_m_rgchOptionalText)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18054afb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GSClientDeny_t>(),
                        {"get_m_rgchOptionalText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::GSClientDeny_t.set_m_rgchOptionalText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::GSClientDeny_t::*)(::StringW)>(&::Steamworks::GSClientDeny_t::set_m_rgchOptionalText)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x18054f0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GSClientDeny_t>(),
                        {"set_m_rgchOptionalText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Steamworks::GSClientDeny_t::get_m_rgchOptionalText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GSClientDeny_t>(),
                        {"get_m_rgchOptionalText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Steamworks::GSClientDeny_t::set_m_rgchOptionalText(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GSClientDeny_t>(),
                        {"set_m_rgchOptionalText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_SteamID", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eDenyReason", ty: "::Steamworks::EDenyReason", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_rgchOptionalText_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::GSClientDeny_t::GSClientDeny_t(::Steamworks::CSteamID  m_SteamID, ::Steamworks::EDenyReason  m_eDenyReason, ::ArrayW<uint8_t>  m_rgchOptionalText_) noexcept  {
this->m_SteamID = m_SteamID;
this->m_eDenyReason = m_eDenyReason;
this->m_rgchOptionalText_ = m_rgchOptionalText_;
}
// Ctor Parameters []
constexpr ::Steamworks::GSClientDeny_t::GSClientDeny_t()   {
}

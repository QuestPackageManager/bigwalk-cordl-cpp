#pragma once
// IWYU pragma private; include "Steamworks/GetVideoURLResult_t.hpp"
#include "Steamworks/zzzz__AppId_t_impl.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__GetVideoURLResult_t_def.hpp"
//  Writing Method size for method: ::Steamworks::GetVideoURLResult_t.get_m_rgchURL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::GetVideoURLResult_t::*)()>(&::Steamworks::GetVideoURLResult_t::get_m_rgchURL)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18054f030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GetVideoURLResult_t>(),
                        {"get_m_rgchURL", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::GetVideoURLResult_t.set_m_rgchURL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::GetVideoURLResult_t::*)(::StringW)>(&::Steamworks::GetVideoURLResult_t::set_m_rgchURL)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x18054f680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GetVideoURLResult_t>(),
                        {"set_m_rgchURL", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Steamworks::GetVideoURLResult_t::get_m_rgchURL()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GetVideoURLResult_t>(),
                        {"get_m_rgchURL", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Steamworks::GetVideoURLResult_t::set_m_rgchURL(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GetVideoURLResult_t>(),
                        {"set_m_rgchURL", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_unVideoAppID", ty: "::Steamworks::AppId_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_rgchURL_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::GetVideoURLResult_t::GetVideoURLResult_t(::Steamworks::EResult  m_eResult, ::Steamworks::AppId_t  m_unVideoAppID, ::ArrayW<uint8_t>  m_rgchURL_) noexcept  {
this->m_eResult = m_eResult;
this->m_unVideoAppID = m_unVideoAppID;
this->m_rgchURL_ = m_rgchURL_;
}
// Ctor Parameters []
constexpr ::Steamworks::GetVideoURLResult_t::GetVideoURLResult_t()   {
}

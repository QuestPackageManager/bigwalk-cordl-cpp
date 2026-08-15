#pragma once
// IWYU pragma private; include "Steamworks/SteamUGCQueryCompleted_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__UGCQueryHandle_t_impl.hpp"
#include "Steamworks/zzzz__SteamUGCQueryCompleted_t_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamUGCQueryCompleted_t.get_m_rgchNextCursor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::SteamUGCQueryCompleted_t::*)()>(&::Steamworks::SteamUGCQueryCompleted_t::get_m_rgchNextCursor)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x180552c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGCQueryCompleted_t>(),
                        {"get_m_rgchNextCursor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGCQueryCompleted_t.set_m_rgchNextCursor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamUGCQueryCompleted_t::*)(::StringW)>(&::Steamworks::SteamUGCQueryCompleted_t::set_m_rgchNextCursor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x18054f680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGCQueryCompleted_t>(),
                        {"set_m_rgchNextCursor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Steamworks::SteamUGCQueryCompleted_t::get_m_rgchNextCursor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGCQueryCompleted_t>(),
                        {"get_m_rgchNextCursor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Steamworks::SteamUGCQueryCompleted_t::set_m_rgchNextCursor(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGCQueryCompleted_t>(),
                        {"set_m_rgchNextCursor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_handle", ty: "::Steamworks::UGCQueryHandle_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_unNumResultsReturned", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_unTotalMatchingResults", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bCachedData", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_rgchNextCursor_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SteamUGCQueryCompleted_t::SteamUGCQueryCompleted_t(::Steamworks::UGCQueryHandle_t  m_handle, ::Steamworks::EResult  m_eResult, uint32_t  m_unNumResultsReturned, uint32_t  m_unTotalMatchingResults, bool  m_bCachedData, ::ArrayW<uint8_t>  m_rgchNextCursor_) noexcept  {
this->m_handle = m_handle;
this->m_eResult = m_eResult;
this->m_unNumResultsReturned = m_unNumResultsReturned;
this->m_unTotalMatchingResults = m_unTotalMatchingResults;
this->m_bCachedData = m_bCachedData;
this->m_rgchNextCursor_ = m_rgchNextCursor_;
}
// Ctor Parameters []
constexpr ::Steamworks::SteamUGCQueryCompleted_t::SteamUGCQueryCompleted_t()   {
}

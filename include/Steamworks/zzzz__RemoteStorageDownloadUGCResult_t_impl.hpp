#pragma once
// IWYU pragma private; include "Steamworks/RemoteStorageDownloadUGCResult_t.hpp"
#include "Steamworks/zzzz__AppId_t_impl.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__UGCHandle_t_impl.hpp"
#include "Steamworks/zzzz__RemoteStorageDownloadUGCResult_t_def.hpp"
//  Writing Method size for method: ::Steamworks::RemoteStorageDownloadUGCResult_t.get_m_pchFileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::RemoteStorageDownloadUGCResult_t::*)()>(&::Steamworks::RemoteStorageDownloadUGCResult_t::get_m_pchFileName)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x180552c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::RemoteStorageDownloadUGCResult_t>(),
                        {"get_m_pchFileName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::RemoteStorageDownloadUGCResult_t.set_m_pchFileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::RemoteStorageDownloadUGCResult_t::*)(::StringW)>(&::Steamworks::RemoteStorageDownloadUGCResult_t::set_m_pchFileName)> {
  constexpr static std::size_t size = 0x32a0;
  constexpr static std::size_t addrs = 0x18057e9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::RemoteStorageDownloadUGCResult_t>(),
                        {"set_m_pchFileName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Steamworks::RemoteStorageDownloadUGCResult_t::get_m_pchFileName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::RemoteStorageDownloadUGCResult_t>(),
                        {"get_m_pchFileName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Steamworks::RemoteStorageDownloadUGCResult_t::set_m_pchFileName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::RemoteStorageDownloadUGCResult_t>(),
                        {"set_m_pchFileName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_hFile", ty: "::Steamworks::UGCHandle_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nAppID", ty: "::Steamworks::AppId_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nSizeInBytes", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pchFileName_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ulSteamIDOwner", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::RemoteStorageDownloadUGCResult_t::RemoteStorageDownloadUGCResult_t(::Steamworks::EResult  m_eResult, ::Steamworks::UGCHandle_t  m_hFile, ::Steamworks::AppId_t  m_nAppID, int32_t  m_nSizeInBytes, ::ArrayW<uint8_t>  m_pchFileName_, uint64_t  m_ulSteamIDOwner) noexcept  {
this->m_eResult = m_eResult;
this->m_hFile = m_hFile;
this->m_nAppID = m_nAppID;
this->m_nSizeInBytes = m_nSizeInBytes;
this->m_pchFileName_ = m_pchFileName_;
this->m_ulSteamIDOwner = m_ulSteamIDOwner;
}
// Ctor Parameters []
constexpr ::Steamworks::RemoteStorageDownloadUGCResult_t::RemoteStorageDownloadUGCResult_t()   {
}

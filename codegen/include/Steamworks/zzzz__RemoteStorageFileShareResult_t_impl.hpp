#pragma once
// IWYU pragma private; include "Steamworks/RemoteStorageFileShareResult_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__UGCHandle_t_impl.hpp"
#include "Steamworks/zzzz__RemoteStorageFileShareResult_t_def.hpp"
//  Writing Method size for method: ::Steamworks::RemoteStorageFileShareResult_t.get_m_rgchFilename
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::RemoteStorageFileShareResult_t::*)()>(&::Steamworks::RemoteStorageFileShareResult_t::get_m_rgchFilename)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18054afb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::RemoteStorageFileShareResult_t>(),
                        {"get_m_rgchFilename", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::RemoteStorageFileShareResult_t.set_m_rgchFilename
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::RemoteStorageFileShareResult_t::*)(::StringW)>(&::Steamworks::RemoteStorageFileShareResult_t::set_m_rgchFilename)> {
  constexpr static std::size_t size = 0x32a0;
  constexpr static std::size_t addrs = 0x18057e9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::RemoteStorageFileShareResult_t>(),
                        {"set_m_rgchFilename", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Steamworks::RemoteStorageFileShareResult_t::get_m_rgchFilename()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::RemoteStorageFileShareResult_t>(),
                        {"get_m_rgchFilename", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Steamworks::RemoteStorageFileShareResult_t::set_m_rgchFilename(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::RemoteStorageFileShareResult_t>(),
                        {"set_m_rgchFilename", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_hFile", ty: "::Steamworks::UGCHandle_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_rgchFilename_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::RemoteStorageFileShareResult_t::RemoteStorageFileShareResult_t(::Steamworks::EResult  m_eResult, ::Steamworks::UGCHandle_t  m_hFile, ::ArrayW<uint8_t>  m_rgchFilename_) noexcept  {
this->m_eResult = m_eResult;
this->m_hFile = m_hFile;
this->m_rgchFilename_ = m_rgchFilename_;
}
// Ctor Parameters []
constexpr ::Steamworks::RemoteStorageFileShareResult_t::RemoteStorageFileShareResult_t()   {
}

#pragma once
// IWYU pragma private; include "Epic/OnlineServices/TitleStorage/FileMetadataInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__FileMetadataInternal_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__FileMetadata_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::FileMetadataInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::TitleStorage::FileMetadataInternal::*)(::by_ref<::Epic::OnlineServices::TitleStorage::FileMetadata>)>(&::Epic::OnlineServices::TitleStorage::FileMetadataInternal::Get)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1804d8ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::FileMetadataInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::FileMetadata>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::TitleStorage::FileMetadataInternal::Get(::by_ref<::Epic::OnlineServices::TitleStorage::FileMetadata>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::FileMetadataInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::FileMetadata>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::TitleStorage::FileMetadata>"
constexpr  Epic::OnlineServices::TitleStorage::FileMetadataInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::TitleStorage::FileMetadata>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::TitleStorage::FileMetadata>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::TitleStorage::FileMetadata>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::TitleStorage::FileMetadata>* Epic::OnlineServices::TitleStorage::FileMetadataInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__TitleStorage__FileMetadata_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::TitleStorage::FileMetadata>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FileSizeBytes", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MD5Hash", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Filename", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UnencryptedDataSizeBytes", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::TitleStorage::FileMetadataInternal::FileMetadataInternal(int32_t  m_ApiVersion, uint32_t  m_FileSizeBytes, ::System::IntPtr  m_MD5Hash, ::System::IntPtr  m_Filename, uint32_t  m_UnencryptedDataSizeBytes) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_FileSizeBytes = m_FileSizeBytes;
this->m_MD5Hash = m_MD5Hash;
this->m_Filename = m_Filename;
this->m_UnencryptedDataSizeBytes = m_UnencryptedDataSizeBytes;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::TitleStorage::FileMetadataInternal::FileMetadataInternal()   {
}

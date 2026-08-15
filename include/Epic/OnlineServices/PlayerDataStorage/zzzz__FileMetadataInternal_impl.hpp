#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/FileMetadataInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__FileMetadataInternal_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__FileMetadata_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::FileMetadataInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::PlayerDataStorage::FileMetadataInternal::*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::FileMetadata>)>(&::Epic::OnlineServices::PlayerDataStorage::FileMetadataInternal::Get)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1804f7690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::FileMetadataInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::FileMetadata>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::PlayerDataStorage::FileMetadataInternal::Get(::by_ref<::Epic::OnlineServices::PlayerDataStorage::FileMetadata>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::FileMetadataInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::FileMetadata>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::PlayerDataStorage::FileMetadata>"
constexpr  Epic::OnlineServices::PlayerDataStorage::FileMetadataInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::PlayerDataStorage::FileMetadata>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::PlayerDataStorage::FileMetadata>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::PlayerDataStorage::FileMetadata>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::PlayerDataStorage::FileMetadata>* Epic::OnlineServices::PlayerDataStorage::FileMetadataInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__PlayerDataStorage__FileMetadata_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::PlayerDataStorage::FileMetadata>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FileSizeBytes", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MD5Hash", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Filename", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LastModifiedTime", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UnencryptedDataSizeBytes", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::PlayerDataStorage::FileMetadataInternal::FileMetadataInternal(int32_t  m_ApiVersion, uint32_t  m_FileSizeBytes, ::System::IntPtr  m_MD5Hash, ::System::IntPtr  m_Filename, int64_t  m_LastModifiedTime, uint32_t  m_UnencryptedDataSizeBytes) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_FileSizeBytes = m_FileSizeBytes;
this->m_MD5Hash = m_MD5Hash;
this->m_Filename = m_Filename;
this->m_LastModifiedTime = m_LastModifiedTime;
this->m_UnencryptedDataSizeBytes = m_UnencryptedDataSizeBytes;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::PlayerDataStorage::FileMetadataInternal::FileMetadataInternal()   {
}

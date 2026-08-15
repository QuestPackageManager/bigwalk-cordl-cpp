#pragma once
// IWYU pragma private; include "Epic/OnlineServices/TitleStorage/CopyFileMetadataByFilenameOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__CopyFileMetadataByFilenameOptionsInternal_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__CopyFileMetadataByFilenameOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptionsInternal::*)(::by_ref<::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptions>)>(&::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1804d7930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptionsInternal::*)()>(&::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804d7440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptionsInternal::Set(::by_ref<::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptions>"
constexpr  Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptions>* Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__TitleStorage__CopyFileMetadataByFilenameOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Filename", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptionsInternal::CopyFileMetadataByFilenameOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_Filename) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_Filename = m_Filename;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptionsInternal::CopyFileMetadataByFilenameOptionsInternal()   {
}

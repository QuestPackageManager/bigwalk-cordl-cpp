#pragma once
// IWYU pragma private; include "Epic/OnlineServices/TitleStorage/GetFileMetadataCountOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__GetFileMetadataCountOptionsInternal_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__GetFileMetadataCountOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptionsInternal::*)(::by_ref<::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptions>)>(&::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1804d7ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptionsInternal::*)()>(&::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804d7300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptionsInternal::Set(::by_ref<::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptions>"
constexpr  Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptions>* Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__TitleStorage__GetFileMetadataCountOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptionsInternal::GetFileMetadataCountOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptionsInternal::GetFileMetadataCountOptionsInternal()   {
}

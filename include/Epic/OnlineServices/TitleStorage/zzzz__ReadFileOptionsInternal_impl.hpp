#pragma once
// IWYU pragma private; include "Epic/OnlineServices/TitleStorage/ReadFileOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__ReadFileOptionsInternal_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__ReadFileOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::ReadFileOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::TitleStorage::ReadFileOptionsInternal::*)(::by_ref<::Epic::OnlineServices::TitleStorage::ReadFileOptions>)>(&::Epic::OnlineServices::TitleStorage::ReadFileOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x1804e07f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::ReadFileOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::ReadFileOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::ReadFileOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::TitleStorage::ReadFileOptionsInternal::*)()>(&::Epic::OnlineServices::TitleStorage::ReadFileOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804d7440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::ReadFileOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::TitleStorage::ReadFileOptionsInternal::Set(::by_ref<::Epic::OnlineServices::TitleStorage::ReadFileOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::ReadFileOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::ReadFileOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::TitleStorage::ReadFileOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::ReadFileOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::TitleStorage::ReadFileOptions>"
constexpr  Epic::OnlineServices::TitleStorage::ReadFileOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::TitleStorage::ReadFileOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::TitleStorage::ReadFileOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::TitleStorage::ReadFileOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::TitleStorage::ReadFileOptions>* Epic::OnlineServices::TitleStorage::ReadFileOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__TitleStorage__ReadFileOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::TitleStorage::ReadFileOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::TitleStorage::ReadFileOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::TitleStorage::ReadFileOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Filename", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ReadChunkLengthBytes", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ReadFileDataCallback", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FileTransferProgressCallback", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::TitleStorage::ReadFileOptionsInternal::ReadFileOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_Filename, uint32_t  m_ReadChunkLengthBytes, ::System::IntPtr  m_ReadFileDataCallback, ::System::IntPtr  m_FileTransferProgressCallback) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_Filename = m_Filename;
this->m_ReadChunkLengthBytes = m_ReadChunkLengthBytes;
this->m_ReadFileDataCallback = m_ReadFileDataCallback;
this->m_FileTransferProgressCallback = m_FileTransferProgressCallback;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::TitleStorage::ReadFileOptionsInternal::ReadFileOptionsInternal()   {
}

#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/DuplicateFileOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__DuplicateFileOptionsInternal_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__DuplicateFileOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptionsInternal::*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptions>)>(&::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804f7510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptionsInternal::*)()>(&::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804f1b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptionsInternal::Set(::by_ref<::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptions>"
constexpr  Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptions>* Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__PlayerDataStorage__DuplicateFileOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SourceFilename", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DestinationFilename", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptionsInternal::DuplicateFileOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_SourceFilename, ::System::IntPtr  m_DestinationFilename) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_SourceFilename = m_SourceFilename;
this->m_DestinationFilename = m_DestinationFilename;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptionsInternal::DuplicateFileOptionsInternal()   {
}

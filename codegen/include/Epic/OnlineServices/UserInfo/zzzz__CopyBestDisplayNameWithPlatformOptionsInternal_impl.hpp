#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UserInfo/CopyBestDisplayNameWithPlatformOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__CopyBestDisplayNameWithPlatformOptionsInternal_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__CopyBestDisplayNameWithPlatformOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptionsInternal::*)(::by_ref<::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptions>)>(&::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1804d7570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptionsInternal::*)()>(&::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804d7440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptionsInternal::Set(::by_ref<::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptions>"
constexpr  Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptions>* Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__UserInfo__CopyBestDisplayNameWithPlatformOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TargetPlatformType", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptionsInternal::CopyBestDisplayNameWithPlatformOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_TargetUserId, uint32_t  m_TargetPlatformType) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_TargetUserId = m_TargetUserId;
this->m_TargetPlatformType = m_TargetPlatformType;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptionsInternal::CopyBestDisplayNameWithPlatformOptionsInternal()   {
}

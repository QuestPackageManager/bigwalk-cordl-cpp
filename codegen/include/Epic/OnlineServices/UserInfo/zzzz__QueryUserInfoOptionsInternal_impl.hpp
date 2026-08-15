#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UserInfo/QueryUserInfoOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__QueryUserInfoOptionsInternal_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__QueryUserInfoOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::QueryUserInfoOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UserInfo::QueryUserInfoOptionsInternal::*)(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoOptions>)>(&::Epic::OnlineServices::UserInfo::QueryUserInfoOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1804d74a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::QueryUserInfoOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::QueryUserInfoOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UserInfo::QueryUserInfoOptionsInternal::*)()>(&::Epic::OnlineServices::UserInfo::QueryUserInfoOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804d7440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::QueryUserInfoOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::UserInfo::QueryUserInfoOptionsInternal::Set(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::QueryUserInfoOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::UserInfo::QueryUserInfoOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::QueryUserInfoOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UserInfo::QueryUserInfoOptions>"
constexpr  Epic::OnlineServices::UserInfo::QueryUserInfoOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UserInfo::QueryUserInfoOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UserInfo::QueryUserInfoOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UserInfo::QueryUserInfoOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UserInfo::QueryUserInfoOptions>* Epic::OnlineServices::UserInfo::QueryUserInfoOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__UserInfo__QueryUserInfoOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UserInfo::QueryUserInfoOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::UserInfo::QueryUserInfoOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::UserInfo::QueryUserInfoOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::UserInfo::QueryUserInfoOptionsInternal::QueryUserInfoOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_TargetUserId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_TargetUserId = m_TargetUserId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UserInfo::QueryUserInfoOptionsInternal::QueryUserInfoOptionsInternal()   {
}

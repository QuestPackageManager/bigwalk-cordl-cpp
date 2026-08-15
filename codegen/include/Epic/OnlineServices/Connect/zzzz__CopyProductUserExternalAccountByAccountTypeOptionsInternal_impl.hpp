#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/CopyProductUserExternalAccountByAccountTypeOptionsInternal.hpp"
#include "Epic/OnlineServices/zzzz__ExternalAccountType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Connect/zzzz__CopyProductUserExternalAccountByAccountTypeOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__CopyProductUserExternalAccountByAccountTypeOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptions>)>(&::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804e72b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptionsInternal::*)()>(&::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptions>"
constexpr  Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptions>* Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Connect__CopyProductUserExternalAccountByAccountTypeOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AccountIdType", ty: "::Epic::OnlineServices::ExternalAccountType", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptionsInternal::CopyProductUserExternalAccountByAccountTypeOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_TargetUserId, ::Epic::OnlineServices::ExternalAccountType  m_AccountIdType) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_TargetUserId = m_TargetUserId;
this->m_AccountIdType = m_AccountIdType;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptionsInternal::CopyProductUserExternalAccountByAccountTypeOptionsInternal()   {
}

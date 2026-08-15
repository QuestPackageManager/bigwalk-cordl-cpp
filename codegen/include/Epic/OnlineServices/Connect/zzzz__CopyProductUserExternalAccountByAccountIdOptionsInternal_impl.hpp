#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/CopyProductUserExternalAccountByAccountIdOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Connect/zzzz__CopyProductUserExternalAccountByAccountIdOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__CopyProductUserExternalAccountByAccountIdOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions>)>(&::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1804e6900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptionsInternal::*)()>(&::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions>"
constexpr  Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions>* Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Connect__CopyProductUserExternalAccountByAccountIdOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AccountId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptionsInternal::CopyProductUserExternalAccountByAccountIdOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_TargetUserId, ::System::IntPtr  m_AccountId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_TargetUserId = m_TargetUserId;
this->m_AccountId = m_AccountId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptionsInternal::CopyProductUserExternalAccountByAccountIdOptionsInternal()   {
}

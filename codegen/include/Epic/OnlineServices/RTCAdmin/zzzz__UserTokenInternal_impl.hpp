#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAdmin/UserTokenInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__UserTokenInternal_def.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__UserToken_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::UserTokenInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAdmin::UserTokenInternal::*)(::by_ref<::Epic::OnlineServices::RTCAdmin::UserToken>)>(&::Epic::OnlineServices::RTCAdmin::UserTokenInternal::Get)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805033f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::UserTokenInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAdmin::UserToken>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAdmin::UserTokenInternal::Get(::by_ref<::Epic::OnlineServices::RTCAdmin::UserToken>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::UserTokenInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAdmin::UserToken>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAdmin::UserToken>"
constexpr  Epic::OnlineServices::RTCAdmin::UserTokenInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAdmin::UserToken>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAdmin::UserToken>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAdmin::UserToken>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAdmin::UserToken>* Epic::OnlineServices::RTCAdmin::UserTokenInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__RTCAdmin__UserToken_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAdmin::UserToken>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ProductUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Token", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTCAdmin::UserTokenInternal::UserTokenInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_ProductUserId, ::System::IntPtr  m_Token) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_ProductUserId = m_ProductUserId;
this->m_Token = m_Token;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAdmin::UserTokenInternal::UserTokenInternal()   {
}

#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/AccountFeatureRestrictedInfoInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__AccountFeatureRestrictedInfoInternal_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__AccountFeatureRestrictedInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfoInternal::*)(::by_ref<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo>)>(&::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfoInternal::Get)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18051ebc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Auth::AccountFeatureRestrictedInfoInternal::Get(::by_ref<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo>"
constexpr  Epic::OnlineServices::Auth::AccountFeatureRestrictedInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo>* Epic::OnlineServices::Auth::AccountFeatureRestrictedInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Auth__AccountFeatureRestrictedInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_VerificationURI", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfoInternal::AccountFeatureRestrictedInfoInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_VerificationURI) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_VerificationURI = m_VerificationURI;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfoInternal::AccountFeatureRestrictedInfoInternal()   {
}

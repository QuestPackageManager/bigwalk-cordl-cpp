#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/PinGrantInfoInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__PinGrantInfoInternal_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__PinGrantInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Auth::PinGrantInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::PinGrantInfoInternal::*)(::by_ref<::Epic::OnlineServices::Auth::PinGrantInfo>)>(&::Epic::OnlineServices::Auth::PinGrantInfoInternal::Get)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18052b1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::PinGrantInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::PinGrantInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Auth::PinGrantInfoInternal::Get(::by_ref<::Epic::OnlineServices::Auth::PinGrantInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::PinGrantInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::PinGrantInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::PinGrantInfo>"
constexpr  Epic::OnlineServices::Auth::PinGrantInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::PinGrantInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::PinGrantInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::PinGrantInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::PinGrantInfo>* Epic::OnlineServices::Auth::PinGrantInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Auth__PinGrantInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::PinGrantInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UserCode", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_VerificationURI", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ExpiresIn", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_VerificationURIComplete", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Auth::PinGrantInfoInternal::PinGrantInfoInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_UserCode, ::System::IntPtr  m_VerificationURI, int32_t  m_ExpiresIn, ::System::IntPtr  m_VerificationURIComplete) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_UserCode = m_UserCode;
this->m_VerificationURI = m_VerificationURI;
this->m_ExpiresIn = m_ExpiresIn;
this->m_VerificationURIComplete = m_VerificationURIComplete;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::PinGrantInfoInternal::PinGrantInfoInternal()   {
}

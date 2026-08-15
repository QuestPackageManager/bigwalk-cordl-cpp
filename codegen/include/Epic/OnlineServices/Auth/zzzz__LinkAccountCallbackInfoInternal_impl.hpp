#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/LinkAccountCallbackInfoInternal.hpp"
#include "Epic/OnlineServices/zzzz__Result_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LinkAccountCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LinkAccountCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LinkAccountCallbackInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::Auth::LinkAccountCallbackInfoInternal::*)()>(&::Epic::OnlineServices::Auth::LinkAccountCallbackInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LinkAccountCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LinkAccountCallbackInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::LinkAccountCallbackInfoInternal::*)(::by_ref<::Epic::OnlineServices::Auth::LinkAccountCallbackInfo>)>(&::Epic::OnlineServices::Auth::LinkAccountCallbackInfoInternal::Get)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1805248d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LinkAccountCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::LinkAccountCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::Auth::LinkAccountCallbackInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LinkAccountCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Auth::LinkAccountCallbackInfoInternal::Get(::by_ref<::Epic::OnlineServices::Auth::LinkAccountCallbackInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LinkAccountCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::LinkAccountCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::Auth::LinkAccountCallbackInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::Auth::LinkAccountCallbackInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::LinkAccountCallbackInfo>"
constexpr  Epic::OnlineServices::Auth::LinkAccountCallbackInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::LinkAccountCallbackInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::LinkAccountCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::LinkAccountCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::LinkAccountCallbackInfo>* Epic::OnlineServices::Auth::LinkAccountCallbackInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Auth__LinkAccountCallbackInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::LinkAccountCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ResultCode", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PinGrantInfo", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SelectedAccountId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Auth::LinkAccountCallbackInfoInternal::LinkAccountCallbackInfoInternal(::Epic::OnlineServices::Result  m_ResultCode, ::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_PinGrantInfo, ::System::IntPtr  m_SelectedAccountId) noexcept  {
this->m_ResultCode = m_ResultCode;
this->m_ClientData = m_ClientData;
this->m_LocalUserId = m_LocalUserId;
this->m_PinGrantInfo = m_PinGrantInfo;
this->m_SelectedAccountId = m_SelectedAccountId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::LinkAccountCallbackInfoInternal::LinkAccountCallbackInfoInternal()   {
}

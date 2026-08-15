#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/OnSetOutputDeviceSettingsCallbackInfoInternal.hpp"
#include "Epic/OnlineServices/zzzz__Result_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnSetOutputDeviceSettingsCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnSetOutputDeviceSettingsCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInfoInternal::*)()>(&::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInfoInternal::*)(::by_ref<::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInfo>)>(&::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInfoInternal::Get)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804e7330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInfoInternal::Get(::by_ref<::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInfo>"
constexpr  Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInfo>* Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__RTCAudio__OnSetOutputDeviceSettingsCallbackInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ResultCode", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RealDeviceId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInfoInternal::OnSetOutputDeviceSettingsCallbackInfoInternal(::Epic::OnlineServices::Result  m_ResultCode, ::System::IntPtr  m_ClientData, ::System::IntPtr  m_RealDeviceId) noexcept  {
this->m_ResultCode = m_ResultCode;
this->m_ClientData = m_ClientData;
this->m_RealDeviceId = m_RealDeviceId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInfoInternal::OnSetOutputDeviceSettingsCallbackInfoInternal()   {
}

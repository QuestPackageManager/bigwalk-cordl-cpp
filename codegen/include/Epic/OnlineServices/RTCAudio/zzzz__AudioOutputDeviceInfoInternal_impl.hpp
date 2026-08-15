#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/AudioOutputDeviceInfoInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__AudioOutputDeviceInfoInternal_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__AudioOutputDeviceInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfoInternal::*)(::by_ref<::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo>)>(&::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfoInternal::Get)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1804e7090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfoInternal::Get(::by_ref<::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo>"
constexpr  Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo>* Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__RTCAudio__AudioOutputDeviceInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DefaultDevice", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DeviceId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DeviceName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfoInternal::AudioOutputDeviceInfoInternal(int32_t  m_ApiVersion, int32_t  m_DefaultDevice, ::System::IntPtr  m_DeviceId, ::System::IntPtr  m_DeviceName) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_DefaultDevice = m_DefaultDevice;
this->m_DeviceId = m_DeviceId;
this->m_DeviceName = m_DeviceName;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfoInternal::AudioOutputDeviceInfoInternal()   {
}

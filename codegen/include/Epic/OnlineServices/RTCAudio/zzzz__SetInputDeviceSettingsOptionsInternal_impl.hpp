#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/SetInputDeviceSettingsOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__SetInputDeviceSettingsOptionsInternal_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__SetInputDeviceSettingsOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptionsInternal::*)(::by_ref<::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptions>)>(&::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804e6850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptionsInternal::*)()>(&::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptionsInternal::Set(::by_ref<::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptions>"
constexpr  Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptions>* Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__RTCAudio__SetInputDeviceSettingsOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RealDeviceId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PlatformAEC", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptionsInternal::SetInputDeviceSettingsOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_RealDeviceId, int32_t  m_PlatformAEC) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_RealDeviceId = m_RealDeviceId;
this->m_PlatformAEC = m_PlatformAEC;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptionsInternal::SetInputDeviceSettingsOptionsInternal()   {
}

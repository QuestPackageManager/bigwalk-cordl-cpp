#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/SetAudioInputSettingsOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__SetAudioInputSettingsOptionsInternal_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__SetAudioInputSettingsOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptionsInternal::*)(::by_ref<::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptions>)>(&::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805026f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptionsInternal::*)()>(&::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptionsInternal::Set(::by_ref<::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptions>"
constexpr  Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptions>* Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__RTCAudio__SetAudioInputSettingsOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DeviceId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Volume", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PlatformAEC", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptionsInternal::SetAudioInputSettingsOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_DeviceId, float_t  m_Volume, int32_t  m_PlatformAEC) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_DeviceId = m_DeviceId;
this->m_Volume = m_Volume;
this->m_PlatformAEC = m_PlatformAEC;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptionsInternal::SetAudioInputSettingsOptionsInternal()   {
}

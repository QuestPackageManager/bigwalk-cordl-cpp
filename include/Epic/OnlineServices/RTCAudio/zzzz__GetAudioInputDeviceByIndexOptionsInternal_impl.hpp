#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/GetAudioInputDeviceByIndexOptionsInternal.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__GetAudioInputDeviceByIndexOptionsInternal_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__GetAudioInputDeviceByIndexOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptionsInternal::*)(::by_ref<::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptions>)>(&::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804bdbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptionsInternal::*)()>(&::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptionsInternal::Set(::by_ref<::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptions>"
constexpr  Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptions>* Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__RTCAudio__GetAudioInputDeviceByIndexOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DeviceInfoIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptionsInternal::GetAudioInputDeviceByIndexOptionsInternal(int32_t  m_ApiVersion, uint32_t  m_DeviceInfoIndex) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_DeviceInfoIndex = m_DeviceInfoIndex;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptionsInternal::GetAudioInputDeviceByIndexOptionsInternal()   {
}

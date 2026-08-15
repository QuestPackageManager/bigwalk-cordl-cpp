#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/AddNotifyAudioDevicesChangedOptionsInternal.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__AddNotifyAudioDevicesChangedOptionsInternal_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__AddNotifyAudioDevicesChangedOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptionsInternal::*)(::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptions>)>(&::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804bdbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptionsInternal::*)()>(&::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptionsInternal::Set(::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptions>"
constexpr  Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptions>* Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__RTCAudio__AddNotifyAudioDevicesChangedOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptionsInternal::AddNotifyAudioDevicesChangedOptionsInternal(int32_t  m_ApiVersion) noexcept  {
this->m_ApiVersion = m_ApiVersion;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptionsInternal::AddNotifyAudioDevicesChangedOptionsInternal()   {
}

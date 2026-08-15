#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/UnregisterPlatformAudioUserOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__UnregisterPlatformAudioUserOptionsInternal_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__UnregisterPlatformAudioUserOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptionsInternal::*)(::by_ref<::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptions>)>(&::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804f0f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptionsInternal::*)()>(&::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptionsInternal::Set(::by_ref<::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptions>"
constexpr  Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptions>* Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__RTCAudio__UnregisterPlatformAudioUserOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptionsInternal::UnregisterPlatformAudioUserOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_UserId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_UserId = m_UserId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptionsInternal::UnregisterPlatformAudioUserOptionsInternal()   {
}

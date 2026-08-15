#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/WindowsRTCOptionsPlatformSpecificOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Platform/zzzz__WindowsRTCOptionsPlatformSpecificOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Platform/zzzz__WindowsRTCOptionsPlatformSpecificOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions>)>(&::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804f0f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptionsInternal::*)()>(&::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions>"
constexpr  Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions>* Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Platform__WindowsRTCOptionsPlatformSpecificOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_XAudio29DllPath", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptionsInternal::WindowsRTCOptionsPlatformSpecificOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_XAudio29DllPath) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_XAudio29DllPath = m_XAudio29DllPath;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptionsInternal::WindowsRTCOptionsPlatformSpecificOptionsInternal()   {
}

#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/WindowsRTCOptionsInternal.hpp"
#include "Epic/OnlineServices/Platform/zzzz__RTCBackgroundMode_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Platform/zzzz__WindowsRTCOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Platform/zzzz__WindowsRTCOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Platform::WindowsRTCOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::WindowsRTCOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Platform::WindowsRTCOptions>)>(&::Epic::OnlineServices::Platform::WindowsRTCOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x180503760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::WindowsRTCOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Platform::WindowsRTCOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::WindowsRTCOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::WindowsRTCOptionsInternal::*)()>(&::Epic::OnlineServices::Platform::WindowsRTCOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e7630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::WindowsRTCOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Platform::WindowsRTCOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Platform::WindowsRTCOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::WindowsRTCOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Platform::WindowsRTCOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Platform::WindowsRTCOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::WindowsRTCOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::WindowsRTCOptions>"
constexpr  Epic::OnlineServices::Platform::WindowsRTCOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::WindowsRTCOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::WindowsRTCOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::WindowsRTCOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::WindowsRTCOptions>* Epic::OnlineServices::Platform::WindowsRTCOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Platform__WindowsRTCOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::WindowsRTCOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Platform::WindowsRTCOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Platform::WindowsRTCOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PlatformSpecificOptions", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BackgroundMode", ty: "::Epic::OnlineServices::Platform::RTCBackgroundMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Reserved", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Platform::WindowsRTCOptionsInternal::WindowsRTCOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_PlatformSpecificOptions, ::Epic::OnlineServices::Platform::RTCBackgroundMode  m_BackgroundMode, ::System::IntPtr  m_Reserved) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_PlatformSpecificOptions = m_PlatformSpecificOptions;
this->m_BackgroundMode = m_BackgroundMode;
this->m_Reserved = m_Reserved;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Platform::WindowsRTCOptionsInternal::WindowsRTCOptionsInternal()   {
}

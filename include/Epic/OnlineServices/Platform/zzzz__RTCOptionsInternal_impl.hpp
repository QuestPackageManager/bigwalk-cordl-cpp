#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/RTCOptionsInternal.hpp"
#include "Epic/OnlineServices/Platform/zzzz__RTCBackgroundMode_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Platform/zzzz__RTCOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Platform/zzzz__RTCOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Platform::RTCOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::RTCOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Platform::RTCOptions>)>(&::Epic::OnlineServices::Platform::RTCOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180501de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::RTCOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Platform::RTCOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::RTCOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::RTCOptionsInternal::*)()>(&::Epic::OnlineServices::Platform::RTCOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e7630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::RTCOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Platform::RTCOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Platform::RTCOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::RTCOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Platform::RTCOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Platform::RTCOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::RTCOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::RTCOptions>"
constexpr  Epic::OnlineServices::Platform::RTCOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::RTCOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::RTCOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::RTCOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::RTCOptions>* Epic::OnlineServices::Platform::RTCOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Platform__RTCOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::RTCOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Platform::RTCOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Platform::RTCOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PlatformSpecificOptions", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BackgroundMode", ty: "::Epic::OnlineServices::Platform::RTCBackgroundMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Reserved", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Platform::RTCOptionsInternal::RTCOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_PlatformSpecificOptions, ::Epic::OnlineServices::Platform::RTCBackgroundMode  m_BackgroundMode, ::System::IntPtr  m_Reserved) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_PlatformSpecificOptions = m_PlatformSpecificOptions;
this->m_BackgroundMode = m_BackgroundMode;
this->m_Reserved = m_Reserved;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Platform::RTCOptionsInternal::RTCOptionsInternal()   {
}

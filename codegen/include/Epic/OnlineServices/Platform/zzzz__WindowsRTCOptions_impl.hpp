#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/WindowsRTCOptions.hpp"
#include "Epic/OnlineServices/Platform/zzzz__RTCBackgroundMode_impl.hpp"
#include "Epic/OnlineServices/Platform/zzzz__WindowsRTCOptionsPlatformSpecificOptions_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Epic/OnlineServices/Platform/zzzz__WindowsRTCOptions_def.hpp"
#include "Epic/OnlineServices/Platform/zzzz__RTCBackgroundMode_def.hpp"
#include "Epic/OnlineServices/Platform/zzzz__WindowsRTCOptionsPlatformSpecificOptions_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Platform::WindowsRTCOptions.get_PlatformSpecificOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions> (::Epic::OnlineServices::Platform::WindowsRTCOptions::*)()>(&::Epic::OnlineServices::Platform::WindowsRTCOptions::get_PlatformSpecificOptions)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f6880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::WindowsRTCOptions>(),
                        {"get_PlatformSpecificOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::WindowsRTCOptions.set_PlatformSpecificOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::WindowsRTCOptions::*)(::System::Nullable_1<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions>)>(&::Epic::OnlineServices::Platform::WindowsRTCOptions::set_PlatformSpecificOptions)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804f6890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::WindowsRTCOptions>(),
                        {"set_PlatformSpecificOptions", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::WindowsRTCOptions.get_BackgroundMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Platform::RTCBackgroundMode (::Epic::OnlineServices::Platform::WindowsRTCOptions::*)()>(&::Epic::OnlineServices::Platform::WindowsRTCOptions::get_BackgroundMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::WindowsRTCOptions>(),
                        {"get_BackgroundMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::WindowsRTCOptions.set_BackgroundMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::WindowsRTCOptions::*)(::Epic::OnlineServices::Platform::RTCBackgroundMode)>(&::Epic::OnlineServices::Platform::WindowsRTCOptions::set_BackgroundMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::WindowsRTCOptions>(),
                        {"set_BackgroundMode", {}, {::i2c::type_of<::Epic::OnlineServices::Platform::RTCBackgroundMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::WindowsRTCOptions.get_Reserved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::Platform::WindowsRTCOptions::*)()>(&::Epic::OnlineServices::Platform::WindowsRTCOptions::get_Reserved)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::WindowsRTCOptions>(),
                        {"get_Reserved", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::WindowsRTCOptions.set_Reserved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::WindowsRTCOptions::*)(::System::IntPtr)>(&::Epic::OnlineServices::Platform::WindowsRTCOptions::set_Reserved)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bda70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::WindowsRTCOptions>(),
                        {"set_Reserved", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Nullable_1<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions> Epic::OnlineServices::Platform::WindowsRTCOptions::get_PlatformSpecificOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::WindowsRTCOptions>(),
                        {"get_PlatformSpecificOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Platform::WindowsRTCOptions::set_PlatformSpecificOptions(::System::Nullable_1<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::WindowsRTCOptions>(),
                        {"set_PlatformSpecificOptions", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Platform::RTCBackgroundMode Epic::OnlineServices::Platform::WindowsRTCOptions::get_BackgroundMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::WindowsRTCOptions>(),
                        {"get_BackgroundMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Platform::RTCBackgroundMode>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Platform::WindowsRTCOptions::set_BackgroundMode(::Epic::OnlineServices::Platform::RTCBackgroundMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::WindowsRTCOptions>(),
                        {"set_BackgroundMode", {}, {::i2c::type_of<::Epic::OnlineServices::Platform::RTCBackgroundMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::IntPtr Epic::OnlineServices::Platform::WindowsRTCOptions::get_Reserved()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::WindowsRTCOptions>(),
                        {"get_Reserved", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Platform::WindowsRTCOptions::set_Reserved(::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::WindowsRTCOptions>(),
                        {"set_Reserved", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_PlatformSpecificOptions_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_BackgroundMode_k__BackingField", ty: "::Epic::OnlineServices::Platform::RTCBackgroundMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Reserved_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Platform::WindowsRTCOptions::WindowsRTCOptions(::System::Nullable_1<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions>  _PlatformSpecificOptions_k__BackingField, ::Epic::OnlineServices::Platform::RTCBackgroundMode  _BackgroundMode_k__BackingField, ::System::IntPtr  _Reserved_k__BackingField) noexcept  {
this->_PlatformSpecificOptions_k__BackingField = _PlatformSpecificOptions_k__BackingField;
this->_BackgroundMode_k__BackingField = _BackgroundMode_k__BackingField;
this->_Reserved_k__BackingField = _Reserved_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Platform::WindowsRTCOptions::WindowsRTCOptions()   {
}

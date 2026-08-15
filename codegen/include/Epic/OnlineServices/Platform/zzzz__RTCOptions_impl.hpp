#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/RTCOptions.hpp"
#include "Epic/OnlineServices/Platform/zzzz__RTCBackgroundMode_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Platform/zzzz__RTCOptions_def.hpp"
#include "Epic/OnlineServices/Platform/zzzz__RTCBackgroundMode_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Platform::RTCOptions.get_PlatformSpecificOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::Platform::RTCOptions::*)()>(&::Epic::OnlineServices::Platform::RTCOptions::get_PlatformSpecificOptions)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::RTCOptions>(),
                        {"get_PlatformSpecificOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::RTCOptions.set_PlatformSpecificOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::RTCOptions::*)(::System::IntPtr)>(&::Epic::OnlineServices::Platform::RTCOptions::set_PlatformSpecificOptions)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::RTCOptions>(),
                        {"set_PlatformSpecificOptions", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::RTCOptions.get_BackgroundMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Platform::RTCBackgroundMode (::Epic::OnlineServices::Platform::RTCOptions::*)()>(&::Epic::OnlineServices::Platform::RTCOptions::get_BackgroundMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::RTCOptions>(),
                        {"get_BackgroundMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::RTCOptions.set_BackgroundMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::RTCOptions::*)(::Epic::OnlineServices::Platform::RTCBackgroundMode)>(&::Epic::OnlineServices::Platform::RTCOptions::set_BackgroundMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::RTCOptions>(),
                        {"set_BackgroundMode", {}, {::i2c::type_of<::Epic::OnlineServices::Platform::RTCBackgroundMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::RTCOptions.get_Reserved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::Platform::RTCOptions::*)()>(&::Epic::OnlineServices::Platform::RTCOptions::get_Reserved)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::RTCOptions>(),
                        {"get_Reserved", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::RTCOptions.set_Reserved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::RTCOptions::*)(::System::IntPtr)>(&::Epic::OnlineServices::Platform::RTCOptions::set_Reserved)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bda40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::RTCOptions>(),
                        {"set_Reserved", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::Platform::RTCOptions::get_PlatformSpecificOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::RTCOptions>(),
                        {"get_PlatformSpecificOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Platform::RTCOptions::set_PlatformSpecificOptions(::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::RTCOptions>(),
                        {"set_PlatformSpecificOptions", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Platform::RTCBackgroundMode Epic::OnlineServices::Platform::RTCOptions::get_BackgroundMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::RTCOptions>(),
                        {"get_BackgroundMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Platform::RTCBackgroundMode>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Platform::RTCOptions::set_BackgroundMode(::Epic::OnlineServices::Platform::RTCBackgroundMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::RTCOptions>(),
                        {"set_BackgroundMode", {}, {::i2c::type_of<::Epic::OnlineServices::Platform::RTCBackgroundMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::IntPtr Epic::OnlineServices::Platform::RTCOptions::get_Reserved()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::RTCOptions>(),
                        {"get_Reserved", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Platform::RTCOptions::set_Reserved(::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::RTCOptions>(),
                        {"set_Reserved", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_PlatformSpecificOptions_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "_BackgroundMode_k__BackingField", ty: "::Epic::OnlineServices::Platform::RTCBackgroundMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Reserved_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Platform::RTCOptions::RTCOptions(::System::IntPtr  _PlatformSpecificOptions_k__BackingField, ::Epic::OnlineServices::Platform::RTCBackgroundMode  _BackgroundMode_k__BackingField, ::System::IntPtr  _Reserved_k__BackingField) noexcept  {
this->_PlatformSpecificOptions_k__BackingField = _PlatformSpecificOptions_k__BackingField;
this->_BackgroundMode_k__BackingField = _BackgroundMode_k__BackingField;
this->_Reserved_k__BackingField = _Reserved_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Platform::RTCOptions::RTCOptions()   {
}

#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/WindowsPlatformSpecifics.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__PlatformSpecifics_1_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__WindowsPlatformSpecifics_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__EOSCreateOptions_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__EOSInitializeOptions_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__WindowsConfig_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics::*)()>(&::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18054abd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics::Register)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18054aa40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics*>(),
                        {"Register", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics.LoadDelegatesWithEOSBindingAPI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics::*)()>(&::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics::LoadDelegatesWithEOSBindingAPI)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics.ConfigureSystemInitOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics::*)(::by_ref<::PlayEveryWare::EpicOnlineServices::EOSInitializeOptions*>)>(&::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics::ConfigureSystemInitOptions)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics.ConfigureSystemPlatformCreateOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics::*)(::by_ref<::PlayEveryWare::EpicOnlineServices::EOSCreateOptions*>)>(&::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics::ConfigureSystemPlatformCreateOptions)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x18054a790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics*>(), 26}
                ));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics::setStaticF_Xaudio2DllName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "Xaudio2DllName", ::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics*>(std::forward<::StringW>(value));
}
inline ::StringW PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics::getStaticF_Xaudio2DllName()  {
return ::cordl_internals::getStaticField<::StringW, "Xaudio2DllName", ::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics*>();
}
inline void PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics::setStaticF_SteamConfigPath(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "SteamConfigPath", ::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics*>(std::forward<::StringW>(value));
}
inline ::StringW PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics::getStaticF_SteamConfigPath()  {
return ::cordl_internals::getStaticField<::StringW, "SteamConfigPath", ::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics*>();
}
inline void PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics::setStaticF_SteamOptionsGCHandle(::System::Runtime::InteropServices::GCHandle  value)  {
::cordl_internals::setStaticField<::System::Runtime::InteropServices::GCHandle, "SteamOptionsGCHandle", ::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics*>(std::forward<::System::Runtime::InteropServices::GCHandle>(value));
}
inline ::System::Runtime::InteropServices::GCHandle PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics::getStaticF_SteamOptionsGCHandle()  {
return ::cordl_internals::getStaticField<::System::Runtime::InteropServices::GCHandle, "SteamOptionsGCHandle", ::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics*>();
}
inline void PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics::Register()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics*>(),
                        {"Register", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics::LoadDelegatesWithEOSBindingAPI()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics::ConfigureSystemInitOptions(::by_ref<::PlayEveryWare::EpicOnlineServices::EOSInitializeOptions*>  initializeOptions)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initializeOptions);
}
inline void PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics::ConfigureSystemPlatformCreateOptions(::by_ref<::PlayEveryWare::EpicOnlineServices::EOSCreateOptions*>  createOptions)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, createOptions);
}
inline ::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics* PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics::WindowsPlatformSpecifics()   {
}

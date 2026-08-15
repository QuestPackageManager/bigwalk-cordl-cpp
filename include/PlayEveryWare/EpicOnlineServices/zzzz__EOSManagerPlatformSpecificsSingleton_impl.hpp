#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/EOSManagerPlatformSpecificsSingleton.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__EOSManagerPlatformSpecificsSingleton_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__IPlatformSpecifics_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManagerPlatformSpecificsSingleton.InitOnPlayMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManagerPlatformSpecificsSingleton::InitOnPlayMode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180538030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManagerPlatformSpecificsSingleton*>(),
                        {"InitOnPlayMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManagerPlatformSpecificsSingleton.SetEOSManagerPlatformSpecificsInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayEveryWare::EpicOnlineServices::IPlatformSpecifics*)>(&::PlayEveryWare::EpicOnlineServices::EOSManagerPlatformSpecificsSingleton::SetEOSManagerPlatformSpecificsInterface)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180538060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManagerPlatformSpecificsSingleton*>(),
                        {"SetEOSManagerPlatformSpecificsInterface", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::IPlatformSpecifics*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManagerPlatformSpecificsSingleton.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayEveryWare::EpicOnlineServices::IPlatformSpecifics* (*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManagerPlatformSpecificsSingleton::get_Instance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180538170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManagerPlatformSpecificsSingleton*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManagerPlatformSpecificsSingleton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManagerPlatformSpecificsSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManagerPlatformSpecificsSingleton::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManagerPlatformSpecificsSingleton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::EOSManagerPlatformSpecificsSingleton::setStaticF_s_platformSpecifics(::PlayEveryWare::EpicOnlineServices::IPlatformSpecifics*  value)  {
::cordl_internals::setStaticField<::PlayEveryWare::EpicOnlineServices::IPlatformSpecifics*, "s_platformSpecifics", ::PlayEveryWare::EpicOnlineServices::EOSManagerPlatformSpecificsSingleton*>(std::forward<::PlayEveryWare::EpicOnlineServices::IPlatformSpecifics*>(value));
}
inline ::PlayEveryWare::EpicOnlineServices::IPlatformSpecifics* PlayEveryWare::EpicOnlineServices::EOSManagerPlatformSpecificsSingleton::getStaticF_s_platformSpecifics()  {
return ::cordl_internals::getStaticField<::PlayEveryWare::EpicOnlineServices::IPlatformSpecifics*, "s_platformSpecifics", ::PlayEveryWare::EpicOnlineServices::EOSManagerPlatformSpecificsSingleton*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSManagerPlatformSpecificsSingleton::InitOnPlayMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManagerPlatformSpecificsSingleton*>(),
                        {"InitOnPlayMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManagerPlatformSpecificsSingleton::SetEOSManagerPlatformSpecificsInterface(::PlayEveryWare::EpicOnlineServices::IPlatformSpecifics*  platformSpecifics)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManagerPlatformSpecificsSingleton*>(),
                        {"SetEOSManagerPlatformSpecificsInterface", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::IPlatformSpecifics*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, platformSpecifics);
}
inline ::PlayEveryWare::EpicOnlineServices::IPlatformSpecifics* PlayEveryWare::EpicOnlineServices::EOSManagerPlatformSpecificsSingleton::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManagerPlatformSpecificsSingleton*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayEveryWare::EpicOnlineServices::IPlatformSpecifics*>(nullptr, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManagerPlatformSpecificsSingleton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManagerPlatformSpecificsSingleton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::EOSManagerPlatformSpecificsSingleton* PlayEveryWare::EpicOnlineServices::EOSManagerPlatformSpecificsSingleton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::EOSManagerPlatformSpecificsSingleton*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManagerPlatformSpecificsSingleton::EOSManagerPlatformSpecificsSingleton()   {
}

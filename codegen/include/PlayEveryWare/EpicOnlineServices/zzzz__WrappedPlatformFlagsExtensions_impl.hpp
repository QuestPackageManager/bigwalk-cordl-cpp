#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/WrappedPlatformFlagsExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__WrappedPlatformFlagsExtensions_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__PlatformManager_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__WrappedPlatformFlags_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlagsExtensions.IsSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags, ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform)>(&::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlagsExtensions::IsSupported)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18054abe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlagsExtensions*>(),
                        {"IsSupported", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags>(), ::i2c::type_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>()}}
                    )));
    return ___internal_method;
  }
};
inline bool PlayEveryWare::EpicOnlineServices::WrappedPlatformFlagsExtensions::IsSupported(::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags  platformFlags, ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  platform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlagsExtensions*>(),
                        {"IsSupported", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags>(), ::i2c::type_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, platformFlags, platform);
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlagsExtensions::WrappedPlatformFlagsExtensions()   {
}

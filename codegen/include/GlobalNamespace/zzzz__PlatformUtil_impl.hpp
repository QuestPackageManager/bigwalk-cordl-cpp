#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlatformUtil_def.hpp"
#include "GlobalNamespace/zzzz__Platforms_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlatformUtil.get_CurrentLocalPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Platforms (*)()>(&::GlobalNamespace::PlatformUtil::get_CurrentLocalPlatform)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803ee720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformUtil*>(),
                        {"get_CurrentLocalPlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformUtil.IsSameAsLocalPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::Platforms)>(&::GlobalNamespace::PlatformUtil::IsSameAsLocalPlatform)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ee710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformUtil*>(),
                        {"IsSameAsLocalPlatform", {}, {::i2c::type_of<::GlobalNamespace::Platforms>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::Platforms GlobalNamespace::PlatformUtil::get_CurrentLocalPlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformUtil*>(),
                        {"get_CurrentLocalPlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Platforms>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::PlatformUtil::IsSameAsLocalPlatform(::GlobalNamespace::Platforms  platform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformUtil*>(),
                        {"IsSameAsLocalPlatform", {}, {::i2c::type_of<::GlobalNamespace::Platforms>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, platform);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformUtil::PlatformUtil()   {
}

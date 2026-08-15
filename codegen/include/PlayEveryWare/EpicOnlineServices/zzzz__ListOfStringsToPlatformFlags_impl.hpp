#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/ListOfStringsToPlatformFlags.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__ListOfStringsToEnumConverter_1_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__WrappedPlatformFlags_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__ListOfStringsToPlatformFlags_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JArray_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__WrappedPlatformFlags_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ListOfStringsToPlatformFlags.FromStringArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags (::PlayEveryWare::EpicOnlineServices::ListOfStringsToPlatformFlags::*)(::Newtonsoft::Json::Linq::JArray*)>(&::PlayEveryWare::EpicOnlineServices::ListOfStringsToPlatformFlags::FromStringArray)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1805411c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ListOfStringsToPlatformFlags*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ListOfStringsToPlatformFlags*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ListOfStringsToPlatformFlags._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::ListOfStringsToPlatformFlags::*)()>(&::PlayEveryWare::EpicOnlineServices::ListOfStringsToPlatformFlags::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805412e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ListOfStringsToPlatformFlags*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags PlayEveryWare::EpicOnlineServices::ListOfStringsToPlatformFlags::FromStringArray(::Newtonsoft::Json::Linq::JArray*  array)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ListOfStringsToPlatformFlags*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags>(this, ___internal_method, array);
}
inline void PlayEveryWare::EpicOnlineServices::ListOfStringsToPlatformFlags::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ListOfStringsToPlatformFlags*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::ListOfStringsToPlatformFlags* PlayEveryWare::EpicOnlineServices::ListOfStringsToPlatformFlags::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::ListOfStringsToPlatformFlags*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::ListOfStringsToPlatformFlags::ListOfStringsToPlatformFlags()   {
}

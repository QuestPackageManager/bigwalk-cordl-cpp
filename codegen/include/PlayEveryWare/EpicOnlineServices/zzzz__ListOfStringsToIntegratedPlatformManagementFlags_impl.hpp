#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/ListOfStringsToIntegratedPlatformManagementFlags.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__IntegratedPlatformManagementFlags_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__ListOfStringsToEnumConverter_1_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__ListOfStringsToIntegratedPlatformManagementFlags_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__IntegratedPlatformManagementFlags_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JArray_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ListOfStringsToIntegratedPlatformManagementFlags.FromStringArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags (::PlayEveryWare::EpicOnlineServices::ListOfStringsToIntegratedPlatformManagementFlags::*)(::Newtonsoft::Json::Linq::JArray*)>(&::PlayEveryWare::EpicOnlineServices::ListOfStringsToIntegratedPlatformManagementFlags::FromStringArray)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180541150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ListOfStringsToIntegratedPlatformManagementFlags*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ListOfStringsToIntegratedPlatformManagementFlags*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ListOfStringsToIntegratedPlatformManagementFlags._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::ListOfStringsToIntegratedPlatformManagementFlags::*)()>(&::PlayEveryWare::EpicOnlineServices::ListOfStringsToIntegratedPlatformManagementFlags::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805411b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ListOfStringsToIntegratedPlatformManagementFlags*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags PlayEveryWare::EpicOnlineServices::ListOfStringsToIntegratedPlatformManagementFlags::FromStringArray(::Newtonsoft::Json::Linq::JArray*  array)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ListOfStringsToIntegratedPlatformManagementFlags*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags>(this, ___internal_method, array);
}
inline void PlayEveryWare::EpicOnlineServices::ListOfStringsToIntegratedPlatformManagementFlags::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ListOfStringsToIntegratedPlatformManagementFlags*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::ListOfStringsToIntegratedPlatformManagementFlags* PlayEveryWare::EpicOnlineServices::ListOfStringsToIntegratedPlatformManagementFlags::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::ListOfStringsToIntegratedPlatformManagementFlags*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::ListOfStringsToIntegratedPlatformManagementFlags::ListOfStringsToIntegratedPlatformManagementFlags()   {
}

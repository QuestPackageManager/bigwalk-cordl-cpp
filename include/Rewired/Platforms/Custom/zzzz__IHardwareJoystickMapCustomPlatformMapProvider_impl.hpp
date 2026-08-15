#pragma once
// IWYU pragma private; include "Rewired/Platforms/Custom/IHardwareJoystickMapCustomPlatformMapProvider.hpp"
#include "Rewired/Platforms/Custom/zzzz__IHardwareJoystickMapCustomPlatformMapProvider_def.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareJoystickMap_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::Rewired::Platforms::Custom::IHardwareJoystickMapCustomPlatformMapProvider.GetPlatformMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::Mapping::HardwareJoystickMap_Platform* (::Rewired::Platforms::Custom::IHardwareJoystickMapCustomPlatformMapProvider::*)(int32_t, ::System::Guid)>(&::Rewired::Platforms::Custom::IHardwareJoystickMapCustomPlatformMapProvider::GetPlatformMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::IHardwareJoystickMapCustomPlatformMapProvider*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::IHardwareJoystickMapCustomPlatformMapProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::Rewired::Data::Mapping::HardwareJoystickMap_Platform* Rewired::Platforms::Custom::IHardwareJoystickMapCustomPlatformMapProvider::GetPlatformMap(int32_t  customPlatformId, ::System::Guid  hardwareTypeGuid)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::IHardwareJoystickMapCustomPlatformMapProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::Mapping::HardwareJoystickMap_Platform*>(this, ___internal_method, customPlatformId, hardwareTypeGuid);
}

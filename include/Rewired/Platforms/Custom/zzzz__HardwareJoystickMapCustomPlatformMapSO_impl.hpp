#pragma once
// IWYU pragma private; include "Rewired/Platforms/Custom/HardwareJoystickMapCustomPlatformMapSO.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Rewired/Platforms/Custom/zzzz__HardwareJoystickMapCustomPlatformMapSO_def.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareJoystickMap_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSO.Matches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSO::*)(::System::Guid)>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSO::Matches)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181880350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSO*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSO*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSO.GetPlatformMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::Mapping::HardwareJoystickMap_Platform* (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSO::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSO::GetPlatformMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSO*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSO*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSO._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSO::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSO::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSO*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap>& Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSO::__cordl_internal_get_hardwareJoystickMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hardwareJoystickMap;
}
constexpr ::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap> const& Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSO::__cordl_internal_get_hardwareJoystickMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hardwareJoystickMap;
}
constexpr void Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSO::__cordl_internal_set_hardwareJoystickMap(::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hardwareJoystickMap = value;
}
inline bool Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSO::Matches(::System::Guid  hardwareTypeGuid)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSO*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hardwareTypeGuid);
}
inline ::Rewired::Data::Mapping::HardwareJoystickMap_Platform* Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSO::GetPlatformMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSO*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::Mapping::HardwareJoystickMap_Platform*>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSO*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSO* Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSO::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSO*>());
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSO::HardwareJoystickMapCustomPlatformMapSO()   {
}

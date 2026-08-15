#pragma once
// IWYU pragma private; include "Rewired/Platforms/Custom/HardwareJoystickMapCustomPlatformMapSimpleSO.hpp"
#include "Rewired/Platforms/Custom/zzzz__HardwareJoystickMapCustomPlatformMapSO_impl.hpp"
#include "Rewired/Platforms/Custom/zzzz__HardwareJoystickMapCustomPlatformMapSimpleSO_def.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareJoystickMap_def.hpp"
#include "Rewired/Platforms/Custom/zzzz__HardwareJoystickMapCustomPlatformMapSimple_def.hpp"
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleSO.GetPlatformMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::Mapping::HardwareJoystickMap_Platform* (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleSO::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleSO::GetPlatformMap)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleSO*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleSO*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleSO._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleSO::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleSO::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleSO*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple*& Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleSO::__cordl_internal_get_platformMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformMap;
}
constexpr ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple* const& Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleSO::__cordl_internal_get_platformMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformMap;
}
constexpr void Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleSO::__cordl_internal_set_platformMap(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformMap = value;
}
inline ::Rewired::Data::Mapping::HardwareJoystickMap_Platform* Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleSO::GetPlatformMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleSO*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::Mapping::HardwareJoystickMap_Platform*>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleSO*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleSO* Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleSO::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleSO*>());
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleSO::HardwareJoystickMapCustomPlatformMapSimpleSO()   {
}

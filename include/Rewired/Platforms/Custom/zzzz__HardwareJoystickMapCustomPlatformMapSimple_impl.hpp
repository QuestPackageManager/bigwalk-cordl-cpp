#pragma once
// IWYU pragma private; include "Rewired/Platforms/Custom/HardwareJoystickMapCustomPlatformMapSimple.hpp"
#include "Rewired/Platforms/Custom/zzzz__HardwareJoystickMapCustomPlatformMapSimpleBase_impl.hpp"
#include "Rewired/Platforms/Custom/zzzz__HardwareJoystickMapCustomPlatformMapSimple_def.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareJoystickMap_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple.GetVariants
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Rewired::Data::Mapping::HardwareJoystickMap_Platform*>* (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple::GetVariants)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple.CreateInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple::CreateInstance)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818803e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleBase*>& Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple::__cordl_internal_get_variants()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___variants;
}
constexpr ::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleBase*> const& Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple::__cordl_internal_get_variants() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___variants;
}
constexpr void Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple::__cordl_internal_set_variants(::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleBase*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___variants = value;
}
inline ::System::Collections::Generic::IList_1<::Rewired::Data::Mapping::HardwareJoystickMap_Platform*>* Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple::GetVariants()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Rewired::Data::Mapping::HardwareJoystickMap_Platform*>*>(this, ___internal_method);
}
inline ::System::Object* Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple::CreateInstance()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple* Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple*>());
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple::HardwareJoystickMapCustomPlatformMapSimple()   {
}

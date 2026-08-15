#pragma once
// IWYU pragma private; include "Rowlan/Genesis/Ambience/TimeOfDaySetup.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Rowlan/Genesis/Ambience/zzzz__TimeOfDaySetup_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
//  Writing Method size for method: ::Rowlan::Genesis::Ambience::TimeOfDaySetup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::Ambience::TimeOfDaySetup::*)()>(&::Rowlan::Genesis::Ambience::TimeOfDaySetup::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Ambience::TimeOfDaySetup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Light>& Rowlan::Genesis::Ambience::TimeOfDaySetup::__cordl_internal_get_directionalLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directionalLight;
}
constexpr ::UnityW<::UnityEngine::Light> const& Rowlan::Genesis::Ambience::TimeOfDaySetup::__cordl_internal_get_directionalLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directionalLight;
}
constexpr void Rowlan::Genesis::Ambience::TimeOfDaySetup::__cordl_internal_set_directionalLight(::UnityW<::UnityEngine::Light>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___directionalLight = value;
}
inline void Rowlan::Genesis::Ambience::TimeOfDaySetup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Ambience::TimeOfDaySetup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::Genesis::Ambience::TimeOfDaySetup* Rowlan::Genesis::Ambience::TimeOfDaySetup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::Genesis::Ambience::TimeOfDaySetup*>());
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::Ambience::TimeOfDaySetup::TimeOfDaySetup()   {
}

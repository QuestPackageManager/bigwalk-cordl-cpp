#pragma once
// IWYU pragma private; include "GlobalNamespace/ConductorLight.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ConductorLight_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ConductorLight._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConductorLight::*)()>(&::GlobalNamespace::ConductorLight::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConductorLight*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::ConductorLight::__cordl_internal_get_showSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showSystem;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::ConductorLight::__cordl_internal_get_showSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showSystem;
}
constexpr void GlobalNamespace::ConductorLight::__cordl_internal_set_showSystem(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showSystem = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::ConductorLight::__cordl_internal_get_promptSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promptSystem;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::ConductorLight::__cordl_internal_get_promptSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promptSystem;
}
constexpr void GlobalNamespace::ConductorLight::__cordl_internal_set_promptSystem(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___promptSystem = value;
}
inline void GlobalNamespace::ConductorLight::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConductorLight*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ConductorLight* GlobalNamespace::ConductorLight::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ConductorLight*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConductorLight::ConductorLight()   {
}

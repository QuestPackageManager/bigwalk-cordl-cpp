#pragma once
// IWYU pragma private; include "Enviro/EnviroFlatCloudsQualitySettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Enviro/zzzz__EnviroFlatCloudsQualitySettings_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroFlatCloudsQualitySettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroFlatCloudsQualitySettings::*)()>(&::Enviro::EnviroFlatCloudsQualitySettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18060eb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFlatCloudsQualitySettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Enviro::EnviroFlatCloudsQualitySettings::__cordl_internal_get_cirrusClouds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cirrusClouds;
}
constexpr bool const& Enviro::EnviroFlatCloudsQualitySettings::__cordl_internal_get_cirrusClouds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cirrusClouds;
}
constexpr void Enviro::EnviroFlatCloudsQualitySettings::__cordl_internal_set_cirrusClouds(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cirrusClouds = value;
}
constexpr bool& Enviro::EnviroFlatCloudsQualitySettings::__cordl_internal_get_flatClouds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatClouds;
}
constexpr bool const& Enviro::EnviroFlatCloudsQualitySettings::__cordl_internal_get_flatClouds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatClouds;
}
constexpr void Enviro::EnviroFlatCloudsQualitySettings::__cordl_internal_set_flatClouds(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flatClouds = value;
}
constexpr int32_t& Enviro::EnviroFlatCloudsQualitySettings::__cordl_internal_get_flatCloudsShadowSteps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsShadowSteps;
}
constexpr int32_t const& Enviro::EnviroFlatCloudsQualitySettings::__cordl_internal_get_flatCloudsShadowSteps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsShadowSteps;
}
constexpr void Enviro::EnviroFlatCloudsQualitySettings::__cordl_internal_set_flatCloudsShadowSteps(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flatCloudsShadowSteps = value;
}
inline void Enviro::EnviroFlatCloudsQualitySettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFlatCloudsQualitySettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroFlatCloudsQualitySettings* Enviro::EnviroFlatCloudsQualitySettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroFlatCloudsQualitySettings*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroFlatCloudsQualitySettings::EnviroFlatCloudsQualitySettings()   {
}

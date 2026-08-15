#pragma once
// IWYU pragma private; include "GlobalNamespace/BlurVolumeComponent.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponent_impl.hpp"
#include "GlobalNamespace/zzzz__BlurVolumeComponent_def.hpp"
#include "UnityEngine/Rendering/zzzz__ClampedFloatParameter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BlurVolumeComponent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BlurVolumeComponent::*)()>(&::GlobalNamespace::BlurVolumeComponent::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x180324480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BlurVolumeComponent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& GlobalNamespace::BlurVolumeComponent::__cordl_internal_get_horizontalBlur()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontalBlur;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& GlobalNamespace::BlurVolumeComponent::__cordl_internal_get_horizontalBlur() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontalBlur;
}
constexpr void GlobalNamespace::BlurVolumeComponent::__cordl_internal_set_horizontalBlur(::UnityEngine::Rendering::ClampedFloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___horizontalBlur = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& GlobalNamespace::BlurVolumeComponent::__cordl_internal_get_verticalBlur()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalBlur;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& GlobalNamespace::BlurVolumeComponent::__cordl_internal_get_verticalBlur() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalBlur;
}
constexpr void GlobalNamespace::BlurVolumeComponent::__cordl_internal_set_verticalBlur(::UnityEngine::Rendering::ClampedFloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verticalBlur = value;
}
inline void GlobalNamespace::BlurVolumeComponent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BlurVolumeComponent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BlurVolumeComponent* GlobalNamespace::BlurVolumeComponent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BlurVolumeComponent*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BlurVolumeComponent::BlurVolumeComponent()   {
}

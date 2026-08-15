#pragma once
// IWYU pragma private; include "MA/Flora/FloraAdditionalCameraSettings.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "MA/Flora/zzzz__FloraAdditionalCameraSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__IAdditionalData_def.hpp"
//  Writing Method size for method: ::MA::Flora::FloraAdditionalCameraSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraAdditionalCameraSettings::*)()>(&::MA::Flora::FloraAdditionalCameraSettings::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814c5c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraAdditionalCameraSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& MA::Flora::FloraAdditionalCameraSettings::__cordl_internal_get_AllowGPUOcclusionCulling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowGPUOcclusionCulling;
}
constexpr bool const& MA::Flora::FloraAdditionalCameraSettings::__cordl_internal_get_AllowGPUOcclusionCulling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowGPUOcclusionCulling;
}
constexpr void MA::Flora::FloraAdditionalCameraSettings::__cordl_internal_set_AllowGPUOcclusionCulling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AllowGPUOcclusionCulling = value;
}
constexpr bool& MA::Flora::FloraAdditionalCameraSettings::__cordl_internal_get_DisableInstanceRendering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisableInstanceRendering;
}
constexpr bool const& MA::Flora::FloraAdditionalCameraSettings::__cordl_internal_get_DisableInstanceRendering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisableInstanceRendering;
}
constexpr void MA::Flora::FloraAdditionalCameraSettings::__cordl_internal_set_DisableInstanceRendering(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisableInstanceRendering = value;
}
constexpr float_t& MA::Flora::FloraAdditionalCameraSettings::__cordl_internal_get_LODBiasScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LODBiasScale;
}
constexpr float_t const& MA::Flora::FloraAdditionalCameraSettings::__cordl_internal_get_LODBiasScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LODBiasScale;
}
constexpr void MA::Flora::FloraAdditionalCameraSettings::__cordl_internal_set_LODBiasScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LODBiasScale = value;
}
constexpr bool& MA::Flora::FloraAdditionalCameraSettings::__cordl_internal_get_Teleported()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Teleported;
}
constexpr bool const& MA::Flora::FloraAdditionalCameraSettings::__cordl_internal_get_Teleported() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Teleported;
}
constexpr void MA::Flora::FloraAdditionalCameraSettings::__cordl_internal_set_Teleported(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Teleported = value;
}
inline void MA::Flora::FloraAdditionalCameraSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraAdditionalCameraSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MA::Flora::FloraAdditionalCameraSettings* MA::Flora::FloraAdditionalCameraSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraAdditionalCameraSettings*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IAdditionalData"
constexpr  MA::Flora::FloraAdditionalCameraSettings::operator ::UnityEngine::Rendering::IAdditionalData*() noexcept {
return static_cast<::UnityEngine::Rendering::IAdditionalData*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IAdditionalData"
constexpr ::UnityEngine::Rendering::IAdditionalData* MA::Flora::FloraAdditionalCameraSettings::i___UnityEngine__Rendering__IAdditionalData() noexcept {
return static_cast<::UnityEngine::Rendering::IAdditionalData*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraAdditionalCameraSettings::FloraAdditionalCameraSettings()   {
}

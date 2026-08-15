#pragma once
// IWYU pragma private; include "Rowlan/Genesis/HeightStampSettings.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Rowlan/Genesis/zzzz__HeightStampSettings_def.hpp"
#include "Rowlan/Genesis/zzzz__HeightStampSettings_def.hpp"
#include "Rowlan/Genesis/zzzz__StampSettingsTemplate_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rowlan::Genesis::HeightStampSettings_FalloffType::HeightStampSettings_FalloffType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::HeightStampSettings_FalloffType::HeightStampSettings_FalloffType()   {
}
constexpr ::Rowlan::Genesis::HeightStampSettings_FalloffType  Rowlan::Genesis::HeightStampSettings_FalloffType::Range{static_cast<int32_t>(0x0)};
constexpr ::Rowlan::Genesis::HeightStampSettings_FalloffType  Rowlan::Genesis::HeightStampSettings_FalloffType::Box{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Rowlan::Genesis::HeightStampSettings.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::HeightStampSettings::*)()>(&::Rowlan::Genesis::HeightStampSettings::Reset)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181abe9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::HeightStampSettings>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::Genesis::HeightStampSettings.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::HeightStampSettings::*)(::Rowlan::Genesis::StampSettingsTemplate*)>(&::Rowlan::Genesis::HeightStampSettings::Apply)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181abe920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::HeightStampSettings>(),
                        {"Apply", {}, {::i2c::type_of<::Rowlan::Genesis::StampSettingsTemplate*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rowlan::Genesis::HeightStampSettings::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::HeightStampSettings>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Rowlan::Genesis::HeightStampSettings::Apply(::Rowlan::Genesis::StampSettingsTemplate*  _cordl_template)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::HeightStampSettings>(),
                        {"Apply", {}, {::i2c::type_of<::Rowlan::Genesis::StampSettingsTemplate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_template);
}
// Ctor Parameters [CppParam { name: "active", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "weight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "texture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: Some("{}") }, CppParam { name: "falloffType", ty: "::Rowlan::Genesis::HeightStampSettings_FalloffType", modifiers: "", def_value: Some("{}") }, CppParam { name: "positionRangeX", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "positionRangeY", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "positionRangeZ", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotationRange", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "scaleRangeWidth", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "scaleRangeHeight", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr ::Rowlan::Genesis::HeightStampSettings::HeightStampSettings(bool  active, float_t  weight, ::UnityW<::UnityEngine::Texture2D>  texture, ::Rowlan::Genesis::HeightStampSettings_FalloffType  falloffType, ::UnityEngine::Vector2  positionRangeX, ::UnityEngine::Vector2  positionRangeY, ::UnityEngine::Vector2  positionRangeZ, ::UnityEngine::Vector2  rotationRange, ::UnityEngine::Vector2  scaleRangeWidth, ::UnityEngine::Vector2  scaleRangeHeight) noexcept  {
this->active = active;
this->weight = weight;
this->texture = texture;
this->falloffType = falloffType;
this->positionRangeX = positionRangeX;
this->positionRangeY = positionRangeY;
this->positionRangeZ = positionRangeZ;
this->rotationRange = rotationRange;
this->scaleRangeWidth = scaleRangeWidth;
this->scaleRangeHeight = scaleRangeHeight;
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::HeightStampSettings::HeightStampSettings()   {
}

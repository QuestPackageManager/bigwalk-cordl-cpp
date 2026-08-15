#pragma once
// IWYU pragma private; include "TheVisualEngine/TVETerrainLayerSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TheVisualEngine/zzzz__TVEUVMode_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "TheVisualEngine/zzzz__TVETerrainLayerSettings_def.hpp"
#include "UnityEngine/zzzz__TerrainLayer_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::TheVisualEngine::TVETerrainLayerSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVETerrainLayerSettings::*)()>(&::TheVisualEngine::TVETerrainLayerSettings::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804b98c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVETerrainLayerSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr bool& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_isInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInitialized;
}
constexpr bool const& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_isInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInitialized;
}
constexpr void TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_set_isInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isInitialized = value;
}
constexpr int32_t& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_layerID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerID;
}
constexpr int32_t const& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_layerID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerID;
}
constexpr void TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_set_layerID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerID = value;
}
constexpr ::UnityEngine::Color& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_layerColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerColor;
}
constexpr ::UnityEngine::Color const& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_layerColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerColor;
}
constexpr void TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_set_layerColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerColor = value;
}
constexpr bool& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_useCustomLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useCustomLayer;
}
constexpr bool const& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_useCustomLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useCustomLayer;
}
constexpr void TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_set_useCustomLayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useCustomLayer = value;
}
constexpr ::UnityW<::UnityEngine::TerrainLayer>& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_terrainLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainLayer;
}
constexpr ::UnityW<::UnityEngine::TerrainLayer> const& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_terrainLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainLayer;
}
constexpr void TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_set_terrainLayer(::UnityW<::UnityEngine::TerrainLayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainLayer = value;
}
constexpr bool& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_useCustomTextures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useCustomTextures;
}
constexpr bool const& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_useCustomTextures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useCustomTextures;
}
constexpr void TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_set_useCustomTextures(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useCustomTextures = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_layerAlbedo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerAlbedo;
}
constexpr ::UnityW<::UnityEngine::Texture> const& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_layerAlbedo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerAlbedo;
}
constexpr void TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_set_layerAlbedo(::UnityW<::UnityEngine::Texture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerAlbedo = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_layerNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerNormal;
}
constexpr ::UnityW<::UnityEngine::Texture> const& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_layerNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerNormal;
}
constexpr void TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_set_layerNormal(::UnityW<::UnityEngine::Texture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerNormal = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_layerShader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerShader;
}
constexpr ::UnityW<::UnityEngine::Texture> const& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_layerShader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerShader;
}
constexpr void TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_set_layerShader(::UnityW<::UnityEngine::Texture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerShader = value;
}
constexpr bool& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_useCustomSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useCustomSettings;
}
constexpr bool const& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_useCustomSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useCustomSettings;
}
constexpr void TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_set_useCustomSettings(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useCustomSettings = value;
}
constexpr ::UnityEngine::Color& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_layerSpecular()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerSpecular;
}
constexpr ::UnityEngine::Color const& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_layerSpecular() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerSpecular;
}
constexpr void TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_set_layerSpecular(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerSpecular = value;
}
constexpr ::UnityEngine::Vector4& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_layerRemapMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerRemapMin;
}
constexpr ::UnityEngine::Vector4 const& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_layerRemapMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerRemapMin;
}
constexpr void TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_set_layerRemapMin(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerRemapMin = value;
}
constexpr ::UnityEngine::Vector4& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_layerRemapMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerRemapMax;
}
constexpr ::UnityEngine::Vector4 const& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_layerRemapMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerRemapMax;
}
constexpr void TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_set_layerRemapMax(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerRemapMax = value;
}
constexpr float_t& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_layerSmoothness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerSmoothness;
}
constexpr float_t const& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_layerSmoothness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerSmoothness;
}
constexpr void TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_set_layerSmoothness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerSmoothness = value;
}
constexpr float_t& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_layerNormalScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerNormalScale;
}
constexpr float_t const& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_layerNormalScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerNormalScale;
}
constexpr void TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_set_layerNormalScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerNormalScale = value;
}
constexpr bool& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_useCustomCoords()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useCustomCoords;
}
constexpr bool const& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_useCustomCoords() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useCustomCoords;
}
constexpr void TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_set_useCustomCoords(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useCustomCoords = value;
}
constexpr ::TheVisualEngine::TVEUVMode& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_layerUVMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerUVMode;
}
constexpr ::TheVisualEngine::TVEUVMode const& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_layerUVMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerUVMode;
}
constexpr void TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_set_layerUVMode(::TheVisualEngine::TVEUVMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerUVMode = value;
}
constexpr ::UnityEngine::Vector4& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_layerUVValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerUVValue;
}
constexpr ::UnityEngine::Vector4 const& TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_get_layerUVValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerUVValue;
}
constexpr void TheVisualEngine::TVETerrainLayerSettings::__cordl_internal_set_layerUVValue(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerUVValue = value;
}
inline void TheVisualEngine::TVETerrainLayerSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVETerrainLayerSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TheVisualEngine::TVETerrainLayerSettings* TheVisualEngine::TVETerrainLayerSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TheVisualEngine::TVETerrainLayerSettings*>());
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVETerrainLayerSettings::TVETerrainLayerSettings()   {
}

#pragma once
// IWYU pragma private; include "TheVisualEngine/TVETerrainSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "TheVisualEngine/zzzz__TVETerrainSettings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TheVisualEngine/zzzz__TVETerrainLayerSettings_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::TheVisualEngine::TVETerrainSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVETerrainSettings::*)()>(&::TheVisualEngine::TVETerrainSettings::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804b9960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVETerrainSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Texture>& TheVisualEngine::TVETerrainSettings::__cordl_internal_get_terrainAlbedo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainAlbedo;
}
constexpr ::UnityW<::UnityEngine::Texture> const& TheVisualEngine::TVETerrainSettings::__cordl_internal_get_terrainAlbedo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainAlbedo;
}
constexpr void TheVisualEngine::TVETerrainSettings::__cordl_internal_set_terrainAlbedo(::UnityW<::UnityEngine::Texture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainAlbedo = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& TheVisualEngine::TVETerrainSettings::__cordl_internal_get_terrainNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainNormal;
}
constexpr ::UnityW<::UnityEngine::Texture> const& TheVisualEngine::TVETerrainSettings::__cordl_internal_get_terrainNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainNormal;
}
constexpr void TheVisualEngine::TVETerrainSettings::__cordl_internal_set_terrainNormal(::UnityW<::UnityEngine::Texture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainNormal = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& TheVisualEngine::TVETerrainSettings::__cordl_internal_get_terrainShader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainShader;
}
constexpr ::UnityW<::UnityEngine::Texture> const& TheVisualEngine::TVETerrainSettings::__cordl_internal_get_terrainShader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainShader;
}
constexpr void TheVisualEngine::TVETerrainSettings::__cordl_internal_set_terrainShader(::UnityW<::UnityEngine::Texture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainShader = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& TheVisualEngine::TVETerrainSettings::__cordl_internal_get_terrainFeature()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainFeature;
}
constexpr ::UnityW<::UnityEngine::Texture> const& TheVisualEngine::TVETerrainSettings::__cordl_internal_get_terrainFeature() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainFeature;
}
constexpr void TheVisualEngine::TVETerrainSettings::__cordl_internal_set_terrainFeature(::UnityW<::UnityEngine::Texture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainFeature = value;
}
constexpr bool& TheVisualEngine::TVETerrainSettings::__cordl_internal_get_useCustomTextures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useCustomTextures;
}
constexpr bool const& TheVisualEngine::TVETerrainSettings::__cordl_internal_get_useCustomTextures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useCustomTextures;
}
constexpr void TheVisualEngine::TVETerrainSettings::__cordl_internal_set_useCustomTextures(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useCustomTextures = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& TheVisualEngine::TVETerrainSettings::__cordl_internal_get_terrainControl01()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainControl01;
}
constexpr ::UnityW<::UnityEngine::Texture> const& TheVisualEngine::TVETerrainSettings::__cordl_internal_get_terrainControl01() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainControl01;
}
constexpr void TheVisualEngine::TVETerrainSettings::__cordl_internal_set_terrainControl01(::UnityW<::UnityEngine::Texture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainControl01 = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& TheVisualEngine::TVETerrainSettings::__cordl_internal_get_terrainControl02()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainControl02;
}
constexpr ::UnityW<::UnityEngine::Texture> const& TheVisualEngine::TVETerrainSettings::__cordl_internal_get_terrainControl02() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainControl02;
}
constexpr void TheVisualEngine::TVETerrainSettings::__cordl_internal_set_terrainControl02(::UnityW<::UnityEngine::Texture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainControl02 = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& TheVisualEngine::TVETerrainSettings::__cordl_internal_get_terrainControl03()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainControl03;
}
constexpr ::UnityW<::UnityEngine::Texture> const& TheVisualEngine::TVETerrainSettings::__cordl_internal_get_terrainControl03() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainControl03;
}
constexpr void TheVisualEngine::TVETerrainSettings::__cordl_internal_set_terrainControl03(::UnityW<::UnityEngine::Texture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainControl03 = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& TheVisualEngine::TVETerrainSettings::__cordl_internal_get_terrainControl04()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainControl04;
}
constexpr ::UnityW<::UnityEngine::Texture> const& TheVisualEngine::TVETerrainSettings::__cordl_internal_get_terrainControl04() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainControl04;
}
constexpr void TheVisualEngine::TVETerrainSettings::__cordl_internal_set_terrainControl04(::UnityW<::UnityEngine::Texture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainControl04 = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& TheVisualEngine::TVETerrainSettings::__cordl_internal_get_terrainHolesMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainHolesMask;
}
constexpr ::UnityW<::UnityEngine::Texture> const& TheVisualEngine::TVETerrainSettings::__cordl_internal_get_terrainHolesMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainHolesMask;
}
constexpr void TheVisualEngine::TVETerrainSettings::__cordl_internal_set_terrainHolesMask(::UnityW<::UnityEngine::Texture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainHolesMask = value;
}
constexpr bool& TheVisualEngine::TVETerrainSettings::__cordl_internal_get_useCustomTransforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useCustomTransforms;
}
constexpr bool const& TheVisualEngine::TVETerrainSettings::__cordl_internal_get_useCustomTransforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useCustomTransforms;
}
constexpr void TheVisualEngine::TVETerrainSettings::__cordl_internal_set_useCustomTransforms(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useCustomTransforms = value;
}
constexpr ::UnityEngine::Vector3& TheVisualEngine::TVETerrainSettings::__cordl_internal_get_terrainPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainPosition;
}
constexpr ::UnityEngine::Vector3 const& TheVisualEngine::TVETerrainSettings::__cordl_internal_get_terrainPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainPosition;
}
constexpr void TheVisualEngine::TVETerrainSettings::__cordl_internal_set_terrainPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainPosition = value;
}
constexpr ::UnityEngine::Vector3& TheVisualEngine::TVETerrainSettings::__cordl_internal_get_terrainSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainSize;
}
constexpr ::UnityEngine::Vector3 const& TheVisualEngine::TVETerrainSettings::__cordl_internal_get_terrainSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainSize;
}
constexpr void TheVisualEngine::TVETerrainSettings::__cordl_internal_set_terrainSize(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainSize = value;
}
constexpr bool& TheVisualEngine::TVETerrainSettings::__cordl_internal_get_useLayersOrderAsID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useLayersOrderAsID;
}
constexpr bool const& TheVisualEngine::TVETerrainSettings::__cordl_internal_get_useLayersOrderAsID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useLayersOrderAsID;
}
constexpr void TheVisualEngine::TVETerrainSettings::__cordl_internal_set_useLayersOrderAsID(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useLayersOrderAsID = value;
}
constexpr ::System::Collections::Generic::List_1<::TheVisualEngine::TVETerrainLayerSettings*>*& TheVisualEngine::TVETerrainSettings::__cordl_internal_get_terrainLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainLayers;
}
constexpr ::System::Collections::Generic::List_1<::TheVisualEngine::TVETerrainLayerSettings*>* const& TheVisualEngine::TVETerrainSettings::__cordl_internal_get_terrainLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainLayers;
}
constexpr void TheVisualEngine::TVETerrainSettings::__cordl_internal_set_terrainLayers(::System::Collections::Generic::List_1<::TheVisualEngine::TVETerrainLayerSettings*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainLayers = value;
}
inline void TheVisualEngine::TVETerrainSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVETerrainSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TheVisualEngine::TVETerrainSettings* TheVisualEngine::TVETerrainSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TheVisualEngine::TVETerrainSettings*>());
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVETerrainSettings::TVETerrainSettings()   {
}

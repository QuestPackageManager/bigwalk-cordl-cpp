#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/Options.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__Options_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__Options_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::Settings_Options_TerrainSearchMethod::Settings_Options_TerrainSearchMethod(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::Settings_Options_TerrainSearchMethod::Settings_Options_TerrainSearchMethod()   {
}
constexpr ::JBooth::MicroVerseCore::Settings_Options_TerrainSearchMethod  JBooth::MicroVerseCore::Settings_Options_TerrainSearchMethod::Hierarchy{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroVerseCore::Settings_Options_TerrainSearchMethod  JBooth::MicroVerseCore::Settings_Options_TerrainSearchMethod::AllInScene{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Options_Settings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Options_Settings::*)()>(&::JBooth::MicroVerseCore::Options_Settings::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18143cff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Options_Settings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::JBooth::MicroVerseCore::Settings_Options_TerrainSearchMethod& JBooth::MicroVerseCore::Options_Settings::__cordl_internal_get_terrainSearchMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainSearchMethod;
}
constexpr ::JBooth::MicroVerseCore::Settings_Options_TerrainSearchMethod const& JBooth::MicroVerseCore::Options_Settings::__cordl_internal_get_terrainSearchMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainSearchMethod;
}
constexpr void JBooth::MicroVerseCore::Options_Settings::__cordl_internal_set_terrainSearchMethod(::JBooth::MicroVerseCore::Settings_Options_TerrainSearchMethod  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainSearchMethod = value;
}
constexpr bool& JBooth::MicroVerseCore::Options_Settings::__cordl_internal_get_keepLayersInSync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keepLayersInSync;
}
constexpr bool const& JBooth::MicroVerseCore::Options_Settings::__cordl_internal_get_keepLayersInSync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keepLayersInSync;
}
constexpr void JBooth::MicroVerseCore::Options_Settings::__cordl_internal_set_keepLayersInSync(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keepLayersInSync = value;
}
constexpr int32_t& JBooth::MicroVerseCore::Options_Settings::__cordl_internal_get_maxHeightSaveBackPerFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHeightSaveBackPerFrame;
}
constexpr int32_t const& JBooth::MicroVerseCore::Options_Settings::__cordl_internal_get_maxHeightSaveBackPerFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHeightSaveBackPerFrame;
}
constexpr void JBooth::MicroVerseCore::Options_Settings::__cordl_internal_set_maxHeightSaveBackPerFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxHeightSaveBackPerFrame = value;
}
constexpr bool& JBooth::MicroVerseCore::Options_Settings::__cordl_internal_get_useSceneCulling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useSceneCulling;
}
constexpr bool const& JBooth::MicroVerseCore::Options_Settings::__cordl_internal_get_useSceneCulling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useSceneCulling;
}
constexpr void JBooth::MicroVerseCore::Options_Settings::__cordl_internal_set_useSceneCulling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useSceneCulling = value;
}
constexpr bool& JBooth::MicroVerseCore::Options_Settings::__cordl_internal_get_controllFoliageDraw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllFoliageDraw;
}
constexpr bool const& JBooth::MicroVerseCore::Options_Settings::__cordl_internal_get_controllFoliageDraw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllFoliageDraw;
}
constexpr void JBooth::MicroVerseCore::Options_Settings::__cordl_internal_set_controllFoliageDraw(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controllFoliageDraw = value;
}
constexpr float_t& JBooth::MicroVerseCore::Options_Settings::__cordl_internal_get_sceneTerrainCullingDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneTerrainCullingDistance;
}
constexpr float_t const& JBooth::MicroVerseCore::Options_Settings::__cordl_internal_get_sceneTerrainCullingDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneTerrainCullingDistance;
}
constexpr void JBooth::MicroVerseCore::Options_Settings::__cordl_internal_set_sceneTerrainCullingDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneTerrainCullingDistance = value;
}
constexpr float_t& JBooth::MicroVerseCore::Options_Settings::__cordl_internal_get_sceneVegetationCullingDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneVegetationCullingDistance;
}
constexpr float_t const& JBooth::MicroVerseCore::Options_Settings::__cordl_internal_get_sceneVegetationCullingDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneVegetationCullingDistance;
}
constexpr void JBooth::MicroVerseCore::Options_Settings::__cordl_internal_set_sceneVegetationCullingDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneVegetationCullingDistance = value;
}
constexpr float_t& JBooth::MicroVerseCore::Options_Settings::__cordl_internal_get_sceneCameraCullingDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneCameraCullingDistance;
}
constexpr float_t const& JBooth::MicroVerseCore::Options_Settings::__cordl_internal_get_sceneCameraCullingDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneCameraCullingDistance;
}
constexpr void JBooth::MicroVerseCore::Options_Settings::__cordl_internal_set_sceneCameraCullingDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneCameraCullingDistance = value;
}
constexpr bool& JBooth::MicroVerseCore::Options_Settings::__cordl_internal_get_SyncHolesOnSave()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SyncHolesOnSave;
}
constexpr bool const& JBooth::MicroVerseCore::Options_Settings::__cordl_internal_get_SyncHolesOnSave() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SyncHolesOnSave;
}
constexpr void JBooth::MicroVerseCore::Options_Settings::__cordl_internal_set_SyncHolesOnSave(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SyncHolesOnSave = value;
}
inline void JBooth::MicroVerseCore::Options_Settings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Options_Settings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::Options_Settings* JBooth::MicroVerseCore::Options_Settings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::Options_Settings*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::Options_Settings::Options_Settings()   {
}
//  Writing Method size for method: ::JBooth::MicroVerseCore::Options_Colors._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Options_Colors::*)()>(&::JBooth::MicroVerseCore::Options_Colors::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18142a670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Options_Colors*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& JBooth::MicroVerseCore::Options_Colors::__cordl_internal_get_drawStampPreviews()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawStampPreviews;
}
constexpr bool const& JBooth::MicroVerseCore::Options_Colors::__cordl_internal_get_drawStampPreviews() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawStampPreviews;
}
constexpr void JBooth::MicroVerseCore::Options_Colors::__cordl_internal_set_drawStampPreviews(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drawStampPreviews = value;
}
constexpr ::UnityEngine::Color& JBooth::MicroVerseCore::Options_Colors::__cordl_internal_get_heightStampColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightStampColor;
}
constexpr ::UnityEngine::Color const& JBooth::MicroVerseCore::Options_Colors::__cordl_internal_get_heightStampColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightStampColor;
}
constexpr void JBooth::MicroVerseCore::Options_Colors::__cordl_internal_set_heightStampColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightStampColor = value;
}
constexpr ::UnityEngine::Color& JBooth::MicroVerseCore::Options_Colors::__cordl_internal_get_textureStampColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureStampColor;
}
constexpr ::UnityEngine::Color const& JBooth::MicroVerseCore::Options_Colors::__cordl_internal_get_textureStampColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureStampColor;
}
constexpr void JBooth::MicroVerseCore::Options_Colors::__cordl_internal_set_textureStampColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureStampColor = value;
}
constexpr ::UnityEngine::Color& JBooth::MicroVerseCore::Options_Colors::__cordl_internal_get_treeStampColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeStampColor;
}
constexpr ::UnityEngine::Color const& JBooth::MicroVerseCore::Options_Colors::__cordl_internal_get_treeStampColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeStampColor;
}
constexpr void JBooth::MicroVerseCore::Options_Colors::__cordl_internal_set_treeStampColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___treeStampColor = value;
}
constexpr ::UnityEngine::Color& JBooth::MicroVerseCore::Options_Colors::__cordl_internal_get_detailStampColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailStampColor;
}
constexpr ::UnityEngine::Color const& JBooth::MicroVerseCore::Options_Colors::__cordl_internal_get_detailStampColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailStampColor;
}
constexpr void JBooth::MicroVerseCore::Options_Colors::__cordl_internal_set_detailStampColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detailStampColor = value;
}
constexpr ::UnityEngine::Color& JBooth::MicroVerseCore::Options_Colors::__cordl_internal_get_occluderStampColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occluderStampColor;
}
constexpr ::UnityEngine::Color const& JBooth::MicroVerseCore::Options_Colors::__cordl_internal_get_occluderStampColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occluderStampColor;
}
constexpr void JBooth::MicroVerseCore::Options_Colors::__cordl_internal_set_occluderStampColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occluderStampColor = value;
}
constexpr ::UnityEngine::Color& JBooth::MicroVerseCore::Options_Colors::__cordl_internal_get_copyStampColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___copyStampColor;
}
constexpr ::UnityEngine::Color const& JBooth::MicroVerseCore::Options_Colors::__cordl_internal_get_copyStampColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___copyStampColor;
}
constexpr void JBooth::MicroVerseCore::Options_Colors::__cordl_internal_set_copyStampColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___copyStampColor = value;
}
constexpr ::UnityEngine::Color& JBooth::MicroVerseCore::Options_Colors::__cordl_internal_get_pasteStampColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pasteStampColor;
}
constexpr ::UnityEngine::Color const& JBooth::MicroVerseCore::Options_Colors::__cordl_internal_get_pasteStampColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pasteStampColor;
}
constexpr void JBooth::MicroVerseCore::Options_Colors::__cordl_internal_set_pasteStampColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pasteStampColor = value;
}
constexpr ::UnityEngine::Color& JBooth::MicroVerseCore::Options_Colors::__cordl_internal_get_maskStampColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maskStampColor;
}
constexpr ::UnityEngine::Color const& JBooth::MicroVerseCore::Options_Colors::__cordl_internal_get_maskStampColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maskStampColor;
}
constexpr void JBooth::MicroVerseCore::Options_Colors::__cordl_internal_set_maskStampColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maskStampColor = value;
}
constexpr ::UnityEngine::Color& JBooth::MicroVerseCore::Options_Colors::__cordl_internal_get_objectStampColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectStampColor;
}
constexpr ::UnityEngine::Color const& JBooth::MicroVerseCore::Options_Colors::__cordl_internal_get_objectStampColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectStampColor;
}
constexpr void JBooth::MicroVerseCore::Options_Colors::__cordl_internal_set_objectStampColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectStampColor = value;
}
constexpr ::UnityEngine::Color& JBooth::MicroVerseCore::Options_Colors::__cordl_internal_get_ambientAreaColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientAreaColor;
}
constexpr ::UnityEngine::Color const& JBooth::MicroVerseCore::Options_Colors::__cordl_internal_get_ambientAreaColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientAreaColor;
}
constexpr void JBooth::MicroVerseCore::Options_Colors::__cordl_internal_set_ambientAreaColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ambientAreaColor = value;
}
constexpr ::UnityEngine::Color& JBooth::MicroVerseCore::Options_Colors::__cordl_internal_get_noisePreviewColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noisePreviewColor;
}
constexpr ::UnityEngine::Color const& JBooth::MicroVerseCore::Options_Colors::__cordl_internal_get_noisePreviewColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noisePreviewColor;
}
constexpr void JBooth::MicroVerseCore::Options_Colors::__cordl_internal_set_noisePreviewColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noisePreviewColor = value;
}
constexpr ::UnityEngine::Color& JBooth::MicroVerseCore::Options_Colors::__cordl_internal_get_filterPreviewColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filterPreviewColor;
}
constexpr ::UnityEngine::Color const& JBooth::MicroVerseCore::Options_Colors::__cordl_internal_get_filterPreviewColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filterPreviewColor;
}
constexpr void JBooth::MicroVerseCore::Options_Colors::__cordl_internal_set_filterPreviewColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filterPreviewColor = value;
}
inline void JBooth::MicroVerseCore::Options_Colors::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Options_Colors*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::Options_Colors* JBooth::MicroVerseCore::Options_Colors::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::Options_Colors*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::Options_Colors::Options_Colors()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::Options_GizmoVisibility::Options_GizmoVisibility(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::Options_GizmoVisibility::Options_GizmoVisibility()   {
}
constexpr ::JBooth::MicroVerseCore::Options_GizmoVisibility  JBooth::MicroVerseCore::Options_GizmoVisibility::GizmosOff{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroVerseCore::Options_GizmoVisibility  JBooth::MicroVerseCore::Options_GizmoVisibility::Culled{static_cast<int32_t>(0x1)};
constexpr ::JBooth::MicroVerseCore::Options_GizmoVisibility  JBooth::MicroVerseCore::Options_GizmoVisibility::AlwaysVisible{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Options._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Options::*)()>(&::JBooth::MicroVerseCore::Options::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18143bac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Options*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::JBooth::MicroVerseCore::Options_Settings*& JBooth::MicroVerseCore::Options::__cordl_internal_get_settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr ::JBooth::MicroVerseCore::Options_Settings* const& JBooth::MicroVerseCore::Options::__cordl_internal_get_settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr void JBooth::MicroVerseCore::Options::__cordl_internal_set_settings(::JBooth::MicroVerseCore::Options_Settings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settings = value;
}
constexpr ::JBooth::MicroVerseCore::Options_Colors*& JBooth::MicroVerseCore::Options::__cordl_internal_get_colors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colors;
}
constexpr ::JBooth::MicroVerseCore::Options_Colors* const& JBooth::MicroVerseCore::Options::__cordl_internal_get_colors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colors;
}
constexpr void JBooth::MicroVerseCore::Options::__cordl_internal_set_colors(::JBooth::MicroVerseCore::Options_Colors*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colors = value;
}
constexpr ::JBooth::MicroVerseCore::Options_GizmoVisibility& JBooth::MicroVerseCore::Options::__cordl_internal_get_gizmoVisibility()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmoVisibility;
}
constexpr ::JBooth::MicroVerseCore::Options_GizmoVisibility const& JBooth::MicroVerseCore::Options::__cordl_internal_get_gizmoVisibility() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmoVisibility;
}
constexpr void JBooth::MicroVerseCore::Options::__cordl_internal_set_gizmoVisibility(::JBooth::MicroVerseCore::Options_GizmoVisibility  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gizmoVisibility = value;
}
inline void JBooth::MicroVerseCore::Options::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Options*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::Options* JBooth::MicroVerseCore::Options::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::Options*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::Options::Options()   {
}

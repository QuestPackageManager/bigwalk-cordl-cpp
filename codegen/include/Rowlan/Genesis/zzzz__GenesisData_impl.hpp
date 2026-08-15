#pragma once
// IWYU pragma private; include "Rowlan/Genesis/GenesisData.hpp"
#include "JBooth/MicroVerseCore/zzzz__TreeStamp_impl.hpp"
#include "Rowlan/Genesis/zzzz__HeightStampSettings_impl.hpp"
#include "Rowlan/Genesis/zzzz__LayerSettings_impl.hpp"
#include "Rowlan/Genesis/zzzz__PathSettings_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Rowlan/Genesis/zzzz__GenesisData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__TreeStamp_def.hpp"
#include "Rowlan/Genesis/zzzz__GenesisData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rowlan::Genesis::GenesisData_HeightStampPlacement::GenesisData_HeightStampPlacement(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::GenesisData_HeightStampPlacement::GenesisData_HeightStampPlacement()   {
}
constexpr ::Rowlan::Genesis::GenesisData_HeightStampPlacement  Rowlan::Genesis::GenesisData_HeightStampPlacement::Random{static_cast<int32_t>(0x0)};
constexpr ::Rowlan::Genesis::GenesisData_HeightStampPlacement  Rowlan::Genesis::GenesisData_HeightStampPlacement::Grid{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Rowlan::Genesis::GenesisData_TerrainSettings.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::GenesisData_TerrainSettings::*)()>(&::Rowlan::Genesis::GenesisData_TerrainSettings::Reset)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x181abfbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::GenesisData_TerrainSettings>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rowlan::Genesis::GenesisData_TerrainSettings::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::GenesisData_TerrainSettings>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "totalWidth", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "totalLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "totalHeight", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "tilesX", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "tilesZ", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "startPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "groupingID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "autoConnect", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "pixelError", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "baseMapDistance", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "drawInstanced", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "heightmapResolution", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "controlTextureResolution", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "baseTextureResolution", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "detailResolution", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "detailResolutionPerPatch", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "clearExisting", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "assetDirectory", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "enableGuid", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Rowlan::Genesis::GenesisData_TerrainSettings::GenesisData_TerrainSettings(int32_t  totalWidth, int32_t  totalLength, int32_t  totalHeight, int32_t  tilesX, int32_t  tilesZ, ::UnityEngine::Vector3  startPosition, int32_t  groupingID, bool  autoConnect, int32_t  pixelError, int32_t  baseMapDistance, bool  drawInstanced, int32_t  heightmapResolution, int32_t  controlTextureResolution, int32_t  baseTextureResolution, int32_t  detailResolution, int32_t  detailResolutionPerPatch, bool  clearExisting, ::StringW  assetDirectory, bool  enableGuid) noexcept  {
this->totalWidth = totalWidth;
this->totalLength = totalLength;
this->totalHeight = totalHeight;
this->tilesX = tilesX;
this->tilesZ = tilesZ;
this->startPosition = startPosition;
this->groupingID = groupingID;
this->autoConnect = autoConnect;
this->pixelError = pixelError;
this->baseMapDistance = baseMapDistance;
this->drawInstanced = drawInstanced;
this->heightmapResolution = heightmapResolution;
this->controlTextureResolution = controlTextureResolution;
this->baseTextureResolution = baseTextureResolution;
this->detailResolution = detailResolution;
this->detailResolutionPerPatch = detailResolutionPerPatch;
this->clearExisting = clearExisting;
this->assetDirectory = assetDirectory;
this->enableGuid = enableGuid;
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::GenesisData_TerrainSettings::GenesisData_TerrainSettings()   {
}
//  Writing Method size for method: ::Rowlan::Genesis::GenesisData_TreeSettings.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::GenesisData_TreeSettings::*)()>(&::Rowlan::Genesis::GenesisData_TreeSettings::Reset)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181ac21a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::GenesisData_TreeSettings>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rowlan::Genesis::GenesisData_TreeSettings::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::GenesisData_TreeSettings>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "treePlacement", ty: "::ArrayW<::UnityW<::JBooth::MicroVerseCore::TreeStamp>>", modifiers: "", def_value: Some("{}") }]
constexpr ::Rowlan::Genesis::GenesisData_TreeSettings::GenesisData_TreeSettings(::ArrayW<::UnityW<::JBooth::MicroVerseCore::TreeStamp>>  treePlacement) noexcept  {
this->treePlacement = treePlacement;
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::GenesisData_TreeSettings::GenesisData_TreeSettings()   {
}
//  Writing Method size for method: ::Rowlan::Genesis::GenesisData.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::GenesisData::*)()>(&::Rowlan::Genesis::GenesisData::Reset)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181abe750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::GenesisData*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::Genesis::GenesisData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::GenesisData::*)()>(&::Rowlan::Genesis::GenesisData::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181abe800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::GenesisData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rowlan::Genesis::GenesisData::__cordl_internal_get_helpBoxVisible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___helpBoxVisible;
}
constexpr bool const& Rowlan::Genesis::GenesisData::__cordl_internal_get_helpBoxVisible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___helpBoxVisible;
}
constexpr void Rowlan::Genesis::GenesisData::__cordl_internal_set_helpBoxVisible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___helpBoxVisible = value;
}
constexpr bool& Rowlan::Genesis::GenesisData::__cordl_internal_get_replaceExisting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___replaceExisting;
}
constexpr bool const& Rowlan::Genesis::GenesisData::__cordl_internal_get_replaceExisting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___replaceExisting;
}
constexpr void Rowlan::Genesis::GenesisData::__cordl_internal_set_replaceExisting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___replaceExisting = value;
}
constexpr bool& Rowlan::Genesis::GenesisData::__cordl_internal_get_confirmationPopup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___confirmationPopup;
}
constexpr bool const& Rowlan::Genesis::GenesisData::__cordl_internal_get_confirmationPopup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___confirmationPopup;
}
constexpr void Rowlan::Genesis::GenesisData::__cordl_internal_set_confirmationPopup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___confirmationPopup = value;
}
constexpr ::Rowlan::Genesis::GenesisData_TerrainSettings& Rowlan::Genesis::GenesisData::__cordl_internal_get_terrainSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainSettings;
}
constexpr ::Rowlan::Genesis::GenesisData_TerrainSettings const& Rowlan::Genesis::GenesisData::__cordl_internal_get_terrainSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainSettings;
}
constexpr void Rowlan::Genesis::GenesisData::__cordl_internal_set_terrainSettings(::Rowlan::Genesis::GenesisData_TerrainSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainSettings = value;
}
constexpr ::Rowlan::Genesis::GenesisData_HeightStampPlacement& Rowlan::Genesis::GenesisData::__cordl_internal_get_heightStampPlacement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightStampPlacement;
}
constexpr ::Rowlan::Genesis::GenesisData_HeightStampPlacement const& Rowlan::Genesis::GenesisData::__cordl_internal_get_heightStampPlacement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightStampPlacement;
}
constexpr void Rowlan::Genesis::GenesisData::__cordl_internal_set_heightStampPlacement(::Rowlan::Genesis::GenesisData_HeightStampPlacement  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightStampPlacement = value;
}
constexpr ::ArrayW<::Rowlan::Genesis::HeightStampSettings>& Rowlan::Genesis::GenesisData::__cordl_internal_get_heightStamps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightStamps;
}
constexpr ::ArrayW<::Rowlan::Genesis::HeightStampSettings> const& Rowlan::Genesis::GenesisData::__cordl_internal_get_heightStamps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightStamps;
}
constexpr void Rowlan::Genesis::GenesisData::__cordl_internal_set_heightStamps(::ArrayW<::Rowlan::Genesis::HeightStampSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightStamps = value;
}
constexpr ::ArrayW<::Rowlan::Genesis::LayerSettings>& Rowlan::Genesis::GenesisData::__cordl_internal_get_layerSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerSettings;
}
constexpr ::ArrayW<::Rowlan::Genesis::LayerSettings> const& Rowlan::Genesis::GenesisData::__cordl_internal_get_layerSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerSettings;
}
constexpr void Rowlan::Genesis::GenesisData::__cordl_internal_set_layerSettings(::ArrayW<::Rowlan::Genesis::LayerSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerSettings = value;
}
constexpr ::ArrayW<::Rowlan::Genesis::PathSettings>& Rowlan::Genesis::GenesisData::__cordl_internal_get_pathSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathSettings;
}
constexpr ::ArrayW<::Rowlan::Genesis::PathSettings> const& Rowlan::Genesis::GenesisData::__cordl_internal_get_pathSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathSettings;
}
constexpr void Rowlan::Genesis::GenesisData::__cordl_internal_set_pathSettings(::ArrayW<::Rowlan::Genesis::PathSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pathSettings = value;
}
constexpr ::Rowlan::Genesis::GenesisData_TreeSettings& Rowlan::Genesis::GenesisData::__cordl_internal_get_treeSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeSettings;
}
constexpr ::Rowlan::Genesis::GenesisData_TreeSettings const& Rowlan::Genesis::GenesisData::__cordl_internal_get_treeSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeSettings;
}
constexpr void Rowlan::Genesis::GenesisData::__cordl_internal_set_treeSettings(::Rowlan::Genesis::GenesisData_TreeSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___treeSettings = value;
}
inline void Rowlan::Genesis::GenesisData::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::GenesisData*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::Genesis::GenesisData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::GenesisData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::Genesis::GenesisData* Rowlan::Genesis::GenesisData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::Genesis::GenesisData*>());
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::GenesisData::GenesisData()   {
}

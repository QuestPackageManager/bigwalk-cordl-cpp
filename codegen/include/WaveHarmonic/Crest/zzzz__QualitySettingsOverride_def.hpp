#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/QualitySettingsOverride.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__TerrainQualityOverrides_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(QualitySettingsOverride)
// Forward declare root types
namespace WaveHarmonic::Crest {
class QualitySettingsOverride;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::QualitySettingsOverride*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::QualitySettingsOverride*, "WaveHarmonic.Crest", "QualitySettingsOverride");
// Dependencies System.Object, UnityEngine.TerrainQualityOverrides
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.QualitySettingsOverride
class CORDL_TYPE QualitySettingsOverride : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_LodBias, put=set_LodBias)) float_t  LodBias;

 __declspec(property(get=get_MaximumLodLevel, put=set_MaximumLodLevel)) int32_t  MaximumLodLevel;

 __declspec(property(get=get_OverrideLodBias, put=set_OverrideLodBias)) bool  OverrideLodBias;

 __declspec(property(get=get_OverrideMaximumLodLevel, put=set_OverrideMaximumLodLevel)) bool  OverrideMaximumLodLevel;

 __declspec(property(get=get_OverrideTerrainPixelError, put=set_OverrideTerrainPixelError)) bool  OverrideTerrainPixelError;

 __declspec(property(get=get_TerrainPixelError, put=set_TerrainPixelError)) float_t  TerrainPixelError;

/// @brief Field _LodBias, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__LodBias, put=__cordl_internal_set__LodBias)) float_t  _LodBias;

/// @brief Field _MaximumLodLevel, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaximumLodLevel, put=__cordl_internal_set__MaximumLodLevel)) int32_t  _MaximumLodLevel;

/// @brief Field _OldLodBias, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__OldLodBias, put=__cordl_internal_set__OldLodBias)) float_t  _OldLodBias;

/// @brief Field _OldMaximumLodLevelOverride, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__OldMaximumLodLevelOverride, put=__cordl_internal_set__OldMaximumLodLevelOverride)) int32_t  _OldMaximumLodLevelOverride;

/// @brief Field _OldTerrainOverrides, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__OldTerrainOverrides, put=__cordl_internal_set__OldTerrainOverrides)) ::UnityEngine::TerrainQualityOverrides  _OldTerrainOverrides;

/// @brief Field _OldTerrainPixelError, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__OldTerrainPixelError, put=__cordl_internal_set__OldTerrainPixelError)) float_t  _OldTerrainPixelError;

/// @brief Field _OverrideLodBias, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__OverrideLodBias, put=__cordl_internal_set__OverrideLodBias)) bool  _OverrideLodBias;

/// @brief Field _OverrideMaximumLodLevel, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__OverrideMaximumLodLevel, put=__cordl_internal_set__OverrideMaximumLodLevel)) bool  _OverrideMaximumLodLevel;

/// @brief Field _OverrideTerrainPixelError, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__OverrideTerrainPixelError, put=__cordl_internal_set__OverrideTerrainPixelError)) bool  _OverrideTerrainPixelError;

/// @brief Field _TerrainPixelError, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__TerrainPixelError, put=__cordl_internal_set__TerrainPixelError)) float_t  _TerrainPixelError;

/// @brief Method GetHashCode, addr 0x18258e480, size 0x90, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::WaveHarmonic::Crest::QualitySettingsOverride* New_ctor() ;

/// @brief Method Override, addr 0x18258e510, size 0x80, virtual false, abstract: false, final false
inline void Override() ;

/// @brief Method Restore, addr 0x18258e590, size 0x60, virtual false, abstract: false, final false
inline void Restore() ;

constexpr float_t const& __cordl_internal_get__LodBias() const;

constexpr float_t& __cordl_internal_get__LodBias() ;

constexpr int32_t const& __cordl_internal_get__MaximumLodLevel() const;

constexpr int32_t& __cordl_internal_get__MaximumLodLevel() ;

constexpr float_t const& __cordl_internal_get__OldLodBias() const;

constexpr float_t& __cordl_internal_get__OldLodBias() ;

constexpr int32_t const& __cordl_internal_get__OldMaximumLodLevelOverride() const;

constexpr int32_t& __cordl_internal_get__OldMaximumLodLevelOverride() ;

constexpr ::UnityEngine::TerrainQualityOverrides const& __cordl_internal_get__OldTerrainOverrides() const;

constexpr ::UnityEngine::TerrainQualityOverrides& __cordl_internal_get__OldTerrainOverrides() ;

constexpr float_t const& __cordl_internal_get__OldTerrainPixelError() const;

constexpr float_t& __cordl_internal_get__OldTerrainPixelError() ;

constexpr bool const& __cordl_internal_get__OverrideLodBias() const;

constexpr bool& __cordl_internal_get__OverrideLodBias() ;

constexpr bool const& __cordl_internal_get__OverrideMaximumLodLevel() const;

constexpr bool& __cordl_internal_get__OverrideMaximumLodLevel() ;

constexpr bool const& __cordl_internal_get__OverrideTerrainPixelError() const;

constexpr bool& __cordl_internal_get__OverrideTerrainPixelError() ;

constexpr float_t const& __cordl_internal_get__TerrainPixelError() const;

constexpr float_t& __cordl_internal_get__TerrainPixelError() ;

constexpr void __cordl_internal_set__LodBias(float_t  value) ;

constexpr void __cordl_internal_set__MaximumLodLevel(int32_t  value) ;

constexpr void __cordl_internal_set__OldLodBias(float_t  value) ;

constexpr void __cordl_internal_set__OldMaximumLodLevelOverride(int32_t  value) ;

constexpr void __cordl_internal_set__OldTerrainOverrides(::UnityEngine::TerrainQualityOverrides  value) ;

constexpr void __cordl_internal_set__OldTerrainPixelError(float_t  value) ;

constexpr void __cordl_internal_set__OverrideLodBias(bool  value) ;

constexpr void __cordl_internal_set__OverrideMaximumLodLevel(bool  value) ;

constexpr void __cordl_internal_set__OverrideTerrainPixelError(bool  value) ;

constexpr void __cordl_internal_set__TerrainPixelError(float_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_LodBias, addr 0x1803bda00, size 0x10, virtual false, abstract: false, final false
inline float_t get_LodBias() ;

/// @brief Method get_MaximumLodLevel, addr 0x1802f42c0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_MaximumLodLevel() ;

/// @brief Method get_OverrideLodBias, addr 0x180392490, size 0x10, virtual false, abstract: false, final false
inline bool get_OverrideLodBias() ;

/// @brief Method get_OverrideMaximumLodLevel, addr 0x18037a0f0, size 0x10, virtual false, abstract: false, final false
inline bool get_OverrideMaximumLodLevel() ;

/// @brief Method get_OverrideTerrainPixelError, addr 0x1803a7410, size 0x10, virtual false, abstract: false, final false
inline bool get_OverrideTerrainPixelError() ;

/// @brief Method get_TerrainPixelError, addr 0x1802f80d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_TerrainPixelError() ;

/// @brief Method set_LodBias, addr 0x1803bda40, size 0x10, virtual false, abstract: false, final false
inline void set_LodBias(float_t  value) ;

/// @brief Method set_MaximumLodLevel, addr 0x1802f43d0, size 0x10, virtual false, abstract: false, final false
inline void set_MaximumLodLevel(int32_t  value) ;

/// @brief Method set_OverrideLodBias, addr 0x1803924a0, size 0x10, virtual false, abstract: false, final false
inline void set_OverrideLodBias(bool  value) ;

/// @brief Method set_OverrideMaximumLodLevel, addr 0x1803a7530, size 0x10, virtual false, abstract: false, final false
inline void set_OverrideMaximumLodLevel(bool  value) ;

/// @brief Method set_OverrideTerrainPixelError, addr 0x1803a7480, size 0x10, virtual false, abstract: false, final false
inline void set_OverrideTerrainPixelError(bool  value) ;

/// @brief Method set_TerrainPixelError, addr 0x1802f81c0, size 0x10, virtual false, abstract: false, final false
inline void set_TerrainPixelError(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QualitySettingsOverride() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QualitySettingsOverride", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
QualitySettingsOverride(QualitySettingsOverride && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QualitySettingsOverride", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
QualitySettingsOverride(QualitySettingsOverride const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16652};

/// @brief Field _OverrideLodBias, offset: 0x10, size: 0x1, def value: None
 bool  ____OverrideLodBias;

/// @brief Field _LodBias, offset: 0x14, size: 0x4, def value: None
 float_t  ____LodBias;

/// @brief Field _OverrideMaximumLodLevel, offset: 0x18, size: 0x1, def value: None
 bool  ____OverrideMaximumLodLevel;

/// @brief Field _MaximumLodLevel, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____MaximumLodLevel;

/// @brief Field _OverrideTerrainPixelError, offset: 0x20, size: 0x1, def value: None
 bool  ____OverrideTerrainPixelError;

/// @brief Field _TerrainPixelError, offset: 0x24, size: 0x4, def value: None
 float_t  ____TerrainPixelError;

/// @brief Field _OldLodBias, offset: 0x28, size: 0x4, def value: None
 float_t  ____OldLodBias;

/// @brief Field _OldMaximumLodLevelOverride, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____OldMaximumLodLevelOverride;

/// @brief Field _OldTerrainPixelError, offset: 0x30, size: 0x4, def value: None
 float_t  ____OldTerrainPixelError;

/// @brief Field _OldTerrainOverrides, offset: 0x34, size: 0x4, def value: None
 ::UnityEngine::TerrainQualityOverrides  ____OldTerrainOverrides;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::QualitySettingsOverride, ____OverrideLodBias) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QualitySettingsOverride, ____LodBias) == 0x14, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QualitySettingsOverride, ____OverrideMaximumLodLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QualitySettingsOverride, ____MaximumLodLevel) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QualitySettingsOverride, ____OverrideTerrainPixelError) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QualitySettingsOverride, ____TerrainPixelError) == 0x24, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QualitySettingsOverride, ____OldLodBias) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QualitySettingsOverride, ____OldMaximumLodLevelOverride) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QualitySettingsOverride, ____OldTerrainPixelError) == 0x30, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QualitySettingsOverride, ____OldTerrainOverrides) == 0x34, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::QualitySettingsOverride) == 0x38, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest

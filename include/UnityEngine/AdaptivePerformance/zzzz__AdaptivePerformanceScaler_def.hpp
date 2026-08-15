#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptivePerformanceScaler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AdaptivePerformanceScaler)
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceIndexer;
}
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceScalerSettingsBase;
}
namespace UnityEngine::AdaptivePerformance {
class IAdaptivePerformanceSettings;
}
namespace UnityEngine::AdaptivePerformance {
struct ScalerTarget;
}
namespace UnityEngine::AdaptivePerformance {
struct ScalerVisualImpact;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceScaler;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*, "UnityEngine.AdaptivePerformance", "AdaptivePerformanceScaler");
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler
class CORDL_TYPE AdaptivePerformanceScaler : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_CpuImpact, put=set_CpuImpact)) int32_t  CpuImpact;

 __declspec(property(get=get_CurrentLevel, put=set_CurrentLevel)) int32_t  CurrentLevel;

 __declspec(property(get=get_DefaultSetting, put=set_DefaultSetting)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  DefaultSetting;

 __declspec(property(get=get_Enabled, put=set_Enabled)) bool  Enabled;

 __declspec(property(get=get_GpuImpact, put=set_GpuImpact)) int32_t  GpuImpact;

 __declspec(property(get=get_IsMaxLevel)) bool  IsMaxLevel;

 __declspec(property(get=get_MaxBound, put=set_MaxBound)) float_t  MaxBound;

 __declspec(property(get=get_MaxLevel, put=set_MaxLevel)) int32_t  MaxLevel;

 __declspec(property(get=get_MinBound, put=set_MinBound)) float_t  MinBound;

 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

 __declspec(property(get=get_NotLeveled)) bool  NotLeveled;

 __declspec(property(get=get_OverrideLevel, put=set_OverrideLevel)) int32_t  OverrideLevel;

 __declspec(property(get=get_Scale, put=set_Scale)) float_t  Scale;

 __declspec(property(get=get_Target, put=set_Target)) ::UnityEngine::AdaptivePerformance::ScalerTarget  Target;

 __declspec(property(get=get_VisualImpact, put=set_VisualImpact)) ::UnityEngine::AdaptivePerformance::ScalerVisualImpact  VisualImpact;

/// @brief Field <CpuImpact>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__CpuImpact_k__BackingField, put=__cordl_internal_set__CpuImpact_k__BackingField)) int32_t  _CpuImpact_k__BackingField;

/// @brief Field <CurrentLevel>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentLevel_k__BackingField, put=__cordl_internal_set__CurrentLevel_k__BackingField)) int32_t  _CurrentLevel_k__BackingField;

/// @brief Field <GpuImpact>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__GpuImpact_k__BackingField, put=__cordl_internal_set__GpuImpact_k__BackingField)) int32_t  _GpuImpact_k__BackingField;

/// @brief Field m_Indexer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Indexer, put=__cordl_internal_set_m_Indexer)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*  m_Indexer;

/// @brief Field m_OverrideLevel, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_OverrideLevel, put=__cordl_internal_set_m_OverrideLevel)) int32_t  m_OverrideLevel;

/// @brief Field m_Settings, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Settings, put=__cordl_internal_set_m_Settings)) ::UnityW<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings>  m_Settings;

/// @brief Field m_defaultSetting, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_defaultSetting, put=__cordl_internal_set_m_defaultSetting)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  m_defaultSetting;

/// @brief Method Activate, addr 0x18221f580, size 0x20, virtual false, abstract: false, final false
inline void Activate() ;

/// @brief Method ApplyDefaultSetting, addr 0x1802d9830, size 0x10, virtual false, abstract: false, final false
inline void ApplyDefaultSetting(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  defaultSetting) ;

/// @brief Method Awake, addr 0x18221f5a0, size 0x80, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateCost, addr 0x18221f620, size 0x130, virtual false, abstract: false, final false
inline int32_t CalculateCost() ;

/// @brief Method Deactivate, addr 0x18221f750, size 0x20, virtual false, abstract: false, final false
inline void Deactivate() ;

/// @brief Method DecreaseLevel, addr 0x18221f770, size 0x60, virtual false, abstract: false, final false
inline void DecreaseLevel() ;

/// @brief Method EnableScaler, addr 0x18221f7d0, size 0x50, virtual false, abstract: false, final false
inline void EnableScaler() ;

/// @brief Method IncreaseLevel, addr 0x18221f820, size 0x80, virtual false, abstract: false, final false
inline void IncreaseLevel() ;

/// @brief Method InitializeScaler, addr 0x18221f8a0, size 0xb0, virtual false, abstract: false, final false
inline void InitializeScaler() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler* New_ctor() ;

/// @brief Method OnDisable, addr 0x18221f950, size 0x10, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDisabled, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnDisabled() ;

/// @brief Method OnEnable, addr 0x18221f7d0, size 0x50, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEnabled, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnEnabled() ;

/// @brief Method OnLevel, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnLevel() ;

/// @brief Method OnLevelDecrease, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnLevelDecrease() ;

/// @brief Method OnLevelIncrease, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnLevelIncrease() ;

/// @brief Method RemoveScaler, addr 0x18221f960, size 0x120, virtual false, abstract: false, final false
inline void RemoveScaler() ;

/// @brief Method ScaleChanged, addr 0x18221fa80, size 0x120, virtual false, abstract: false, final false
inline bool ScaleChanged() ;

constexpr int32_t const& __cordl_internal_get__CpuImpact_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__CpuImpact_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__CurrentLevel_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__CurrentLevel_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__GpuImpact_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__GpuImpact_k__BackingField() ;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer* const& __cordl_internal_get_m_Indexer() const;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*& __cordl_internal_get_m_Indexer() ;

constexpr int32_t const& __cordl_internal_get_m_OverrideLevel() const;

constexpr int32_t& __cordl_internal_get_m_OverrideLevel() ;

constexpr ::UnityW<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings> const& __cordl_internal_get_m_Settings() const;

constexpr ::UnityW<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings>& __cordl_internal_get_m_Settings() ;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* const& __cordl_internal_get_m_defaultSetting() const;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*& __cordl_internal_get_m_defaultSetting() ;

constexpr void __cordl_internal_set__CpuImpact_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__CurrentLevel_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__GpuImpact_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_m_Indexer(::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*  value) ;

constexpr void __cordl_internal_set_m_OverrideLevel(int32_t  value) ;

constexpr void __cordl_internal_set_m_Settings(::UnityW<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings>  value) ;

constexpr void __cordl_internal_set_m_defaultSetting(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

/// @brief Method .ctor, addr 0x18221fba0, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CpuImpact, addr 0x1803914a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_CpuImpact() ;

/// @brief Method get_CurrentLevel, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_CurrentLevel() ;

/// @brief Method get_DefaultSetting, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* get_DefaultSetting() ;

/// @brief Method get_Enabled, addr 0x18221fc30, size 0x10, virtual true, abstract: false, final false
inline bool get_Enabled() ;

/// @brief Method get_GpuImpact, addr 0x180396ef0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_GpuImpact() ;

/// @brief Method get_IsMaxLevel, addr 0x18221fc40, size 0x30, virtual false, abstract: false, final false
inline bool get_IsMaxLevel() ;

/// @brief Method get_MaxBound, addr 0x18221fc70, size 0x10, virtual true, abstract: false, final false
inline float_t get_MaxBound() ;

/// @brief Method get_MaxLevel, addr 0x18221fc80, size 0x10, virtual true, abstract: false, final false
inline int32_t get_MaxLevel() ;

/// @brief Method get_MinBound, addr 0x18221fc90, size 0x10, virtual true, abstract: false, final false
inline float_t get_MinBound() ;

/// @brief Method get_Name, addr 0x181d0da90, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_NotLeveled, addr 0x181dd0340, size 0x10, virtual false, abstract: false, final false
inline bool get_NotLeveled() ;

/// @brief Method get_OverrideLevel, addr 0x1803914b0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_OverrideLevel() ;

/// @brief Method get_Scale, addr 0x18221fca0, size 0x10, virtual true, abstract: false, final false
inline float_t get_Scale() ;

/// @brief Method get_Target, addr 0x18221fcb0, size 0x10, virtual true, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::ScalerTarget get_Target() ;

/// @brief Method get_VisualImpact, addr 0x18221fcc0, size 0x10, virtual true, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::ScalerVisualImpact get_VisualImpact() ;

/// @brief Method set_CpuImpact, addr 0x1803914c0, size 0x10, virtual false, abstract: false, final false
inline void set_CpuImpact(int32_t  value) ;

/// @brief Method set_CurrentLevel, addr 0x1803164e0, size 0x10, virtual false, abstract: false, final false
inline void set_CurrentLevel(int32_t  value) ;

/// @brief Method set_DefaultSetting, addr 0x1802d9830, size 0x10, virtual false, abstract: false, final false
inline void set_DefaultSetting(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

/// @brief Method set_Enabled, addr 0x18221fcd0, size 0x10, virtual true, abstract: false, final false
inline void set_Enabled(bool  value) ;

/// @brief Method set_GpuImpact, addr 0x180396f00, size 0x10, virtual false, abstract: false, final false
inline void set_GpuImpact(int32_t  value) ;

/// @brief Method set_MaxBound, addr 0x18221fce0, size 0x20, virtual true, abstract: false, final false
inline void set_MaxBound(float_t  value) ;

/// @brief Method set_MaxLevel, addr 0x18221fd00, size 0x10, virtual true, abstract: false, final false
inline void set_MaxLevel(int32_t  value) ;

/// @brief Method set_MinBound, addr 0x18221fd10, size 0x20, virtual true, abstract: false, final false
inline void set_MinBound(float_t  value) ;

/// @brief Method set_Name, addr 0x18221fd30, size 0x50, virtual true, abstract: false, final false
inline void set_Name(::StringW  value) ;

/// @brief Method set_OverrideLevel, addr 0x18221fd80, size 0x70, virtual false, abstract: false, final false
inline void set_OverrideLevel(int32_t  value) ;

/// @brief Method set_Scale, addr 0x18221fdf0, size 0x20, virtual true, abstract: false, final false
inline void set_Scale(float_t  value) ;

/// @brief Method set_Target, addr 0x18221fe10, size 0x10, virtual true, abstract: false, final false
inline void set_Target(::UnityEngine::AdaptivePerformance::ScalerTarget  value) ;

/// @brief Method set_VisualImpact, addr 0x18221fe20, size 0x10, virtual true, abstract: false, final false
inline void set_VisualImpact(::UnityEngine::AdaptivePerformance::ScalerVisualImpact  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptivePerformanceScaler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceScaler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptivePerformanceScaler(AdaptivePerformanceScaler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceScaler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptivePerformanceScaler(AdaptivePerformanceScaler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19408};

/// @brief Field m_Indexer, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*  ___m_Indexer;

/// @brief Field <CurrentLevel>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  ____CurrentLevel_k__BackingField;

/// @brief Field <GpuImpact>k__BackingField, offset: 0x24, size: 0x4, def value: None
 int32_t  ____GpuImpact_k__BackingField;

/// @brief Field <CpuImpact>k__BackingField, offset: 0x28, size: 0x4, def value: None
 int32_t  ____CpuImpact_k__BackingField;

/// @brief Field m_OverrideLevel, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___m_OverrideLevel;

/// @brief Field m_defaultSetting, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  ___m_defaultSetting;

/// @brief Field m_Settings, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings>  ___m_Settings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler, ___m_Indexer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler, ____CurrentLevel_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler, ____GpuImpact_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler, ____CpuImpact_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler, ___m_OverrideLevel) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler, ___m_defaultSetting) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler, ___m_Settings) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance

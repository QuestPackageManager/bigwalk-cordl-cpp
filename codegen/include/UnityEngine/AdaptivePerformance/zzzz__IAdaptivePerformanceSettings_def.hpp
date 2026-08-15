#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/IAdaptivePerformanceSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScalerProfile_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IAdaptivePerformanceSettings)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceIndexerSettings;
}
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceScalerProfile;
}
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceScalerSettings;
}
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceScaler;
}
namespace UnityEngine::AdaptivePerformance {
class IAdaptivePerformanceSettings___c__DisplayClass41_0;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class IAdaptivePerformanceSettings;
}
namespace UnityEngine::AdaptivePerformance {
class IAdaptivePerformanceSettings___c__DisplayClass41_0;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*);
MARK_REF_T(::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings___c__DisplayClass41_0*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*, "UnityEngine.AdaptivePerformance", "IAdaptivePerformanceSettings");
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings___c__DisplayClass41_0*, "UnityEngine.AdaptivePerformance", "IAdaptivePerformanceSettings/<>c__DisplayClass41_0");
// Dependencies System.Object
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings/<>c__DisplayClass41_0
class CORDL_TYPE IAdaptivePerformanceSettings___c__DisplayClass41_0 : public ::System::Object {
public:
// Declarations
/// @brief Field property, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_property, put=__cordl_internal_set_property)) ::System::Reflection::PropertyInfo*  property;

static inline ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings___c__DisplayClass41_0* New_ctor() ;

/// @brief Method <ApplyScalerProfileToAllScalers>b__0, addr 0x182222ff0, size 0x70, virtual false, abstract: false, final false
inline bool _ApplyScalerProfileToAllScalers_b__0(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*  s) ;

constexpr ::System::Reflection::PropertyInfo* const& __cordl_internal_get_property() const;

constexpr ::System::Reflection::PropertyInfo*& __cordl_internal_get_property() ;

constexpr void __cordl_internal_set_property(::System::Reflection::PropertyInfo*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IAdaptivePerformanceSettings___c__DisplayClass41_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IAdaptivePerformanceSettings___c__DisplayClass41_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IAdaptivePerformanceSettings___c__DisplayClass41_0(IAdaptivePerformanceSettings___c__DisplayClass41_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IAdaptivePerformanceSettings___c__DisplayClass41_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAdaptivePerformanceSettings___c__DisplayClass41_0(IAdaptivePerformanceSettings___c__DisplayClass41_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19435};

/// @brief Field property, offset: 0x10, size: 0x8, def value: None
 ::System::Reflection::PropertyInfo*  ___property;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings___c__DisplayClass41_0, ___property) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings___c__DisplayClass41_0) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
// Dependencies UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerProfile, UnityEngine.ScriptableObject
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings
class CORDL_TYPE IAdaptivePerformanceSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using __c__DisplayClass41_0 = ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings___c__DisplayClass41_0;

 __declspec(property(get=get_ActiveScalerProfile, put=set_ActiveScalerProfile)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*  ActiveScalerProfile;

 __declspec(property(get=get_AddedScalerViaScan, put=set_AddedScalerViaScan)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*  AddedScalerViaScan;

 __declspec(property(get=get_ScalerProfiles)) ::ArrayW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*>  ScalerProfiles;

 __declspec(property(get=get_automaticGameMode, put=set_automaticGameMode)) bool  automaticGameMode;

 __declspec(property(get=get_automaticPerformanceMode, put=set_automaticPerformanceMode)) bool  automaticPerformanceMode;

 __declspec(property(get=get_defaultScalerProfilerIndex, put=set_defaultScalerProfilerIndex)) int32_t  defaultScalerProfilerIndex;

 __declspec(property(get=get_enableBoostOnStartup, put=set_enableBoostOnStartup)) bool  enableBoostOnStartup;

 __declspec(property(get=get_indexerSettings, put=set_indexerSettings)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings*  indexerSettings;

/// @brief Field k_AssetVersion, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_k_AssetVersion, put=__cordl_internal_set_k_AssetVersion)) int32_t  k_AssetVersion;

 __declspec(property(get=get_logging, put=set_logging)) bool  logging;

/// @brief Field m_ActiveScalerProfile, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ActiveScalerProfile, put=__cordl_internal_set_m_ActiveScalerProfile)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*  m_ActiveScalerProfile;

/// @brief Field m_AddedScalerViaScan, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AddedScalerViaScan, put=__cordl_internal_set_m_AddedScalerViaScan)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*  m_AddedScalerViaScan;

/// @brief Field m_AutomaticGameModeEnabled, offset 0x1a, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AutomaticGameModeEnabled, put=__cordl_internal_set_m_AutomaticGameModeEnabled)) bool  m_AutomaticGameModeEnabled;

/// @brief Field m_AutomaticPerformanceModeEnabled, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AutomaticPerformanceModeEnabled, put=__cordl_internal_set_m_AutomaticPerformanceModeEnabled)) bool  m_AutomaticPerformanceModeEnabled;

/// @brief Field m_DefaultScalerProfilerIndex, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DefaultScalerProfilerIndex, put=__cordl_internal_set_m_DefaultScalerProfilerIndex)) int32_t  m_DefaultScalerProfilerIndex;

/// @brief Field m_EnableBoostOnStartup, offset 0x1b, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableBoostOnStartup, put=__cordl_internal_set_m_EnableBoostOnStartup)) bool  m_EnableBoostOnStartup;

/// @brief Field m_IndexerSettings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_IndexerSettings, put=__cordl_internal_set_m_IndexerSettings)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings*  m_IndexerSettings;

/// @brief Field m_Logging, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Logging, put=__cordl_internal_set_m_Logging)) bool  m_Logging;

/// @brief Field m_ScalerSettings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScalerSettings, put=__cordl_internal_set_m_ScalerSettings)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings*  m_ScalerSettings;

/// @brief Field m_StatsLoggingFrequencyInFrames, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_StatsLoggingFrequencyInFrames, put=__cordl_internal_set_m_StatsLoggingFrequencyInFrames)) int32_t  m_StatsLoggingFrequencyInFrames;

/// @brief Field m_scalerProfileList, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_scalerProfileList, put=__cordl_internal_set_m_scalerProfileList)) ::ArrayW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*>  m_scalerProfileList;

 __declspec(property(get=get_scalerSettings, put=set_scalerSettings)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings*  scalerSettings;

 __declspec(property(get=get_statsLoggingFrequencyInFrames, put=set_statsLoggingFrequencyInFrames)) int32_t  statsLoggingFrequencyInFrames;

/// @brief Method AddScalerProfileWithDefaultScalers, addr 0x1822214c0, size 0x120, virtual false, abstract: false, final false
inline void AddScalerProfileWithDefaultScalers(::StringW  name) ;

/// @brief Method ApplyScalerProfileToAllScalers, addr 0x1822215e0, size 0x390, virtual false, abstract: false, final false
inline bool ApplyScalerProfileToAllScalers() ;

/// @brief Method DeleteScalerProfileAt, addr 0x182221970, size 0xe0, virtual false, abstract: false, final false
inline void DeleteScalerProfileAt(int32_t  index) ;

/// @brief Method GetAvailableScalerProfiles, addr 0x182221a50, size 0x170, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> GetAvailableScalerProfiles() ;

/// @brief Method LoadScalerProfile, addr 0x182221bc0, size 0x370, virtual false, abstract: false, final false
inline void LoadScalerProfile(::StringW  scalerProfileName) ;

static inline ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings* New_ctor() ;

/// @brief Method OnEnable, addr 0x182221f30, size 0x10, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr int32_t const& __cordl_internal_get_k_AssetVersion() const;

constexpr int32_t& __cordl_internal_get_k_AssetVersion() ;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile* const& __cordl_internal_get_m_ActiveScalerProfile() const;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*& __cordl_internal_get_m_ActiveScalerProfile() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>* const& __cordl_internal_get_m_AddedScalerViaScan() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*& __cordl_internal_get_m_AddedScalerViaScan() ;

constexpr bool const& __cordl_internal_get_m_AutomaticGameModeEnabled() const;

constexpr bool& __cordl_internal_get_m_AutomaticGameModeEnabled() ;

constexpr bool const& __cordl_internal_get_m_AutomaticPerformanceModeEnabled() const;

constexpr bool& __cordl_internal_get_m_AutomaticPerformanceModeEnabled() ;

constexpr int32_t const& __cordl_internal_get_m_DefaultScalerProfilerIndex() const;

constexpr int32_t& __cordl_internal_get_m_DefaultScalerProfilerIndex() ;

constexpr bool const& __cordl_internal_get_m_EnableBoostOnStartup() const;

constexpr bool& __cordl_internal_get_m_EnableBoostOnStartup() ;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings* const& __cordl_internal_get_m_IndexerSettings() const;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings*& __cordl_internal_get_m_IndexerSettings() ;

constexpr bool const& __cordl_internal_get_m_Logging() const;

constexpr bool& __cordl_internal_get_m_Logging() ;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings* const& __cordl_internal_get_m_ScalerSettings() const;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings*& __cordl_internal_get_m_ScalerSettings() ;

constexpr int32_t const& __cordl_internal_get_m_StatsLoggingFrequencyInFrames() const;

constexpr int32_t& __cordl_internal_get_m_StatsLoggingFrequencyInFrames() ;

constexpr ::ArrayW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*> const& __cordl_internal_get_m_scalerProfileList() const;

constexpr ::ArrayW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*>& __cordl_internal_get_m_scalerProfileList() ;

constexpr void __cordl_internal_set_k_AssetVersion(int32_t  value) ;

constexpr void __cordl_internal_set_m_ActiveScalerProfile(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*  value) ;

constexpr void __cordl_internal_set_m_AddedScalerViaScan(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*  value) ;

constexpr void __cordl_internal_set_m_AutomaticGameModeEnabled(bool  value) ;

constexpr void __cordl_internal_set_m_AutomaticPerformanceModeEnabled(bool  value) ;

constexpr void __cordl_internal_set_m_DefaultScalerProfilerIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_EnableBoostOnStartup(bool  value) ;

constexpr void __cordl_internal_set_m_IndexerSettings(::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings*  value) ;

constexpr void __cordl_internal_set_m_Logging(bool  value) ;

constexpr void __cordl_internal_set_m_ScalerSettings(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings*  value) ;

constexpr void __cordl_internal_set_m_StatsLoggingFrequencyInFrames(int32_t  value) ;

constexpr void __cordl_internal_set_m_scalerProfileList(::ArrayW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*>  value) ;

/// @brief Method .ctor, addr 0x182221f40, size 0xe0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ActiveScalerProfile, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile* get_ActiveScalerProfile() ;

/// @brief Method get_AddedScalerViaScan, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>* get_AddedScalerViaScan() ;

/// @brief Method get_ScalerProfiles, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*> get_ScalerProfiles() ;

/// @brief Method get_automaticGameMode, addr 0x1805c5560, size 0x10, virtual false, abstract: false, final false
inline bool get_automaticGameMode() ;

/// @brief Method get_automaticPerformanceMode, addr 0x1814f8710, size 0x10, virtual false, abstract: false, final false
inline bool get_automaticPerformanceMode() ;

/// @brief Method get_defaultScalerProfilerIndex, addr 0x1803d4dd0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_defaultScalerProfilerIndex() ;

/// @brief Method get_enableBoostOnStartup, addr 0x1819b9460, size 0x10, virtual false, abstract: false, final false
inline bool get_enableBoostOnStartup() ;

/// @brief Method get_indexerSettings, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings* get_indexerSettings() ;

/// @brief Method get_logging, addr 0x18037a0f0, size 0x10, virtual false, abstract: false, final false
inline bool get_logging() ;

/// @brief Method get_scalerSettings, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings* get_scalerSettings() ;

/// @brief Method get_statsLoggingFrequencyInFrames, addr 0x1802f42c0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_statsLoggingFrequencyInFrames() ;

/// @brief Method set_ActiveScalerProfile, addr 0x1802d9840, size 0x10, virtual false, abstract: false, final false
inline void set_ActiveScalerProfile(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*  value) ;

/// @brief Method set_AddedScalerViaScan, addr 0x1802d9830, size 0x10, virtual false, abstract: false, final false
inline void set_AddedScalerViaScan(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*  value) ;

/// @brief Method set_automaticGameMode, addr 0x1805c55e0, size 0x10, virtual false, abstract: false, final false
inline void set_automaticGameMode(bool  value) ;

/// @brief Method set_automaticPerformanceMode, addr 0x1818376c0, size 0x10, virtual false, abstract: false, final false
inline void set_automaticPerformanceMode(bool  value) ;

/// @brief Method set_defaultScalerProfilerIndex, addr 0x1803d4ea0, size 0x10, virtual false, abstract: false, final false
inline void set_defaultScalerProfilerIndex(int32_t  value) ;

/// @brief Method set_enableBoostOnStartup, addr 0x1819b9510, size 0x10, virtual false, abstract: false, final false
inline void set_enableBoostOnStartup(bool  value) ;

/// @brief Method set_indexerSettings, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_indexerSettings(::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings*  value) ;

/// @brief Method set_logging, addr 0x1803a7530, size 0x10, virtual false, abstract: false, final false
inline void set_logging(bool  value) ;

/// @brief Method set_scalerSettings, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_scalerSettings(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings*  value) ;

/// @brief Method set_statsLoggingFrequencyInFrames, addr 0x1802f43d0, size 0x10, virtual false, abstract: false, final false
inline void set_statsLoggingFrequencyInFrames(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IAdaptivePerformanceSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IAdaptivePerformanceSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IAdaptivePerformanceSettings(IAdaptivePerformanceSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IAdaptivePerformanceSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAdaptivePerformanceSettings(IAdaptivePerformanceSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19436};

/// @brief Field m_Logging, offset: 0x18, size: 0x1, def value: None
 bool  ___m_Logging;

/// @brief Field m_AutomaticPerformanceModeEnabled, offset: 0x19, size: 0x1, def value: None
 bool  ___m_AutomaticPerformanceModeEnabled;

/// @brief Field m_AutomaticGameModeEnabled, offset: 0x1a, size: 0x1, def value: None
 bool  ___m_AutomaticGameModeEnabled;

/// @brief Field m_EnableBoostOnStartup, offset: 0x1b, size: 0x1, def value: None
 bool  ___m_EnableBoostOnStartup;

/// @brief Field m_StatsLoggingFrequencyInFrames, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___m_StatsLoggingFrequencyInFrames;

/// @brief Field m_IndexerSettings, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings*  ___m_IndexerSettings;

/// @brief Field m_ScalerSettings, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings*  ___m_ScalerSettings;

/// @brief Field m_AddedScalerViaScan, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*  ___m_AddedScalerViaScan;

/// @brief Field m_ActiveScalerProfile, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*  ___m_ActiveScalerProfile;

/// @brief Field m_scalerProfileList, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*>  ___m_scalerProfileList;

/// @brief Field m_DefaultScalerProfilerIndex, offset: 0x48, size: 0x4, def value: None
 int32_t  ___m_DefaultScalerProfilerIndex;

/// @brief Field k_AssetVersion, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___k_AssetVersion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings, ___m_Logging) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings, ___m_AutomaticPerformanceModeEnabled) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings, ___m_AutomaticGameModeEnabled) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings, ___m_EnableBoostOnStartup) == 0x1b, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings, ___m_StatsLoggingFrequencyInFrames) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings, ___m_IndexerSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings, ___m_ScalerSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings, ___m_AddedScalerViaScan) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings, ___m_ActiveScalerProfile) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings, ___m_scalerProfileList) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings, ___m_DefaultScalerProfilerIndex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings, ___k_AssetVersion) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance

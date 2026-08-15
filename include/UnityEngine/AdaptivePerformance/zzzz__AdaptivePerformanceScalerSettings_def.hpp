#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptivePerformanceScalerSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScalerSettingsBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AdaptivePerformanceScalerSettings)
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
namespace System {
class Type;
}
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceScalerSettingsBase;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceScalerSettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings*, "UnityEngine.AdaptivePerformance", "AdaptivePerformanceScalerSettings");
// Dependencies System.Object, UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerSettingsBase
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerSettings
class CORDL_TYPE AdaptivePerformanceScalerSettings : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AdaptiveBatching, put=set_AdaptiveBatching)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  AdaptiveBatching;

 __declspec(property(get=get_AdaptiveDecals, put=set_AdaptiveDecals)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  AdaptiveDecals;

 __declspec(property(get=get_AdaptiveFramerate, put=set_AdaptiveFramerate)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  AdaptiveFramerate;

 __declspec(property(get=get_AdaptiveLOD, put=set_AdaptiveLOD)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  AdaptiveLOD;

 __declspec(property(get=get_AdaptiveLayerCulling, put=set_AdaptiveLayerCulling)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  AdaptiveLayerCulling;

 __declspec(property(get=get_AdaptiveLut, put=set_AdaptiveLut)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  AdaptiveLut;

 __declspec(property(get=get_AdaptiveMSAA, put=set_AdaptiveMSAA)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  AdaptiveMSAA;

 __declspec(property(get=get_AdaptivePhysics, put=set_AdaptivePhysics)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  AdaptivePhysics;

 __declspec(property(get=get_AdaptiveResolution, put=set_AdaptiveResolution)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  AdaptiveResolution;

 __declspec(property(get=get_AdaptiveShadowCascade, put=set_AdaptiveShadowCascade)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  AdaptiveShadowCascade;

 __declspec(property(get=get_AdaptiveShadowCascades)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  AdaptiveShadowCascades;

 __declspec(property(get=get_AdaptiveShadowDistance, put=set_AdaptiveShadowDistance)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  AdaptiveShadowDistance;

 __declspec(property(get=get_AdaptiveShadowQuality, put=set_AdaptiveShadowQuality)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  AdaptiveShadowQuality;

 __declspec(property(get=get_AdaptiveShadowmapResolution, put=set_AdaptiveShadowmapResolution)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  AdaptiveShadowmapResolution;

 __declspec(property(get=get_AdaptiveSorting, put=set_AdaptiveSorting)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  AdaptiveSorting;

 __declspec(property(get=get_AdaptiveTransparency, put=set_AdaptiveTransparency)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  AdaptiveTransparency;

 __declspec(property(get=get_AdaptiveViewDistance, put=set_AdaptiveViewDistance)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  AdaptiveViewDistance;

 __declspec(property(get=get_DefaultScalerSettings)) ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*>*  DefaultScalerSettings;

/// @brief Field k_DefaultScalerNames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_DefaultScalerNames, put=setStaticF_k_DefaultScalerNames)) ::System::Collections::Generic::List_1<::System::Type*>*  k_DefaultScalerNames;

/// @brief Field m_AdaptiveBatching, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AdaptiveBatching, put=__cordl_internal_set_m_AdaptiveBatching)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  m_AdaptiveBatching;

/// @brief Field m_AdaptiveDecals, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AdaptiveDecals, put=__cordl_internal_set_m_AdaptiveDecals)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  m_AdaptiveDecals;

/// @brief Field m_AdaptiveFramerate, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AdaptiveFramerate, put=__cordl_internal_set_m_AdaptiveFramerate)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  m_AdaptiveFramerate;

/// @brief Field m_AdaptiveLOD, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AdaptiveLOD, put=__cordl_internal_set_m_AdaptiveLOD)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  m_AdaptiveLOD;

/// @brief Field m_AdaptiveLayerCulling, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AdaptiveLayerCulling, put=__cordl_internal_set_m_AdaptiveLayerCulling)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  m_AdaptiveLayerCulling;

/// @brief Field m_AdaptiveLut, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AdaptiveLut, put=__cordl_internal_set_m_AdaptiveLut)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  m_AdaptiveLut;

/// @brief Field m_AdaptiveMSAA, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AdaptiveMSAA, put=__cordl_internal_set_m_AdaptiveMSAA)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  m_AdaptiveMSAA;

/// @brief Field m_AdaptivePhysics, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AdaptivePhysics, put=__cordl_internal_set_m_AdaptivePhysics)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  m_AdaptivePhysics;

/// @brief Field m_AdaptiveResolution, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AdaptiveResolution, put=__cordl_internal_set_m_AdaptiveResolution)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  m_AdaptiveResolution;

/// @brief Field m_AdaptiveShadowCascade, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AdaptiveShadowCascade, put=__cordl_internal_set_m_AdaptiveShadowCascade)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  m_AdaptiveShadowCascade;

/// @brief Field m_AdaptiveShadowDistance, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AdaptiveShadowDistance, put=__cordl_internal_set_m_AdaptiveShadowDistance)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  m_AdaptiveShadowDistance;

/// @brief Field m_AdaptiveShadowQuality, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AdaptiveShadowQuality, put=__cordl_internal_set_m_AdaptiveShadowQuality)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  m_AdaptiveShadowQuality;

/// @brief Field m_AdaptiveShadowmapResolution, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AdaptiveShadowmapResolution, put=__cordl_internal_set_m_AdaptiveShadowmapResolution)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  m_AdaptiveShadowmapResolution;

/// @brief Field m_AdaptiveSorting, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AdaptiveSorting, put=__cordl_internal_set_m_AdaptiveSorting)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  m_AdaptiveSorting;

/// @brief Field m_AdaptiveTransparency, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AdaptiveTransparency, put=__cordl_internal_set_m_AdaptiveTransparency)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  m_AdaptiveTransparency;

/// @brief Field m_AdaptiveViewDistance, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AdaptiveViewDistance, put=__cordl_internal_set_m_AdaptiveViewDistance)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  m_AdaptiveViewDistance;

/// @brief Field m_DefaultScalerSettings, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DefaultScalerSettings, put=__cordl_internal_set_m_DefaultScalerSettings)) ::ArrayW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*>  m_DefaultScalerSettings;

/// @brief Field m_ReadOnlyDefaultScalerSettings, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ReadOnlyDefaultScalerSettings, put=__cordl_internal_set_m_ReadOnlyDefaultScalerSettings)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*>*  m_ReadOnlyDefaultScalerSettings;

/// @brief Method ApplySettings, addr 0x18221df80, size 0x360, virtual false, abstract: false, final false
inline void ApplySettings(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings*  settings) ;

/// @brief Method ApplySettingsBase, addr 0x18221df40, size 0x40, virtual false, abstract: false, final false
inline void ApplySettingsBase(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  destination, ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  sources) ;

static inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings* New_ctor() ;

/// @brief Method SyncDefaultScalerSettings, addr 0x18221e2e0, size 0x1b0, virtual false, abstract: false, final false
inline void SyncDefaultScalerSettings() ;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* const& __cordl_internal_get_m_AdaptiveBatching() const;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*& __cordl_internal_get_m_AdaptiveBatching() ;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* const& __cordl_internal_get_m_AdaptiveDecals() const;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*& __cordl_internal_get_m_AdaptiveDecals() ;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* const& __cordl_internal_get_m_AdaptiveFramerate() const;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*& __cordl_internal_get_m_AdaptiveFramerate() ;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* const& __cordl_internal_get_m_AdaptiveLOD() const;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*& __cordl_internal_get_m_AdaptiveLOD() ;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* const& __cordl_internal_get_m_AdaptiveLayerCulling() const;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*& __cordl_internal_get_m_AdaptiveLayerCulling() ;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* const& __cordl_internal_get_m_AdaptiveLut() const;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*& __cordl_internal_get_m_AdaptiveLut() ;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* const& __cordl_internal_get_m_AdaptiveMSAA() const;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*& __cordl_internal_get_m_AdaptiveMSAA() ;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* const& __cordl_internal_get_m_AdaptivePhysics() const;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*& __cordl_internal_get_m_AdaptivePhysics() ;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* const& __cordl_internal_get_m_AdaptiveResolution() const;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*& __cordl_internal_get_m_AdaptiveResolution() ;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* const& __cordl_internal_get_m_AdaptiveShadowCascade() const;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*& __cordl_internal_get_m_AdaptiveShadowCascade() ;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* const& __cordl_internal_get_m_AdaptiveShadowDistance() const;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*& __cordl_internal_get_m_AdaptiveShadowDistance() ;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* const& __cordl_internal_get_m_AdaptiveShadowQuality() const;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*& __cordl_internal_get_m_AdaptiveShadowQuality() ;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* const& __cordl_internal_get_m_AdaptiveShadowmapResolution() const;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*& __cordl_internal_get_m_AdaptiveShadowmapResolution() ;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* const& __cordl_internal_get_m_AdaptiveSorting() const;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*& __cordl_internal_get_m_AdaptiveSorting() ;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* const& __cordl_internal_get_m_AdaptiveTransparency() const;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*& __cordl_internal_get_m_AdaptiveTransparency() ;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* const& __cordl_internal_get_m_AdaptiveViewDistance() const;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*& __cordl_internal_get_m_AdaptiveViewDistance() ;

constexpr ::ArrayW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*> const& __cordl_internal_get_m_DefaultScalerSettings() const;

constexpr ::ArrayW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*>& __cordl_internal_get_m_DefaultScalerSettings() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*>* const& __cordl_internal_get_m_ReadOnlyDefaultScalerSettings() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*>*& __cordl_internal_get_m_ReadOnlyDefaultScalerSettings() ;

constexpr void __cordl_internal_set_m_AdaptiveBatching(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

constexpr void __cordl_internal_set_m_AdaptiveDecals(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

constexpr void __cordl_internal_set_m_AdaptiveFramerate(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

constexpr void __cordl_internal_set_m_AdaptiveLOD(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

constexpr void __cordl_internal_set_m_AdaptiveLayerCulling(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

constexpr void __cordl_internal_set_m_AdaptiveLut(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

constexpr void __cordl_internal_set_m_AdaptiveMSAA(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

constexpr void __cordl_internal_set_m_AdaptivePhysics(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

constexpr void __cordl_internal_set_m_AdaptiveResolution(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

constexpr void __cordl_internal_set_m_AdaptiveShadowCascade(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

constexpr void __cordl_internal_set_m_AdaptiveShadowDistance(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

constexpr void __cordl_internal_set_m_AdaptiveShadowQuality(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

constexpr void __cordl_internal_set_m_AdaptiveShadowmapResolution(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

constexpr void __cordl_internal_set_m_AdaptiveSorting(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

constexpr void __cordl_internal_set_m_AdaptiveTransparency(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

constexpr void __cordl_internal_set_m_AdaptiveViewDistance(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

constexpr void __cordl_internal_set_m_DefaultScalerSettings(::ArrayW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*>  value) ;

constexpr void __cordl_internal_set_m_ReadOnlyDefaultScalerSettings(::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*>*  value) ;

/// @brief Method .ctor, addr 0x18221eaa0, size 0xa80, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::System::Type*>* getStaticF_k_DefaultScalerNames() ;

/// @brief Method get_AdaptiveBatching, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* get_AdaptiveBatching() ;

/// @brief Method get_AdaptiveDecals, addr 0x1802ec4c0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* get_AdaptiveDecals() ;

/// @brief Method get_AdaptiveFramerate, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* get_AdaptiveFramerate() ;

/// @brief Method get_AdaptiveLOD, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* get_AdaptiveLOD() ;

/// @brief Method get_AdaptiveLayerCulling, addr 0x1802e5800, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* get_AdaptiveLayerCulling() ;

/// @brief Method get_AdaptiveLut, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* get_AdaptiveLut() ;

/// @brief Method get_AdaptiveMSAA, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* get_AdaptiveMSAA() ;

/// @brief Method get_AdaptivePhysics, addr 0x1803a74e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* get_AdaptivePhysics() ;

/// @brief Method get_AdaptiveResolution, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* get_AdaptiveResolution() ;

/// @brief Method get_AdaptiveShadowCascade, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* get_AdaptiveShadowCascade() ;

/// @brief Method get_AdaptiveShadowCascades, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* get_AdaptiveShadowCascades() ;

/// @brief Method get_AdaptiveShadowDistance, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* get_AdaptiveShadowDistance() ;

/// @brief Method get_AdaptiveShadowQuality, addr 0x1802e75e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* get_AdaptiveShadowQuality() ;

/// @brief Method get_AdaptiveShadowmapResolution, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* get_AdaptiveShadowmapResolution() ;

/// @brief Method get_AdaptiveSorting, addr 0x1803a74d0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* get_AdaptiveSorting() ;

/// @brief Method get_AdaptiveTransparency, addr 0x1802e5710, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* get_AdaptiveTransparency() ;

/// @brief Method get_AdaptiveViewDistance, addr 0x18039fe40, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* get_AdaptiveViewDistance() ;

/// @brief Method get_DefaultScalerSettings, addr 0x18221f520, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*>* get_DefaultScalerSettings() ;

static inline void setStaticF_k_DefaultScalerNames(::System::Collections::Generic::List_1<::System::Type*>*  value) ;

/// @brief Method set_AdaptiveBatching, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_AdaptiveBatching(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

/// @brief Method set_AdaptiveDecals, addr 0x1803117a0, size 0x10, virtual false, abstract: false, final false
inline void set_AdaptiveDecals(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

/// @brief Method set_AdaptiveFramerate, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_AdaptiveFramerate(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

/// @brief Method set_AdaptiveLOD, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_AdaptiveLOD(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

/// @brief Method set_AdaptiveLayerCulling, addr 0x180374490, size 0x20, virtual false, abstract: false, final false
inline void set_AdaptiveLayerCulling(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

/// @brief Method set_AdaptiveLut, addr 0x1802d9830, size 0x10, virtual false, abstract: false, final false
inline void set_AdaptiveLut(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

/// @brief Method set_AdaptiveMSAA, addr 0x1802d9840, size 0x10, virtual false, abstract: false, final false
inline void set_AdaptiveMSAA(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

/// @brief Method set_AdaptivePhysics, addr 0x1803f5420, size 0x10, virtual false, abstract: false, final false
inline void set_AdaptivePhysics(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

/// @brief Method set_AdaptiveResolution, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_AdaptiveResolution(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

/// @brief Method set_AdaptiveShadowCascade, addr 0x1802e5d90, size 0x10, virtual false, abstract: false, final false
inline void set_AdaptiveShadowCascade(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

/// @brief Method set_AdaptiveShadowDistance, addr 0x1802e5e30, size 0x10, virtual false, abstract: false, final false
inline void set_AdaptiveShadowDistance(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

/// @brief Method set_AdaptiveShadowQuality, addr 0x1802f8080, size 0x10, virtual false, abstract: false, final false
inline void set_AdaptiveShadowQuality(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

/// @brief Method set_AdaptiveShadowmapResolution, addr 0x180308de0, size 0x10, virtual false, abstract: false, final false
inline void set_AdaptiveShadowmapResolution(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

/// @brief Method set_AdaptiveSorting, addr 0x1803d49a0, size 0x10, virtual false, abstract: false, final false
inline void set_AdaptiveSorting(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

/// @brief Method set_AdaptiveTransparency, addr 0x1802e5a20, size 0x10, virtual false, abstract: false, final false
inline void set_AdaptiveTransparency(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

/// @brief Method set_AdaptiveViewDistance, addr 0x1803d5ad0, size 0x10, virtual false, abstract: false, final false
inline void set_AdaptiveViewDistance(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptivePerformanceScalerSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceScalerSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptivePerformanceScalerSettings(AdaptivePerformanceScalerSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceScalerSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptivePerformanceScalerSettings(AdaptivePerformanceScalerSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19433};

/// @brief Field obsoleteMsg offset 0xffffffff size 0x8
static constexpr ::ConstString  obsoleteMsg{u"AdaptiveShadowCascades has been renamed. Please use AdaptiveShadowCascade. (UnityUpgradable) -> AdaptiveShadowCascade"};

/// @brief Field m_AdaptiveFramerate, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  ___m_AdaptiveFramerate;

/// @brief Field m_AdaptiveResolution, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  ___m_AdaptiveResolution;

/// @brief Field m_AdaptiveBatching, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  ___m_AdaptiveBatching;

/// @brief Field m_AdaptiveLOD, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  ___m_AdaptiveLOD;

/// @brief Field m_AdaptiveLut, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  ___m_AdaptiveLut;

/// @brief Field m_AdaptiveMSAA, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  ___m_AdaptiveMSAA;

/// @brief Field m_AdaptiveShadowCascade, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  ___m_AdaptiveShadowCascade;

/// @brief Field m_AdaptiveShadowDistance, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  ___m_AdaptiveShadowDistance;

/// @brief Field m_AdaptiveShadowmapResolution, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  ___m_AdaptiveShadowmapResolution;

/// @brief Field m_AdaptiveShadowQuality, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  ___m_AdaptiveShadowQuality;

/// @brief Field m_AdaptiveSorting, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  ___m_AdaptiveSorting;

/// @brief Field m_AdaptiveTransparency, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  ___m_AdaptiveTransparency;

/// @brief Field m_AdaptiveViewDistance, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  ___m_AdaptiveViewDistance;

/// @brief Field m_AdaptivePhysics, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  ___m_AdaptivePhysics;

/// @brief Field m_AdaptiveDecals, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  ___m_AdaptiveDecals;

/// @brief Field m_AdaptiveLayerCulling, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*  ___m_AdaptiveLayerCulling;

/// @brief Field m_DefaultScalerSettings, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*>  ___m_DefaultScalerSettings;

/// @brief Field m_ReadOnlyDefaultScalerSettings, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*>*  ___m_ReadOnlyDefaultScalerSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings, ___m_AdaptiveFramerate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings, ___m_AdaptiveResolution) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings, ___m_AdaptiveBatching) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings, ___m_AdaptiveLOD) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings, ___m_AdaptiveLut) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings, ___m_AdaptiveMSAA) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings, ___m_AdaptiveShadowCascade) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings, ___m_AdaptiveShadowDistance) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings, ___m_AdaptiveShadowmapResolution) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings, ___m_AdaptiveShadowQuality) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings, ___m_AdaptiveSorting) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings, ___m_AdaptiveTransparency) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings, ___m_AdaptiveViewDistance) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings, ___m_AdaptivePhysics) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings, ___m_AdaptiveDecals) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings, ___m_AdaptiveLayerCulling) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings, ___m_DefaultScalerSettings) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings, ___m_ReadOnlyDefaultScalerSettings) == 0x98, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings) == 0xa0, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance

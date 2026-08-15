#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptivePerformanceIndexer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__StateAction_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AdaptivePerformanceIndexer)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceScalerEfficiencyTracker;
}
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceScaler;
}
namespace UnityEngine::AdaptivePerformance {
class IAdaptivePerformanceSettings;
}
namespace UnityEngine::AdaptivePerformance {
class PerformanceStateTracker;
}
namespace UnityEngine::AdaptivePerformance {
struct StateAction;
}
namespace UnityEngine::AdaptivePerformance {
class ThermalStateTracker;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceIndexer;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*, "UnityEngine.AdaptivePerformance", "AdaptivePerformanceIndexer");
// Dependencies System.Object, UnityEngine.AdaptivePerformance.StateAction
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.AdaptivePerformanceIndexer
class CORDL_TYPE AdaptivePerformanceIndexer : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_PerformanceAction, put=set_PerformanceAction)) ::UnityEngine::AdaptivePerformance::StateAction  PerformanceAction;

 __declspec(property(put=set_ThermalAction)) ::UnityEngine::AdaptivePerformance::StateAction  ThermalAction;

 __declspec(property(get=get_TimeUntilNextAction, put=set_TimeUntilNextAction)) float_t  TimeUntilNextAction;

/// @brief Field <PerformanceAction>k__BackingField, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__PerformanceAction_k__BackingField, put=__cordl_internal_set__PerformanceAction_k__BackingField)) ::UnityEngine::AdaptivePerformance::StateAction  _PerformanceAction_k__BackingField;

/// @brief Field <ThermalAction>k__BackingField, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__ThermalAction_k__BackingField, put=__cordl_internal_set__ThermalAction_k__BackingField)) ::UnityEngine::AdaptivePerformance::StateAction  _ThermalAction_k__BackingField;

/// @brief Field <TimeUntilNextAction>k__BackingField, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__TimeUntilNextAction_k__BackingField, put=__cordl_internal_set__TimeUntilNextAction_k__BackingField)) float_t  _TimeUntilNextAction_k__BackingField;

/// @brief Field m_AppliedScalers, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AppliedScalers, put=__cordl_internal_set_m_AppliedScalers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*  m_AppliedScalers;

/// @brief Field m_DisabledScalers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DisabledScalers, put=__cordl_internal_set_m_DisabledScalers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*  m_DisabledScalers;

/// @brief Field m_PerformanceStateTracker, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PerformanceStateTracker, put=__cordl_internal_set_m_PerformanceStateTracker)) ::UnityEngine::AdaptivePerformance::PerformanceStateTracker*  m_PerformanceStateTracker;

/// @brief Field m_ScalerEfficiencyTracker, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScalerEfficiencyTracker, put=__cordl_internal_set_m_ScalerEfficiencyTracker)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker*  m_ScalerEfficiencyTracker;

/// @brief Field m_Settings, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Settings, put=__cordl_internal_set_m_Settings)) ::UnityW<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings>  m_Settings;

/// @brief Field m_ThermalStateTracker, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ThermalStateTracker, put=__cordl_internal_set_m_ThermalStateTracker)) ::UnityEngine::AdaptivePerformance::ThermalStateTracker*  m_ThermalStateTracker;

/// @brief Field m_UnappliedScalers, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UnappliedScalers, put=__cordl_internal_set_m_UnappliedScalers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*  m_UnappliedScalers;

/// @brief Method ActivateEnabledScalers, addr 0x182217060, size 0x110, virtual false, abstract: false, final false
inline void ActivateEnabledScalers() ;

/// @brief Method AddScaler, addr 0x182217170, size 0xa0, virtual false, abstract: false, final false
inline void AddScaler(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*  scaler) ;

/// @brief Method ApplyLowestCostScaler, addr 0x182217210, size 0x1c0, virtual false, abstract: false, final false
inline bool ApplyLowestCostScaler() ;

/// @brief Method ApplyScaler, addr 0x1822173d0, size 0x230, virtual false, abstract: false, final false
inline void ApplyScaler(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*  scaler) ;

/// @brief Method CollectProfilerStats, addr 0x182217600, size 0x2c0, virtual false, abstract: false, final false
inline void CollectProfilerStats() ;

/// @brief Method DeactivateDisabledScalers, addr 0x1822178c0, size 0x220, virtual false, abstract: false, final false
inline void DeactivateDisabledScalers() ;

/// @brief Method DeltaTime, addr 0x182127910, size 0x10, virtual true, abstract: false, final false
inline float_t DeltaTime() ;

/// @brief Method GetAppliedScalers, addr 0x182217ae0, size 0x60, virtual false, abstract: false, final false
inline void GetAppliedScalers(::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*>  scalers) ;

/// @brief Method GetDisabledScalers, addr 0x182217b40, size 0x60, virtual false, abstract: false, final false
inline void GetDisabledScalers(::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*>  scalers) ;

/// @brief Method GetUnappliedScalers, addr 0x182217ba0, size 0x60, virtual false, abstract: false, final false
inline void GetUnappliedScalers(::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*>  scalers) ;

static inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer* New_ctor(::by_ref<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>  settings, ::UnityEngine::AdaptivePerformance::PerformanceStateTracker*  tracker) ;

/// @brief Method RemoveScaler, addr 0x182217c00, size 0x100, virtual false, abstract: false, final false
inline bool RemoveScaler(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*  scaler) ;

/// @brief Method UnapplyAllScalers, addr 0x182217d00, size 0x260, virtual false, abstract: false, final false
inline void UnapplyAllScalers() ;

/// @brief Method UnapplyHighestCostScaler, addr 0x182217f60, size 0xf0, virtual false, abstract: false, final false
inline bool UnapplyHighestCostScaler() ;

/// @brief Method UnapplyScaler, addr 0x182218050, size 0x220, virtual false, abstract: false, final false
inline void UnapplyScaler(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*  scaler) ;

/// @brief Method Update, addr 0x1822182e0, size 0x380, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateOverrideLevel, addr 0x182218270, size 0x70, virtual false, abstract: false, final false
inline void UpdateOverrideLevel(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*  scaler) ;

constexpr ::UnityEngine::AdaptivePerformance::StateAction const& __cordl_internal_get__PerformanceAction_k__BackingField() const;

constexpr ::UnityEngine::AdaptivePerformance::StateAction& __cordl_internal_get__PerformanceAction_k__BackingField() ;

constexpr ::UnityEngine::AdaptivePerformance::StateAction const& __cordl_internal_get__ThermalAction_k__BackingField() const;

constexpr ::UnityEngine::AdaptivePerformance::StateAction& __cordl_internal_get__ThermalAction_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__TimeUntilNextAction_k__BackingField() const;

constexpr float_t& __cordl_internal_get__TimeUntilNextAction_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>* const& __cordl_internal_get_m_AppliedScalers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*& __cordl_internal_get_m_AppliedScalers() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>* const& __cordl_internal_get_m_DisabledScalers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*& __cordl_internal_get_m_DisabledScalers() ;

constexpr ::UnityEngine::AdaptivePerformance::PerformanceStateTracker* const& __cordl_internal_get_m_PerformanceStateTracker() const;

constexpr ::UnityEngine::AdaptivePerformance::PerformanceStateTracker*& __cordl_internal_get_m_PerformanceStateTracker() ;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker* const& __cordl_internal_get_m_ScalerEfficiencyTracker() const;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker*& __cordl_internal_get_m_ScalerEfficiencyTracker() ;

constexpr ::UnityW<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings> const& __cordl_internal_get_m_Settings() const;

constexpr ::UnityW<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings>& __cordl_internal_get_m_Settings() ;

constexpr ::UnityEngine::AdaptivePerformance::ThermalStateTracker* const& __cordl_internal_get_m_ThermalStateTracker() const;

constexpr ::UnityEngine::AdaptivePerformance::ThermalStateTracker*& __cordl_internal_get_m_ThermalStateTracker() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>* const& __cordl_internal_get_m_UnappliedScalers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*& __cordl_internal_get_m_UnappliedScalers() ;

constexpr void __cordl_internal_set__PerformanceAction_k__BackingField(::UnityEngine::AdaptivePerformance::StateAction  value) ;

constexpr void __cordl_internal_set__ThermalAction_k__BackingField(::UnityEngine::AdaptivePerformance::StateAction  value) ;

constexpr void __cordl_internal_set__TimeUntilNextAction_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_m_AppliedScalers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*  value) ;

constexpr void __cordl_internal_set_m_DisabledScalers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*  value) ;

constexpr void __cordl_internal_set_m_PerformanceStateTracker(::UnityEngine::AdaptivePerformance::PerformanceStateTracker*  value) ;

constexpr void __cordl_internal_set_m_ScalerEfficiencyTracker(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker*  value) ;

constexpr void __cordl_internal_set_m_Settings(::UnityW<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings>  value) ;

constexpr void __cordl_internal_set_m_ThermalStateTracker(::UnityEngine::AdaptivePerformance::ThermalStateTracker*  value) ;

constexpr void __cordl_internal_set_m_UnappliedScalers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*  value) ;

/// @brief Method .ctor, addr 0x182218660, size 0x120, virtual false, abstract: false, final false
inline void _ctor(::by_ref<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>  settings, ::UnityEngine::AdaptivePerformance::PerformanceStateTracker*  tracker) ;

/// @brief Method get_PerformanceAction, addr 0x1803d7410, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::StateAction get_PerformanceAction() ;

/// @brief Method get_TimeUntilNextAction, addr 0x1802f8050, size 0x10, virtual false, abstract: false, final false
inline float_t get_TimeUntilNextAction() ;

/// @brief Method set_PerformanceAction, addr 0x1803d75f0, size 0x10, virtual false, abstract: false, final false
inline void set_PerformanceAction(::UnityEngine::AdaptivePerformance::StateAction  value) ;

/// @brief Method set_ThermalAction, addr 0x180e25b60, size 0x5f70, virtual false, abstract: false, final false
inline void set_ThermalAction(::UnityEngine::AdaptivePerformance::StateAction  value) ;

/// @brief Method set_TimeUntilNextAction, addr 0x18046fb70, size 0x10, virtual false, abstract: false, final false
inline void set_TimeUntilNextAction(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptivePerformanceIndexer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceIndexer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptivePerformanceIndexer(AdaptivePerformanceIndexer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceIndexer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptivePerformanceIndexer(AdaptivePerformanceIndexer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19404};

/// @brief Field m_FeatureName offset 0xffffffff size 0x8
static constexpr ::ConstString  m_FeatureName{u"Indexer"};

/// @brief Field m_UnappliedScalers, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*  ___m_UnappliedScalers;

/// @brief Field m_AppliedScalers, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*  ___m_AppliedScalers;

/// @brief Field m_DisabledScalers, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*  ___m_DisabledScalers;

/// @brief Field m_ThermalStateTracker, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::ThermalStateTracker*  ___m_ThermalStateTracker;

/// @brief Field m_PerformanceStateTracker, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::PerformanceStateTracker*  ___m_PerformanceStateTracker;

/// @brief Field m_ScalerEfficiencyTracker, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker*  ___m_ScalerEfficiencyTracker;

/// @brief Field m_Settings, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings>  ___m_Settings;

/// @brief Field <TimeUntilNextAction>k__BackingField, offset: 0x48, size: 0x4, def value: None
 float_t  ____TimeUntilNextAction_k__BackingField;

/// @brief Field <ThermalAction>k__BackingField, offset: 0x4c, size: 0x4, def value: None
 ::UnityEngine::AdaptivePerformance::StateAction  ____ThermalAction_k__BackingField;

/// @brief Field <PerformanceAction>k__BackingField, offset: 0x50, size: 0x4, def value: None
 ::UnityEngine::AdaptivePerformance::StateAction  ____PerformanceAction_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer, ___m_UnappliedScalers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer, ___m_AppliedScalers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer, ___m_DisabledScalers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer, ___m_ThermalStateTracker) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer, ___m_PerformanceStateTracker) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer, ___m_ScalerEfficiencyTracker) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer, ___m_Settings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer, ____TimeUntilNextAction_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer, ____ThermalAction_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer, ____PerformanceAction_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer) == 0x58, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance

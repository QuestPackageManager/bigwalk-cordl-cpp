#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/IAdaptivePerformance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAdaptivePerformance)
namespace UnityEngine::AdaptivePerformance::Provider {
struct Feature;
}
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceIndexer;
}
namespace UnityEngine::AdaptivePerformance {
class IAdaptivePerformanceSettings;
}
namespace UnityEngine::AdaptivePerformance {
class IPerformanceStatus;
}
namespace UnityEngine::AdaptivePerformance {
class IThermalStatus;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class IAdaptivePerformance;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::IAdaptivePerformance*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::IAdaptivePerformance*, "UnityEngine.AdaptivePerformance", "IAdaptivePerformance");
// Dependencies 
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.IAdaptivePerformance
class CORDL_TYPE IAdaptivePerformance {
public:
// Declarations
 __declspec(property(get=get_Indexer)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*  Indexer;

 __declspec(property(get=get_PerformanceStatus)) ::UnityEngine::AdaptivePerformance::IPerformanceStatus*  PerformanceStatus;

 __declspec(property(get=get_Settings)) ::UnityW<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings>  Settings;

 __declspec(property(get=get_ThermalStatus)) ::UnityEngine::AdaptivePerformance::IThermalStatus*  ThermalStatus;

/// @brief Method SupportedFeature, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool SupportedFeature(::UnityEngine::AdaptivePerformance::Provider::Feature  feature) ;

/// @brief Method get_Indexer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer* get_Indexer() ;

/// @brief Method get_PerformanceStatus, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::IPerformanceStatus* get_PerformanceStatus() ;

/// @brief Method get_Settings, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings> get_Settings() ;

/// @brief Method get_ThermalStatus, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::IThermalStatus* get_ThermalStatus() ;

// Ctor Parameters [CppParam { name: "", ty: "IAdaptivePerformance", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAdaptivePerformance(IAdaptivePerformance const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19393};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AdaptivePerformance

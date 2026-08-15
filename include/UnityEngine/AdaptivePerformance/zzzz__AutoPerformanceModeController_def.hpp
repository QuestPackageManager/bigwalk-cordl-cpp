#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AutoPerformanceModeController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AutoPerformanceModeController)
namespace UnityEngine::AdaptivePerformance {
class IPerformanceModeStatus;
}
namespace UnityEngine::AdaptivePerformance {
struct PerformanceMode;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class AutoPerformanceModeController;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::AutoPerformanceModeController*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AutoPerformanceModeController*, "UnityEngine.AdaptivePerformance", "AutoPerformanceModeController");
// Dependencies System.Object
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.AutoPerformanceModeController
class CORDL_TYPE AutoPerformanceModeController : public ::System::Object {
public:
// Declarations
/// @brief Field m_FeatureName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FeatureName, put=__cordl_internal_set_m_FeatureName)) ::StringW  m_FeatureName;

static inline ::UnityEngine::AdaptivePerformance::AutoPerformanceModeController* New_ctor(::UnityEngine::AdaptivePerformance::IPerformanceModeStatus*  perfModeStat) ;

/// @brief Method OnPerformanceModeChange, addr 0x182220b70, size 0x80, virtual false, abstract: false, final false
inline void OnPerformanceModeChange(::UnityEngine::AdaptivePerformance::PerformanceMode  performanceMode) ;

constexpr ::StringW const& __cordl_internal_get_m_FeatureName() const;

constexpr ::StringW& __cordl_internal_get_m_FeatureName() ;

constexpr void __cordl_internal_set_m_FeatureName(::StringW  value) ;

/// @brief Method <.ctor>b__1_0, addr 0x182220b70, size 0x80, virtual false, abstract: false, final false
inline void __ctor_b__1_0(::UnityEngine::AdaptivePerformance::PerformanceMode  mode) ;

/// @brief Method .ctor, addr 0x182220bf0, size 0x150, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::AdaptivePerformance::IPerformanceModeStatus*  perfModeStat) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AutoPerformanceModeController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AutoPerformanceModeController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AutoPerformanceModeController(AutoPerformanceModeController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AutoPerformanceModeController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AutoPerformanceModeController(AutoPerformanceModeController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19387};

/// @brief Field m_FeatureName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___m_FeatureName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::AutoPerformanceModeController, ___m_FeatureName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::AutoPerformanceModeController) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance

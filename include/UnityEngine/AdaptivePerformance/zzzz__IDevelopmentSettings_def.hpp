#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/IDevelopmentSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDevelopmentSettings)
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class IDevelopmentSettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::IDevelopmentSettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::IDevelopmentSettings*, "UnityEngine.AdaptivePerformance", "IDevelopmentSettings");
// Dependencies 
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.IDevelopmentSettings
class CORDL_TYPE IDevelopmentSettings {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IDevelopmentSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDevelopmentSettings(IDevelopmentSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19397};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AdaptivePerformance

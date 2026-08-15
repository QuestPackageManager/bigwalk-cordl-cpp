#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/Provider/IApplicationLifecycle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IApplicationLifecycle)
// Forward declare root types
namespace UnityEngine::AdaptivePerformance::Provider {
class IApplicationLifecycle;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle*, "UnityEngine.AdaptivePerformance.Provider", "IApplicationLifecycle");
// Dependencies 
namespace UnityEngine::AdaptivePerformance::Provider {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.Provider.IApplicationLifecycle
class CORDL_TYPE IApplicationLifecycle {
public:
// Declarations
/// @brief Method ApplicationPause, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ApplicationPause() ;

/// @brief Method ApplicationResume, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ApplicationResume() ;

// Ctor Parameters [CppParam { name: "", ty: "IApplicationLifecycle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IApplicationLifecycle(IApplicationLifecycle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19459};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AdaptivePerformance::Provider

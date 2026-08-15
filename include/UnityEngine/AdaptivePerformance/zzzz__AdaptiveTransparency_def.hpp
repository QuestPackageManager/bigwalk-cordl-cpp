#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptiveTransparency.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScaler_def.hpp"
CORDL_MODULE_EXPORT(AdaptiveTransparency)
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class AdaptiveTransparency;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::AdaptiveTransparency*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AdaptiveTransparency*, "UnityEngine.AdaptivePerformance", "AdaptiveTransparency");
// Dependencies UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.AdaptiveTransparency
class CORDL_TYPE AdaptiveTransparency : public ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler {
public:
// Declarations
/// @brief Method Awake, addr 0x182223d80, size 0x50, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptiveTransparency* New_ctor() ;

/// @brief Method OnDestroy, addr 0x182223dd0, size 0x20, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisabled, addr 0x182223dd0, size 0x20, virtual true, abstract: false, final false
inline void OnDisabled() ;

/// @brief Method OnLevel, addr 0x182223df0, size 0x50, virtual true, abstract: false, final false
inline void OnLevel() ;

/// @brief Method .ctor, addr 0x1822160a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptiveTransparency() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptiveTransparency", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptiveTransparency(AdaptiveTransparency && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptiveTransparency", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptiveTransparency(AdaptiveTransparency const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19455};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AdaptivePerformance::AdaptiveTransparency) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance

#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptiveSorting.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScaler_def.hpp"
CORDL_MODULE_EXPORT(AdaptiveSorting)
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class AdaptiveSorting;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::AdaptiveSorting*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AdaptiveSorting*, "UnityEngine.AdaptivePerformance", "AdaptiveSorting");
// Dependencies UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.AdaptiveSorting
class CORDL_TYPE AdaptiveSorting : public ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler {
public:
// Declarations
/// @brief Field m_DefaultSorting, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_DefaultSorting, put=__cordl_internal_set_m_DefaultSorting)) bool  m_DefaultSorting;

/// @brief Method Awake, addr 0x182223ca0, size 0x50, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptiveSorting* New_ctor() ;

/// @brief Method OnDisabled, addr 0x182223cf0, size 0x20, virtual true, abstract: false, final false
inline void OnDisabled() ;

/// @brief Method OnEnabled, addr 0x182223d10, size 0x20, virtual true, abstract: false, final false
inline void OnEnabled() ;

/// @brief Method OnLevel, addr 0x182223d30, size 0x50, virtual true, abstract: false, final false
inline void OnLevel() ;

constexpr bool const& __cordl_internal_get_m_DefaultSorting() const;

constexpr bool& __cordl_internal_get_m_DefaultSorting() ;

constexpr void __cordl_internal_set_m_DefaultSorting(bool  value) ;

/// @brief Method .ctor, addr 0x1822160a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptiveSorting() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptiveSorting", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptiveSorting(AdaptiveSorting && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptiveSorting", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptiveSorting(AdaptiveSorting const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19454};

/// @brief Field m_DefaultSorting, offset: 0x40, size: 0x1, def value: None
 bool  ___m_DefaultSorting;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptiveSorting, ___m_DefaultSorting) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::AdaptiveSorting) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance

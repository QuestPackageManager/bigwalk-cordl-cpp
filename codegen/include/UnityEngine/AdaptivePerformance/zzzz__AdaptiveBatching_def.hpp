#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptiveBatching.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScaler_def.hpp"
CORDL_MODULE_EXPORT(AdaptiveBatching)
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class AdaptiveBatching;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::AdaptiveBatching*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AdaptiveBatching*, "UnityEngine.AdaptivePerformance", "AdaptiveBatching");
// Dependencies UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.AdaptiveBatching
class CORDL_TYPE AdaptiveBatching : public ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler {
public:
// Declarations
/// @brief Field m_DefaultState, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_DefaultState, put=__cordl_internal_set_m_DefaultState)) bool  m_DefaultState;

/// @brief Method Awake, addr 0x182215fc0, size 0x50, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptiveBatching* New_ctor() ;

/// @brief Method OnDisabled, addr 0x182216010, size 0x20, virtual true, abstract: false, final false
inline void OnDisabled() ;

/// @brief Method OnEnabled, addr 0x182216030, size 0x20, virtual true, abstract: false, final false
inline void OnEnabled() ;

/// @brief Method OnLevel, addr 0x182216050, size 0x50, virtual true, abstract: false, final false
inline void OnLevel() ;

constexpr bool const& __cordl_internal_get_m_DefaultState() const;

constexpr bool& __cordl_internal_get_m_DefaultState() ;

constexpr void __cordl_internal_set_m_DefaultState(bool  value) ;

/// @brief Method .ctor, addr 0x1822160a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptiveBatching() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptiveBatching", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptiveBatching(AdaptiveBatching && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptiveBatching", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptiveBatching(AdaptiveBatching const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19441};

/// @brief Field m_DefaultState, offset: 0x40, size: 0x1, def value: None
 bool  ___m_DefaultState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptiveBatching, ___m_DefaultState) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::AdaptiveBatching) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance

#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptiveMSAA.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScaler_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AdaptiveMSAA)
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class AdaptiveMSAA;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::AdaptiveMSAA*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AdaptiveMSAA*, "UnityEngine.AdaptivePerformance", "AdaptiveMSAA");
// Dependencies UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.AdaptiveMSAA
class CORDL_TYPE AdaptiveMSAA : public ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler {
public:
// Declarations
/// @brief Field m_DefaultAA, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DefaultAA, put=__cordl_internal_set_m_DefaultAA)) int32_t  m_DefaultAA;

/// @brief Method Awake, addr 0x182216820, size 0x50, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptiveMSAA* New_ctor() ;

/// @brief Method OnDisabled, addr 0x182216870, size 0x20, virtual true, abstract: false, final false
inline void OnDisabled() ;

/// @brief Method OnEnabled, addr 0x182216890, size 0x20, virtual true, abstract: false, final false
inline void OnEnabled() ;

/// @brief Method OnLevel, addr 0x1822168b0, size 0x50, virtual true, abstract: false, final false
inline void OnLevel() ;

constexpr int32_t const& __cordl_internal_get_m_DefaultAA() const;

constexpr int32_t& __cordl_internal_get_m_DefaultAA() ;

constexpr void __cordl_internal_set_m_DefaultAA(int32_t  value) ;

/// @brief Method .ctor, addr 0x1822160a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptiveMSAA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptiveMSAA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptiveMSAA(AdaptiveMSAA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptiveMSAA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptiveMSAA(AdaptiveMSAA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19447};

/// @brief Field m_DefaultAA, offset: 0x40, size: 0x4, def value: None
 int32_t  ___m_DefaultAA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptiveMSAA, ___m_DefaultAA) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::AdaptiveMSAA) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance

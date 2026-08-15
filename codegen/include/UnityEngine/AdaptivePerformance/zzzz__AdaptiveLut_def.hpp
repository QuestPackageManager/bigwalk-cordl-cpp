#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptiveLut.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScaler_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AdaptiveLut)
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class AdaptiveLut;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::AdaptiveLut*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AdaptiveLut*, "UnityEngine.AdaptivePerformance", "AdaptiveLut");
// Dependencies UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.AdaptiveLut
class CORDL_TYPE AdaptiveLut : public ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler {
public:
// Declarations
/// @brief Field m_DefaultLutBias, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DefaultLutBias, put=__cordl_internal_set_m_DefaultLutBias)) float_t  m_DefaultLutBias;

/// @brief Method Awake, addr 0x182216740, size 0x50, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptiveLut* New_ctor() ;

/// @brief Method OnDisabled, addr 0x182216790, size 0x20, virtual true, abstract: false, final false
inline void OnDisabled() ;

/// @brief Method OnEnabled, addr 0x1822167b0, size 0x20, virtual true, abstract: false, final false
inline void OnEnabled() ;

/// @brief Method OnLevel, addr 0x1822167d0, size 0x50, virtual true, abstract: false, final false
inline void OnLevel() ;

constexpr float_t const& __cordl_internal_get_m_DefaultLutBias() const;

constexpr float_t& __cordl_internal_get_m_DefaultLutBias() ;

constexpr void __cordl_internal_set_m_DefaultLutBias(float_t  value) ;

/// @brief Method .ctor, addr 0x1822160a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptiveLut() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptiveLut", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptiveLut(AdaptiveLut && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptiveLut", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptiveLut(AdaptiveLut const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19446};

/// @brief Field m_DefaultLutBias, offset: 0x40, size: 0x4, def value: None
 float_t  ___m_DefaultLutBias;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptiveLut, ___m_DefaultLutBias) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::AdaptiveLut) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance

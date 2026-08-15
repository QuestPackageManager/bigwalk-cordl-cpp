#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptiveViewDistance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScaler_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AdaptiveViewDistance)
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class AdaptiveViewDistance;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::AdaptiveViewDistance*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AdaptiveViewDistance*, "UnityEngine.AdaptivePerformance", "AdaptiveViewDistance");
// Dependencies UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.AdaptiveViewDistance
class CORDL_TYPE AdaptiveViewDistance : public ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler {
public:
// Declarations
/// @brief Field m_DefaultFarClipPlane, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DefaultFarClipPlane, put=__cordl_internal_set_m_DefaultFarClipPlane)) float_t  m_DefaultFarClipPlane;

/// @brief Method Awake, addr 0x182223e40, size 0x50, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptiveViewDistance* New_ctor() ;

/// @brief Method OnDisabled, addr 0x182223e90, size 0x50, virtual true, abstract: false, final false
inline void OnDisabled() ;

/// @brief Method OnEnabled, addr 0x182223ee0, size 0x40, virtual true, abstract: false, final false
inline void OnEnabled() ;

/// @brief Method OnLevel, addr 0x182223f20, size 0xa0, virtual true, abstract: false, final false
inline void OnLevel() ;

constexpr float_t const& __cordl_internal_get_m_DefaultFarClipPlane() const;

constexpr float_t& __cordl_internal_get_m_DefaultFarClipPlane() ;

constexpr void __cordl_internal_set_m_DefaultFarClipPlane(float_t  value) ;

/// @brief Method .ctor, addr 0x182223fc0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptiveViewDistance() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptiveViewDistance", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptiveViewDistance(AdaptiveViewDistance && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptiveViewDistance", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptiveViewDistance(AdaptiveViewDistance const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19456};

/// @brief Field m_DefaultFarClipPlane, offset: 0x40, size: 0x4, def value: None
 float_t  ___m_DefaultFarClipPlane;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptiveViewDistance, ___m_DefaultFarClipPlane) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::AdaptiveViewDistance) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance

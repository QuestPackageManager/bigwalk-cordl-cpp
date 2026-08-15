#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptiveLayerCulling.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScaler_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AdaptiveLayerCulling)
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class AdaptiveLayerCulling;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling*, "UnityEngine.AdaptivePerformance", "AdaptiveLayerCulling");
// Dependencies UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.AdaptiveLayerCulling
class CORDL_TYPE AdaptiveLayerCulling : public ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler {
public:
// Declarations
/// @brief Field init, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_init, put=__cordl_internal_set_init)) bool  init;

/// @brief Field m_cachedCamera, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_cachedCamera, put=__cordl_internal_set_m_cachedCamera)) ::UnityW<::UnityEngine::Camera>  m_cachedCamera;

/// @brief Field m_defaultDistances, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_defaultDistances, put=__cordl_internal_set_m_defaultDistances)) ::ArrayW<float_t>  m_defaultDistances;

/// @brief Field m_scaledDistances, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_scaledDistances, put=__cordl_internal_set_m_scaledDistances)) ::ArrayW<float_t>  m_scaledDistances;

/// @brief Method AsignDefaultValues, addr 0x182216490, size 0xb0, virtual false, abstract: false, final false
inline void AsignDefaultValues() ;

/// @brief Method Awake, addr 0x182216540, size 0x50, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling* New_ctor() ;

/// @brief Method OnDisabled, addr 0x182216590, size 0x50, virtual true, abstract: false, final false
inline void OnDisabled() ;

/// @brief Method OnEnabled, addr 0x1822165e0, size 0x10, virtual true, abstract: false, final false
inline void OnEnabled() ;

/// @brief Method OnLevel, addr 0x1822165f0, size 0xf0, virtual true, abstract: false, final false
inline void OnLevel() ;

constexpr bool const& __cordl_internal_get_init() const;

constexpr bool& __cordl_internal_get_init() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_m_cachedCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_m_cachedCamera() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_m_defaultDistances() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_m_defaultDistances() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_m_scaledDistances() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_m_scaledDistances() ;

constexpr void __cordl_internal_set_init(bool  value) ;

constexpr void __cordl_internal_set_m_cachedCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_m_defaultDistances(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_m_scaledDistances(::ArrayW<float_t>  value) ;

/// @brief Method .ctor, addr 0x1822166e0, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptiveLayerCulling() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptiveLayerCulling", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptiveLayerCulling(AdaptiveLayerCulling && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptiveLayerCulling", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptiveLayerCulling(AdaptiveLayerCulling const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19444};

/// @brief Field m_defaultDistances, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<float_t>  ___m_defaultDistances;

/// @brief Field m_scaledDistances, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<float_t>  ___m_scaledDistances;

/// @brief Field init, offset: 0x50, size: 0x1, def value: None
 bool  ___init;

/// @brief Field m_cachedCamera, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___m_cachedCamera;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling, ___m_defaultDistances) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling, ___m_scaledDistances) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling, ___init) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling, ___m_cachedCamera) == 0x58, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling) == 0x60, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance

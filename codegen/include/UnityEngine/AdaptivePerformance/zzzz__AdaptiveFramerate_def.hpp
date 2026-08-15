#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptiveFramerate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScaler_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AdaptiveFramerate)
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class AdaptiveFramerate;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::AdaptiveFramerate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AdaptiveFramerate*, "UnityEngine.AdaptivePerformance", "AdaptiveFramerate");
// Dependencies UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.AdaptiveFramerate
class CORDL_TYPE AdaptiveFramerate : public ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler {
public:
// Declarations
/// @brief Field m_DefaultFPS, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DefaultFPS, put=__cordl_internal_set_m_DefaultFPS)) int32_t  m_DefaultFPS;

/// @brief Field m_FirstTimeStart, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_FirstTimeStart, put=__cordl_internal_set_m_FirstTimeStart)) int32_t  m_FirstTimeStart;

/// @brief Method Awake, addr 0x1822161b0, size 0x50, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptiveFramerate* New_ctor() ;

/// @brief Method OnDisabled, addr 0x182216200, size 0x20, virtual true, abstract: false, final false
inline void OnDisabled() ;

/// @brief Method OnEnabled, addr 0x182216220, size 0x50, virtual true, abstract: false, final false
inline void OnEnabled() ;

/// @brief Method OnLevelDecrease, addr 0x182216270, size 0x80, virtual true, abstract: false, final false
inline void OnLevelDecrease() ;

/// @brief Method OnLevelIncrease, addr 0x1822162f0, size 0xc0, virtual true, abstract: false, final false
inline void OnLevelIncrease() ;

constexpr int32_t const& __cordl_internal_get_m_DefaultFPS() const;

constexpr int32_t& __cordl_internal_get_m_DefaultFPS() ;

constexpr int32_t const& __cordl_internal_get_m_FirstTimeStart() const;

constexpr int32_t& __cordl_internal_get_m_FirstTimeStart() ;

constexpr void __cordl_internal_set_m_DefaultFPS(int32_t  value) ;

constexpr void __cordl_internal_set_m_FirstTimeStart(int32_t  value) ;

/// @brief Method .ctor, addr 0x1822163b0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptiveFramerate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptiveFramerate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptiveFramerate(AdaptiveFramerate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptiveFramerate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptiveFramerate(AdaptiveFramerate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19443};

/// @brief Field m_DefaultFPS, offset: 0x40, size: 0x4, def value: None
 int32_t  ___m_DefaultFPS;

/// @brief Field m_FirstTimeStart, offset: 0x44, size: 0x4, def value: None
 int32_t  ___m_FirstTimeStart;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptiveFramerate, ___m_DefaultFPS) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptiveFramerate, ___m_FirstTimeStart) == 0x44, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::AdaptiveFramerate) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance

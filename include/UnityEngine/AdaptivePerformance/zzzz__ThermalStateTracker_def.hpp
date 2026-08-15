#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/ThermalStateTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ThermalStateTracker)
namespace UnityEngine::AdaptivePerformance {
struct StateAction;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class ThermalStateTracker;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::ThermalStateTracker*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::ThermalStateTracker*, "UnityEngine.AdaptivePerformance", "ThermalStateTracker");
// Dependencies System.Object
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.ThermalStateTracker
class CORDL_TYPE ThermalStateTracker : public ::System::Object {
public:
// Declarations
/// @brief Field throttlingTemp, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_throttlingTemp, put=__cordl_internal_set_throttlingTemp)) float_t  throttlingTemp;

/// @brief Field warningTemp, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_warningTemp, put=__cordl_internal_set_warningTemp)) float_t  warningTemp;

static inline ::UnityEngine::AdaptivePerformance::ThermalStateTracker* New_ctor() ;

/// @brief Method Update, addr 0x182222ad0, size 0x280, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::StateAction Update() ;

constexpr float_t const& __cordl_internal_get_throttlingTemp() const;

constexpr float_t& __cordl_internal_get_throttlingTemp() ;

constexpr float_t const& __cordl_internal_get_warningTemp() const;

constexpr float_t& __cordl_internal_get_warningTemp() ;

constexpr void __cordl_internal_set_throttlingTemp(float_t  value) ;

constexpr void __cordl_internal_set_warningTemp(float_t  value) ;

/// @brief Method .ctor, addr 0x182222d50, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThermalStateTracker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThermalStateTracker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThermalStateTracker(ThermalStateTracker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThermalStateTracker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThermalStateTracker(ThermalStateTracker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19401};

/// @brief Field warningTemp, offset: 0x10, size: 0x4, def value: None
 float_t  ___warningTemp;

/// @brief Field throttlingTemp, offset: 0x14, size: 0x4, def value: None
 float_t  ___throttlingTemp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::ThermalStateTracker, ___warningTemp) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::ThermalStateTracker, ___throttlingTemp) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::ThermalStateTracker) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance

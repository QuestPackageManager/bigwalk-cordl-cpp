#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptivePerformanceIndexerSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AdaptivePerformanceIndexerSettings)
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceIndexerSettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings*, "UnityEngine.AdaptivePerformance", "AdaptivePerformanceIndexerSettings");
// Dependencies System.Object
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.AdaptivePerformanceIndexerSettings
class CORDL_TYPE AdaptivePerformanceIndexerSettings : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_active)) bool  active;

/// @brief Field m_Active, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Active, put=__cordl_internal_set_m_Active)) bool  m_Active;

/// @brief Field m_PerformanceActionDelay, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PerformanceActionDelay, put=__cordl_internal_set_m_PerformanceActionDelay)) float_t  m_PerformanceActionDelay;

/// @brief Field m_ThermalActionDelay, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ThermalActionDelay, put=__cordl_internal_set_m_ThermalActionDelay)) float_t  m_ThermalActionDelay;

 __declspec(property(get=get_performanceActionDelay)) float_t  performanceActionDelay;

 __declspec(property(get=get_thermalActionDelay)) float_t  thermalActionDelay;

static inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings* New_ctor() ;

constexpr bool const& __cordl_internal_get_m_Active() const;

constexpr bool& __cordl_internal_get_m_Active() ;

constexpr float_t const& __cordl_internal_get_m_PerformanceActionDelay() const;

constexpr float_t& __cordl_internal_get_m_PerformanceActionDelay() ;

constexpr float_t const& __cordl_internal_get_m_ThermalActionDelay() const;

constexpr float_t& __cordl_internal_get_m_ThermalActionDelay() ;

constexpr void __cordl_internal_set_m_Active(bool  value) ;

constexpr void __cordl_internal_set_m_PerformanceActionDelay(float_t  value) ;

constexpr void __cordl_internal_set_m_ThermalActionDelay(float_t  value) ;

/// @brief Method .ctor, addr 0x182217040, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_active, addr 0x180392490, size 0x10, virtual false, abstract: false, final false
inline bool get_active() ;

/// @brief Method get_performanceActionDelay, addr 0x18048d8a0, size 0x10, virtual false, abstract: false, final false
inline float_t get_performanceActionDelay() ;

/// @brief Method get_thermalActionDelay, addr 0x1803bda00, size 0x10, virtual false, abstract: false, final false
inline float_t get_thermalActionDelay() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptivePerformanceIndexerSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceIndexerSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptivePerformanceIndexerSettings(AdaptivePerformanceIndexerSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceIndexerSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptivePerformanceIndexerSettings(AdaptivePerformanceIndexerSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19431};

/// @brief Field m_FeatureName offset 0xffffffff size 0x8
static constexpr ::ConstString  m_FeatureName{u"Indexer"};

/// @brief Field m_Active, offset: 0x10, size: 0x1, def value: None
 bool  ___m_Active;

/// @brief Field m_ThermalActionDelay, offset: 0x14, size: 0x4, def value: None
 float_t  ___m_ThermalActionDelay;

/// @brief Field m_PerformanceActionDelay, offset: 0x18, size: 0x4, def value: None
 float_t  ___m_PerformanceActionDelay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings, ___m_Active) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings, ___m_ThermalActionDelay) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings, ___m_PerformanceActionDelay) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance

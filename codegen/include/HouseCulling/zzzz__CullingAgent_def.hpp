#pragma once
// IWYU pragma private; include "HouseCulling/CullingAgent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CullingAgent)
namespace HouseCulling {
class CullingLocation;
}
namespace HouseCulling {
class CullingRegion;
}
namespace HouseCulling {
class CullingTrigger;
}
namespace HouseCulling {
class CullingVisibilityData;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace HouseCulling {
class CullingAgent;
}
// Write type traits
MARK_REF_T(::HouseCulling::CullingAgent*);
DEFINE_IL2CPP_CLASS(::HouseCulling::CullingAgent*, "HouseCulling", "CullingAgent");
// Dependencies UnityEngine.MonoBehaviour
namespace HouseCulling {
// Is value type: false
// CS Name: HouseCulling.CullingAgent
class CORDL_TYPE CullingAgent : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::UnityW<::HouseCulling::CullingAgent>  Instance;

/// @brief Field _uniqueRegions, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__uniqueRegions, put=__cordl_internal_set__uniqueRegions)) ::System::Collections::Generic::HashSet_1<::UnityW<::HouseCulling::CullingRegion>>*  _uniqueRegions;

/// @brief Field _uniqueRegionsNew, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__uniqueRegionsNew, put=__cordl_internal_set__uniqueRegionsNew)) ::System::Collections::Generic::HashSet_1<::UnityW<::HouseCulling::CullingRegion>>*  _uniqueRegionsNew;

/// @brief Field activeTriggers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeTriggers, put=__cordl_internal_set_activeTriggers)) ::System::Collections::Generic::List_1<::UnityW<::HouseCulling::CullingTrigger>>*  activeTriggers;

/// @brief Field cullingVisibilityData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cullingVisibilityData, put=__cordl_internal_set_cullingVisibilityData)) ::UnityW<::HouseCulling::CullingVisibilityData>  cullingVisibilityData;

/// @brief Field debugMode, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugMode, put=__cordl_internal_set_debugMode)) bool  debugMode;

/// @brief Field multiRegionLocations, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_multiRegionLocations, put=setStaticF_multiRegionLocations)) ::System::Collections::Generic::List_1<::UnityW<::HouseCulling::CullingLocation>>*  multiRegionLocations;

/// @brief Field neverCull, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_neverCull, put=__cordl_internal_set_neverCull)) bool  neverCull;

/// @brief Method Awake, addr 0x1803bdc80, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::HouseCulling::CullingAgent* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x1803bdcb0, size 0xb0, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  col) ;

/// @brief Method OnTriggerExit, addr 0x1803bdd60, size 0x90, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  col) ;

/// @brief Method Refresh, addr 0x1803bdff0, size 0x2e0, virtual false, abstract: false, final false
inline void Refresh(bool  forceFullRefresh) ;

/// @brief Method RefreshAfterRegionChange, addr 0x1803bddf0, size 0x200, virtual false, abstract: false, final false
inline void RefreshAfterRegionChange() ;

/// @brief Method ToggleDebug, addr 0x1803be2d0, size 0x50, virtual false, abstract: false, final false
static inline void ToggleDebug() ;

/// @brief Method ToggleEnabled, addr 0x1803be320, size 0x50, virtual false, abstract: false, final false
static inline void ToggleEnabled() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::HouseCulling::CullingRegion>>* const& __cordl_internal_get__uniqueRegions() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::HouseCulling::CullingRegion>>*& __cordl_internal_get__uniqueRegions() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::HouseCulling::CullingRegion>>* const& __cordl_internal_get__uniqueRegionsNew() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::HouseCulling::CullingRegion>>*& __cordl_internal_get__uniqueRegionsNew() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::HouseCulling::CullingTrigger>>* const& __cordl_internal_get_activeTriggers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::HouseCulling::CullingTrigger>>*& __cordl_internal_get_activeTriggers() ;

constexpr ::UnityW<::HouseCulling::CullingVisibilityData> const& __cordl_internal_get_cullingVisibilityData() const;

constexpr ::UnityW<::HouseCulling::CullingVisibilityData>& __cordl_internal_get_cullingVisibilityData() ;

constexpr bool const& __cordl_internal_get_debugMode() const;

constexpr bool& __cordl_internal_get_debugMode() ;

constexpr bool const& __cordl_internal_get_neverCull() const;

constexpr bool& __cordl_internal_get_neverCull() ;

constexpr void __cordl_internal_set__uniqueRegions(::System::Collections::Generic::HashSet_1<::UnityW<::HouseCulling::CullingRegion>>*  value) ;

constexpr void __cordl_internal_set__uniqueRegionsNew(::System::Collections::Generic::HashSet_1<::UnityW<::HouseCulling::CullingRegion>>*  value) ;

constexpr void __cordl_internal_set_activeTriggers(::System::Collections::Generic::List_1<::UnityW<::HouseCulling::CullingTrigger>>*  value) ;

constexpr void __cordl_internal_set_cullingVisibilityData(::UnityW<::HouseCulling::CullingVisibilityData>  value) ;

constexpr void __cordl_internal_set_debugMode(bool  value) ;

constexpr void __cordl_internal_set_neverCull(bool  value) ;

/// @brief Method .ctor, addr 0x1803be370, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::HouseCulling::CullingAgent> getStaticF_Instance() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::HouseCulling::CullingLocation>>* getStaticF_multiRegionLocations() ;

static inline void setStaticF_Instance(::UnityW<::HouseCulling::CullingAgent>  value) ;

static inline void setStaticF_multiRegionLocations(::System::Collections::Generic::List_1<::UnityW<::HouseCulling::CullingLocation>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CullingAgent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CullingAgent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CullingAgent(CullingAgent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CullingAgent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CullingAgent(CullingAgent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5783};

/// @brief Field cullingVisibilityData, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::HouseCulling::CullingVisibilityData>  ___cullingVisibilityData;

/// @brief Field activeTriggers, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::HouseCulling::CullingTrigger>>*  ___activeTriggers;

/// @brief Field _uniqueRegions, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::HouseCulling::CullingRegion>>*  ____uniqueRegions;

/// @brief Field _uniqueRegionsNew, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::HouseCulling::CullingRegion>>*  ____uniqueRegionsNew;

/// @brief Field neverCull, offset: 0x40, size: 0x1, def value: None
 bool  ___neverCull;

/// @brief Field debugMode, offset: 0x41, size: 0x1, def value: None
 bool  ___debugMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HouseCulling::CullingAgent, ___cullingVisibilityData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HouseCulling::CullingAgent, ___activeTriggers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HouseCulling::CullingAgent, ____uniqueRegions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HouseCulling::CullingAgent, ____uniqueRegionsNew) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HouseCulling::CullingAgent, ___neverCull) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HouseCulling::CullingAgent, ___debugMode) == 0x41, "Offset mismatch!");

static_assert(sizeof(::HouseCulling::CullingAgent) == 0x48, "Size mismatch!");

} // namespace end def HouseCulling

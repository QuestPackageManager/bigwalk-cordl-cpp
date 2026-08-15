#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectLaunchProp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Launcher_def.hpp"
#include "GlobalNamespace/zzzz__PeckPropReference_def.hpp"
#include "GlobalNamespace/zzzz__PeckStateFilter_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PeckEffectLaunchProp)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class TrackedPeckState;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckEffectLaunchProp;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckEffectLaunchProp*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectLaunchProp*, "", "PeckEffectLaunchProp");
// Dependencies Launcher, PeckPropReference, PeckStateFilter, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectLaunchProp
class CORDL_TYPE PeckEffectLaunchProp : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field launcher, offset 0x60, size 0x30 
 __declspec(property(get=__cordl_internal_get_launcher, put=__cordl_internal_set_launcher)) ::GlobalNamespace::Launcher  launcher;

/// @brief Field logVerbose, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field propReference, offset 0x28, size 0x38 
 __declspec(property(get=__cordl_internal_get_propReference, put=__cordl_internal_set_propReference)) ::GlobalNamespace::PeckPropReference  propReference;

/// @brief Field stateFilter, offset 0x90, size 0x10 
 __declspec(property(get=__cordl_internal_get_stateFilter, put=__cordl_internal_set_stateFilter)) ::GlobalNamespace::PeckStateFilter  stateFilter;

/// @brief Field trackedStateSystem, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_trackedStateSystem, put=__cordl_internal_set_trackedStateSystem)) ::UnityW<::GlobalNamespace::TrackedPeckState>  trackedStateSystem;

/// @brief Method Awake, addr 0x180449af0, size 0x70, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectLaunchProp* New_ctor() ;

/// @brief Method Peck, addr 0x180449b60, size 0x190, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  context) ;

constexpr ::GlobalNamespace::Launcher const& __cordl_internal_get_launcher() const;

constexpr ::GlobalNamespace::Launcher& __cordl_internal_get_launcher() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::GlobalNamespace::PeckPropReference const& __cordl_internal_get_propReference() const;

constexpr ::GlobalNamespace::PeckPropReference& __cordl_internal_get_propReference() ;

constexpr ::GlobalNamespace::PeckStateFilter const& __cordl_internal_get_stateFilter() const;

constexpr ::GlobalNamespace::PeckStateFilter& __cordl_internal_get_stateFilter() ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_trackedStateSystem() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_trackedStateSystem() ;

constexpr void __cordl_internal_set_launcher(::GlobalNamespace::Launcher  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_propReference(::GlobalNamespace::PeckPropReference  value) ;

constexpr void __cordl_internal_set_stateFilter(::GlobalNamespace::PeckStateFilter  value) ;

constexpr void __cordl_internal_set_trackedStateSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectLaunchProp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectLaunchProp", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectLaunchProp(PeckEffectLaunchProp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectLaunchProp", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectLaunchProp(PeckEffectLaunchProp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5385};

/// @brief Field trackedStateSystem, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___trackedStateSystem;

/// @brief Field propReference, offset: 0x28, size: 0x38, def value: None
 ::GlobalNamespace::PeckPropReference  ___propReference;

/// @brief Field launcher, offset: 0x60, size: 0x30, def value: None
 ::GlobalNamespace::Launcher  ___launcher;

/// @brief Field stateFilter, offset: 0x90, size: 0x10, def value: None
 ::GlobalNamespace::PeckStateFilter  ___stateFilter;

/// @brief Field logVerbose, offset: 0xa0, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectLaunchProp, ___trackedStateSystem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectLaunchProp, ___propReference) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectLaunchProp, ___launcher) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectLaunchProp, ___stateFilter) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectLaunchProp, ___logVerbose) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectLaunchProp) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace

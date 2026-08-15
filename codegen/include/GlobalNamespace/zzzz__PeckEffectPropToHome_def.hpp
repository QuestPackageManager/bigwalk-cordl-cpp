#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectPropToHome.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckPropHomeReference_def.hpp"
#include "GlobalNamespace/zzzz__PeckPropReference_def.hpp"
#include "GlobalNamespace/zzzz__PeckStateFilter_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PeckEffectPropToHome)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PeckSwitch;
}
namespace GlobalNamespace {
class TrackedPeckState;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckEffectPropToHome;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckEffectPropToHome*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectPropToHome*, "", "PeckEffectPropToHome");
// Dependencies PeckPropHomeReference, PeckPropReference, PeckStateFilter, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectPropToHome
class CORDL_TYPE PeckEffectPropToHome : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field logVerbose, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field onFailureSwitch, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFailureSwitch, put=__cordl_internal_set_onFailureSwitch)) ::UnityW<::GlobalNamespace::PeckSwitch>  onFailureSwitch;

/// @brief Field onSuccessSwitch, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccessSwitch, put=__cordl_internal_set_onSuccessSwitch)) ::UnityW<::GlobalNamespace::PeckSwitch>  onSuccessSwitch;

/// @brief Field propHomeReference, offset 0x28, size 0x30 
 __declspec(property(get=__cordl_internal_get_propHomeReference, put=__cordl_internal_set_propHomeReference)) ::GlobalNamespace::PeckPropHomeReference  propHomeReference;

/// @brief Field propReference, offset 0x58, size 0x38 
 __declspec(property(get=__cordl_internal_get_propReference, put=__cordl_internal_set_propReference)) ::GlobalNamespace::PeckPropReference  propReference;

/// @brief Field stateFilter, offset 0x90, size 0x10 
 __declspec(property(get=__cordl_internal_get_stateFilter, put=__cordl_internal_set_stateFilter)) ::GlobalNamespace::PeckStateFilter  stateFilter;

/// @brief Field trackedStateSystem, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_trackedStateSystem, put=__cordl_internal_set_trackedStateSystem)) ::UnityW<::GlobalNamespace::TrackedPeckState>  trackedStateSystem;

/// @brief Method Awake, addr 0x18044c550, size 0x70, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectPropToHome* New_ctor() ;

/// @brief Method Peck, addr 0x18044c5c0, size 0x1f0, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  peckContext) ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onFailureSwitch() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onFailureSwitch() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onSuccessSwitch() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onSuccessSwitch() ;

constexpr ::GlobalNamespace::PeckPropHomeReference const& __cordl_internal_get_propHomeReference() const;

constexpr ::GlobalNamespace::PeckPropHomeReference& __cordl_internal_get_propHomeReference() ;

constexpr ::GlobalNamespace::PeckPropReference const& __cordl_internal_get_propReference() const;

constexpr ::GlobalNamespace::PeckPropReference& __cordl_internal_get_propReference() ;

constexpr ::GlobalNamespace::PeckStateFilter const& __cordl_internal_get_stateFilter() const;

constexpr ::GlobalNamespace::PeckStateFilter& __cordl_internal_get_stateFilter() ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_trackedStateSystem() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_trackedStateSystem() ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_onFailureSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_onSuccessSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_propHomeReference(::GlobalNamespace::PeckPropHomeReference  value) ;

constexpr void __cordl_internal_set_propReference(::GlobalNamespace::PeckPropReference  value) ;

constexpr void __cordl_internal_set_stateFilter(::GlobalNamespace::PeckStateFilter  value) ;

constexpr void __cordl_internal_set_trackedStateSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectPropToHome() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectPropToHome", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectPropToHome(PeckEffectPropToHome && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectPropToHome", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectPropToHome(PeckEffectPropToHome const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5407};

/// @brief Field trackedStateSystem, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___trackedStateSystem;

/// @brief Field propHomeReference, offset: 0x28, size: 0x30, def value: None
 ::GlobalNamespace::PeckPropHomeReference  ___propHomeReference;

/// @brief Field propReference, offset: 0x58, size: 0x38, def value: None
 ::GlobalNamespace::PeckPropReference  ___propReference;

/// @brief Field stateFilter, offset: 0x90, size: 0x10, def value: None
 ::GlobalNamespace::PeckStateFilter  ___stateFilter;

/// @brief Field onSuccessSwitch, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onSuccessSwitch;

/// @brief Field onFailureSwitch, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onFailureSwitch;

/// @brief Field logVerbose, offset: 0xb0, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectPropToHome, ___trackedStateSystem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPropToHome, ___propHomeReference) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPropToHome, ___propReference) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPropToHome, ___stateFilter) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPropToHome, ___onSuccessSwitch) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPropToHome, ___onFailureSwitch) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPropToHome, ___logVerbose) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectPropToHome) == 0xb8, "Size mismatch!");

} // namespace end def GlobalNamespace

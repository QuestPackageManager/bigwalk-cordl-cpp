#pragma once
// IWYU pragma private; include "GlobalNamespace/SimPressSwitch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SimPressSwitch)
namespace GlobalNamespace {
class TrackedPeckState;
}
// Forward declare root types
namespace GlobalNamespace {
class SimPressSwitch;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SimPressSwitch*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SimPressSwitch*, "", "SimPressSwitch");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SimPressSwitch
class CORDL_TYPE SimPressSwitch : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field pressSystem, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_pressSystem, put=__cordl_internal_set_pressSystem)) ::UnityW<::GlobalNamespace::TrackedPeckState>  pressSystem;

/// @brief Field stateSystem, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_stateSystem, put=__cordl_internal_set_stateSystem)) ::UnityW<::GlobalNamespace::TrackedPeckState>  stateSystem;

static inline ::GlobalNamespace::SimPressSwitch* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_pressSystem() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_pressSystem() ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_stateSystem() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_stateSystem() ;

constexpr void __cordl_internal_set_pressSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

constexpr void __cordl_internal_set_stateSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimPressSwitch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimPressSwitch", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SimPressSwitch(SimPressSwitch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimPressSwitch", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimPressSwitch(SimPressSwitch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5122};

/// @brief Field pressSystem, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___pressSystem;

/// @brief Field stateSystem, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___stateSystem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimPressSwitch, ___pressSystem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimPressSwitch, ___stateSystem) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SimPressSwitch) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

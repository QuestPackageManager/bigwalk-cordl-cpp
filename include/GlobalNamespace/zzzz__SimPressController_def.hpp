#pragma once
// IWYU pragma private; include "GlobalNamespace/SimPressController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SimPressSwitch_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(SimPressController)
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
class SimPressController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SimPressController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SimPressController*, "", "SimPressController");
// Dependencies SimPressSwitch, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SimPressController
class CORDL_TYPE SimPressController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_isServer)) bool  isServer;

/// @brief Field logVerbose, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field onSucess, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSucess, put=__cordl_internal_set_onSucess)) ::UnityW<::GlobalNamespace::PeckSwitch>  onSucess;

/// @brief Field switches, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_switches, put=__cordl_internal_set_switches)) ::ArrayW<::UnityW<::GlobalNamespace::SimPressSwitch>>  switches;

/// @brief Method Awake, addr 0x180415030, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::SimPressController* New_ctor() ;

/// @brief Method PressPeck, addr 0x1804150d0, size 0x210, virtual false, abstract: false, final false
inline void PressPeck(::GlobalNamespace::PeckContext  peckContext, ::GlobalNamespace::TrackedPeckState*  pressedSystem) ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onSucess() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onSucess() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SimPressSwitch>> const& __cordl_internal_get_switches() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SimPressSwitch>>& __cordl_internal_get_switches() ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_onSucess(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_switches(::ArrayW<::UnityW<::GlobalNamespace::SimPressSwitch>>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_isServer, addr 0x1804152e0, size 0x30, virtual false, abstract: false, final false
inline bool get_isServer() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimPressController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimPressController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SimPressController(SimPressController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimPressController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimPressController(SimPressController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5121};

/// @brief Field switches, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::SimPressSwitch>>  ___switches;

/// @brief Field onSucess, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onSucess;

/// @brief Field logVerbose, offset: 0x30, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimPressController, ___switches) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimPressController, ___onSucess) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimPressController, ___logVerbose) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SimPressController) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace

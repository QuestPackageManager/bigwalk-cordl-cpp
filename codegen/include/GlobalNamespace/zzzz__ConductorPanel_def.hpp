#pragma once
// IWYU pragma private; include "GlobalNamespace/ConductorPanel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ConductorLight_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConductorPanel)
namespace GlobalNamespace {
class PressInOrder;
}
namespace GlobalNamespace {
class TrackedPeckState;
}
// Forward declare root types
namespace GlobalNamespace {
class ConductorPanel;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ConductorPanel*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConductorPanel*, "", "ConductorPanel");
// Dependencies ConductorLight, TrackedPeckState, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConductorPanel
class CORDL_TYPE ConductorPanel : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field conductorLights, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_conductorLights, put=__cordl_internal_set_conductorLights)) ::ArrayW<::UnityW<::GlobalNamespace::ConductorLight>>  conductorLights;

/// @brief Field identifingSystem, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_identifingSystem, put=__cordl_internal_set_identifingSystem)) ::UnityW<::GlobalNamespace::TrackedPeckState>  identifingSystem;

/// @brief Field pressInOrder, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_pressInOrder, put=__cordl_internal_set_pressInOrder)) ::UnityW<::GlobalNamespace::PressInOrder>  pressInOrder;

/// @brief Field promptSystems, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_promptSystems, put=__cordl_internal_set_promptSystems)) ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>  promptSystems;

/// @brief Method Awake, addr 0x1803f8500, size 0x210, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::ConductorPanel* New_ctor() ;

/// @brief Method SetPromptLight, addr 0x1803f8710, size 0xf0, virtual false, abstract: false, final false
inline void SetPromptLight(int32_t  index, bool  value, ::GlobalNamespace::TrackedPeckState*  specificSystem) ;

/// @brief Method SetShowLight, addr 0x1803f8800, size 0x80, virtual false, abstract: false, final false
inline void SetShowLight(int32_t  index, bool  value) ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::ConductorLight>> const& __cordl_internal_get_conductorLights() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::ConductorLight>>& __cordl_internal_get_conductorLights() ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_identifingSystem() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_identifingSystem() ;

constexpr ::UnityW<::GlobalNamespace::PressInOrder> const& __cordl_internal_get_pressInOrder() const;

constexpr ::UnityW<::GlobalNamespace::PressInOrder>& __cordl_internal_get_pressInOrder() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>> const& __cordl_internal_get_promptSystems() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>& __cordl_internal_get_promptSystems() ;

constexpr void __cordl_internal_set_conductorLights(::ArrayW<::UnityW<::GlobalNamespace::ConductorLight>>  value) ;

constexpr void __cordl_internal_set_identifingSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

constexpr void __cordl_internal_set_pressInOrder(::UnityW<::GlobalNamespace::PressInOrder>  value) ;

constexpr void __cordl_internal_set_promptSystems(::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConductorPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConductorPanel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConductorPanel(ConductorPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConductorPanel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConductorPanel(ConductorPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5031};

/// @brief Field pressInOrder, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PressInOrder>  ___pressInOrder;

/// @brief Field conductorLights, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::ConductorLight>>  ___conductorLights;

/// @brief Field promptSystems, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>  ___promptSystems;

/// @brief Field identifingSystem, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___identifingSystem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConductorPanel, ___pressInOrder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConductorPanel, ___conductorLights) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConductorPanel, ___promptSystems) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConductorPanel, ___identifingSystem) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ConductorPanel) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace

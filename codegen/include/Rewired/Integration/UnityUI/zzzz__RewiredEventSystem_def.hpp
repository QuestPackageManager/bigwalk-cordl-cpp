#pragma once
// IWYU pragma private; include "Rewired/Integration/UnityUI/RewiredEventSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
CORDL_MODULE_EXPORT(RewiredEventSystem)
// Forward declare root types
namespace Rewired::Integration::UnityUI {
class RewiredEventSystem;
}
// Write type traits
MARK_REF_T(::Rewired::Integration::UnityUI::RewiredEventSystem*);
DEFINE_IL2CPP_CLASS(::Rewired::Integration::UnityUI::RewiredEventSystem*, "Rewired.Integration.UnityUI", "RewiredEventSystem");
// Dependencies UnityEngine.EventSystems.EventSystem
namespace Rewired::Integration::UnityUI {
// Is value type: false
// CS Name: Rewired.Integration.UnityUI.RewiredEventSystem
class CORDL_TYPE RewiredEventSystem : public ::UnityEngine::EventSystems::EventSystem {
public:
// Declarations
/// @brief Field _alwaysUpdate, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__alwaysUpdate, put=__cordl_internal_set__alwaysUpdate)) bool  _alwaysUpdate;

 __declspec(property(get=get_alwaysUpdate, put=set_alwaysUpdate)) bool  alwaysUpdate;

static inline ::Rewired::Integration::UnityUI::RewiredEventSystem* New_ctor() ;

/// @brief Method Update, addr 0x1803ac340, size 0xd0, virtual true, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__alwaysUpdate() const;

constexpr bool& __cordl_internal_get__alwaysUpdate() ;

constexpr void __cordl_internal_set__alwaysUpdate(bool  value) ;

/// @brief Method .ctor, addr 0x1803ac410, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_alwaysUpdate, addr 0x1802e75b0, size 0x10, virtual false, abstract: false, final false
inline bool get_alwaysUpdate() ;

/// @brief Method set_alwaysUpdate, addr 0x1803ac420, size 0x10, virtual false, abstract: false, final false
inline void set_alwaysUpdate(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RewiredEventSystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RewiredEventSystem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RewiredEventSystem(RewiredEventSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RewiredEventSystem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RewiredEventSystem(RewiredEventSystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5697};

/// @brief Field _alwaysUpdate, offset: 0x60, size: 0x1, def value: None
 bool  ____alwaysUpdate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredEventSystem, ____alwaysUpdate) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Rewired::Integration::UnityUI::RewiredEventSystem) == 0x68, "Size mismatch!");

} // namespace end def Rewired::Integration::UnityUI

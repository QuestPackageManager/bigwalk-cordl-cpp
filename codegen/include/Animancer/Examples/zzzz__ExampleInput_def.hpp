#pragma once
// IWYU pragma private; include "Animancer/Examples/ExampleInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ExampleInput)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Animancer::Examples {
class ExampleInput;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::ExampleInput*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::ExampleInput*, "Animancer.Examples", "ExampleInput");
// Dependencies System.Object
namespace Animancer::Examples {
// Is value type: false
// CS Name: Animancer.Examples.ExampleInput
class CORDL_TYPE ExampleInput : public ::System::Object {
public:
// Declarations
/// @brief Method get_LeftMouseDown, addr 0x1802fb300, size 0x10, virtual false, abstract: false, final false
static inline bool get_LeftMouseDown() ;

/// @brief Method get_LeftMouseHold, addr 0x1802fb310, size 0x10, virtual false, abstract: false, final false
static inline bool get_LeftMouseHold() ;

/// @brief Method get_LeftMouseUp, addr 0x1802fb320, size 0x10, virtual false, abstract: false, final false
static inline bool get_LeftMouseUp() ;

/// @brief Method get_LeftShiftHold, addr 0x1802fb330, size 0x10, virtual false, abstract: false, final false
static inline bool get_LeftShiftHold() ;

/// @brief Method get_MousePosition, addr 0x1802fb390, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 get_MousePosition() ;

/// @brief Method get_MousePositionDelta, addr 0x1802fb340, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 get_MousePositionDelta() ;

/// @brief Method get_MouseScrollDelta, addr 0x1802fb3c0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 get_MouseScrollDelta() ;

/// @brief Method get_Number1Up, addr 0x1802fb3d0, size 0x10, virtual false, abstract: false, final false
static inline bool get_Number1Up() ;

/// @brief Method get_Number2Up, addr 0x1802fb3e0, size 0x10, virtual false, abstract: false, final false
static inline bool get_Number2Up() ;

/// @brief Method get_RightMouseDown, addr 0x1802fb3f0, size 0x10, virtual false, abstract: false, final false
static inline bool get_RightMouseDown() ;

/// @brief Method get_RightMouseHold, addr 0x1802fb400, size 0x10, virtual false, abstract: false, final false
static inline bool get_RightMouseHold() ;

/// @brief Method get_SpaceDown, addr 0x1802fb410, size 0x10, virtual false, abstract: false, final false
static inline bool get_SpaceDown() ;

/// @brief Method get_SpaceHold, addr 0x1802fb420, size 0x10, virtual false, abstract: false, final false
static inline bool get_SpaceHold() ;

/// @brief Method get_SpaceUp, addr 0x1802fb430, size 0x10, virtual false, abstract: false, final false
static inline bool get_SpaceUp() ;

/// @brief Method get_WASD, addr 0x1802fb440, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 get_WASD() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExampleInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExampleInput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExampleInput(ExampleInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExampleInput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExampleInput(ExampleInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19952};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::Examples::ExampleInput) == 0x10, "Size mismatch!");

} // namespace end def Animancer::Examples

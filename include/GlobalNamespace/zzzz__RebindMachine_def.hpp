#pragma once
// IWYU pragma private; include "GlobalNamespace/RebindMachine.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RebindMachine)
namespace GlobalNamespace {
class RebindMenu;
}
namespace GlobalNamespace {
struct Rebinder_RebindType;
}
namespace Rewired {
class Player;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace GlobalNamespace {
class RebindMachine;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RebindMachine*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RebindMachine*, "", "RebindMachine");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RebindMachine
class CORDL_TYPE RebindMachine : public ::System::Object {
public:
// Declarations
static inline ::GlobalNamespace::RebindMachine* New_ctor() ;

/// @brief Method ResetToDefault, addr 0x18043bf00, size 0x200, virtual false, abstract: false, final false
static inline void ResetToDefault(::GlobalNamespace::Rebinder_RebindType  rebindType, ::GlobalNamespace::RebindMenu*  rebindMenu) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_fallbackControllerId, addr 0x18043c100, size 0x40, virtual false, abstract: false, final false
static inline ::System::Guid get_fallbackControllerId() ;

/// @brief Method get_rebindPlayer, addr 0x18043a890, size 0x40, virtual false, abstract: false, final false
static inline ::Rewired::Player* get_rebindPlayer() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RebindMachine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RebindMachine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RebindMachine(RebindMachine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RebindMachine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RebindMachine(RebindMachine const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5317};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RebindMachine) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

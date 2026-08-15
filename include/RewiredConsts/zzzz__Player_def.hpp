#pragma once
// IWYU pragma private; include "RewiredConsts/Player.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Player)
// Forward declare root types
namespace RewiredConsts {
class Player;
}
// Write type traits
MARK_REF_T(::RewiredConsts::Player*);
DEFINE_IL2CPP_CLASS(::RewiredConsts::Player*, "RewiredConsts", "Player");
// Dependencies System.Object
namespace RewiredConsts {
// Is value type: false
// CS Name: RewiredConsts.Player
class CORDL_TYPE Player : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr Player() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Player", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Player(Player && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Player", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Player(Player const& ) = delete;

/// @brief Field Player0 offset 0xffffffff size 0x4
static constexpr int32_t  Player0{static_cast<int32_t>(0x0)};

/// @brief Field System offset 0xffffffff size 0x4
static constexpr int32_t  System{static_cast<int32_t>(0x98967f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5801};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::RewiredConsts::Player) == 0x10, "Size mismatch!");

} // namespace end def RewiredConsts

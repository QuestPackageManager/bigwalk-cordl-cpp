#pragma once
// IWYU pragma private; include "RewiredConsts/Action.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Action)
// Forward declare root types
namespace RewiredConsts {
class Action;
}
// Write type traits
MARK_REF_T(::RewiredConsts::Action*);
DEFINE_IL2CPP_CLASS(::RewiredConsts::Action*, "RewiredConsts", "Action");
// Dependencies System.Object
namespace RewiredConsts {
// Is value type: false
// CS Name: RewiredConsts.Action
class CORDL_TYPE Action : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr Action() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Action", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action(Action && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action(Action const& ) = delete;

/// @brief Field Center3 offset 0xffffffff size 0x4
static constexpr int32_t  Center3{static_cast<int32_t>(0x23)};

/// @brief Field K offset 0xffffffff size 0x4
static constexpr int32_t  K{static_cast<int32_t>(0x17)};

/// @brief Field NMouseHorizontal offset 0xffffffff size 0x4
static constexpr int32_t  NMouseHorizontal{static_cast<int32_t>(0x28)};

/// @brief Field NMouseVertical offset 0xffffffff size 0x4
static constexpr int32_t  NMouseVertical{static_cast<int32_t>(0x29)};

/// @brief Field TeleportDown offset 0xffffffff size 0x4
static constexpr int32_t  TeleportDown{static_cast<int32_t>(0x16)};

/// @brief Field TeleportUp offset 0xffffffff size 0x4
static constexpr int32_t  TeleportUp{static_cast<int32_t>(0x15)};

/// @brief Field TextCancel offset 0xffffffff size 0x4
static constexpr int32_t  TextCancel{static_cast<int32_t>(0x1e)};

/// @brief Field TextCycle offset 0xffffffff size 0x4
static constexpr int32_t  TextCycle{static_cast<int32_t>(0x20)};

/// @brief Field TextSubmit offset 0xffffffff size 0x4
static constexpr int32_t  TextSubmit{static_cast<int32_t>(0x1d)};

/// @brief Field UICancel offset 0xffffffff size 0x4
static constexpr int32_t  UICancel{static_cast<int32_t>(0x7)};

/// @brief Field UIHorizontal offset 0xffffffff size 0x4
static constexpr int32_t  UIHorizontal{static_cast<int32_t>(0x0)};

/// @brief Field UIScroll offset 0xffffffff size 0x4
static constexpr int32_t  UIScroll{static_cast<int32_t>(0x21)};

/// @brief Field UISubmit offset 0xffffffff size 0x4
static constexpr int32_t  UISubmit{static_cast<int32_t>(0x6)};

/// @brief Field UIVertical offset 0xffffffff size 0x4
static constexpr int32_t  UIVertical{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5794};

/// @brief Field crouch offset 0xffffffff size 0x4
static constexpr int32_t  crouch{static_cast<int32_t>(0x14)};

/// @brief Field drop offset 0xffffffff size 0x4
static constexpr int32_t  drop{static_cast<int32_t>(0xa)};

/// @brief Field jump offset 0xffffffff size 0x4
static constexpr int32_t  jump{static_cast<int32_t>(0x10)};

/// @brief Field mouseLookX offset 0xffffffff size 0x4
static constexpr int32_t  mouseLookX{static_cast<int32_t>(0xb)};

/// @brief Field mouseLookY offset 0xffffffff size 0x4
static constexpr int32_t  mouseLookY{static_cast<int32_t>(0xc)};

/// @brief Field moveX offset 0xffffffff size 0x4
static constexpr int32_t  moveX{static_cast<int32_t>(0x9)};

/// @brief Field moveY offset 0xffffffff size 0x4
static constexpr int32_t  moveY{static_cast<int32_t>(0x8)};

/// @brief Field mute offset 0xffffffff size 0x4
static constexpr int32_t  mute{static_cast<int32_t>(0x18)};

/// @brief Field select offset 0xffffffff size 0x4
static constexpr int32_t  select{static_cast<int32_t>(0x5)};

/// @brief Field sit offset 0xffffffff size 0x4
static constexpr int32_t  sit{static_cast<int32_t>(0x1a)};

/// @brief Field sprint offset 0xffffffff size 0x4
static constexpr int32_t  sprint{static_cast<int32_t>(0xf)};

/// @brief Field start offset 0xffffffff size 0x4
static constexpr int32_t  start{static_cast<int32_t>(0x4)};

/// @brief Field stickLookX offset 0xffffffff size 0x4
static constexpr int32_t  stickLookX{static_cast<int32_t>(0xd)};

/// @brief Field stickLookY offset 0xffffffff size 0x4
static constexpr int32_t  stickLookY{static_cast<int32_t>(0xe)};

/// @brief Field textChat offset 0xffffffff size 0x4
static constexpr int32_t  textChat{static_cast<int32_t>(0x19)};

/// @brief Field use offset 0xffffffff size 0x4
static constexpr int32_t  use{static_cast<int32_t>(0x11)};

/// @brief Field waveLeft offset 0xffffffff size 0x4
static constexpr int32_t  waveLeft{static_cast<int32_t>(0x12)};

/// @brief Field waveRight offset 0xffffffff size 0x4
static constexpr int32_t  waveRight{static_cast<int32_t>(0x13)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::RewiredConsts::Action) == 0x10, "Size mismatch!");

} // namespace end def RewiredConsts

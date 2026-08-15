#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerActionState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerActionState)
namespace Rewired {
class Player;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct PlayerActionState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlayerActionState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerActionState, "", "PlayerActionState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerActionState
struct CORDL_TYPE PlayerActionState {
public:
// Declarations
 __declspec(property(get=get_hudStickyTime)) float_t  hudStickyTime;

 __declspec(property(get=get_normalizedStickyTime)) float_t  normalizedStickyTime;

/// @brief Method Clear, addr 0x18035d7d0, size 0x20, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Copy, addr 0x18035d7f0, size 0x50, virtual false, abstract: false, final false
inline void Copy(::GlobalNamespace::PlayerActionState  other) ;

/// @brief Method UpdateFromInput, addr 0x18035d840, size 0x140, virtual false, abstract: false, final false
inline void UpdateFromInput(::Rewired::Player*  inputPlayer, int32_t  action, bool  toggleIsOn, ::System::Nullable_1<int32_t>  actionB) ;

/// @brief Method UpdateSnapShot, addr 0x18035d980, size 0x20, virtual false, abstract: false, final false
inline void UpdateSnapShot() ;

/// @brief Method get_hudStickyTime, addr 0x18035d9a0, size 0x40, virtual false, abstract: false, final false
inline float_t get_hudStickyTime() ;

/// @brief Method get_normalizedStickyTime, addr 0x18035d9e0, size 0x90, virtual false, abstract: false, final false
inline float_t get_normalizedStickyTime() ;

// Ctor Parameters []
// @brief default ctor
constexpr PlayerActionState() ;

// Ctor Parameters [CppParam { name: "isToggledOn", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isStickiedOn", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isHeld", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isActive", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "timeHeld", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "isActiveOld", ty: "bool", modifiers: "", def_value: None }]
constexpr PlayerActionState(bool  isToggledOn, bool  isStickiedOn, bool  isHeld, bool  isActive, float_t  timeHeld, bool  isActiveOld) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5492};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field stickyDuration offset 0xffffffff size 0x4
static constexpr float_t  stickyDuration{static_cast<float_t>(5.0f)};

/// @brief Field isToggledOn, offset: 0x0, size: 0x1, def value: None
 bool  isToggledOn;

/// @brief Field isStickiedOn, offset: 0x1, size: 0x1, def value: None
 bool  isStickiedOn;

/// @brief Field isHeld, offset: 0x2, size: 0x1, def value: None
 bool  isHeld;

/// @brief Field isActive, offset: 0x3, size: 0x1, def value: None
 bool  isActive;

/// @brief Field timeHeld, offset: 0x4, size: 0x4, def value: None
 float_t  timeHeld;

/// @brief Field isActiveOld, offset: 0x8, size: 0x1, def value: None
 bool  isActiveOld;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerActionState, isToggledOn) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerActionState, isStickiedOn) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerActionState, isHeld) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerActionState, isActive) == 0x3, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerActionState, timeHeld) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerActionState, isActiveOld) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerActionState) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace

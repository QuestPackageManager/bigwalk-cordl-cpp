#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerColliderState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PlayerColliderState)
// Forward declare root types
namespace GlobalNamespace {
struct PlayerColliderState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlayerColliderState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerColliderState, "", "PlayerColliderState");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerColliderState
struct CORDL_TYPE PlayerColliderState {
public:
// Declarations
/// @brief Method Lerp, addr 0x180360460, size 0x150, virtual false, abstract: false, final false
static inline ::GlobalNamespace::PlayerColliderState Lerp(::GlobalNamespace::PlayerColliderState  a, ::GlobalNamespace::PlayerColliderState  b, float_t  t) ;

// Ctor Parameters []
// @brief default ctor
constexpr PlayerColliderState() ;

// Ctor Parameters [CppParam { name: "center", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "height", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "footColliderCenter", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr PlayerColliderState(::UnityEngine::Vector3  center, float_t  height, ::UnityEngine::Vector3  footColliderCenter) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5496};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field center, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  center;

/// @brief Field height, offset: 0xc, size: 0x4, def value: None
 float_t  height;

/// @brief Field footColliderCenter, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  footColliderCenter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerColliderState, center) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerColliderState, height) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerColliderState, footColliderCenter) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerColliderState) == 0x1c, "Size mismatch!");

} // namespace end def GlobalNamespace

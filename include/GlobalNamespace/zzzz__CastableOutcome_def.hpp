#pragma once
// IWYU pragma private; include "GlobalNamespace/CastableOutcome.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PropGroup_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CastableOutcome)
namespace GlobalNamespace {
class PeckSwitch;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class PlayerPose;
}
namespace GlobalNamespace {
class PropHome;
}
// Forward declare root types
namespace GlobalNamespace {
struct CastableOutcome;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CastableOutcome);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CastableOutcome, "", "CastableOutcome");
// Dependencies PropGroup
namespace GlobalNamespace {
// Is value type: true
// CS Name: CastableOutcome
struct CORDL_TYPE CastableOutcome {
public:
// Declarations
/// @brief Method MatchesConditions, addr 0x18045a7a0, size 0x130, virtual false, abstract: false, final false
inline bool MatchesConditions(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

// Ctor Parameters []
// @brief default ctor
constexpr CastableOutcome() ;

// Ctor Parameters [CppParam { name: "playerPose", ty: "::UnityW<::GlobalNamespace::PlayerPose>", modifiers: "", def_value: None }, CppParam { name: "propHome", ty: "::UnityW<::GlobalNamespace::PropHome>", modifiers: "", def_value: None }, CppParam { name: "peckSwitch", ty: "::UnityW<::GlobalNamespace::PeckSwitch>", modifiers: "", def_value: None }, CppParam { name: "needsKey", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "keyType", ty: "::GlobalNamespace::PropGroup", modifiers: "", def_value: None }, CppParam { name: "needsPocketProp", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "pocketPropGroup", ty: "::GlobalNamespace::PropGroup", modifiers: "", def_value: None }]
constexpr CastableOutcome(::UnityW<::GlobalNamespace::PlayerPose>  playerPose, ::UnityW<::GlobalNamespace::PropHome>  propHome, ::UnityW<::GlobalNamespace::PeckSwitch>  peckSwitch, bool  needsKey, ::GlobalNamespace::PropGroup  keyType, bool  needsPocketProp, ::GlobalNamespace::PropGroup  pocketPropGroup) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5434};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field playerPose, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerPose>  playerPose;

/// @brief Field propHome, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropHome>  propHome;

/// @brief Field peckSwitch, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  peckSwitch;

/// @brief Field needsKey, offset: 0x18, size: 0x1, def value: None
 bool  needsKey;

/// @brief Field keyType, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::PropGroup  keyType;

/// @brief Field needsPocketProp, offset: 0x20, size: 0x1, def value: None
 bool  needsPocketProp;

/// @brief Field pocketPropGroup, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::PropGroup  pocketPropGroup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CastableOutcome, playerPose) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CastableOutcome, propHome) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CastableOutcome, peckSwitch) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CastableOutcome, needsKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CastableOutcome, keyType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CastableOutcome, needsPocketProp) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CastableOutcome, pocketPropGroup) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CastableOutcome) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/PropGroupPeckSystemPair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PropGroup_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PropGroupPeckSystemPair)
namespace GlobalNamespace {
class TrackedPeckState;
}
// Forward declare root types
namespace GlobalNamespace {
struct PropGroupPeckSystemPair;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PropGroupPeckSystemPair);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropGroupPeckSystemPair, "", "PropGroupPeckSystemPair");
// Dependencies PropGroup
namespace GlobalNamespace {
// Is value type: true
// CS Name: PropGroupPeckSystemPair
struct CORDL_TYPE PropGroupPeckSystemPair {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PropGroupPeckSystemPair() ;

// Ctor Parameters [CppParam { name: "propGroup", ty: "::GlobalNamespace::PropGroup", modifiers: "", def_value: None }, CppParam { name: "peckSystem", ty: "::UnityW<::GlobalNamespace::TrackedPeckState>", modifiers: "", def_value: None }]
constexpr PropGroupPeckSystemPair(::GlobalNamespace::PropGroup  propGroup, ::UnityW<::GlobalNamespace::TrackedPeckState>  peckSystem) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5579};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field propGroup, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::PropGroup  propGroup;

/// @brief Field peckSystem, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  peckSystem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropGroupPeckSystemPair, propGroup) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropGroupPeckSystemPair, peckSystem) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropGroupPeckSystemPair) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

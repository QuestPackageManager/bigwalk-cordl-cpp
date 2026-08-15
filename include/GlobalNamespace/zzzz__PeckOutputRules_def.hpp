#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckOutputRules.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PeckOutputRules)
// Forward declare root types
namespace GlobalNamespace {
struct PeckOutputRules;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PeckOutputRules);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckOutputRules, "", "PeckOutputRules");
// Dependencies PeckSwitch::StateMode
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckOutputRules
struct CORDL_TYPE PeckOutputRules {
public:
// Declarations
/// @brief Method GetOutputState, addr 0x180452bc0, size 0xe0, virtual false, abstract: false, final false
inline int32_t GetOutputState(int32_t  inputState) ;

// Ctor Parameters []
// @brief default ctor
constexpr PeckOutputRules() ;

// Ctor Parameters [CppParam { name: "stateMode", ty: "::GlobalNamespace::PeckSwitch_StateMode", modifiers: "", def_value: None }, CppParam { name: "specificState", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "mapStates", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }]
constexpr PeckOutputRules(::GlobalNamespace::PeckSwitch_StateMode  stateMode, int32_t  specificState, ::ArrayW<int32_t>  mapStates) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5340};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field stateMode, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::PeckSwitch_StateMode  stateMode;

/// @brief Field specificState, offset: 0x4, size: 0x4, def value: None
 int32_t  specificState;

/// @brief Field mapStates, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<int32_t>  mapStates;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckOutputRules, stateMode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckOutputRules, specificState) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckOutputRules, mapStates) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckOutputRules) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

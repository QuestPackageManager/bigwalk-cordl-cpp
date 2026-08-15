#pragma once
// IWYU pragma private; include "Animancer/Examples/StateMachines/CharacterStatePriority.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CharacterStatePriority)
// Forward declare root types
namespace Animancer::Examples::StateMachines {
struct CharacterStatePriority;
}
// Write type traits
MARK_VAL_T(::Animancer::Examples::StateMachines::CharacterStatePriority);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::StateMachines::CharacterStatePriority, "Animancer.Examples.StateMachines", "CharacterStatePriority");
// Dependencies 
namespace Animancer::Examples::StateMachines {
// Is value type: true
// CS Name: Animancer.Examples.StateMachines.CharacterStatePriority
struct CORDL_TYPE CharacterStatePriority {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CharacterStatePriority_Unwrapped
enum struct __CharacterStatePriority_Unwrapped : int32_t {
__E_Low = static_cast<int32_t>(0x0),
__E_Medium = static_cast<int32_t>(0x1),
__E_High = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CharacterStatePriority_Unwrapped () const noexcept {
return static_cast<__CharacterStatePriority_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CharacterStatePriority() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CharacterStatePriority(int32_t  value__) noexcept;

/// @brief Field High value: I32(2)
static ::Animancer::Examples::StateMachines::CharacterStatePriority const High;

/// @brief Field Low value: I32(0)
static ::Animancer::Examples::StateMachines::CharacterStatePriority const Low;

/// @brief Field Medium value: I32(1)
static ::Animancer::Examples::StateMachines::CharacterStatePriority const Medium;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19996};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::StateMachines::CharacterStatePriority, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::StateMachines::CharacterStatePriority) == 0x4, "Size mismatch!");

} // namespace end def Animancer::Examples::StateMachines

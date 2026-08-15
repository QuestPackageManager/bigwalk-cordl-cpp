#pragma once
// IWYU pragma private; include "Rewired/BoolOption.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BoolOption)
// Forward declare root types
namespace Rewired {
struct BoolOption;
}
// Write type traits
MARK_VAL_T(::Rewired::BoolOption);
DEFINE_IL2CPP_CLASS(::Rewired::BoolOption, "Rewired", "BoolOption");
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.BoolOption
struct CORDL_TYPE BoolOption {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BoolOption_Unwrapped
enum struct __BoolOption_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_True = static_cast<int32_t>(0x1),
__E_False = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BoolOption_Unwrapped () const noexcept {
return static_cast<__BoolOption_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BoolOption() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BoolOption(int32_t  value__) noexcept;

/// @brief Field Default value: I32(0)
static ::Rewired::BoolOption const Default;

/// @brief Field False value: I32(2)
static ::Rewired::BoolOption const False;

/// @brief Field True value: I32(1)
static ::Rewired::BoolOption const True;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1965};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::BoolOption, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::BoolOption) == 0x4, "Size mismatch!");

} // namespace end def Rewired

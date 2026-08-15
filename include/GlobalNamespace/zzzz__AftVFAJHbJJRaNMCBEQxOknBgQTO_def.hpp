#pragma once
// IWYU pragma private; include "GlobalNamespace/AftVFAJHbJJRaNMCBEQxOknBgQTO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AftVFAJHbJJRaNMCBEQxOknBgQTO)
// Forward declare root types
namespace GlobalNamespace {
struct AftVFAJHbJJRaNMCBEQxOknBgQTO;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AftVFAJHbJJRaNMCBEQxOknBgQTO);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AftVFAJHbJJRaNMCBEQxOknBgQTO, "", "AftVFAJHbJJRaNMCBEQxOknBgQTO");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: AftVFAJHbJJRaNMCBEQxOknBgQTO
struct CORDL_TYPE AftVFAJHbJJRaNMCBEQxOknBgQTO {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AftVFAJHbJJRaNMCBEQxOknBgQTO_Unwrapped
enum struct __AftVFAJHbJJRaNMCBEQxOknBgQTO_Unwrapped : int32_t {
__E_Centered = static_cast<int32_t>(0x0),
__E_Left = static_cast<int32_t>(0x1),
__E_Right = static_cast<int32_t>(0x2),
__E_Middle = static_cast<int32_t>(0x0),
__E_Top = static_cast<int32_t>(0x4),
__E_Bottom = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AftVFAJHbJJRaNMCBEQxOknBgQTO_Unwrapped () const noexcept {
return static_cast<__AftVFAJHbJJRaNMCBEQxOknBgQTO_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AftVFAJHbJJRaNMCBEQxOknBgQTO() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AftVFAJHbJJRaNMCBEQxOknBgQTO(int32_t  value__) noexcept;

/// @brief Field Bottom value: I32(8)
static ::GlobalNamespace::AftVFAJHbJJRaNMCBEQxOknBgQTO const Bottom;

/// @brief Field Centered value: I32(0)
static ::GlobalNamespace::AftVFAJHbJJRaNMCBEQxOknBgQTO const Centered;

/// @brief Field Left value: I32(1)
static ::GlobalNamespace::AftVFAJHbJJRaNMCBEQxOknBgQTO const Left;

/// @brief Field Middle value: I32(0)
static ::GlobalNamespace::AftVFAJHbJJRaNMCBEQxOknBgQTO const Middle;

/// @brief Field Right value: I32(2)
static ::GlobalNamespace::AftVFAJHbJJRaNMCBEQxOknBgQTO const Right;

/// @brief Field Top value: I32(4)
static ::GlobalNamespace::AftVFAJHbJJRaNMCBEQxOknBgQTO const Top;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6293};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AftVFAJHbJJRaNMCBEQxOknBgQTO, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AftVFAJHbJJRaNMCBEQxOknBgQTO) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

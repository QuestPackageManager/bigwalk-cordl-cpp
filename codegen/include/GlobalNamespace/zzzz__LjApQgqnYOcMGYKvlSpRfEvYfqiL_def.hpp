#pragma once
// IWYU pragma private; include "GlobalNamespace/LjApQgqnYOcMGYKvlSpRfEvYfqiL.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LjApQgqnYOcMGYKvlSpRfEvYfqiL)
// Forward declare root types
namespace GlobalNamespace {
struct LjApQgqnYOcMGYKvlSpRfEvYfqiL;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LjApQgqnYOcMGYKvlSpRfEvYfqiL);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LjApQgqnYOcMGYKvlSpRfEvYfqiL, "", "LjApQgqnYOcMGYKvlSpRfEvYfqiL");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: LjApQgqnYOcMGYKvlSpRfEvYfqiL
struct CORDL_TYPE LjApQgqnYOcMGYKvlSpRfEvYfqiL {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __LjApQgqnYOcMGYKvlSpRfEvYfqiL_Unwrapped
enum struct __LjApQgqnYOcMGYKvlSpRfEvYfqiL_Unwrapped : uint8_t {
__E_Any = static_cast<uint8_t>(0xffu),
__E_One = static_cast<uint8_t>(0x0u),
__E_Two = static_cast<uint8_t>(0x1u),
__E_Three = static_cast<uint8_t>(0x2u),
__E_Four = static_cast<uint8_t>(0x3u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LjApQgqnYOcMGYKvlSpRfEvYfqiL_Unwrapped () const noexcept {
return static_cast<__LjApQgqnYOcMGYKvlSpRfEvYfqiL_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LjApQgqnYOcMGYKvlSpRfEvYfqiL() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr LjApQgqnYOcMGYKvlSpRfEvYfqiL(uint8_t  value__) noexcept;

/// @brief Field Any value: U8(255)
static ::GlobalNamespace::LjApQgqnYOcMGYKvlSpRfEvYfqiL const Any;

/// @brief Field Four value: U8(3)
static ::GlobalNamespace::LjApQgqnYOcMGYKvlSpRfEvYfqiL const Four;

/// @brief Field One value: U8(0)
static ::GlobalNamespace::LjApQgqnYOcMGYKvlSpRfEvYfqiL const One;

/// @brief Field Three value: U8(2)
static ::GlobalNamespace::LjApQgqnYOcMGYKvlSpRfEvYfqiL const Three;

/// @brief Field Two value: U8(1)
static ::GlobalNamespace::LjApQgqnYOcMGYKvlSpRfEvYfqiL const Two;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6130};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LjApQgqnYOcMGYKvlSpRfEvYfqiL, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LjApQgqnYOcMGYKvlSpRfEvYfqiL) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace

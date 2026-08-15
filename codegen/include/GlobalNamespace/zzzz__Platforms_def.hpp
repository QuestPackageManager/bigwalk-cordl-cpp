#pragma once
// IWYU pragma private; include "GlobalNamespace/Platforms.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Platforms)
// Forward declare root types
namespace GlobalNamespace {
struct Platforms;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Platforms);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Platforms, "", "Platforms");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Platforms
struct CORDL_TYPE Platforms {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __Platforms_Unwrapped
enum struct __Platforms_Unwrapped : uint8_t {
__E_None = static_cast<uint8_t>(0x1u),
__E_Steam = static_cast<uint8_t>(0x2u),
__E_PS5 = static_cast<uint8_t>(0x3u),
__E_Switch2 = static_cast<uint8_t>(0x4u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Platforms_Unwrapped () const noexcept {
return static_cast<__Platforms_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Platforms() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr Platforms(uint8_t  value__) noexcept;

/// @brief Field None value: U8(1)
static ::GlobalNamespace::Platforms const None;

/// @brief Field PS5 value: U8(3)
static ::GlobalNamespace::Platforms const PS5;

/// @brief Field Steam value: U8(2)
static ::GlobalNamespace::Platforms const Steam;

/// @brief Field Switch2 value: U8(4)
static ::GlobalNamespace::Platforms const Switch2;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4958};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Platforms, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Platforms) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace

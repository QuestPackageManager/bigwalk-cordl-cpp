#pragma once
// IWYU pragma private; include "Steamworks/ESteamInputGlyphSize.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ESteamInputGlyphSize)
// Forward declare root types
namespace Steamworks {
struct ESteamInputGlyphSize;
}
// Write type traits
MARK_VAL_T(::Steamworks::ESteamInputGlyphSize);
DEFINE_IL2CPP_CLASS(::Steamworks::ESteamInputGlyphSize, "Steamworks", "ESteamInputGlyphSize");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ESteamInputGlyphSize
struct CORDL_TYPE ESteamInputGlyphSize {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ESteamInputGlyphSize_Unwrapped
enum struct __ESteamInputGlyphSize_Unwrapped : int32_t {
__E_k_ESteamInputGlyphSize_Small = static_cast<int32_t>(0x0),
__E_k_ESteamInputGlyphSize_Medium = static_cast<int32_t>(0x1),
__E_k_ESteamInputGlyphSize_Large = static_cast<int32_t>(0x2),
__E_k_ESteamInputGlyphSize_Count = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ESteamInputGlyphSize_Unwrapped () const noexcept {
return static_cast<__ESteamInputGlyphSize_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ESteamInputGlyphSize() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ESteamInputGlyphSize(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16260};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ESteamInputGlyphSize_Count value: I32(3)
static ::Steamworks::ESteamInputGlyphSize const k_ESteamInputGlyphSize_Count;

/// @brief Field k_ESteamInputGlyphSize_Large value: I32(2)
static ::Steamworks::ESteamInputGlyphSize const k_ESteamInputGlyphSize_Large;

/// @brief Field k_ESteamInputGlyphSize_Medium value: I32(1)
static ::Steamworks::ESteamInputGlyphSize const k_ESteamInputGlyphSize_Medium;

/// @brief Field k_ESteamInputGlyphSize_Small value: I32(0)
static ::Steamworks::ESteamInputGlyphSize const k_ESteamInputGlyphSize_Small;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ESteamInputGlyphSize, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ESteamInputGlyphSize) == 0x4, "Size mismatch!");

} // namespace end def Steamworks

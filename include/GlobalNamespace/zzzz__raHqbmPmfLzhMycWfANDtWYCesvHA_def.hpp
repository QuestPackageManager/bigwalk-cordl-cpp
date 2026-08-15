#pragma once
// IWYU pragma private; include "GlobalNamespace/raHqbmPmfLzhMycWfANDtWYCesvHA.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(raHqbmPmfLzhMycWfANDtWYCesvHA)
// Forward declare root types
namespace GlobalNamespace {
struct raHqbmPmfLzhMycWfANDtWYCesvHA;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::raHqbmPmfLzhMycWfANDtWYCesvHA);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::raHqbmPmfLzhMycWfANDtWYCesvHA, "", "raHqbmPmfLzhMycWfANDtWYCesvHA");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: raHqbmPmfLzhMycWfANDtWYCesvHA
struct CORDL_TYPE raHqbmPmfLzhMycWfANDtWYCesvHA {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __raHqbmPmfLzhMycWfANDtWYCesvHA_Unwrapped
enum struct __raHqbmPmfLzhMycWfANDtWYCesvHA_Unwrapped : uint8_t {
__E_Disconnected = static_cast<uint8_t>(0x0u),
__E_Wired = static_cast<uint8_t>(0x1u),
__E_Alkaline = static_cast<uint8_t>(0x2u),
__E_Nimh = static_cast<uint8_t>(0x3u),
__E_Unknown = static_cast<uint8_t>(0xffu),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __raHqbmPmfLzhMycWfANDtWYCesvHA_Unwrapped () const noexcept {
return static_cast<__raHqbmPmfLzhMycWfANDtWYCesvHA_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr raHqbmPmfLzhMycWfANDtWYCesvHA() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr raHqbmPmfLzhMycWfANDtWYCesvHA(uint8_t  value__) noexcept;

/// @brief Field Alkaline value: U8(2)
static ::GlobalNamespace::raHqbmPmfLzhMycWfANDtWYCesvHA const Alkaline;

/// @brief Field Disconnected value: U8(0)
static ::GlobalNamespace::raHqbmPmfLzhMycWfANDtWYCesvHA const Disconnected;

/// @brief Field Nimh value: U8(3)
static ::GlobalNamespace::raHqbmPmfLzhMycWfANDtWYCesvHA const Nimh;

/// @brief Field Unknown value: U8(255)
static ::GlobalNamespace::raHqbmPmfLzhMycWfANDtWYCesvHA const Unknown;

/// @brief Field Wired value: U8(1)
static ::GlobalNamespace::raHqbmPmfLzhMycWfANDtWYCesvHA const Wired;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6122};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::raHqbmPmfLzhMycWfANDtWYCesvHA, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::raHqbmPmfLzhMycWfANDtWYCesvHA) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace

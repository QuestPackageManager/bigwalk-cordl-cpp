#pragma once
// IWYU pragma private; include "Steamworks/ESteamInputLEDFlag.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ESteamInputLEDFlag)
// Forward declare root types
namespace Steamworks {
struct ESteamInputLEDFlag;
}
// Write type traits
MARK_VAL_T(::Steamworks::ESteamInputLEDFlag);
DEFINE_IL2CPP_CLASS(::Steamworks::ESteamInputLEDFlag, "Steamworks", "ESteamInputLEDFlag");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ESteamInputLEDFlag
struct CORDL_TYPE ESteamInputLEDFlag {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ESteamInputLEDFlag_Unwrapped
enum struct __ESteamInputLEDFlag_Unwrapped : int32_t {
__E_k_ESteamInputLEDFlag_SetColor = static_cast<int32_t>(0x0),
__E_k_ESteamInputLEDFlag_RestoreUserDefault = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ESteamInputLEDFlag_Unwrapped () const noexcept {
return static_cast<__ESteamInputLEDFlag_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ESteamInputLEDFlag() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ESteamInputLEDFlag(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16259};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ESteamInputLEDFlag_RestoreUserDefault value: I32(1)
static ::Steamworks::ESteamInputLEDFlag const k_ESteamInputLEDFlag_RestoreUserDefault;

/// @brief Field k_ESteamInputLEDFlag_SetColor value: I32(0)
static ::Steamworks::ESteamInputLEDFlag const k_ESteamInputLEDFlag_SetColor;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ESteamInputLEDFlag, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ESteamInputLEDFlag) == 0x4, "Size mismatch!");

} // namespace end def Steamworks

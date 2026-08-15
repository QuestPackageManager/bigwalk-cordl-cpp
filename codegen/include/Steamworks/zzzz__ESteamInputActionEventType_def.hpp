#pragma once
// IWYU pragma private; include "Steamworks/ESteamInputActionEventType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ESteamInputActionEventType)
// Forward declare root types
namespace Steamworks {
struct ESteamInputActionEventType;
}
// Write type traits
MARK_VAL_T(::Steamworks::ESteamInputActionEventType);
DEFINE_IL2CPP_CLASS(::Steamworks::ESteamInputActionEventType, "Steamworks", "ESteamInputActionEventType");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ESteamInputActionEventType
struct CORDL_TYPE ESteamInputActionEventType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ESteamInputActionEventType_Unwrapped
enum struct __ESteamInputActionEventType_Unwrapped : int32_t {
__E_ESteamInputActionEventType_DigitalAction = static_cast<int32_t>(0x0),
__E_ESteamInputActionEventType_AnalogAction = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ESteamInputActionEventType_Unwrapped () const noexcept {
return static_cast<__ESteamInputActionEventType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ESteamInputActionEventType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ESteamInputActionEventType(int32_t  value__) noexcept;

/// @brief Field ESteamInputActionEventType_AnalogAction value: I32(1)
static ::Steamworks::ESteamInputActionEventType const ESteamInputActionEventType_AnalogAction;

/// @brief Field ESteamInputActionEventType_DigitalAction value: I32(0)
static ::Steamworks::ESteamInputActionEventType const ESteamInputActionEventType_DigitalAction;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16262};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ESteamInputActionEventType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ESteamInputActionEventType) == 0x4, "Size mismatch!");

} // namespace end def Steamworks

#pragma once
// IWYU pragma private; include "Steamworks/ESteamInputConfigurationEnableType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ESteamInputConfigurationEnableType)
// Forward declare root types
namespace Steamworks {
struct ESteamInputConfigurationEnableType;
}
// Write type traits
MARK_VAL_T(::Steamworks::ESteamInputConfigurationEnableType);
DEFINE_IL2CPP_CLASS(::Steamworks::ESteamInputConfigurationEnableType, "Steamworks", "ESteamInputConfigurationEnableType");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ESteamInputConfigurationEnableType
struct CORDL_TYPE ESteamInputConfigurationEnableType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ESteamInputConfigurationEnableType_Unwrapped
enum struct __ESteamInputConfigurationEnableType_Unwrapped : int32_t {
__E_k_ESteamInputConfigurationEnableType_None = static_cast<int32_t>(0x0),
__E_k_ESteamInputConfigurationEnableType_Playstation = static_cast<int32_t>(0x1),
__E_k_ESteamInputConfigurationEnableType_Xbox = static_cast<int32_t>(0x2),
__E_k_ESteamInputConfigurationEnableType_Generic = static_cast<int32_t>(0x4),
__E_k_ESteamInputConfigurationEnableType_Switch = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ESteamInputConfigurationEnableType_Unwrapped () const noexcept {
return static_cast<__ESteamInputConfigurationEnableType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ESteamInputConfigurationEnableType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ESteamInputConfigurationEnableType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16258};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ESteamInputConfigurationEnableType_Generic value: I32(4)
static ::Steamworks::ESteamInputConfigurationEnableType const k_ESteamInputConfigurationEnableType_Generic;

/// @brief Field k_ESteamInputConfigurationEnableType_None value: I32(0)
static ::Steamworks::ESteamInputConfigurationEnableType const k_ESteamInputConfigurationEnableType_None;

/// @brief Field k_ESteamInputConfigurationEnableType_Playstation value: I32(1)
static ::Steamworks::ESteamInputConfigurationEnableType const k_ESteamInputConfigurationEnableType_Playstation;

/// @brief Field k_ESteamInputConfigurationEnableType_Switch value: I32(8)
static ::Steamworks::ESteamInputConfigurationEnableType const k_ESteamInputConfigurationEnableType_Switch;

/// @brief Field k_ESteamInputConfigurationEnableType_Xbox value: I32(2)
static ::Steamworks::ESteamInputConfigurationEnableType const k_ESteamInputConfigurationEnableType_Xbox;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ESteamInputConfigurationEnableType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ESteamInputConfigurationEnableType) == 0x4, "Size mismatch!");

} // namespace end def Steamworks

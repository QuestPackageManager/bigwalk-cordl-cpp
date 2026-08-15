#pragma once
// IWYU pragma private; include "Steamworks/ESteamDeviceFormFactor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ESteamDeviceFormFactor)
// Forward declare root types
namespace Steamworks {
struct ESteamDeviceFormFactor;
}
// Write type traits
MARK_VAL_T(::Steamworks::ESteamDeviceFormFactor);
DEFINE_IL2CPP_CLASS(::Steamworks::ESteamDeviceFormFactor, "Steamworks", "ESteamDeviceFormFactor");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ESteamDeviceFormFactor
struct CORDL_TYPE ESteamDeviceFormFactor {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ESteamDeviceFormFactor_Unwrapped
enum struct __ESteamDeviceFormFactor_Unwrapped : int32_t {
__E_k_ESteamDeviceFormFactorUnknown = static_cast<int32_t>(0x0),
__E_k_ESteamDeviceFormFactorPhone = static_cast<int32_t>(0x1),
__E_k_ESteamDeviceFormFactorTablet = static_cast<int32_t>(0x2),
__E_k_ESteamDeviceFormFactorComputer = static_cast<int32_t>(0x3),
__E_k_ESteamDeviceFormFactorTV = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ESteamDeviceFormFactor_Unwrapped () const noexcept {
return static_cast<__ESteamDeviceFormFactor_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ESteamDeviceFormFactor() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ESteamDeviceFormFactor(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16277};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ESteamDeviceFormFactorComputer value: I32(3)
static ::Steamworks::ESteamDeviceFormFactor const k_ESteamDeviceFormFactorComputer;

/// @brief Field k_ESteamDeviceFormFactorPhone value: I32(1)
static ::Steamworks::ESteamDeviceFormFactor const k_ESteamDeviceFormFactorPhone;

/// @brief Field k_ESteamDeviceFormFactorTV value: I32(4)
static ::Steamworks::ESteamDeviceFormFactor const k_ESteamDeviceFormFactorTV;

/// @brief Field k_ESteamDeviceFormFactorTablet value: I32(2)
static ::Steamworks::ESteamDeviceFormFactor const k_ESteamDeviceFormFactorTablet;

/// @brief Field k_ESteamDeviceFormFactorUnknown value: I32(0)
static ::Steamworks::ESteamDeviceFormFactor const k_ESteamDeviceFormFactorUnknown;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ESteamDeviceFormFactor, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ESteamDeviceFormFactor) == 0x4, "Size mismatch!");

} // namespace end def Steamworks

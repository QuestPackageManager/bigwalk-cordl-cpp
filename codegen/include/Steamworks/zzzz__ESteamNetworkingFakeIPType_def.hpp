#pragma once
// IWYU pragma private; include "Steamworks/ESteamNetworkingFakeIPType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ESteamNetworkingFakeIPType)
// Forward declare root types
namespace Steamworks {
struct ESteamNetworkingFakeIPType;
}
// Write type traits
MARK_VAL_T(::Steamworks::ESteamNetworkingFakeIPType);
DEFINE_IL2CPP_CLASS(::Steamworks::ESteamNetworkingFakeIPType, "Steamworks", "ESteamNetworkingFakeIPType");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ESteamNetworkingFakeIPType
struct CORDL_TYPE ESteamNetworkingFakeIPType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ESteamNetworkingFakeIPType_Unwrapped
enum struct __ESteamNetworkingFakeIPType_Unwrapped : int32_t {
__E_k_ESteamNetworkingFakeIPType_Invalid = static_cast<int32_t>(0x0),
__E_k_ESteamNetworkingFakeIPType_NotFake = static_cast<int32_t>(0x1),
__E_k_ESteamNetworkingFakeIPType_GlobalIPv4 = static_cast<int32_t>(0x2),
__E_k_ESteamNetworkingFakeIPType_LocalIPv4 = static_cast<int32_t>(0x3),
__E_k_ESteamNetworkingFakeIPType__Force32Bit = static_cast<int32_t>(0x7fffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ESteamNetworkingFakeIPType_Unwrapped () const noexcept {
return static_cast<__ESteamNetworkingFakeIPType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ESteamNetworkingFakeIPType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ESteamNetworkingFakeIPType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16334};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ESteamNetworkingFakeIPType_GlobalIPv4 value: I32(2)
static ::Steamworks::ESteamNetworkingFakeIPType const k_ESteamNetworkingFakeIPType_GlobalIPv4;

/// @brief Field k_ESteamNetworkingFakeIPType_Invalid value: I32(0)
static ::Steamworks::ESteamNetworkingFakeIPType const k_ESteamNetworkingFakeIPType_Invalid;

/// @brief Field k_ESteamNetworkingFakeIPType_LocalIPv4 value: I32(3)
static ::Steamworks::ESteamNetworkingFakeIPType const k_ESteamNetworkingFakeIPType_LocalIPv4;

/// @brief Field k_ESteamNetworkingFakeIPType_NotFake value: I32(1)
static ::Steamworks::ESteamNetworkingFakeIPType const k_ESteamNetworkingFakeIPType_NotFake;

/// @brief Field k_ESteamNetworkingFakeIPType__Force32Bit value: I32(2147483647)
static ::Steamworks::ESteamNetworkingFakeIPType const k_ESteamNetworkingFakeIPType__Force32Bit;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ESteamNetworkingFakeIPType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ESteamNetworkingFakeIPType) == 0x4, "Size mismatch!");

} // namespace end def Steamworks

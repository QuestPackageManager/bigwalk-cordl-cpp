#pragma once
// IWYU pragma private; include "Steamworks/ESteamNetworkingIdentityType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ESteamNetworkingIdentityType)
// Forward declare root types
namespace Steamworks {
struct ESteamNetworkingIdentityType;
}
// Write type traits
MARK_VAL_T(::Steamworks::ESteamNetworkingIdentityType);
DEFINE_IL2CPP_CLASS(::Steamworks::ESteamNetworkingIdentityType, "Steamworks", "ESteamNetworkingIdentityType");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ESteamNetworkingIdentityType
struct CORDL_TYPE ESteamNetworkingIdentityType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ESteamNetworkingIdentityType_Unwrapped
enum struct __ESteamNetworkingIdentityType_Unwrapped : int32_t {
__E_k_ESteamNetworkingIdentityType_Invalid = static_cast<int32_t>(0x0),
__E_k_ESteamNetworkingIdentityType_SteamID = static_cast<int32_t>(0x10),
__E_k_ESteamNetworkingIdentityType_IPAddress = static_cast<int32_t>(0x1),
__E_k_ESteamNetworkingIdentityType_GenericString = static_cast<int32_t>(0x2),
__E_k_ESteamNetworkingIdentityType_GenericBytes = static_cast<int32_t>(0x3),
__E_k_ESteamNetworkingIdentityType_UnknownType = static_cast<int32_t>(0x4),
__E_k_ESteamNetworkingIdentityType__Force32bit = static_cast<int32_t>(0x7fffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ESteamNetworkingIdentityType_Unwrapped () const noexcept {
return static_cast<__ESteamNetworkingIdentityType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ESteamNetworkingIdentityType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ESteamNetworkingIdentityType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16333};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ESteamNetworkingIdentityType_GenericBytes value: I32(3)
static ::Steamworks::ESteamNetworkingIdentityType const k_ESteamNetworkingIdentityType_GenericBytes;

/// @brief Field k_ESteamNetworkingIdentityType_GenericString value: I32(2)
static ::Steamworks::ESteamNetworkingIdentityType const k_ESteamNetworkingIdentityType_GenericString;

/// @brief Field k_ESteamNetworkingIdentityType_IPAddress value: I32(1)
static ::Steamworks::ESteamNetworkingIdentityType const k_ESteamNetworkingIdentityType_IPAddress;

/// @brief Field k_ESteamNetworkingIdentityType_Invalid value: I32(0)
static ::Steamworks::ESteamNetworkingIdentityType const k_ESteamNetworkingIdentityType_Invalid;

/// @brief Field k_ESteamNetworkingIdentityType_SteamID value: I32(16)
static ::Steamworks::ESteamNetworkingIdentityType const k_ESteamNetworkingIdentityType_SteamID;

/// @brief Field k_ESteamNetworkingIdentityType_UnknownType value: I32(4)
static ::Steamworks::ESteamNetworkingIdentityType const k_ESteamNetworkingIdentityType_UnknownType;

/// @brief Field k_ESteamNetworkingIdentityType__Force32bit value: I32(2147483647)
static ::Steamworks::ESteamNetworkingIdentityType const k_ESteamNetworkingIdentityType__Force32bit;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ESteamNetworkingIdentityType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ESteamNetworkingIdentityType) == 0x4, "Size mismatch!");

} // namespace end def Steamworks

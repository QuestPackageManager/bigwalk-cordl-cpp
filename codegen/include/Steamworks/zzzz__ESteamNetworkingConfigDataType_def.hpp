#pragma once
// IWYU pragma private; include "Steamworks/ESteamNetworkingConfigDataType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ESteamNetworkingConfigDataType)
// Forward declare root types
namespace Steamworks {
struct ESteamNetworkingConfigDataType;
}
// Write type traits
MARK_VAL_T(::Steamworks::ESteamNetworkingConfigDataType);
DEFINE_IL2CPP_CLASS(::Steamworks::ESteamNetworkingConfigDataType, "Steamworks", "ESteamNetworkingConfigDataType");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ESteamNetworkingConfigDataType
struct CORDL_TYPE ESteamNetworkingConfigDataType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ESteamNetworkingConfigDataType_Unwrapped
enum struct __ESteamNetworkingConfigDataType_Unwrapped : int32_t {
__E_k_ESteamNetworkingConfig_Int32 = static_cast<int32_t>(0x1),
__E_k_ESteamNetworkingConfig_Int64 = static_cast<int32_t>(0x2),
__E_k_ESteamNetworkingConfig_Float = static_cast<int32_t>(0x3),
__E_k_ESteamNetworkingConfig_String = static_cast<int32_t>(0x4),
__E_k_ESteamNetworkingConfig_Ptr = static_cast<int32_t>(0x5),
__E_k_ESteamNetworkingConfigDataType__Force32Bit = static_cast<int32_t>(0x7fffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ESteamNetworkingConfigDataType_Unwrapped () const noexcept {
return static_cast<__ESteamNetworkingConfigDataType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ESteamNetworkingConfigDataType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ESteamNetworkingConfigDataType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16338};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ESteamNetworkingConfigDataType__Force32Bit value: I32(2147483647)
static ::Steamworks::ESteamNetworkingConfigDataType const k_ESteamNetworkingConfigDataType__Force32Bit;

/// @brief Field k_ESteamNetworkingConfig_Float value: I32(3)
static ::Steamworks::ESteamNetworkingConfigDataType const k_ESteamNetworkingConfig_Float;

/// @brief Field k_ESteamNetworkingConfig_Int32 value: I32(1)
static ::Steamworks::ESteamNetworkingConfigDataType const k_ESteamNetworkingConfig_Int32;

/// @brief Field k_ESteamNetworkingConfig_Int64 value: I32(2)
static ::Steamworks::ESteamNetworkingConfigDataType const k_ESteamNetworkingConfig_Int64;

/// @brief Field k_ESteamNetworkingConfig_Ptr value: I32(5)
static ::Steamworks::ESteamNetworkingConfigDataType const k_ESteamNetworkingConfig_Ptr;

/// @brief Field k_ESteamNetworkingConfig_String value: I32(4)
static ::Steamworks::ESteamNetworkingConfigDataType const k_ESteamNetworkingConfig_String;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ESteamNetworkingConfigDataType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ESteamNetworkingConfigDataType) == 0x4, "Size mismatch!");

} // namespace end def Steamworks

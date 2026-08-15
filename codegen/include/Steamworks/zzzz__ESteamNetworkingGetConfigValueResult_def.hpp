#pragma once
// IWYU pragma private; include "Steamworks/ESteamNetworkingGetConfigValueResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ESteamNetworkingGetConfigValueResult)
// Forward declare root types
namespace Steamworks {
struct ESteamNetworkingGetConfigValueResult;
}
// Write type traits
MARK_VAL_T(::Steamworks::ESteamNetworkingGetConfigValueResult);
DEFINE_IL2CPP_CLASS(::Steamworks::ESteamNetworkingGetConfigValueResult, "Steamworks", "ESteamNetworkingGetConfigValueResult");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ESteamNetworkingGetConfigValueResult
struct CORDL_TYPE ESteamNetworkingGetConfigValueResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ESteamNetworkingGetConfigValueResult_Unwrapped
enum struct __ESteamNetworkingGetConfigValueResult_Unwrapped : int32_t {
__E_k_ESteamNetworkingGetConfigValue_BadValue = static_cast<int32_t>(0xffffffff),
__E_k_ESteamNetworkingGetConfigValue_BadScopeObj = static_cast<int32_t>(0xfffffffe),
__E_k_ESteamNetworkingGetConfigValue_BufferTooSmall = static_cast<int32_t>(0xfffffffd),
__E_k_ESteamNetworkingGetConfigValue_OK = static_cast<int32_t>(0x1),
__E_k_ESteamNetworkingGetConfigValue_OKInherited = static_cast<int32_t>(0x2),
__E_k_ESteamNetworkingGetConfigValueResult__Force32Bit = static_cast<int32_t>(0x7fffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ESteamNetworkingGetConfigValueResult_Unwrapped () const noexcept {
return static_cast<__ESteamNetworkingGetConfigValueResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ESteamNetworkingGetConfigValueResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ESteamNetworkingGetConfigValueResult(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16340};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ESteamNetworkingGetConfigValueResult__Force32Bit value: I32(2147483647)
static ::Steamworks::ESteamNetworkingGetConfigValueResult const k_ESteamNetworkingGetConfigValueResult__Force32Bit;

/// @brief Field k_ESteamNetworkingGetConfigValue_BadScopeObj value: I32(-2)
static ::Steamworks::ESteamNetworkingGetConfigValueResult const k_ESteamNetworkingGetConfigValue_BadScopeObj;

/// @brief Field k_ESteamNetworkingGetConfigValue_BadValue value: I32(-1)
static ::Steamworks::ESteamNetworkingGetConfigValueResult const k_ESteamNetworkingGetConfigValue_BadValue;

/// @brief Field k_ESteamNetworkingGetConfigValue_BufferTooSmall value: I32(-3)
static ::Steamworks::ESteamNetworkingGetConfigValueResult const k_ESteamNetworkingGetConfigValue_BufferTooSmall;

/// @brief Field k_ESteamNetworkingGetConfigValue_OK value: I32(1)
static ::Steamworks::ESteamNetworkingGetConfigValueResult const k_ESteamNetworkingGetConfigValue_OK;

/// @brief Field k_ESteamNetworkingGetConfigValue_OKInherited value: I32(2)
static ::Steamworks::ESteamNetworkingGetConfigValueResult const k_ESteamNetworkingGetConfigValue_OKInherited;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ESteamNetworkingGetConfigValueResult, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ESteamNetworkingGetConfigValueResult) == 0x4, "Size mismatch!");

} // namespace end def Steamworks

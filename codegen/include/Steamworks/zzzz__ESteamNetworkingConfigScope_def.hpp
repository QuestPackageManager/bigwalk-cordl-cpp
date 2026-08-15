#pragma once
// IWYU pragma private; include "Steamworks/ESteamNetworkingConfigScope.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ESteamNetworkingConfigScope)
// Forward declare root types
namespace Steamworks {
struct ESteamNetworkingConfigScope;
}
// Write type traits
MARK_VAL_T(::Steamworks::ESteamNetworkingConfigScope);
DEFINE_IL2CPP_CLASS(::Steamworks::ESteamNetworkingConfigScope, "Steamworks", "ESteamNetworkingConfigScope");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ESteamNetworkingConfigScope
struct CORDL_TYPE ESteamNetworkingConfigScope {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ESteamNetworkingConfigScope_Unwrapped
enum struct __ESteamNetworkingConfigScope_Unwrapped : int32_t {
__E_k_ESteamNetworkingConfig_Global = static_cast<int32_t>(0x1),
__E_k_ESteamNetworkingConfig_SocketsInterface = static_cast<int32_t>(0x2),
__E_k_ESteamNetworkingConfig_ListenSocket = static_cast<int32_t>(0x3),
__E_k_ESteamNetworkingConfig_Connection = static_cast<int32_t>(0x4),
__E_k_ESteamNetworkingConfigScope__Force32Bit = static_cast<int32_t>(0x7fffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ESteamNetworkingConfigScope_Unwrapped () const noexcept {
return static_cast<__ESteamNetworkingConfigScope_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ESteamNetworkingConfigScope() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ESteamNetworkingConfigScope(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16337};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ESteamNetworkingConfigScope__Force32Bit value: I32(2147483647)
static ::Steamworks::ESteamNetworkingConfigScope const k_ESteamNetworkingConfigScope__Force32Bit;

/// @brief Field k_ESteamNetworkingConfig_Connection value: I32(4)
static ::Steamworks::ESteamNetworkingConfigScope const k_ESteamNetworkingConfig_Connection;

/// @brief Field k_ESteamNetworkingConfig_Global value: I32(1)
static ::Steamworks::ESteamNetworkingConfigScope const k_ESteamNetworkingConfig_Global;

/// @brief Field k_ESteamNetworkingConfig_ListenSocket value: I32(3)
static ::Steamworks::ESteamNetworkingConfigScope const k_ESteamNetworkingConfig_ListenSocket;

/// @brief Field k_ESteamNetworkingConfig_SocketsInterface value: I32(2)
static ::Steamworks::ESteamNetworkingConfigScope const k_ESteamNetworkingConfig_SocketsInterface;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ESteamNetworkingConfigScope, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ESteamNetworkingConfigScope) == 0x4, "Size mismatch!");

} // namespace end def Steamworks

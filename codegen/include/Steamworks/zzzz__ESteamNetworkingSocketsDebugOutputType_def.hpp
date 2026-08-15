#pragma once
// IWYU pragma private; include "Steamworks/ESteamNetworkingSocketsDebugOutputType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ESteamNetworkingSocketsDebugOutputType)
// Forward declare root types
namespace Steamworks {
struct ESteamNetworkingSocketsDebugOutputType;
}
// Write type traits
MARK_VAL_T(::Steamworks::ESteamNetworkingSocketsDebugOutputType);
DEFINE_IL2CPP_CLASS(::Steamworks::ESteamNetworkingSocketsDebugOutputType, "Steamworks", "ESteamNetworkingSocketsDebugOutputType");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ESteamNetworkingSocketsDebugOutputType
struct CORDL_TYPE ESteamNetworkingSocketsDebugOutputType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ESteamNetworkingSocketsDebugOutputType_Unwrapped
enum struct __ESteamNetworkingSocketsDebugOutputType_Unwrapped : int32_t {
__E_k_ESteamNetworkingSocketsDebugOutputType_None = static_cast<int32_t>(0x0),
__E_k_ESteamNetworkingSocketsDebugOutputType_Bug = static_cast<int32_t>(0x1),
__E_k_ESteamNetworkingSocketsDebugOutputType_Error = static_cast<int32_t>(0x2),
__E_k_ESteamNetworkingSocketsDebugOutputType_Important = static_cast<int32_t>(0x3),
__E_k_ESteamNetworkingSocketsDebugOutputType_Warning = static_cast<int32_t>(0x4),
__E_k_ESteamNetworkingSocketsDebugOutputType_Msg = static_cast<int32_t>(0x5),
__E_k_ESteamNetworkingSocketsDebugOutputType_Verbose = static_cast<int32_t>(0x6),
__E_k_ESteamNetworkingSocketsDebugOutputType_Debug = static_cast<int32_t>(0x7),
__E_k_ESteamNetworkingSocketsDebugOutputType_Everything = static_cast<int32_t>(0x8),
__E_k_ESteamNetworkingSocketsDebugOutputType__Force32Bit = static_cast<int32_t>(0x7fffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ESteamNetworkingSocketsDebugOutputType_Unwrapped () const noexcept {
return static_cast<__ESteamNetworkingSocketsDebugOutputType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ESteamNetworkingSocketsDebugOutputType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ESteamNetworkingSocketsDebugOutputType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16341};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ESteamNetworkingSocketsDebugOutputType_Bug value: I32(1)
static ::Steamworks::ESteamNetworkingSocketsDebugOutputType const k_ESteamNetworkingSocketsDebugOutputType_Bug;

/// @brief Field k_ESteamNetworkingSocketsDebugOutputType_Debug value: I32(7)
static ::Steamworks::ESteamNetworkingSocketsDebugOutputType const k_ESteamNetworkingSocketsDebugOutputType_Debug;

/// @brief Field k_ESteamNetworkingSocketsDebugOutputType_Error value: I32(2)
static ::Steamworks::ESteamNetworkingSocketsDebugOutputType const k_ESteamNetworkingSocketsDebugOutputType_Error;

/// @brief Field k_ESteamNetworkingSocketsDebugOutputType_Everything value: I32(8)
static ::Steamworks::ESteamNetworkingSocketsDebugOutputType const k_ESteamNetworkingSocketsDebugOutputType_Everything;

/// @brief Field k_ESteamNetworkingSocketsDebugOutputType_Important value: I32(3)
static ::Steamworks::ESteamNetworkingSocketsDebugOutputType const k_ESteamNetworkingSocketsDebugOutputType_Important;

/// @brief Field k_ESteamNetworkingSocketsDebugOutputType_Msg value: I32(5)
static ::Steamworks::ESteamNetworkingSocketsDebugOutputType const k_ESteamNetworkingSocketsDebugOutputType_Msg;

/// @brief Field k_ESteamNetworkingSocketsDebugOutputType_None value: I32(0)
static ::Steamworks::ESteamNetworkingSocketsDebugOutputType const k_ESteamNetworkingSocketsDebugOutputType_None;

/// @brief Field k_ESteamNetworkingSocketsDebugOutputType_Verbose value: I32(6)
static ::Steamworks::ESteamNetworkingSocketsDebugOutputType const k_ESteamNetworkingSocketsDebugOutputType_Verbose;

/// @brief Field k_ESteamNetworkingSocketsDebugOutputType_Warning value: I32(4)
static ::Steamworks::ESteamNetworkingSocketsDebugOutputType const k_ESteamNetworkingSocketsDebugOutputType_Warning;

/// @brief Field k_ESteamNetworkingSocketsDebugOutputType__Force32Bit value: I32(2147483647)
static ::Steamworks::ESteamNetworkingSocketsDebugOutputType const k_ESteamNetworkingSocketsDebugOutputType__Force32Bit;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ESteamNetworkingSocketsDebugOutputType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ESteamNetworkingSocketsDebugOutputType) == 0x4, "Size mismatch!");

} // namespace end def Steamworks

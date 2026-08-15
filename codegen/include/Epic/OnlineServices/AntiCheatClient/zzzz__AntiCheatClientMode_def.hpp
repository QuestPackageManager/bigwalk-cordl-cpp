#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/AntiCheatClientMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AntiCheatClientMode)
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatClient {
struct AntiCheatClientMode;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode, "Epic.OnlineServices.AntiCheatClient", "AntiCheatClientMode");
// Dependencies 
namespace Epic::OnlineServices::AntiCheatClient {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatClient.AntiCheatClientMode
struct CORDL_TYPE AntiCheatClientMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AntiCheatClientMode_Unwrapped
enum struct __AntiCheatClientMode_Unwrapped : int32_t {
__E_Invalid = static_cast<int32_t>(0x0),
__E_ClientServer = static_cast<int32_t>(0x1),
__E_PeerToPeer = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AntiCheatClientMode_Unwrapped () const noexcept {
return static_cast<__AntiCheatClientMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AntiCheatClientMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AntiCheatClientMode(int32_t  value__) noexcept;

/// @brief Field ClientServer value: I32(1)
static ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode const ClientServer;

/// @brief Field Invalid value: I32(0)
static ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode const Invalid;

/// @brief Field PeerToPeer value: I32(2)
static ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode const PeerToPeer;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9405};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatClient

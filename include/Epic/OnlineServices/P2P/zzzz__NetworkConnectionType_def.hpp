#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/NetworkConnectionType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkConnectionType)
// Forward declare root types
namespace Epic::OnlineServices::P2P {
struct NetworkConnectionType;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::P2P::NetworkConnectionType);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::P2P::NetworkConnectionType, "Epic.OnlineServices.P2P", "NetworkConnectionType");
// Dependencies 
namespace Epic::OnlineServices::P2P {
// Is value type: true
// CS Name: Epic.OnlineServices.P2P.NetworkConnectionType
struct CORDL_TYPE NetworkConnectionType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkConnectionType_Unwrapped
enum struct __NetworkConnectionType_Unwrapped : int32_t {
__E_NoConnection = static_cast<int32_t>(0x0),
__E_DirectConnection = static_cast<int32_t>(0x1),
__E_RelayedConnection = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkConnectionType_Unwrapped () const noexcept {
return static_cast<__NetworkConnectionType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkConnectionType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NetworkConnectionType(int32_t  value__) noexcept;

/// @brief Field DirectConnection value: I32(1)
static ::Epic::OnlineServices::P2P::NetworkConnectionType const DirectConnection;

/// @brief Field NoConnection value: I32(0)
static ::Epic::OnlineServices::P2P::NetworkConnectionType const NoConnection;

/// @brief Field RelayedConnection value: I32(2)
static ::Epic::OnlineServices::P2P::NetworkConnectionType const RelayedConnection;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9558};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::P2P::NetworkConnectionType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::P2P::NetworkConnectionType) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::P2P

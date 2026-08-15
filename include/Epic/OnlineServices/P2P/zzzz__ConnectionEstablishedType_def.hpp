#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/ConnectionEstablishedType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectionEstablishedType)
// Forward declare root types
namespace Epic::OnlineServices::P2P {
struct ConnectionEstablishedType;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::P2P::ConnectionEstablishedType);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::P2P::ConnectionEstablishedType, "Epic.OnlineServices.P2P", "ConnectionEstablishedType");
// Dependencies 
namespace Epic::OnlineServices::P2P {
// Is value type: true
// CS Name: Epic.OnlineServices.P2P.ConnectionEstablishedType
struct CORDL_TYPE ConnectionEstablishedType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ConnectionEstablishedType_Unwrapped
enum struct __ConnectionEstablishedType_Unwrapped : int32_t {
__E_NewConnection = static_cast<int32_t>(0x0),
__E_Reconnection = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConnectionEstablishedType_Unwrapped () const noexcept {
return static_cast<__ConnectionEstablishedType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ConnectionEstablishedType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ConnectionEstablishedType(int32_t  value__) noexcept;

/// @brief Field NewConnection value: I32(0)
static ::Epic::OnlineServices::P2P::ConnectionEstablishedType const NewConnection;

/// @brief Field Reconnection value: I32(1)
static ::Epic::OnlineServices::P2P::ConnectionEstablishedType const Reconnection;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9548};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::P2P::ConnectionEstablishedType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::P2P::ConnectionEstablishedType) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::P2P

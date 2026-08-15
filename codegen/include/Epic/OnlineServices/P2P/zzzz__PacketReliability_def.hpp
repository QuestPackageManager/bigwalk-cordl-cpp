#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/PacketReliability.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PacketReliability)
// Forward declare root types
namespace Epic::OnlineServices::P2P {
struct PacketReliability;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::P2P::PacketReliability);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::P2P::PacketReliability, "Epic.OnlineServices.P2P", "PacketReliability");
// Dependencies 
namespace Epic::OnlineServices::P2P {
// Is value type: true
// CS Name: Epic.OnlineServices.P2P.PacketReliability
struct CORDL_TYPE PacketReliability {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PacketReliability_Unwrapped
enum struct __PacketReliability_Unwrapped : int32_t {
__E_UnreliableUnordered = static_cast<int32_t>(0x0),
__E_ReliableUnordered = static_cast<int32_t>(0x1),
__E_ReliableOrdered = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PacketReliability_Unwrapped () const noexcept {
return static_cast<__PacketReliability_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PacketReliability() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PacketReliability(int32_t  value__) noexcept;

/// @brief Field ReliableOrdered value: I32(2)
static ::Epic::OnlineServices::P2P::PacketReliability const ReliableOrdered;

/// @brief Field ReliableUnordered value: I32(1)
static ::Epic::OnlineServices::P2P::PacketReliability const ReliableUnordered;

/// @brief Field UnreliableUnordered value: I32(0)
static ::Epic::OnlineServices::P2P::PacketReliability const UnreliableUnordered;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9591};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::P2P::PacketReliability, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::P2P::PacketReliability) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::P2P

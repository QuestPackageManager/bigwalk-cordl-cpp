#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/NetBiosNodeType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetBiosNodeType)
// Forward declare root types
namespace System::Net::NetworkInformation {
struct NetBiosNodeType;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::NetBiosNodeType);
DEFINE_IL2CPP_CLASS(::System::Net::NetworkInformation::NetBiosNodeType, "System.Net.NetworkInformation", "NetBiosNodeType");
// Dependencies 
namespace System::Net::NetworkInformation {
// Is value type: true
// CS Name: System.Net.NetworkInformation.NetBiosNodeType
struct CORDL_TYPE NetBiosNodeType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetBiosNodeType_Unwrapped
enum struct __NetBiosNodeType_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Broadcast = static_cast<int32_t>(0x1),
__E_Peer2Peer = static_cast<int32_t>(0x2),
__E_Mixed = static_cast<int32_t>(0x4),
__E_Hybrid = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetBiosNodeType_Unwrapped () const noexcept {
return static_cast<__NetBiosNodeType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetBiosNodeType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NetBiosNodeType(int32_t  value__) noexcept;

/// @brief Field Broadcast value: I32(1)
static ::System::Net::NetworkInformation::NetBiosNodeType const Broadcast;

/// @brief Field Hybrid value: I32(8)
static ::System::Net::NetworkInformation::NetBiosNodeType const Hybrid;

/// @brief Field Mixed value: I32(4)
static ::System::Net::NetworkInformation::NetBiosNodeType const Mixed;

/// @brief Field Peer2Peer value: I32(2)
static ::System::Net::NetworkInformation::NetBiosNodeType const Peer2Peer;

/// @brief Field Unknown value: I32(0)
static ::System::Net::NetworkInformation::NetBiosNodeType const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12059};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::NetworkInformation::NetBiosNodeType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::System::Net::NetworkInformation::NetBiosNodeType) == 0x4, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation

#pragma once
// IWYU pragma private; include "Steamworks/ESNetSocketConnectionType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ESNetSocketConnectionType)
// Forward declare root types
namespace Steamworks {
struct ESNetSocketConnectionType;
}
// Write type traits
MARK_VAL_T(::Steamworks::ESNetSocketConnectionType);
DEFINE_IL2CPP_CLASS(::Steamworks::ESNetSocketConnectionType, "Steamworks", "ESNetSocketConnectionType");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ESNetSocketConnectionType
struct CORDL_TYPE ESNetSocketConnectionType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ESNetSocketConnectionType_Unwrapped
enum struct __ESNetSocketConnectionType_Unwrapped : int32_t {
__E_k_ESNetSocketConnectionTypeNotConnected = static_cast<int32_t>(0x0),
__E_k_ESNetSocketConnectionTypeUDP = static_cast<int32_t>(0x1),
__E_k_ESNetSocketConnectionTypeUDPRelay = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ESNetSocketConnectionType_Unwrapped () const noexcept {
return static_cast<__ESNetSocketConnectionType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ESNetSocketConnectionType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ESNetSocketConnectionType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16275};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ESNetSocketConnectionTypeNotConnected value: I32(0)
static ::Steamworks::ESNetSocketConnectionType const k_ESNetSocketConnectionTypeNotConnected;

/// @brief Field k_ESNetSocketConnectionTypeUDP value: I32(1)
static ::Steamworks::ESNetSocketConnectionType const k_ESNetSocketConnectionTypeUDP;

/// @brief Field k_ESNetSocketConnectionTypeUDPRelay value: I32(2)
static ::Steamworks::ESNetSocketConnectionType const k_ESNetSocketConnectionTypeUDPRelay;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ESNetSocketConnectionType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ESNetSocketConnectionType) == 0x4, "Size mismatch!");

} // namespace end def Steamworks

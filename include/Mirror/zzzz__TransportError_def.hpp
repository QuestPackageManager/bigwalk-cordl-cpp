#pragma once
// IWYU pragma private; include "Mirror/TransportError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransportError)
// Forward declare root types
namespace Mirror {
struct TransportError;
}
// Write type traits
MARK_VAL_T(::Mirror::TransportError);
DEFINE_IL2CPP_CLASS(::Mirror::TransportError, "Mirror", "TransportError");
// Dependencies 
namespace Mirror {
// Is value type: true
// CS Name: Mirror.TransportError
struct CORDL_TYPE TransportError {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __TransportError_Unwrapped
enum struct __TransportError_Unwrapped : uint8_t {
__E_DnsResolve = static_cast<uint8_t>(0x0u),
__E_Refused = static_cast<uint8_t>(0x1u),
__E_Timeout = static_cast<uint8_t>(0x2u),
__E_Congestion = static_cast<uint8_t>(0x3u),
__E_InvalidReceive = static_cast<uint8_t>(0x4u),
__E_InvalidSend = static_cast<uint8_t>(0x5u),
__E_ConnectionClosed = static_cast<uint8_t>(0x6u),
__E_Unexpected = static_cast<uint8_t>(0x7u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TransportError_Unwrapped () const noexcept {
return static_cast<__TransportError_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TransportError() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr TransportError(uint8_t  value__) noexcept;

/// @brief Field Congestion value: U8(3)
static ::Mirror::TransportError const Congestion;

/// @brief Field ConnectionClosed value: U8(6)
static ::Mirror::TransportError const ConnectionClosed;

/// @brief Field DnsResolve value: U8(0)
static ::Mirror::TransportError const DnsResolve;

/// @brief Field InvalidReceive value: U8(4)
static ::Mirror::TransportError const InvalidReceive;

/// @brief Field InvalidSend value: U8(5)
static ::Mirror::TransportError const InvalidSend;

/// @brief Field Refused value: U8(1)
static ::Mirror::TransportError const Refused;

/// @brief Field Timeout value: U8(2)
static ::Mirror::TransportError const Timeout;

/// @brief Field Unexpected value: U8(7)
static ::Mirror::TransportError const Unexpected;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18391};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::TransportError, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::Mirror::TransportError) == 0x1, "Size mismatch!");

} // namespace end def Mirror

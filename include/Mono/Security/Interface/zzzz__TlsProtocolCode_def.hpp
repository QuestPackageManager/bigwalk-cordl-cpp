#pragma once
// IWYU pragma private; include "Mono/Security/Interface/TlsProtocolCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TlsProtocolCode)
// Forward declare root types
namespace Mono::Security::Interface {
struct TlsProtocolCode;
}
// Write type traits
MARK_VAL_T(::Mono::Security::Interface::TlsProtocolCode);
DEFINE_IL2CPP_CLASS(::Mono::Security::Interface::TlsProtocolCode, "Mono.Security.Interface", "TlsProtocolCode");
// Dependencies 
namespace Mono::Security::Interface {
// Is value type: true
// CS Name: Mono.Security.Interface.TlsProtocolCode
struct CORDL_TYPE TlsProtocolCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int16_t;

/// @brief Nested struct __TlsProtocolCode_Unwrapped
enum struct __TlsProtocolCode_Unwrapped : int16_t {
__E_Tls10 = static_cast<int16_t>(0x301),
__E_Tls11 = static_cast<int16_t>(0x302),
__E_Tls12 = static_cast<int16_t>(0x303),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TlsProtocolCode_Unwrapped () const noexcept {
return static_cast<__TlsProtocolCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int16_t () const noexcept {
return static_cast<int16_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TlsProtocolCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: None }]
constexpr TlsProtocolCode(int16_t  value__) noexcept;

/// @brief Field Tls10 value: I16(769)
static ::Mono::Security::Interface::TlsProtocolCode const Tls10;

/// @brief Field Tls11 value: I16(770)
static ::Mono::Security::Interface::TlsProtocolCode const Tls11;

/// @brief Field Tls12 value: I16(771)
static ::Mono::Security::Interface::TlsProtocolCode const Tls12;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19185};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field value__, offset: 0x2, size: 0x2, def value: None
 int16_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::Interface::TlsProtocolCode, value__) == 0x2, "Offset mismatch!");

static_assert(sizeof(::Mono::Security::Interface::TlsProtocolCode) == 0x2, "Size mismatch!");

} // namespace end def Mono::Security::Interface

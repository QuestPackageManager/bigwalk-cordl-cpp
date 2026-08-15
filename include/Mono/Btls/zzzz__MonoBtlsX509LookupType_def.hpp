#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsX509LookupType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBtlsX509LookupType)
// Forward declare root types
namespace Mono::Btls {
struct MonoBtlsX509LookupType;
}
// Write type traits
MARK_VAL_T(::Mono::Btls::MonoBtlsX509LookupType);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsX509LookupType, "Mono.Btls", "MonoBtlsX509LookupType");
// Dependencies 
namespace Mono::Btls {
// Is value type: true
// CS Name: Mono.Btls.MonoBtlsX509LookupType
struct CORDL_TYPE MonoBtlsX509LookupType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MonoBtlsX509LookupType_Unwrapped
enum struct __MonoBtlsX509LookupType_Unwrapped : int32_t {
__E_UNKNOWN = static_cast<int32_t>(0x0),
__E_FILE = static_cast<int32_t>(0x1),
__E_HASH_DIR = static_cast<int32_t>(0x2),
__E_MONO = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MonoBtlsX509LookupType_Unwrapped () const noexcept {
return static_cast<__MonoBtlsX509LookupType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsX509LookupType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MonoBtlsX509LookupType(int32_t  value__) noexcept;

/// @brief Field FILE value: I32(1)
static ::Mono::Btls::MonoBtlsX509LookupType const FILE;

/// @brief Field HASH_DIR value: I32(2)
static ::Mono::Btls::MonoBtlsX509LookupType const HASH_DIR;

/// @brief Field MONO value: I32(3)
static ::Mono::Btls::MonoBtlsX509LookupType const MONO;

/// @brief Field UNKNOWN value: I32(0)
static ::Mono::Btls::MonoBtlsX509LookupType const UNKNOWN;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11493};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::Btls::MonoBtlsX509LookupType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Mono::Btls::MonoBtlsX509LookupType) == 0x4, "Size mismatch!");

} // namespace end def Mono::Btls

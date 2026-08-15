#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsX509Format.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBtlsX509Format)
// Forward declare root types
namespace Mono::Btls {
struct MonoBtlsX509Format;
}
// Write type traits
MARK_VAL_T(::Mono::Btls::MonoBtlsX509Format);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsX509Format, "Mono.Btls", "MonoBtlsX509Format");
// Dependencies 
namespace Mono::Btls {
// Is value type: true
// CS Name: Mono.Btls.MonoBtlsX509Format
struct CORDL_TYPE MonoBtlsX509Format {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MonoBtlsX509Format_Unwrapped
enum struct __MonoBtlsX509Format_Unwrapped : int32_t {
__E_DER = static_cast<int32_t>(0x1),
__E_PEM = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MonoBtlsX509Format_Unwrapped () const noexcept {
return static_cast<__MonoBtlsX509Format_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsX509Format() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MonoBtlsX509Format(int32_t  value__) noexcept;

/// @brief Field DER value: I32(1)
static ::Mono::Btls::MonoBtlsX509Format const DER;

/// @brief Field PEM value: I32(2)
static ::Mono::Btls::MonoBtlsX509Format const PEM;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11486};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::Btls::MonoBtlsX509Format, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Mono::Btls::MonoBtlsX509Format) == 0x4, "Size mismatch!");

} // namespace end def Mono::Btls

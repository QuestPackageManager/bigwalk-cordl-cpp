#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsSslRenegotiateMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBtlsSslRenegotiateMode)
// Forward declare root types
namespace Mono::Btls {
struct MonoBtlsSslRenegotiateMode;
}
// Write type traits
MARK_VAL_T(::Mono::Btls::MonoBtlsSslRenegotiateMode);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsSslRenegotiateMode, "Mono.Btls", "MonoBtlsSslRenegotiateMode");
// Dependencies 
namespace Mono::Btls {
// Is value type: true
// CS Name: Mono.Btls.MonoBtlsSslRenegotiateMode
struct CORDL_TYPE MonoBtlsSslRenegotiateMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MonoBtlsSslRenegotiateMode_Unwrapped
enum struct __MonoBtlsSslRenegotiateMode_Unwrapped : int32_t {
__E_NEVER = static_cast<int32_t>(0x0),
__E_ONCE = static_cast<int32_t>(0x1),
__E_FREELY = static_cast<int32_t>(0x2),
__E_IGNORE = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MonoBtlsSslRenegotiateMode_Unwrapped () const noexcept {
return static_cast<__MonoBtlsSslRenegotiateMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsSslRenegotiateMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MonoBtlsSslRenegotiateMode(int32_t  value__) noexcept;

/// @brief Field FREELY value: I32(2)
static ::Mono::Btls::MonoBtlsSslRenegotiateMode const FREELY;

/// @brief Field IGNORE value: I32(3)
static ::Mono::Btls::MonoBtlsSslRenegotiateMode const IGNORE;

/// @brief Field NEVER value: I32(0)
static ::Mono::Btls::MonoBtlsSslRenegotiateMode const NEVER;

/// @brief Field ONCE value: I32(1)
static ::Mono::Btls::MonoBtlsSslRenegotiateMode const ONCE;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11477};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::Btls::MonoBtlsSslRenegotiateMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Mono::Btls::MonoBtlsSslRenegotiateMode) == 0x4, "Size mismatch!");

} // namespace end def Mono::Btls

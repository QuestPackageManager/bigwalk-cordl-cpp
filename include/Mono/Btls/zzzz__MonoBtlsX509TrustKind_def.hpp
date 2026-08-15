#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsX509TrustKind.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBtlsX509TrustKind)
// Forward declare root types
namespace Mono::Btls {
struct MonoBtlsX509TrustKind;
}
// Write type traits
MARK_VAL_T(::Mono::Btls::MonoBtlsX509TrustKind);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsX509TrustKind, "Mono.Btls", "MonoBtlsX509TrustKind");
// Dependencies 
namespace Mono::Btls {
// Is value type: true
// CS Name: Mono.Btls.MonoBtlsX509TrustKind
struct CORDL_TYPE MonoBtlsX509TrustKind {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MonoBtlsX509TrustKind_Unwrapped
enum struct __MonoBtlsX509TrustKind_Unwrapped : int32_t {
__E_DEFAULT = static_cast<int32_t>(0x0),
__E_TRUST_CLIENT = static_cast<int32_t>(0x1),
__E_TRUST_SERVER = static_cast<int32_t>(0x2),
__E_TRUST_ALL = static_cast<int32_t>(0x4),
__E_REJECT_CLIENT = static_cast<int32_t>(0x20),
__E_REJECT_SERVER = static_cast<int32_t>(0x40),
__E_REJECT_ALL = static_cast<int32_t>(0x80),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MonoBtlsX509TrustKind_Unwrapped () const noexcept {
return static_cast<__MonoBtlsX509TrustKind_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsX509TrustKind() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MonoBtlsX509TrustKind(int32_t  value__) noexcept;

/// @brief Field DEFAULT value: I32(0)
static ::Mono::Btls::MonoBtlsX509TrustKind const DEFAULT;

/// @brief Field REJECT_ALL value: I32(128)
static ::Mono::Btls::MonoBtlsX509TrustKind const REJECT_ALL;

/// @brief Field REJECT_CLIENT value: I32(32)
static ::Mono::Btls::MonoBtlsX509TrustKind const REJECT_CLIENT;

/// @brief Field REJECT_SERVER value: I32(64)
static ::Mono::Btls::MonoBtlsX509TrustKind const REJECT_SERVER;

/// @brief Field TRUST_ALL value: I32(4)
static ::Mono::Btls::MonoBtlsX509TrustKind const TRUST_ALL;

/// @brief Field TRUST_CLIENT value: I32(1)
static ::Mono::Btls::MonoBtlsX509TrustKind const TRUST_CLIENT;

/// @brief Field TRUST_SERVER value: I32(2)
static ::Mono::Btls::MonoBtlsX509TrustKind const TRUST_SERVER;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11503};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::Btls::MonoBtlsX509TrustKind, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Mono::Btls::MonoBtlsX509TrustKind) == 0x4, "Size mismatch!");

} // namespace end def Mono::Btls

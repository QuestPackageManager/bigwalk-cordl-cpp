#pragma once
// IWYU pragma private; include "GlobalNamespace/DQuphjXgYzAQMcmDbibBDGawIXjL.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DQuphjXgYzAQMcmDbibBDGawIXjL)
// Forward declare root types
namespace GlobalNamespace {
struct DQuphjXgYzAQMcmDbibBDGawIXjL;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DQuphjXgYzAQMcmDbibBDGawIXjL);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DQuphjXgYzAQMcmDbibBDGawIXjL, "", "DQuphjXgYzAQMcmDbibBDGawIXjL");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: DQuphjXgYzAQMcmDbibBDGawIXjL
struct CORDL_TYPE DQuphjXgYzAQMcmDbibBDGawIXjL {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DQuphjXgYzAQMcmDbibBDGawIXjL_Unwrapped
enum struct __DQuphjXgYzAQMcmDbibBDGawIXjL_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Hardware = static_cast<int32_t>(0x1),
__E_Reference = static_cast<int32_t>(0x2),
__E_Null = static_cast<int32_t>(0x3),
__E_Software = static_cast<int32_t>(0x4),
__E_Warp = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DQuphjXgYzAQMcmDbibBDGawIXjL_Unwrapped () const noexcept {
return static_cast<__DQuphjXgYzAQMcmDbibBDGawIXjL_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DQuphjXgYzAQMcmDbibBDGawIXjL() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DQuphjXgYzAQMcmDbibBDGawIXjL(int32_t  value__) noexcept;

/// @brief Field Hardware value: I32(1)
static ::GlobalNamespace::DQuphjXgYzAQMcmDbibBDGawIXjL const Hardware;

/// @brief Field Null value: I32(3)
static ::GlobalNamespace::DQuphjXgYzAQMcmDbibBDGawIXjL const Null;

/// @brief Field Reference value: I32(2)
static ::GlobalNamespace::DQuphjXgYzAQMcmDbibBDGawIXjL const Reference;

/// @brief Field Software value: I32(4)
static ::GlobalNamespace::DQuphjXgYzAQMcmDbibBDGawIXjL const Software;

/// @brief Field Unknown value: I32(0)
static ::GlobalNamespace::DQuphjXgYzAQMcmDbibBDGawIXjL const Unknown;

/// @brief Field Warp value: I32(5)
static ::GlobalNamespace::DQuphjXgYzAQMcmDbibBDGawIXjL const Warp;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6202};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DQuphjXgYzAQMcmDbibBDGawIXjL, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DQuphjXgYzAQMcmDbibBDGawIXjL) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

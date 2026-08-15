#pragma once
// IWYU pragma private; include "Mirror/SyncMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SyncMode)
// Forward declare root types
namespace Mirror {
struct SyncMode;
}
// Write type traits
MARK_VAL_T(::Mirror::SyncMode);
DEFINE_IL2CPP_CLASS(::Mirror::SyncMode, "Mirror", "SyncMode");
// Dependencies 
namespace Mirror {
// Is value type: true
// CS Name: Mirror.SyncMode
struct CORDL_TYPE SyncMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SyncMode_Unwrapped
enum struct __SyncMode_Unwrapped : int32_t {
__E_Observers = static_cast<int32_t>(0x0),
__E_Owner = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SyncMode_Unwrapped () const noexcept {
return static_cast<__SyncMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SyncMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SyncMode(int32_t  value__) noexcept;

/// @brief Field Observers value: I32(0)
static ::Mirror::SyncMode const Observers;

/// @brief Field Owner value: I32(1)
static ::Mirror::SyncMode const Owner;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18297};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SyncMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Mirror::SyncMode) == 0x4, "Size mismatch!");

} // namespace end def Mirror

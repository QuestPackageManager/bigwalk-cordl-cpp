#pragma once
// IWYU pragma private; include "Mirror/SyncDirection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SyncDirection)
// Forward declare root types
namespace Mirror {
struct SyncDirection;
}
// Write type traits
MARK_VAL_T(::Mirror::SyncDirection);
DEFINE_IL2CPP_CLASS(::Mirror::SyncDirection, "Mirror", "SyncDirection");
// Dependencies 
namespace Mirror {
// Is value type: true
// CS Name: Mirror.SyncDirection
struct CORDL_TYPE SyncDirection {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SyncDirection_Unwrapped
enum struct __SyncDirection_Unwrapped : int32_t {
__E_ServerToClient = static_cast<int32_t>(0x0),
__E_ClientToServer = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SyncDirection_Unwrapped () const noexcept {
return static_cast<__SyncDirection_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SyncDirection() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SyncDirection(int32_t  value__) noexcept;

/// @brief Field ClientToServer value: I32(1)
static ::Mirror::SyncDirection const ClientToServer;

/// @brief Field ServerToClient value: I32(0)
static ::Mirror::SyncDirection const ServerToClient;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18298};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SyncDirection, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Mirror::SyncDirection) == 0x4, "Size mismatch!");

} // namespace end def Mirror

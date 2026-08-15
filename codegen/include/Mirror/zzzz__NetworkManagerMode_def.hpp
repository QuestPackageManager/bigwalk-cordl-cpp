#pragma once
// IWYU pragma private; include "Mirror/NetworkManagerMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkManagerMode)
// Forward declare root types
namespace Mirror {
struct NetworkManagerMode;
}
// Write type traits
MARK_VAL_T(::Mirror::NetworkManagerMode);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkManagerMode, "Mirror", "NetworkManagerMode");
// Dependencies 
namespace Mirror {
// Is value type: true
// CS Name: Mirror.NetworkManagerMode
struct CORDL_TYPE NetworkManagerMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkManagerMode_Unwrapped
enum struct __NetworkManagerMode_Unwrapped : int32_t {
__E_Offline = static_cast<int32_t>(0x0),
__E_ServerOnly = static_cast<int32_t>(0x1),
__E_ClientOnly = static_cast<int32_t>(0x2),
__E_Host = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkManagerMode_Unwrapped () const noexcept {
return static_cast<__NetworkManagerMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkManagerMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NetworkManagerMode(int32_t  value__) noexcept;

/// @brief Field ClientOnly value: I32(2)
static ::Mirror::NetworkManagerMode const ClientOnly;

/// @brief Field Host value: I32(3)
static ::Mirror::NetworkManagerMode const Host;

/// @brief Field Offline value: I32(0)
static ::Mirror::NetworkManagerMode const Offline;

/// @brief Field ServerOnly value: I32(1)
static ::Mirror::NetworkManagerMode const ServerOnly;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18324};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::NetworkManagerMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Mirror::NetworkManagerMode) == 0x4, "Size mismatch!");

} // namespace end def Mirror

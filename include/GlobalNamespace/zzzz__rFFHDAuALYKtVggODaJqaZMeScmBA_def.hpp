#pragma once
// IWYU pragma private; include "GlobalNamespace/rFFHDAuALYKtVggODaJqaZMeScmBA.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(rFFHDAuALYKtVggODaJqaZMeScmBA)
// Forward declare root types
namespace GlobalNamespace {
struct rFFHDAuALYKtVggODaJqaZMeScmBA;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::rFFHDAuALYKtVggODaJqaZMeScmBA);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::rFFHDAuALYKtVggODaJqaZMeScmBA, "", "rFFHDAuALYKtVggODaJqaZMeScmBA");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: rFFHDAuALYKtVggODaJqaZMeScmBA
struct CORDL_TYPE rFFHDAuALYKtVggODaJqaZMeScmBA {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __rFFHDAuALYKtVggODaJqaZMeScmBA_Unwrapped
enum struct __rFFHDAuALYKtVggODaJqaZMeScmBA_Unwrapped : int32_t {
__E_MoveRelative = static_cast<int32_t>(0x0),
__E_MoveAbsolute = static_cast<int32_t>(0x1),
__E_VirtualDesktop = static_cast<int32_t>(0x2),
__E_AttributesChanged = static_cast<int32_t>(0x4),
__E_MoveNoCoalesce = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __rFFHDAuALYKtVggODaJqaZMeScmBA_Unwrapped () const noexcept {
return static_cast<__rFFHDAuALYKtVggODaJqaZMeScmBA_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr rFFHDAuALYKtVggODaJqaZMeScmBA() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr rFFHDAuALYKtVggODaJqaZMeScmBA(int32_t  value__) noexcept;

/// @brief Field AttributesChanged value: I32(4)
static ::GlobalNamespace::rFFHDAuALYKtVggODaJqaZMeScmBA const AttributesChanged;

/// @brief Field MoveAbsolute value: I32(1)
static ::GlobalNamespace::rFFHDAuALYKtVggODaJqaZMeScmBA const MoveAbsolute;

/// @brief Field MoveNoCoalesce value: I32(8)
static ::GlobalNamespace::rFFHDAuALYKtVggODaJqaZMeScmBA const MoveNoCoalesce;

/// @brief Field MoveRelative value: I32(0)
static ::GlobalNamespace::rFFHDAuALYKtVggODaJqaZMeScmBA const MoveRelative;

/// @brief Field VirtualDesktop value: I32(2)
static ::GlobalNamespace::rFFHDAuALYKtVggODaJqaZMeScmBA const VirtualDesktop;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6152};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::rFFHDAuALYKtVggODaJqaZMeScmBA, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::rFFHDAuALYKtVggODaJqaZMeScmBA) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/kRRLhAGYPnzYDchUGkLXRUHJcogC.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(kRRLhAGYPnzYDchUGkLXRUHJcogC)
// Forward declare root types
namespace GlobalNamespace {
struct kRRLhAGYPnzYDchUGkLXRUHJcogC;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::kRRLhAGYPnzYDchUGkLXRUHJcogC);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::kRRLhAGYPnzYDchUGkLXRUHJcogC, "", "kRRLhAGYPnzYDchUGkLXRUHJcogC");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: kRRLhAGYPnzYDchUGkLXRUHJcogC
struct CORDL_TYPE kRRLhAGYPnzYDchUGkLXRUHJcogC {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __kRRLhAGYPnzYDchUGkLXRUHJcogC_Unwrapped
enum struct __kRRLhAGYPnzYDchUGkLXRUHJcogC_Unwrapped : int32_t {
__E_Local = static_cast<int32_t>(0x0),
__E_System = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __kRRLhAGYPnzYDchUGkLXRUHJcogC_Unwrapped () const noexcept {
return static_cast<__kRRLhAGYPnzYDchUGkLXRUHJcogC_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr kRRLhAGYPnzYDchUGkLXRUHJcogC() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr kRRLhAGYPnzYDchUGkLXRUHJcogC(int32_t  value__) noexcept;

/// @brief Field Local value: I32(0)
static ::GlobalNamespace::kRRLhAGYPnzYDchUGkLXRUHJcogC const Local;

/// @brief Field System value: I32(1)
static ::GlobalNamespace::kRRLhAGYPnzYDchUGkLXRUHJcogC const System;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6204};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::kRRLhAGYPnzYDchUGkLXRUHJcogC, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::kRRLhAGYPnzYDchUGkLXRUHJcogC) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

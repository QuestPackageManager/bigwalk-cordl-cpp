#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUDrivenBitOpType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUDrivenBitOpType)
// Forward declare root types
namespace UnityEngine::Rendering {
struct GPUDrivenBitOpType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::GPUDrivenBitOpType);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUDrivenBitOpType, "UnityEngine.Rendering", "GPUDrivenBitOpType");
// Dependencies 
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUDrivenBitOpType
struct CORDL_TYPE GPUDrivenBitOpType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GPUDrivenBitOpType_Unwrapped
enum struct __GPUDrivenBitOpType_Unwrapped : int32_t {
__E_And = static_cast<int32_t>(0x0),
__E_Or = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GPUDrivenBitOpType_Unwrapped () const noexcept {
return static_cast<__GPUDrivenBitOpType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GPUDrivenBitOpType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GPUDrivenBitOpType(int32_t  value__) noexcept;

/// @brief Field And value: I32(0)
static ::UnityEngine::Rendering::GPUDrivenBitOpType const And;

/// @brief Field Or value: I32(1)
static ::UnityEngine::Rendering::GPUDrivenBitOpType const Or;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11225};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenBitOpType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::GPUDrivenBitOpType) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering

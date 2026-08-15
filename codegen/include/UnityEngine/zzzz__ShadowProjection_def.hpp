#pragma once
// IWYU pragma private; include "UnityEngine/ShadowProjection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShadowProjection)
// Forward declare root types
namespace UnityEngine {
struct ShadowProjection;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ShadowProjection);
DEFINE_IL2CPP_CLASS(::UnityEngine::ShadowProjection, "UnityEngine", "ShadowProjection");
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ShadowProjection
struct CORDL_TYPE ShadowProjection {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ShadowProjection_Unwrapped
enum struct __ShadowProjection_Unwrapped : int32_t {
__E_CloseFit = static_cast<int32_t>(0x0),
__E_StableFit = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ShadowProjection_Unwrapped () const noexcept {
return static_cast<__ShadowProjection_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ShadowProjection() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ShadowProjection(int32_t  value__) noexcept;

/// @brief Field CloseFit value: I32(0)
static ::UnityEngine::ShadowProjection const CloseFit;

/// @brief Field StableFit value: I32(1)
static ::UnityEngine::ShadowProjection const StableFit;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10540};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ShadowProjection, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ShadowProjection) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine

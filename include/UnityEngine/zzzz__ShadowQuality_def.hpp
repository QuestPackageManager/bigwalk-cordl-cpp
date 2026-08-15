#pragma once
// IWYU pragma private; include "UnityEngine/ShadowQuality.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShadowQuality)
// Forward declare root types
namespace UnityEngine {
struct ShadowQuality;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ShadowQuality);
DEFINE_IL2CPP_CLASS(::UnityEngine::ShadowQuality, "UnityEngine", "ShadowQuality");
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ShadowQuality
struct CORDL_TYPE ShadowQuality {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ShadowQuality_Unwrapped
enum struct __ShadowQuality_Unwrapped : int32_t {
__E_Disable = static_cast<int32_t>(0x0),
__E_HardOnly = static_cast<int32_t>(0x1),
__E_All = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ShadowQuality_Unwrapped () const noexcept {
return static_cast<__ShadowQuality_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ShadowQuality() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ShadowQuality(int32_t  value__) noexcept;

/// @brief Field All value: I32(2)
static ::UnityEngine::ShadowQuality const All;

/// @brief Field Disable value: I32(0)
static ::UnityEngine::ShadowQuality const Disable;

/// @brief Field HardOnly value: I32(1)
static ::UnityEngine::ShadowQuality const HardOnly;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10541};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ShadowQuality, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ShadowQuality) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine

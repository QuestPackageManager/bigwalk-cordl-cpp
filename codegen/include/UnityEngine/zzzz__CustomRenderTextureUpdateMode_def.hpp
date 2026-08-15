#pragma once
// IWYU pragma private; include "UnityEngine/CustomRenderTextureUpdateMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomRenderTextureUpdateMode)
// Forward declare root types
namespace UnityEngine {
struct CustomRenderTextureUpdateMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::CustomRenderTextureUpdateMode);
DEFINE_IL2CPP_CLASS(::UnityEngine::CustomRenderTextureUpdateMode, "UnityEngine", "CustomRenderTextureUpdateMode");
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.CustomRenderTextureUpdateMode
struct CORDL_TYPE CustomRenderTextureUpdateMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CustomRenderTextureUpdateMode_Unwrapped
enum struct __CustomRenderTextureUpdateMode_Unwrapped : int32_t {
__E_OnLoad = static_cast<int32_t>(0x0),
__E_Realtime = static_cast<int32_t>(0x1),
__E_OnDemand = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CustomRenderTextureUpdateMode_Unwrapped () const noexcept {
return static_cast<__CustomRenderTextureUpdateMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CustomRenderTextureUpdateMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CustomRenderTextureUpdateMode(int32_t  value__) noexcept;

/// @brief Field OnDemand value: I32(2)
static ::UnityEngine::CustomRenderTextureUpdateMode const OnDemand;

/// @brief Field OnLoad value: I32(0)
static ::UnityEngine::CustomRenderTextureUpdateMode const OnLoad;

/// @brief Field Realtime value: I32(1)
static ::UnityEngine::CustomRenderTextureUpdateMode const Realtime;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10568};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::CustomRenderTextureUpdateMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::CustomRenderTextureUpdateMode) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine

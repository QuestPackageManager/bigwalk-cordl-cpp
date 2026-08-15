#pragma once
// IWYU pragma private; include "UnityEngine/CustomRenderTextureInitializationSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomRenderTextureInitializationSource)
// Forward declare root types
namespace UnityEngine {
struct CustomRenderTextureInitializationSource;
}
// Write type traits
MARK_VAL_T(::UnityEngine::CustomRenderTextureInitializationSource);
DEFINE_IL2CPP_CLASS(::UnityEngine::CustomRenderTextureInitializationSource, "UnityEngine", "CustomRenderTextureInitializationSource");
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.CustomRenderTextureInitializationSource
struct CORDL_TYPE CustomRenderTextureInitializationSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CustomRenderTextureInitializationSource_Unwrapped
enum struct __CustomRenderTextureInitializationSource_Unwrapped : int32_t {
__E_TextureAndColor = static_cast<int32_t>(0x0),
__E_Material = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CustomRenderTextureInitializationSource_Unwrapped () const noexcept {
return static_cast<__CustomRenderTextureInitializationSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CustomRenderTextureInitializationSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CustomRenderTextureInitializationSource(int32_t  value__) noexcept;

/// @brief Field Material value: I32(1)
static ::UnityEngine::CustomRenderTextureInitializationSource const Material;

/// @brief Field TextureAndColor value: I32(0)
static ::UnityEngine::CustomRenderTextureInitializationSource const TextureAndColor;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10567};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::CustomRenderTextureInitializationSource, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::CustomRenderTextureInitializationSource) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine

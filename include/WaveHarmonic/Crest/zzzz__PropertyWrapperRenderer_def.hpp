#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/PropertyWrapperRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyWrapperRenderer)
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector4;
}
namespace WaveHarmonic::Crest {
class IPropertyWrapper;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
struct PropertyWrapperRenderer;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::PropertyWrapperRenderer);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::PropertyWrapperRenderer, "WaveHarmonic.Crest", "PropertyWrapperRenderer");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.PropertyWrapperRenderer
struct CORDL_TYPE PropertyWrapperRenderer {
public:
// Declarations
 __declspec(property(get=get_PropertyBlock)) ::UnityEngine::MaterialPropertyBlock*  PropertyBlock;

 __declspec(property(get=get_Renderer)) ::UnityW<::UnityEngine::Renderer>  Renderer;

/// @brief Convert operator to "::WaveHarmonic::Crest::IPropertyWrapper"
constexpr operator  ::WaveHarmonic::Crest::IPropertyWrapper*() ;

/// @brief Method GetBlock, addr 0x18256c2e0, size 0x40, virtual true, abstract: false, final true
inline void GetBlock() ;

/// @brief Method SetBlock, addr 0x18256c320, size 0x40, virtual true, abstract: false, final true
inline void SetBlock() ;

/// @brief Method SetBoolean, addr 0x18256bd10, size 0x40, virtual true, abstract: false, final true
inline void SetBoolean(int32_t  param, bool  value) ;

/// @brief Method SetBuffer, addr 0x18256c360, size 0x30, virtual false, abstract: false, final false
inline void SetBuffer(int32_t  param, ::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method SetFloat, addr 0x18256bd80, size 0x30, virtual true, abstract: false, final true
inline void SetFloat(int32_t  param, float_t  value) ;

/// @brief Method SetFloatArray, addr 0x18256bd50, size 0x30, virtual true, abstract: false, final true
inline void SetFloatArray(int32_t  param, ::ArrayW<float_t>  value) ;

/// @brief Method SetInteger, addr 0x18256bdb0, size 0x30, virtual true, abstract: false, final true
inline void SetInteger(int32_t  param, int32_t  value) ;

/// @brief Method SetMatrix, addr 0x18256bde0, size 0x90, virtual true, abstract: false, final true
inline void SetMatrix(int32_t  param, ::UnityEngine::Matrix4x4  value) ;

/// @brief Method SetTexture, addr 0x18256be70, size 0x30, virtual true, abstract: false, final true
inline void SetTexture(int32_t  param, ::UnityEngine::Texture*  value) ;

/// @brief Method SetVector, addr 0x18256bed0, size 0x90, virtual true, abstract: false, final true
inline void SetVector(int32_t  param, ::UnityEngine::Vector4  value) ;

/// @brief Method SetVectorArray, addr 0x18256bea0, size 0x30, virtual true, abstract: false, final true
inline void SetVectorArray(int32_t  param, ::ArrayW<::UnityEngine::Vector4>  value) ;

/// @brief Method .ctor, addr 0x18256c390, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Renderer*  renderer, ::UnityEngine::MaterialPropertyBlock*  block) ;

/// @brief Method get_PropertyBlock, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::MaterialPropertyBlock* get_PropertyBlock() ;

/// @brief Method get_Renderer, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Renderer> get_Renderer() ;

/// @brief Convert to "::WaveHarmonic::Crest::IPropertyWrapper"
constexpr ::WaveHarmonic::Crest::IPropertyWrapper* i___WaveHarmonic__Crest__IPropertyWrapper() ;

// Ctor Parameters []
// @brief default ctor
constexpr PropertyWrapperRenderer() ;

// Ctor Parameters [CppParam { name: "_PropertyBlock_k__BackingField", ty: "::UnityEngine::MaterialPropertyBlock*", modifiers: "", def_value: None }, CppParam { name: "_Renderer_k__BackingField", ty: "::UnityW<::UnityEngine::Renderer>", modifiers: "", def_value: None }]
constexpr PropertyWrapperRenderer(::UnityEngine::MaterialPropertyBlock*  _PropertyBlock_k__BackingField, ::UnityW<::UnityEngine::Renderer>  _Renderer_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20139};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <PropertyBlock>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  _PropertyBlock_k__BackingField;

/// @brief Field <Renderer>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  _Renderer_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::PropertyWrapperRenderer, _PropertyBlock_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::PropertyWrapperRenderer, _Renderer_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::PropertyWrapperRenderer) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest

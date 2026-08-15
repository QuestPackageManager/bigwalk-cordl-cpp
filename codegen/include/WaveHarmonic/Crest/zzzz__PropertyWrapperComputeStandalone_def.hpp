#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/PropertyWrapperComputeStandalone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyWrapperComputeStandalone)
namespace UnityEngine::Rendering {
struct LocalKeyword;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector4;
}
namespace WaveHarmonic::Crest {
class IPropertyWrapperVariants;
}
namespace WaveHarmonic::Crest {
class IPropertyWrapper;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
struct PropertyWrapperComputeStandalone;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::PropertyWrapperComputeStandalone);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::PropertyWrapperComputeStandalone, "WaveHarmonic.Crest", "PropertyWrapperComputeStandalone");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.PropertyWrapperComputeStandalone
struct CORDL_TYPE PropertyWrapperComputeStandalone {
public:
// Declarations
/// @brief Convert operator to "::WaveHarmonic::Crest::IPropertyWrapper"
constexpr operator  ::WaveHarmonic::Crest::IPropertyWrapper*() ;

/// @brief Convert operator to "::WaveHarmonic::Crest::IPropertyWrapperVariants"
constexpr operator  ::WaveHarmonic::Crest::IPropertyWrapperVariants*() ;

/// @brief Method Dispatch, addr 0x18256b440, size 0x50, virtual false, abstract: false, final false
inline void Dispatch(int32_t  x, int32_t  y, int32_t  z) ;

/// @brief Method GetBlock, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void GetBlock() ;

/// @brief Method SetBlock, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetBlock() ;

/// @brief Method SetBoolean, addr 0x18256b490, size 0x40, virtual true, abstract: false, final true
inline void SetBoolean(int32_t  param, bool  value) ;

/// @brief Method SetBuffer, addr 0x18256b4d0, size 0x50, virtual false, abstract: false, final false
inline void SetBuffer(int32_t  param, ::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method SetConstantBuffer, addr 0x18256b520, size 0x70, virtual false, abstract: false, final false
inline void SetConstantBuffer(int32_t  param, ::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method SetFloat, addr 0x18256b5c0, size 0x30, virtual true, abstract: false, final true
inline void SetFloat(int32_t  param, float_t  value) ;

/// @brief Method SetFloatArray, addr 0x18256b590, size 0x30, virtual true, abstract: false, final true
inline void SetFloatArray(int32_t  param, ::ArrayW<float_t>  value) ;

/// @brief Method SetInteger, addr 0x18256b5f0, size 0x30, virtual true, abstract: false, final true
inline void SetInteger(int32_t  param, int32_t  value) ;

/// @brief Method SetKeyword, addr 0x18256b620, size 0x30, virtual false, abstract: false, final false
inline void SetKeyword(::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword, bool  value) ;

/// @brief Method SetMatrix, addr 0x18256b650, size 0x90, virtual true, abstract: false, final true
inline void SetMatrix(int32_t  param, ::UnityEngine::Matrix4x4  value) ;

/// @brief Method SetTexture, addr 0x18256b6e0, size 0x50, virtual true, abstract: false, final true
inline void SetTexture(int32_t  param, ::UnityEngine::Texture*  value) ;

/// @brief Method SetVector, addr 0x18256b760, size 0x90, virtual true, abstract: false, final true
inline void SetVector(int32_t  param, ::UnityEngine::Vector4  value) ;

/// @brief Method SetVectorArray, addr 0x18256b730, size 0x30, virtual true, abstract: false, final true
inline void SetVectorArray(int32_t  param, ::ArrayW<::UnityEngine::Vector4>  value) ;

/// @brief Method WaveHarmonic.Crest.IPropertyWrapperVariants.SetKeyword, addr 0x18256b620, size 0x30, virtual true, abstract: false, final true
inline void WaveHarmonic_Crest_IPropertyWrapperVariants_SetKeyword(::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword, bool  value) ;

/// @brief Method .ctor, addr 0x1802f17c0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::ComputeShader*  shader, int32_t  kernel) ;

/// @brief Convert to "::WaveHarmonic::Crest::IPropertyWrapper"
constexpr ::WaveHarmonic::Crest::IPropertyWrapper* i___WaveHarmonic__Crest__IPropertyWrapper() ;

/// @brief Convert to "::WaveHarmonic::Crest::IPropertyWrapperVariants"
constexpr ::WaveHarmonic::Crest::IPropertyWrapperVariants* i___WaveHarmonic__Crest__IPropertyWrapperVariants() ;

// Ctor Parameters []
// @brief default ctor
constexpr PropertyWrapperComputeStandalone() ;

// Ctor Parameters [CppParam { name: "_Shader", ty: "::UnityW<::UnityEngine::ComputeShader>", modifiers: "", def_value: None }, CppParam { name: "_Kernel", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PropertyWrapperComputeStandalone(::UnityW<::UnityEngine::ComputeShader>  _Shader, int32_t  _Kernel) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20143};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _Shader, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  _Shader;

/// @brief Field _Kernel, offset: 0x8, size: 0x4, def value: None
 int32_t  _Kernel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::PropertyWrapperComputeStandalone, _Shader) == 0x0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::PropertyWrapperComputeStandalone, _Kernel) == 0x8, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::PropertyWrapperComputeStandalone) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest

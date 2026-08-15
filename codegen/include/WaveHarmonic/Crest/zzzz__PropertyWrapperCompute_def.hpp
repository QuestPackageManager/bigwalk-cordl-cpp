#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/PropertyWrapperCompute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyWrapperCompute)
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct LocalKeyword;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
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
struct PropertyWrapperCompute;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::PropertyWrapperCompute);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::PropertyWrapperCompute, "WaveHarmonic.Crest", "PropertyWrapperCompute");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.PropertyWrapperCompute
struct CORDL_TYPE PropertyWrapperCompute {
public:
// Declarations
/// @brief Convert operator to "::WaveHarmonic::Crest::IPropertyWrapper"
constexpr operator  ::WaveHarmonic::Crest::IPropertyWrapper*() ;

/// @brief Convert operator to "::WaveHarmonic::Crest::IPropertyWrapperVariants"
constexpr operator  ::WaveHarmonic::Crest::IPropertyWrapperVariants*() ;

/// @brief Method Dispatch, addr 0x18256b7f0, size 0x60, virtual false, abstract: false, final false
inline void Dispatch(int32_t  x, int32_t  y, int32_t  z) ;

/// @brief Method GetBlock, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void GetBlock() ;

/// @brief Method SetBlock, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetBlock() ;

/// @brief Method SetBoolean, addr 0x18256b850, size 0x50, virtual true, abstract: false, final true
inline void SetBoolean(int32_t  param, bool  value) ;

/// @brief Method SetBuffer, addr 0x18256b8a0, size 0x50, virtual false, abstract: false, final false
inline void SetBuffer(int32_t  param, ::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method SetFloat, addr 0x18256b8f0, size 0x50, virtual true, abstract: false, final true
inline void SetFloat(int32_t  param, float_t  value) ;

/// @brief Method SetFloatArray, addr 0x1825650a0, size 0x30, virtual true, abstract: false, final true
inline void SetFloatArray(int32_t  param, ::ArrayW<float_t>  value) ;

/// @brief Method SetInteger, addr 0x18256b940, size 0x50, virtual true, abstract: false, final true
inline void SetInteger(int32_t  param, int32_t  value) ;

/// @brief Method SetIntegers, addr 0x18256b990, size 0x50, virtual false, abstract: false, final false
inline void SetIntegers(int32_t  param, ::ArrayW<int32_t>  value) ;

/// @brief Method SetKeyword, addr 0x18256b9e0, size 0x50, virtual false, abstract: false, final false
inline void SetKeyword(::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword, bool  value) ;

/// @brief Method SetMatrix, addr 0x18256ba30, size 0xa0, virtual true, abstract: false, final true
inline void SetMatrix(int32_t  param, ::UnityEngine::Matrix4x4  value) ;

/// @brief Method SetTexture, addr 0x18256bb80, size 0xa0, virtual false, abstract: false, final false
inline void SetTexture(int32_t  param, ::UnityEngine::Rendering::RenderTargetIdentifier  value) ;

/// @brief Method SetTexture, addr 0x18256bad0, size 0xb0, virtual true, abstract: false, final true
inline void SetTexture(int32_t  param, ::UnityEngine::Texture*  value) ;

/// @brief Method SetVector, addr 0x18256bc70, size 0xa0, virtual true, abstract: false, final true
inline void SetVector(int32_t  param, ::UnityEngine::Vector4  value) ;

/// @brief Method SetVectorArray, addr 0x18256bc20, size 0x50, virtual true, abstract: false, final true
inline void SetVectorArray(int32_t  param, ::ArrayW<::UnityEngine::Vector4>  value) ;

/// @brief Method WaveHarmonic.Crest.IPropertyWrapperVariants.SetKeyword, addr 0x18256b9e0, size 0x50, virtual true, abstract: false, final true
inline void WaveHarmonic_Crest_IPropertyWrapperVariants_SetKeyword(::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword, bool  value) ;

/// @brief Method .ctor, addr 0x180fb4d10, size 0x9bb0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::ComputeShader*  shader, int32_t  kernel) ;

/// @brief Convert to "::WaveHarmonic::Crest::IPropertyWrapper"
constexpr ::WaveHarmonic::Crest::IPropertyWrapper* i___WaveHarmonic__Crest__IPropertyWrapper() ;

/// @brief Convert to "::WaveHarmonic::Crest::IPropertyWrapperVariants"
constexpr ::WaveHarmonic::Crest::IPropertyWrapperVariants* i___WaveHarmonic__Crest__IPropertyWrapperVariants() ;

// Ctor Parameters []
// @brief default ctor
constexpr PropertyWrapperCompute() ;

// Ctor Parameters [CppParam { name: "_Buffer", ty: "::UnityEngine::Rendering::CommandBuffer*", modifiers: "", def_value: None }, CppParam { name: "_Shader", ty: "::UnityW<::UnityEngine::ComputeShader>", modifiers: "", def_value: None }, CppParam { name: "_Kernel", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PropertyWrapperCompute(::UnityEngine::Rendering::CommandBuffer*  _Buffer, ::UnityW<::UnityEngine::ComputeShader>  _Shader, int32_t  _Kernel) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20142};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _Buffer, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Rendering::CommandBuffer*  _Buffer;

/// @brief Field _Shader, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  _Shader;

/// @brief Field _Kernel, offset: 0x10, size: 0x4, def value: None
 int32_t  _Kernel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::PropertyWrapperCompute, _Buffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::PropertyWrapperCompute, _Shader) == 0x8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::PropertyWrapperCompute, _Kernel) == 0x10, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::PropertyWrapperCompute) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest

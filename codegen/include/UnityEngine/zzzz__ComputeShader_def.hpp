#pragma once
// IWYU pragma private; include "UnityEngine/ComputeShader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ComputeShader)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
struct LocalKeywordSpace;
}
namespace UnityEngine::Rendering {
struct LocalKeyword;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class GraphicsBuffer;
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
// Forward declare root types
namespace UnityEngine {
class ComputeShader;
}
// Write type traits
MARK_REF_T(::UnityEngine::ComputeShader*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ComputeShader*, "UnityEngine", "ComputeShader");
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ComputeShader
class CORDL_TYPE ComputeShader : public ::UnityEngine::Object {
public:
// Declarations
 __declspec(property(get=get_keywordSpace)) ::UnityEngine::Rendering::LocalKeywordSpace  keywordSpace;

 __declspec(property(put=set_shaderKeywords)) ::ArrayW<::StringW>  shaderKeywords;

/// @brief Method DisableKeyword, addr 0x18227daf0, size 0x100, virtual false, abstract: false, final false
inline void DisableKeyword(::StringW  keyword) ;

/// @brief Method DisableKeyword, addr 0x18227dbf0, size 0x40, virtual false, abstract: false, final false
inline void DisableKeyword(::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method DisableKeyword_Injected, addr 0x18227dae0, size 0x10, virtual false, abstract: false, final false
static inline void DisableKeyword_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  keyword) ;

/// @brief Method DisableLocalKeyword, addr 0x18227dc40, size 0x30, virtual false, abstract: false, final false
inline void DisableLocalKeyword(::UnityEngine::Rendering::LocalKeyword  keyword) ;

/// @brief Method DisableLocalKeyword_Injected, addr 0x18227dc30, size 0x10, virtual false, abstract: false, final false
static inline void DisableLocalKeyword_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method Dispatch, addr 0x18227dc80, size 0x30, virtual false, abstract: false, final false
inline void Dispatch(int32_t  kernelIndex, int32_t  threadGroupsX, int32_t  threadGroupsY, int32_t  threadGroupsZ) ;

/// @brief Method Dispatch_Injected, addr 0x18227dc70, size 0x10, virtual false, abstract: false, final false
static inline void Dispatch_Injected(::System::IntPtr  _unity_self, int32_t  kernelIndex, int32_t  threadGroupsX, int32_t  threadGroupsY, int32_t  threadGroupsZ) ;

/// @brief Method EnableKeyword, addr 0x18227dcc0, size 0x100, virtual false, abstract: false, final false
inline void EnableKeyword(::StringW  keyword) ;

/// @brief Method EnableKeyword_Injected, addr 0x18227dcb0, size 0x10, virtual false, abstract: false, final false
static inline void EnableKeyword_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  keyword) ;

/// @brief Method FindKernel, addr 0x18227ddd0, size 0x110, virtual false, abstract: false, final false
inline int32_t FindKernel(::StringW  name) ;

/// @brief Method FindKernel_Injected, addr 0x18227ddc0, size 0x10, virtual false, abstract: false, final false
static inline int32_t FindKernel_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method GetKernelThreadGroupSizes, addr 0x18227def0, size 0x30, virtual false, abstract: false, final false
inline void GetKernelThreadGroupSizes(int32_t  kernelIndex, ::by_ref<uint32_t>  x, ::by_ref<uint32_t>  y, ::by_ref<uint32_t>  z) ;

/// @brief Method GetKernelThreadGroupSizes_Injected, addr 0x18227dee0, size 0x10, virtual false, abstract: false, final false
static inline void GetKernelThreadGroupSizes_Injected(::System::IntPtr  _unity_self, int32_t  kernelIndex, ::by_ref<uint32_t>  x, ::by_ref<uint32_t>  y, ::by_ref<uint32_t>  z) ;

/// @brief Method HasKernel, addr 0x18227df30, size 0x110, virtual false, abstract: false, final false
inline bool HasKernel(::StringW  name) ;

/// @brief Method HasKernel_Injected, addr 0x18227df20, size 0x10, virtual false, abstract: false, final false
static inline bool HasKernel_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method Internal_SetBuffer, addr 0x18227e050, size 0x60, virtual false, abstract: false, final false
inline void Internal_SetBuffer(int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer) ;

/// @brief Method Internal_SetBuffer_Injected, addr 0x18227e040, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SetBuffer_Injected(::System::IntPtr  _unity_self, int32_t  kernelIndex, int32_t  nameID, ::System::IntPtr  buffer) ;

/// @brief Method Internal_SetGraphicsBuffer, addr 0x18227e0c0, size 0x60, virtual false, abstract: false, final false
inline void Internal_SetGraphicsBuffer(int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer) ;

/// @brief Method Internal_SetGraphicsBuffer_Injected, addr 0x18227e0b0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SetGraphicsBuffer_Injected(::System::IntPtr  _unity_self, int32_t  kernelIndex, int32_t  nameID, ::System::IntPtr  buffer) ;

static inline ::UnityEngine::ComputeShader* New_ctor() ;

/// @brief Method SetBuffer, addr 0x18227e120, size 0x90, virtual false, abstract: false, final false
inline void SetBuffer(int32_t  kernelIndex, ::StringW  name, ::UnityEngine::ComputeBuffer*  buffer) ;

/// @brief Method SetBuffer, addr 0x18227e050, size 0x60, virtual false, abstract: false, final false
inline void SetBuffer(int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer) ;

/// @brief Method SetBuffer, addr 0x18227e0c0, size 0x60, virtual false, abstract: false, final false
inline void SetBuffer(int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer) ;

/// @brief Method SetConstantBuffer, addr 0x18227e210, size 0x60, virtual false, abstract: false, final false
inline void SetConstantBuffer(int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetConstantBuffer, addr 0x18227e1b0, size 0x60, virtual false, abstract: false, final false
inline void SetConstantBuffer(int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetConstantComputeBuffer, addr 0x18227e210, size 0x60, virtual false, abstract: false, final false
inline void SetConstantComputeBuffer(int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetConstantComputeBuffer_Injected, addr 0x18227e270, size 0x10, virtual false, abstract: false, final false
static inline void SetConstantComputeBuffer_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::System::IntPtr  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetConstantGraphicsBuffer, addr 0x18227e1b0, size 0x60, virtual false, abstract: false, final false
inline void SetConstantGraphicsBuffer(int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetConstantGraphicsBuffer_Injected, addr 0x18227e280, size 0x10, virtual false, abstract: false, final false
static inline void SetConstantGraphicsBuffer_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::System::IntPtr  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetFloat, addr 0x18227e330, size 0x30, virtual false, abstract: false, final false
inline void SetFloat(int32_t  nameID, float_t  val) ;

/// @brief Method SetFloatArray, addr 0x18227e2a0, size 0x80, virtual false, abstract: false, final false
inline void SetFloatArray(int32_t  nameID, ::ArrayW<float_t>  values) ;

/// @brief Method SetFloatArray_Injected, addr 0x18227e290, size 0x10, virtual false, abstract: false, final false
static inline void SetFloatArray_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values) ;

/// @brief Method SetFloat_Injected, addr 0x18227e320, size 0x10, virtual false, abstract: false, final false
static inline void SetFloat_Injected(::System::IntPtr  _unity_self, int32_t  nameID, float_t  val) ;

/// @brief Method SetFloats, addr 0x18227e2a0, size 0x80, virtual false, abstract: false, final false
inline void SetFloats(int32_t  nameID, ::ArrayW<float_t>  values) ;

/// @brief Method SetInt, addr 0x18227e430, size 0x50, virtual false, abstract: false, final false
inline void SetInt(::StringW  name, int32_t  val) ;

/// @brief Method SetInt, addr 0x18227e400, size 0x30, virtual false, abstract: false, final false
inline void SetInt(int32_t  nameID, int32_t  val) ;

/// @brief Method SetIntArray, addr 0x18227e370, size 0x80, virtual false, abstract: false, final false
inline void SetIntArray(int32_t  nameID, ::ArrayW<int32_t>  values) ;

/// @brief Method SetIntArray_Injected, addr 0x18227e360, size 0x10, virtual false, abstract: false, final false
static inline void SetIntArray_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values) ;

/// @brief Method SetInt_Injected, addr 0x18227e3f0, size 0x10, virtual false, abstract: false, final false
static inline void SetInt_Injected(::System::IntPtr  _unity_self, int32_t  nameID, int32_t  val) ;

/// @brief Method SetInts, addr 0x18227e370, size 0x80, virtual false, abstract: false, final false
inline void SetInts(int32_t  nameID, ::ArrayW<int32_t>  values) ;

/// @brief Method SetKeyword, addr 0x18227e480, size 0x40, virtual false, abstract: false, final false
inline void SetKeyword(::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword, bool  value) ;

/// @brief Method SetLocalKeyword, addr 0x18227e4d0, size 0x30, virtual false, abstract: false, final false
inline void SetLocalKeyword(::UnityEngine::Rendering::LocalKeyword  keyword, bool  value) ;

/// @brief Method SetLocalKeyword_Injected, addr 0x18227e4c0, size 0x10, virtual false, abstract: false, final false
static inline void SetLocalKeyword_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword, bool  value) ;

/// @brief Method SetMatrix, addr 0x18227e510, size 0x30, virtual false, abstract: false, final false
inline void SetMatrix(int32_t  nameID, ::UnityEngine::Matrix4x4  val) ;

/// @brief Method SetMatrix_Injected, addr 0x18227e500, size 0x10, virtual false, abstract: false, final false
static inline void SetMatrix_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::by_ref<::UnityEngine::Matrix4x4>  val) ;

/// @brief Method SetShaderKeywords, addr 0x18227e550, size 0x30, virtual false, abstract: false, final false
inline void SetShaderKeywords(::ArrayW<::StringW>  names) ;

/// @brief Method SetShaderKeywords_Injected, addr 0x18227e540, size 0x10, virtual false, abstract: false, final false
static inline void SetShaderKeywords_Injected(::System::IntPtr  _unity_self, ::ArrayW<::StringW>  names) ;

/// @brief Method SetTexture, addr 0x18227e660, size 0x90, virtual false, abstract: false, final false
inline void SetTexture(int32_t  kernelIndex, ::StringW  name, ::UnityEngine::Texture*  texture) ;

/// @brief Method SetTexture, addr 0x18227e5f0, size 0x70, virtual false, abstract: false, final false
inline void SetTexture(int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::Texture*  texture) ;

/// @brief Method SetTexture, addr 0x18227e590, size 0x60, virtual false, abstract: false, final false
inline void SetTexture(int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::Texture*  texture, int32_t  mipLevel) ;

/// @brief Method SetTexture_Injected, addr 0x18227e580, size 0x10, virtual false, abstract: false, final false
static inline void SetTexture_Injected(::System::IntPtr  _unity_self, int32_t  kernelIndex, int32_t  nameID, ::System::IntPtr  texture, int32_t  mipLevel) ;

/// @brief Method SetVector, addr 0x18227e790, size 0x60, virtual false, abstract: false, final false
inline void SetVector(::StringW  name, ::UnityEngine::Vector4  val) ;

/// @brief Method SetVector, addr 0x18227e7f0, size 0x30, virtual false, abstract: false, final false
inline void SetVector(int32_t  nameID, ::UnityEngine::Vector4  val) ;

/// @brief Method SetVectorArray, addr 0x18227e700, size 0x80, virtual false, abstract: false, final false
inline void SetVectorArray(int32_t  nameID, ::ArrayW<::UnityEngine::Vector4>  values) ;

/// @brief Method SetVectorArray_Injected, addr 0x18227e6f0, size 0x10, virtual false, abstract: false, final false
static inline void SetVectorArray_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values) ;

/// @brief Method SetVector_Injected, addr 0x18227e780, size 0x10, virtual false, abstract: false, final false
static inline void SetVector_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::by_ref<::UnityEngine::Vector4>  val) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_keywordSpace, addr 0x18227e830, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::LocalKeywordSpace get_keywordSpace() ;

/// @brief Method get_keywordSpace_Injected, addr 0x18227e820, size 0x10, virtual false, abstract: false, final false
static inline void get_keywordSpace_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeywordSpace>  ret) ;

/// @brief Method set_shaderKeywords, addr 0x18227e550, size 0x30, virtual false, abstract: false, final false
inline void set_shaderKeywords(::ArrayW<::StringW>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ComputeShader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ComputeShader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ComputeShader(ComputeShader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ComputeShader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ComputeShader(ComputeShader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10757};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ComputeShader) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine

#pragma once
// IWYU pragma private; include "UnityEngine/Material.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Material)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
struct LocalKeyword;
}
namespace UnityEngine::Rendering {
struct ShaderPropertyFlags;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
struct MaterialGlobalIlluminationFlags;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
class Material;
}
// Write type traits
MARK_REF_T(::UnityEngine::Material*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Material*, "UnityEngine", "Material");
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Material
class CORDL_TYPE Material : public ::UnityEngine::Object {
public:
// Declarations
 __declspec(property(get=get_color, put=set_color)) ::UnityEngine::Color  color;

 __declspec(property(get=get_enableInstancing, put=set_enableInstancing)) bool  enableInstancing;

 __declspec(property(put=set_enabledKeywords)) ::ArrayW<::UnityEngine::Rendering::LocalKeyword>  enabledKeywords;

 __declspec(property(put=set_globalIlluminationFlags)) ::UnityEngine::MaterialGlobalIlluminationFlags  globalIlluminationFlags;

/// @brief Field k_ColorId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_k_ColorId, put=setStaticF_k_ColorId)) int32_t  k_ColorId;

/// @brief Field k_MainTexId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_k_MainTexId, put=setStaticF_k_MainTexId)) int32_t  k_MainTexId;

 __declspec(property(get=get_mainTexture, put=set_mainTexture)) ::UnityW<::UnityEngine::Texture>  mainTexture;

 __declspec(property(get=get_passCount)) int32_t  passCount;

 __declspec(property(get=get_renderQueue, put=set_renderQueue)) int32_t  renderQueue;

 __declspec(property(get=get_shader, put=set_shader)) ::UnityW<::UnityEngine::Shader>  shader;

 __declspec(property(get=get_shaderKeywords, put=set_shaderKeywords)) ::ArrayW<::StringW>  shaderKeywords;

/// @brief Method ComputeCRC, addr 0x182253060, size 0x30, virtual false, abstract: false, final false
inline int32_t ComputeCRC() ;

/// @brief Method ComputeCRC_Injected, addr 0x182253050, size 0x10, virtual false, abstract: false, final false
static inline int32_t ComputeCRC_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method CopyMatchingPropertiesFromMaterial, addr 0x1822530a0, size 0x50, virtual false, abstract: false, final false
inline void CopyMatchingPropertiesFromMaterial(::UnityEngine::Material*  mat) ;

/// @brief Method CopyMatchingPropertiesFromMaterial_Injected, addr 0x182253090, size 0x10, virtual false, abstract: false, final false
static inline void CopyMatchingPropertiesFromMaterial_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  mat) ;

/// @brief Method CopyPropertiesFromMaterial, addr 0x182253100, size 0x50, virtual false, abstract: false, final false
inline void CopyPropertiesFromMaterial(::UnityEngine::Material*  mat) ;

/// @brief Method CopyPropertiesFromMaterial_Injected, addr 0x1822530f0, size 0x10, virtual false, abstract: false, final false
static inline void CopyPropertiesFromMaterial_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  mat) ;

/// @brief Method CreateWithMaterial, addr 0x182253160, size 0x60, virtual false, abstract: false, final false
static inline void CreateWithMaterial(::UnityEngine::Material*  self, ::UnityEngine::Material*  source) ;

/// @brief Method CreateWithMaterial_Injected, addr 0x182253150, size 0x10, virtual false, abstract: false, final false
static inline void CreateWithMaterial_Injected(::UnityEngine::Material*  self, ::System::IntPtr  source) ;

/// @brief Method CreateWithShader, addr 0x1822531d0, size 0x60, virtual false, abstract: false, final false
static inline void CreateWithShader(::UnityEngine::Material*  self, ::UnityEngine::Shader*  shader) ;

/// @brief Method CreateWithShader_Injected, addr 0x1822531c0, size 0x10, virtual false, abstract: false, final false
static inline void CreateWithShader_Injected(::UnityEngine::Material*  self, ::System::IntPtr  shader) ;

/// @brief Method DisableKeyword, addr 0x182253280, size 0x120, virtual false, abstract: false, final false
inline void DisableKeyword(::StringW  keyword) ;

/// @brief Method DisableKeyword, addr 0x182253240, size 0x40, virtual false, abstract: false, final false
inline void DisableKeyword(::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method DisableKeyword_Injected, addr 0x182253230, size 0x10, virtual false, abstract: false, final false
static inline void DisableKeyword_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  keyword) ;

/// @brief Method DisableLocalKeyword, addr 0x1822533b0, size 0x30, virtual false, abstract: false, final false
inline void DisableLocalKeyword(::UnityEngine::Rendering::LocalKeyword  keyword) ;

/// @brief Method DisableLocalKeyword_Injected, addr 0x1822533a0, size 0x10, virtual false, abstract: false, final false
static inline void DisableLocalKeyword_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method EnableKeyword, addr 0x182253430, size 0x120, virtual false, abstract: false, final false
inline void EnableKeyword(::StringW  keyword) ;

/// @brief Method EnableKeyword, addr 0x1822533f0, size 0x40, virtual false, abstract: false, final false
inline void EnableKeyword(::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method EnableKeyword_Injected, addr 0x1822533e0, size 0x10, virtual false, abstract: false, final false
static inline void EnableKeyword_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  keyword) ;

/// @brief Method EnableLocalKeyword, addr 0x182253560, size 0x30, virtual false, abstract: false, final false
inline void EnableLocalKeyword(::UnityEngine::Rendering::LocalKeyword  keyword) ;

/// @brief Method EnableLocalKeyword_Injected, addr 0x182253550, size 0x10, virtual false, abstract: false, final false
static inline void EnableLocalKeyword_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method FindPass, addr 0x1822535a0, size 0x130, virtual false, abstract: false, final false
inline int32_t FindPass(::StringW  passName) ;

/// @brief Method FindPass_Injected, addr 0x182253590, size 0x10, virtual false, abstract: false, final false
static inline int32_t FindPass_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  passName) ;

/// @brief Method GetColor, addr 0x182253730, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColor(::StringW  name) ;

/// @brief Method GetColor, addr 0x1822536e0, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColor(int32_t  nameID) ;

/// @brief Method GetColorImpl, addr 0x1822536e0, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColorImpl(int32_t  name) ;

/// @brief Method GetColorImpl_Injected, addr 0x1822536d0, size 0x10, virtual false, abstract: false, final false
static inline void GetColorImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method GetFirstPropertyNameIdByAttribute, addr 0x1822537a0, size 0x40, virtual false, abstract: false, final false
inline int32_t GetFirstPropertyNameIdByAttribute(::UnityEngine::Rendering::ShaderPropertyFlags  attributeFlag) ;

/// @brief Method GetFirstPropertyNameIdByAttribute_Injected, addr 0x182253790, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetFirstPropertyNameIdByAttribute_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::ShaderPropertyFlags  attributeFlag) ;

/// @brief Method GetFloat, addr 0x182253830, size 0x50, virtual false, abstract: false, final false
inline float_t GetFloat(::StringW  name) ;

/// @brief Method GetFloat, addr 0x1822537f0, size 0x40, virtual false, abstract: false, final false
inline float_t GetFloat(int32_t  nameID) ;

/// @brief Method GetFloatImpl, addr 0x1822537f0, size 0x40, virtual false, abstract: false, final false
inline float_t GetFloatImpl(int32_t  name) ;

/// @brief Method GetFloatImpl_Injected, addr 0x1822537e0, size 0x10, virtual false, abstract: false, final false
static inline float_t GetFloatImpl_Injected(::System::IntPtr  _unity_self, int32_t  name) ;

/// @brief Method GetInt, addr 0x1822538d0, size 0x50, virtual false, abstract: false, final false
inline int32_t GetInt(::StringW  name) ;

/// @brief Method GetIntImpl, addr 0x182253890, size 0x40, virtual false, abstract: false, final false
inline int32_t GetIntImpl(int32_t  name) ;

/// @brief Method GetIntImpl_Injected, addr 0x182253880, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetIntImpl_Injected(::System::IntPtr  _unity_self, int32_t  name) ;

/// @brief Method GetInteger, addr 0x182253890, size 0x40, virtual false, abstract: false, final false
inline int32_t GetInteger(int32_t  nameID) ;

/// @brief Method GetShaderKeywords, addr 0x182253930, size 0x30, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> GetShaderKeywords() ;

/// @brief Method GetShaderKeywords_Injected, addr 0x182253920, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetShaderKeywords_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetTag, addr 0x182253bc0, size 0x30, virtual false, abstract: false, final false
inline ::StringW GetTag(::StringW  tag, bool  searchFallbacks) ;

/// @brief Method GetTagImpl, addr 0x182253970, size 0x250, virtual false, abstract: false, final false
inline ::StringW GetTagImpl(::StringW  tag, bool  currentSubShaderOnly, ::StringW  defaultValue) ;

/// @brief Method GetTagImpl_Injected, addr 0x182253960, size 0x10, virtual false, abstract: false, final false
static inline void GetTagImpl_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  tag, bool  currentSubShaderOnly, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  defaultValue, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetTexture, addr 0x182253c40, size 0x60, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture> GetTexture(::StringW  name) ;

/// @brief Method GetTexture, addr 0x182253c00, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture> GetTexture(int32_t  nameID) ;

/// @brief Method GetTextureImpl, addr 0x182253c00, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture> GetTextureImpl(int32_t  name) ;

/// @brief Method GetTextureImpl_Injected, addr 0x182253bf0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetTextureImpl_Injected(::System::IntPtr  _unity_self, int32_t  name) ;

/// @brief Method GetVector, addr 0x182253ca0, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 GetVector(::StringW  name) ;

/// @brief Method GetVector, addr 0x182253d10, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 GetVector(int32_t  nameID) ;

/// @brief Method HasColor, addr 0x182253d70, size 0x40, virtual false, abstract: false, final false
inline bool HasColor(int32_t  nameID) ;

/// @brief Method HasFloat, addr 0x182253e00, size 0x50, virtual false, abstract: false, final false
inline bool HasFloat(::StringW  name) ;

/// @brief Method HasFloat, addr 0x182253dc0, size 0x40, virtual false, abstract: false, final false
inline bool HasFloat(int32_t  nameID) ;

/// @brief Method HasFloatImpl, addr 0x182253dc0, size 0x40, virtual false, abstract: false, final false
inline bool HasFloatImpl(int32_t  name) ;

/// @brief Method HasFloatImpl_Injected, addr 0x182253db0, size 0x10, virtual false, abstract: false, final false
static inline bool HasFloatImpl_Injected(::System::IntPtr  _unity_self, int32_t  name) ;

/// @brief Method HasProperty, addr 0x182253ea0, size 0x50, virtual false, abstract: false, final false
inline bool HasProperty(::StringW  name) ;

/// @brief Method HasProperty, addr 0x182253e60, size 0x40, virtual false, abstract: false, final false
inline bool HasProperty(int32_t  nameID) ;

/// @brief Method HasProperty_Injected, addr 0x182253e50, size 0x10, virtual false, abstract: false, final false
static inline bool HasProperty_Injected(::System::IntPtr  _unity_self, int32_t  nameID) ;

/// @brief Method HasTexture, addr 0x182253f40, size 0x50, virtual false, abstract: false, final false
inline bool HasTexture(::StringW  name) ;

/// @brief Method HasTextureImpl, addr 0x182253f00, size 0x40, virtual false, abstract: false, final false
inline bool HasTextureImpl(int32_t  name) ;

/// @brief Method HasTextureImpl_Injected, addr 0x182253ef0, size 0x10, virtual false, abstract: false, final false
static inline bool HasTextureImpl_Injected(::System::IntPtr  _unity_self, int32_t  name) ;

/// @brief Method HasVector, addr 0x182253d70, size 0x40, virtual false, abstract: false, final false
inline bool HasVector(int32_t  nameID) ;

/// @brief Method HasVectorImpl, addr 0x182253d70, size 0x40, virtual false, abstract: false, final false
inline bool HasVectorImpl(int32_t  name) ;

/// @brief Method HasVectorImpl_Injected, addr 0x182253f90, size 0x10, virtual false, abstract: false, final false
static inline bool HasVectorImpl_Injected(::System::IntPtr  _unity_self, int32_t  name) ;

/// @brief Method IsKeywordEnabled, addr 0x182253fb0, size 0x140, virtual false, abstract: false, final false
inline bool IsKeywordEnabled(::StringW  keyword) ;

/// @brief Method IsKeywordEnabled_Injected, addr 0x182253fa0, size 0x10, virtual false, abstract: false, final false
static inline bool IsKeywordEnabled_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  keyword) ;

static inline ::UnityEngine::Material* New_ctor(::StringW  contents) ;

static inline ::UnityEngine::Material* New_ctor(::UnityEngine::Shader*  shader) ;

static inline ::UnityEngine::Material* New_ctor(::UnityEngine::Material*  source) ;

/// @brief Method SetBuffer, addr 0x1822541c0, size 0x70, virtual false, abstract: false, final false
inline void SetBuffer(::StringW  name, ::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method SetBuffer, addr 0x182254230, size 0x70, virtual false, abstract: false, final false
inline void SetBuffer(::StringW  name, ::UnityEngine::GraphicsBuffer*  value) ;

/// @brief Method SetBuffer, addr 0x182254100, size 0x60, virtual false, abstract: false, final false
inline void SetBuffer(int32_t  nameID, ::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method SetBuffer, addr 0x182254160, size 0x60, virtual false, abstract: false, final false
inline void SetBuffer(int32_t  nameID, ::UnityEngine::GraphicsBuffer*  value) ;

/// @brief Method SetBufferImpl, addr 0x182254100, size 0x60, virtual false, abstract: false, final false
inline void SetBufferImpl(int32_t  name, ::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method SetBufferImpl_Injected, addr 0x1822540f0, size 0x10, virtual false, abstract: false, final false
static inline void SetBufferImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::System::IntPtr  value) ;

/// @brief Method SetColor, addr 0x182254330, size 0x60, virtual false, abstract: false, final false
inline void SetColor(::StringW  name, ::UnityEngine::Color  value) ;

/// @brief Method SetColor, addr 0x1822542f0, size 0x40, virtual false, abstract: false, final false
inline void SetColor(int32_t  nameID, ::UnityEngine::Color  value) ;

/// @brief Method SetColorImpl, addr 0x1822542b0, size 0x40, virtual false, abstract: false, final false
inline void SetColorImpl(int32_t  name, ::UnityEngine::Color  value) ;

/// @brief Method SetColorImpl_Injected, addr 0x1822542a0, size 0x10, virtual false, abstract: false, final false
static inline void SetColorImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::by_ref<::UnityEngine::Color>  value) ;

/// @brief Method SetConstantBuffer, addr 0x1822543a0, size 0x70, virtual false, abstract: false, final false
inline void SetConstantBuffer(int32_t  nameID, ::UnityEngine::ComputeBuffer*  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetConstantBuffer, addr 0x182254410, size 0x70, virtual false, abstract: false, final false
inline void SetConstantBuffer(int32_t  nameID, ::UnityEngine::GraphicsBuffer*  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetConstantBufferImpl, addr 0x1822543a0, size 0x70, virtual false, abstract: false, final false
inline void SetConstantBufferImpl(int32_t  name, ::UnityEngine::ComputeBuffer*  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetConstantBufferImpl_Injected, addr 0x182254390, size 0x10, virtual false, abstract: false, final false
static inline void SetConstantBufferImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::System::IntPtr  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetConstantGraphicsBufferImpl, addr 0x182254410, size 0x70, virtual false, abstract: false, final false
inline void SetConstantGraphicsBufferImpl(int32_t  name, ::UnityEngine::GraphicsBuffer*  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetConstantGraphicsBufferImpl_Injected, addr 0x182254480, size 0x10, virtual false, abstract: false, final false
static inline void SetConstantGraphicsBufferImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::System::IntPtr  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetEnabledKeywords, addr 0x1822544a0, size 0x30, virtual false, abstract: false, final false
inline void SetEnabledKeywords(::ArrayW<::UnityEngine::Rendering::LocalKeyword>  keywords) ;

/// @brief Method SetEnabledKeywords_Injected, addr 0x182254490, size 0x10, virtual false, abstract: false, final false
static inline void SetEnabledKeywords_Injected(::System::IntPtr  _unity_self, ::ArrayW<::UnityEngine::Rendering::LocalKeyword>  keywords) ;

/// @brief Method SetFloat, addr 0x182254740, size 0x60, virtual false, abstract: false, final false
inline void SetFloat(::StringW  name, float_t  value) ;

/// @brief Method SetFloat, addr 0x182254700, size 0x40, virtual false, abstract: false, final false
inline void SetFloat(int32_t  nameID, float_t  value) ;

/// @brief Method SetFloatArray, addr 0x1822545b0, size 0x50, virtual false, abstract: false, final false
inline void SetFloatArray(::StringW  name, ::ArrayW<float_t>  values) ;

/// @brief Method SetFloatArray, addr 0x182254600, size 0xf0, virtual false, abstract: false, final false
inline void SetFloatArray(int32_t  name, ::ArrayW<float_t>  values, int32_t  count) ;

/// @brief Method SetFloatArray, addr 0x182254590, size 0x20, virtual false, abstract: false, final false
inline void SetFloatArray(int32_t  nameID, ::ArrayW<float_t>  values) ;

/// @brief Method SetFloatArrayImpl, addr 0x1822544e0, size 0xb0, virtual false, abstract: false, final false
inline void SetFloatArrayImpl(int32_t  name, ::ArrayW<float_t>  values, int32_t  count) ;

/// @brief Method SetFloatArrayImpl_Injected, addr 0x1822544d0, size 0x10, virtual false, abstract: false, final false
static inline void SetFloatArrayImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values, int32_t  count) ;

/// @brief Method SetFloatImpl, addr 0x182254700, size 0x40, virtual false, abstract: false, final false
inline void SetFloatImpl(int32_t  name, float_t  value) ;

/// @brief Method SetFloatImpl_Injected, addr 0x1822546f0, size 0x10, virtual false, abstract: false, final false
static inline void SetFloatImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, float_t  value) ;

/// @brief Method SetGraphicsBufferImpl, addr 0x182254160, size 0x60, virtual false, abstract: false, final false
inline void SetGraphicsBufferImpl(int32_t  name, ::UnityEngine::GraphicsBuffer*  value) ;

/// @brief Method SetGraphicsBufferImpl_Injected, addr 0x1822547a0, size 0x10, virtual false, abstract: false, final false
static inline void SetGraphicsBufferImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::System::IntPtr  value) ;

/// @brief Method SetInt, addr 0x182254800, size 0x60, virtual false, abstract: false, final false
inline void SetInt(::StringW  name, int32_t  value) ;

/// @brief Method SetInt, addr 0x182254860, size 0x50, virtual false, abstract: false, final false
inline void SetInt(int32_t  nameID, int32_t  value) ;

/// @brief Method SetIntImpl, addr 0x1822547c0, size 0x40, virtual false, abstract: false, final false
inline void SetIntImpl(int32_t  name, int32_t  value) ;

/// @brief Method SetIntImpl_Injected, addr 0x1822547b0, size 0x10, virtual false, abstract: false, final false
static inline void SetIntImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, int32_t  value) ;

/// @brief Method SetInteger, addr 0x1822547c0, size 0x40, virtual false, abstract: false, final false
inline void SetInteger(int32_t  nameID, int32_t  value) ;

/// @brief Method SetKeyword, addr 0x1822548b0, size 0x50, virtual false, abstract: false, final false
inline void SetKeyword(::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword, bool  value) ;

/// @brief Method SetLocalKeyword, addr 0x182254910, size 0x50, virtual false, abstract: false, final false
inline void SetLocalKeyword(::UnityEngine::Rendering::LocalKeyword  keyword, bool  value) ;

/// @brief Method SetLocalKeyword_Injected, addr 0x182254900, size 0x10, virtual false, abstract: false, final false
static inline void SetLocalKeyword_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword, bool  value) ;

/// @brief Method SetMatrix, addr 0x182254c10, size 0x80, virtual false, abstract: false, final false
inline void SetMatrix(::StringW  name, ::UnityEngine::Matrix4x4  value) ;

/// @brief Method SetMatrix, addr 0x182254c90, size 0x60, virtual false, abstract: false, final false
inline void SetMatrix(int32_t  nameID, ::UnityEngine::Matrix4x4  value) ;

/// @brief Method SetMatrixArray, addr 0x182254a20, size 0xf0, virtual false, abstract: false, final false
inline void SetMatrixArray(int32_t  name, ::ArrayW<::UnityEngine::Matrix4x4>  values, int32_t  count) ;

/// @brief Method SetMatrixArray, addr 0x182254b10, size 0xb0, virtual false, abstract: false, final false
inline void SetMatrixArray(int32_t  nameID, ::ArrayW<::UnityEngine::Matrix4x4>  values) ;

/// @brief Method SetMatrixArrayImpl, addr 0x182254970, size 0xb0, virtual false, abstract: false, final false
inline void SetMatrixArrayImpl(int32_t  name, ::ArrayW<::UnityEngine::Matrix4x4>  values, int32_t  count) ;

/// @brief Method SetMatrixArrayImpl_Injected, addr 0x182254960, size 0x10, virtual false, abstract: false, final false
static inline void SetMatrixArrayImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values, int32_t  count) ;

/// @brief Method SetMatrixImpl, addr 0x182254bd0, size 0x40, virtual false, abstract: false, final false
inline void SetMatrixImpl(int32_t  name, ::UnityEngine::Matrix4x4  value) ;

/// @brief Method SetMatrixImpl_Injected, addr 0x182254bc0, size 0x10, virtual false, abstract: false, final false
static inline void SetMatrixImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::by_ref<::UnityEngine::Matrix4x4>  value) ;

/// @brief Method SetOverrideTag, addr 0x182254d00, size 0x1f0, virtual false, abstract: false, final false
inline void SetOverrideTag(::StringW  tag, ::StringW  val) ;

/// @brief Method SetOverrideTag_Injected, addr 0x182254cf0, size 0x10, virtual false, abstract: false, final false
static inline void SetOverrideTag_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  tag, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  val) ;

/// @brief Method SetPass, addr 0x182254f00, size 0x40, virtual false, abstract: false, final false
inline bool SetPass(int32_t  pass) ;

/// @brief Method SetPass_Injected, addr 0x182254ef0, size 0x10, virtual false, abstract: false, final false
static inline bool SetPass_Injected(::System::IntPtr  _unity_self, int32_t  pass) ;

/// @brief Method SetShaderKeywords, addr 0x182254f50, size 0x30, virtual false, abstract: false, final false
inline void SetShaderKeywords(::ArrayW<::StringW>  names) ;

/// @brief Method SetShaderKeywords_Injected, addr 0x182254f40, size 0x10, virtual false, abstract: false, final false
static inline void SetShaderKeywords_Injected(::System::IntPtr  _unity_self, ::ArrayW<::StringW>  names) ;

/// @brief Method SetShaderPassEnabled, addr 0x182254f90, size 0x130, virtual false, abstract: false, final false
inline void SetShaderPassEnabled(::StringW  passName, bool  enabled) ;

/// @brief Method SetShaderPassEnabled_Injected, addr 0x182254f80, size 0x10, virtual false, abstract: false, final false
static inline void SetShaderPassEnabled_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  passName, bool  enabled) ;

/// @brief Method SetTexture, addr 0x182255310, size 0x70, virtual false, abstract: false, final false
inline void SetTexture(::StringW  name, ::UnityEngine::Texture*  value) ;

/// @brief Method SetTexture, addr 0x1822550d0, size 0x60, virtual false, abstract: false, final false
inline void SetTexture(int32_t  nameID, ::UnityEngine::Texture*  value) ;

/// @brief Method SetTextureImpl, addr 0x1822550d0, size 0x60, virtual false, abstract: false, final false
inline void SetTextureImpl(int32_t  name, ::UnityEngine::Texture*  value) ;

/// @brief Method SetTextureImpl_Injected, addr 0x1822550c0, size 0x10, virtual false, abstract: false, final false
static inline void SetTextureImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::System::IntPtr  value) ;

/// @brief Method SetTextureOffset, addr 0x182255180, size 0x60, virtual false, abstract: false, final false
inline void SetTextureOffset(::StringW  name, ::UnityEngine::Vector2  value) ;

/// @brief Method SetTextureOffset, addr 0x1822551e0, size 0x40, virtual false, abstract: false, final false
inline void SetTextureOffset(int32_t  nameID, ::UnityEngine::Vector2  value) ;

/// @brief Method SetTextureOffsetImpl, addr 0x182255140, size 0x40, virtual false, abstract: false, final false
inline void SetTextureOffsetImpl(int32_t  name, ::UnityEngine::Vector2  offset) ;

/// @brief Method SetTextureOffsetImpl_Injected, addr 0x182255130, size 0x10, virtual false, abstract: false, final false
static inline void SetTextureOffsetImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::by_ref<::UnityEngine::Vector2>  offset) ;

/// @brief Method SetTextureScale, addr 0x182255270, size 0x60, virtual false, abstract: false, final false
inline void SetTextureScale(::StringW  name, ::UnityEngine::Vector2  value) ;

/// @brief Method SetTextureScale, addr 0x1822552d0, size 0x40, virtual false, abstract: false, final false
inline void SetTextureScale(int32_t  nameID, ::UnityEngine::Vector2  value) ;

/// @brief Method SetTextureScaleImpl, addr 0x182255230, size 0x40, virtual false, abstract: false, final false
inline void SetTextureScaleImpl(int32_t  name, ::UnityEngine::Vector2  scale) ;

/// @brief Method SetTextureScaleImpl_Injected, addr 0x182255220, size 0x10, virtual false, abstract: false, final false
static inline void SetTextureScaleImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::by_ref<::UnityEngine::Vector2>  scale) ;

/// @brief Method SetVector, addr 0x182255610, size 0x90, virtual false, abstract: false, final false
inline void SetVector(::StringW  name, ::UnityEngine::Vector4  value) ;

/// @brief Method SetVector, addr 0x1822555a0, size 0x70, virtual false, abstract: false, final false
inline void SetVector(int32_t  nameID, ::UnityEngine::Vector4  value) ;

/// @brief Method SetVectorArray, addr 0x182255550, size 0x50, virtual false, abstract: false, final false
inline void SetVectorArray(::StringW  name, ::ArrayW<::UnityEngine::Vector4>  values) ;

/// @brief Method SetVectorArray, addr 0x182255440, size 0xf0, virtual false, abstract: false, final false
inline void SetVectorArray(int32_t  name, ::ArrayW<::UnityEngine::Vector4>  values, int32_t  count) ;

/// @brief Method SetVectorArray, addr 0x182255530, size 0x20, virtual false, abstract: false, final false
inline void SetVectorArray(int32_t  nameID, ::ArrayW<::UnityEngine::Vector4>  values) ;

/// @brief Method SetVectorArrayImpl, addr 0x182255390, size 0xb0, virtual false, abstract: false, final false
inline void SetVectorArrayImpl(int32_t  name, ::ArrayW<::UnityEngine::Vector4>  values, int32_t  count) ;

/// @brief Method SetVectorArrayImpl_Injected, addr 0x182255380, size 0x10, virtual false, abstract: false, final false
static inline void SetVectorArrayImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values, int32_t  count) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::StringW  contents) ;

/// @brief Method .ctor, addr 0x1822531d0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Shader*  shader) ;

/// @brief Method .ctor, addr 0x182253160, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Material*  source) ;

static inline int32_t getStaticF_k_ColorId() ;

static inline int32_t getStaticF_k_MainTexId() ;

/// @brief Method get_color, addr 0x1822556f0, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_color() ;

/// @brief Method get_enableInstancing, addr 0x1822557a0, size 0x30, virtual false, abstract: false, final false
inline bool get_enableInstancing() ;

/// @brief Method get_enableInstancing_Injected, addr 0x182255790, size 0x10, virtual false, abstract: false, final false
static inline bool get_enableInstancing_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_mainTexture, addr 0x1822557d0, size 0x80, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture> get_mainTexture() ;

/// @brief Method get_passCount, addr 0x182255860, size 0x30, virtual false, abstract: false, final false
inline int32_t get_passCount() ;

/// @brief Method get_passCount_Injected, addr 0x182255850, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_passCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_renderQueue, addr 0x1822558a0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_renderQueue() ;

/// @brief Method get_renderQueue_Injected, addr 0x182255890, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_renderQueue_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_shader, addr 0x1822558e0, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Shader> get_shader() ;

/// @brief Method get_shaderKeywords, addr 0x182253930, size 0x30, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> get_shaderKeywords() ;

/// @brief Method get_shader_Injected, addr 0x1822558d0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_shader_Injected(::System::IntPtr  _unity_self) ;

static inline void setStaticF_k_ColorId(int32_t  value) ;

static inline void setStaticF_k_MainTexId(int32_t  value) ;

/// @brief Method set_color, addr 0x182255920, size 0x90, virtual false, abstract: false, final false
inline void set_color(::UnityEngine::Color  value) ;

/// @brief Method set_enableInstancing, addr 0x1822559c0, size 0x30, virtual false, abstract: false, final false
inline void set_enableInstancing(bool  value) ;

/// @brief Method set_enableInstancing_Injected, addr 0x1822559b0, size 0x10, virtual false, abstract: false, final false
static inline void set_enableInstancing_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_enabledKeywords, addr 0x1822544a0, size 0x30, virtual false, abstract: false, final false
inline void set_enabledKeywords(::ArrayW<::UnityEngine::Rendering::LocalKeyword>  value) ;

/// @brief Method set_globalIlluminationFlags, addr 0x182255a00, size 0x30, virtual false, abstract: false, final false
inline void set_globalIlluminationFlags(::UnityEngine::MaterialGlobalIlluminationFlags  value) ;

/// @brief Method set_globalIlluminationFlags_Injected, addr 0x1822559f0, size 0x10, virtual false, abstract: false, final false
static inline void set_globalIlluminationFlags_Injected(::System::IntPtr  _unity_self, ::UnityEngine::MaterialGlobalIlluminationFlags  value) ;

/// @brief Method set_mainTexture, addr 0x182255a30, size 0xa0, virtual false, abstract: false, final false
inline void set_mainTexture(::UnityEngine::Texture*  value) ;

/// @brief Method set_renderQueue, addr 0x182255ae0, size 0x30, virtual false, abstract: false, final false
inline void set_renderQueue(int32_t  value) ;

/// @brief Method set_renderQueue_Injected, addr 0x182255ad0, size 0x10, virtual false, abstract: false, final false
static inline void set_renderQueue_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_shader, addr 0x182255b20, size 0x50, virtual false, abstract: false, final false
inline void set_shader(::UnityEngine::Shader*  value) ;

/// @brief Method set_shaderKeywords, addr 0x182254f50, size 0x30, virtual false, abstract: false, final false
inline void set_shaderKeywords(::ArrayW<::StringW>  value) ;

/// @brief Method set_shader_Injected, addr 0x182255b10, size 0x10, virtual false, abstract: false, final false
static inline void set_shader_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Material() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Material", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Material(Material && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Material", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Material(Material const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10517};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Material) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine

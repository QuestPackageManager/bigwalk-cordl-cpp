#pragma once
// IWYU pragma private; include "UnityEngine/Shader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Shader)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
struct LocalKeywordSpace;
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
class Shader;
}
// Write type traits
MARK_REF_T(::UnityEngine::Shader*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Shader*, "UnityEngine", "Shader");
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Shader
class CORDL_TYPE Shader : public ::UnityEngine::Object {
public:
// Declarations
 __declspec(property(get=get_isSupported)) bool  isSupported;

 __declspec(property(get=get_keywordSpace)) ::UnityEngine::Rendering::LocalKeywordSpace  keywordSpace;

 __declspec(property(get=get_passCount)) int32_t  passCount;

/// @brief Method DisableKeyword, addr 0x18225c2b0, size 0xf0, virtual false, abstract: false, final false
static inline void DisableKeyword(::StringW  keyword) ;

/// @brief Method DisableKeyword_Injected, addr 0x18225c2a0, size 0x10, virtual false, abstract: false, final false
static inline void DisableKeyword_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  keyword) ;

/// @brief Method EnableKeyword, addr 0x18225c3b0, size 0xf0, virtual false, abstract: false, final false
static inline void EnableKeyword(::StringW  keyword) ;

/// @brief Method EnableKeyword_Injected, addr 0x18225c3a0, size 0x10, virtual false, abstract: false, final false
static inline void EnableKeyword_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  keyword) ;

/// @brief Method Find, addr 0x18225c4a0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Shader> Find(::StringW  name) ;

/// @brief Method GetDependency, addr 0x18225c4e0, size 0x160, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Shader> GetDependency(::StringW  name) ;

/// @brief Method GetDependency_Injected, addr 0x18225c4d0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetDependency_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method GetGlobalFloat, addr 0x18225c640, size 0x10, virtual false, abstract: false, final false
static inline float_t GetGlobalFloat(int32_t  nameID) ;

/// @brief Method GetGlobalFloatImpl, addr 0x18225c640, size 0x10, virtual false, abstract: false, final false
static inline float_t GetGlobalFloatImpl(int32_t  name) ;

/// @brief Method GetGlobalMatrix, addr 0x18225c6a0, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 GetGlobalMatrix(::StringW  name) ;

/// @brief Method GetGlobalMatrixImpl, addr 0x18225c660, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 GetGlobalMatrixImpl(int32_t  name) ;

/// @brief Method GetGlobalMatrixImpl_Injected, addr 0x18225c650, size 0x10, virtual false, abstract: false, final false
static inline void GetGlobalMatrixImpl_Injected(int32_t  name, ::by_ref<::UnityEngine::Matrix4x4>  ret) ;

/// @brief Method GetGlobalTexture, addr 0x18225c710, size 0x30, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture> GetGlobalTexture(::StringW  name) ;

/// @brief Method GetGlobalTexture, addr 0x18225c6f0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture> GetGlobalTexture(int32_t  nameID) ;

/// @brief Method GetGlobalTextureImpl, addr 0x18225c6f0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture> GetGlobalTextureImpl(int32_t  name) ;

/// @brief Method GetGlobalTextureImpl_Injected, addr 0x18225c6e0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetGlobalTextureImpl_Injected(int32_t  name) ;

/// @brief Method GetGlobalVector, addr 0x18225c780, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 GetGlobalVector(::StringW  name) ;

/// @brief Method GetGlobalVectorImpl, addr 0x18225c750, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 GetGlobalVectorImpl(int32_t  name) ;

/// @brief Method GetGlobalVectorImpl_Injected, addr 0x18225c740, size 0x10, virtual false, abstract: false, final false
static inline void GetGlobalVectorImpl_Injected(int32_t  name, ::by_ref<::UnityEngine::Vector4>  ret) ;

static inline ::UnityEngine::Shader* New_ctor() ;

/// @brief Method PropertyToID, addr 0x18225c7c0, size 0x110, virtual false, abstract: false, final false
static inline int32_t PropertyToID(::StringW  name) ;

/// @brief Method PropertyToID_Injected, addr 0x18225c7b0, size 0x10, virtual false, abstract: false, final false
static inline int32_t PropertyToID_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method SetGlobalBuffer, addr 0x18225c900, size 0x40, virtual false, abstract: false, final false
static inline void SetGlobalBuffer(::StringW  name, ::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method SetGlobalBuffer, addr 0x18225c8e0, size 0x20, virtual false, abstract: false, final false
static inline void SetGlobalBuffer(int32_t  nameID, ::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method SetGlobalBufferImpl, addr 0x18225c8e0, size 0x20, virtual false, abstract: false, final false
static inline void SetGlobalBufferImpl(int32_t  name, ::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method SetGlobalBufferImpl_Injected, addr 0x18225c8d0, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalBufferImpl_Injected(int32_t  name, ::System::IntPtr  value) ;

/// @brief Method SetGlobalColor, addr 0x18225c990, size 0x50, virtual false, abstract: false, final false
static inline void SetGlobalColor(::StringW  name, ::UnityEngine::Color  value) ;

/// @brief Method SetGlobalColor, addr 0x18225c940, size 0x50, virtual false, abstract: false, final false
static inline void SetGlobalColor(int32_t  nameID, ::UnityEngine::Color  value) ;

/// @brief Method SetGlobalConstantBuffer, addr 0x18225c9f0, size 0x20, virtual false, abstract: false, final false
static inline void SetGlobalConstantBuffer(int32_t  nameID, ::UnityEngine::ComputeBuffer*  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantBuffer, addr 0x18225ca10, size 0x20, virtual false, abstract: false, final false
static inline void SetGlobalConstantBuffer(int32_t  nameID, ::UnityEngine::GraphicsBuffer*  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantBufferImpl, addr 0x18225c9f0, size 0x20, virtual false, abstract: false, final false
static inline void SetGlobalConstantBufferImpl(int32_t  name, ::UnityEngine::ComputeBuffer*  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantBufferImpl_Injected, addr 0x18225c9e0, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalConstantBufferImpl_Injected(int32_t  name, ::System::IntPtr  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantGraphicsBufferImpl, addr 0x18225ca10, size 0x20, virtual false, abstract: false, final false
static inline void SetGlobalConstantGraphicsBufferImpl(int32_t  name, ::UnityEngine::GraphicsBuffer*  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantGraphicsBufferImpl_Injected, addr 0x18225ca30, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalConstantGraphicsBufferImpl_Injected(int32_t  name, ::System::IntPtr  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalFloat, addr 0x18225cc40, size 0x30, virtual false, abstract: false, final false
static inline void SetGlobalFloat(::StringW  name, float_t  value) ;

/// @brief Method SetGlobalFloat, addr 0x18225cc30, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalFloat(int32_t  nameID, float_t  value) ;

/// @brief Method SetGlobalFloatArray, addr 0x18225cad0, size 0xa0, virtual false, abstract: false, final false
static inline void SetGlobalFloatArray(::StringW  name, ::ArrayW<float_t>  values) ;

/// @brief Method SetGlobalFloatArray, addr 0x18225cb70, size 0xc0, virtual false, abstract: false, final false
static inline void SetGlobalFloatArray(int32_t  name, ::ArrayW<float_t>  values, int32_t  count) ;

/// @brief Method SetGlobalFloatArrayImpl, addr 0x18225ca50, size 0x80, virtual false, abstract: false, final false
static inline void SetGlobalFloatArrayImpl(int32_t  name, ::ArrayW<float_t>  values, int32_t  count) ;

/// @brief Method SetGlobalFloatArrayImpl_Injected, addr 0x18225ca40, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalFloatArrayImpl_Injected(int32_t  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values, int32_t  count) ;

/// @brief Method SetGlobalFloatImpl, addr 0x18225cc30, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalFloatImpl(int32_t  name, float_t  value) ;

/// @brief Method SetGlobalIntImpl, addr 0x18225cc70, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalIntImpl(int32_t  name, int32_t  value) ;

/// @brief Method SetGlobalInteger, addr 0x18225cc70, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalInteger(int32_t  nameID, int32_t  value) ;

/// @brief Method SetGlobalMatrix, addr 0x18225ce70, size 0x50, virtual false, abstract: false, final false
static inline void SetGlobalMatrix(::StringW  name, ::UnityEngine::Matrix4x4  value) ;

/// @brief Method SetGlobalMatrix, addr 0x18225cec0, size 0x40, virtual false, abstract: false, final false
static inline void SetGlobalMatrix(int32_t  nameID, ::UnityEngine::Matrix4x4  value) ;

/// @brief Method SetGlobalMatrixArray, addr 0x18225cd90, size 0xc0, virtual false, abstract: false, final false
static inline void SetGlobalMatrixArray(int32_t  name, ::ArrayW<::UnityEngine::Matrix4x4>  values, int32_t  count) ;

/// @brief Method SetGlobalMatrixArray, addr 0x18225cd10, size 0x80, virtual false, abstract: false, final false
static inline void SetGlobalMatrixArray(int32_t  nameID, ::ArrayW<::UnityEngine::Matrix4x4>  values) ;

/// @brief Method SetGlobalMatrixArrayImpl, addr 0x18225cc90, size 0x80, virtual false, abstract: false, final false
static inline void SetGlobalMatrixArrayImpl(int32_t  name, ::ArrayW<::UnityEngine::Matrix4x4>  values, int32_t  count) ;

/// @brief Method SetGlobalMatrixArrayImpl_Injected, addr 0x18225cc80, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalMatrixArrayImpl_Injected(int32_t  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values, int32_t  count) ;

/// @brief Method SetGlobalMatrixImpl, addr 0x18225ce60, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalMatrixImpl(int32_t  name, ::UnityEngine::Matrix4x4  value) ;

/// @brief Method SetGlobalMatrixImpl_Injected, addr 0x18225ce50, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalMatrixImpl_Injected(int32_t  name, ::by_ref<::UnityEngine::Matrix4x4>  value) ;

/// @brief Method SetGlobalTexture, addr 0x18225cf30, size 0x40, virtual false, abstract: false, final false
static inline void SetGlobalTexture(::StringW  name, ::UnityEngine::Texture*  value) ;

/// @brief Method SetGlobalTexture, addr 0x18225cf10, size 0x20, virtual false, abstract: false, final false
static inline void SetGlobalTexture(int32_t  nameID, ::UnityEngine::Texture*  value) ;

/// @brief Method SetGlobalTextureImpl, addr 0x18225cf10, size 0x20, virtual false, abstract: false, final false
static inline void SetGlobalTextureImpl(int32_t  name, ::UnityEngine::Texture*  value) ;

/// @brief Method SetGlobalTextureImpl_Injected, addr 0x18225cf00, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalTextureImpl_Injected(int32_t  name, ::System::IntPtr  value) ;

/// @brief Method SetGlobalVector, addr 0x18225d160, size 0x30, virtual false, abstract: false, final false
static inline void SetGlobalVector(::StringW  name, ::UnityEngine::Vector4  value) ;

/// @brief Method SetGlobalVector, addr 0x18225d190, size 0x20, virtual false, abstract: false, final false
static inline void SetGlobalVector(int32_t  nameID, ::UnityEngine::Vector4  value) ;

/// @brief Method SetGlobalVectorArray, addr 0x18225d000, size 0xc0, virtual false, abstract: false, final false
static inline void SetGlobalVectorArray(int32_t  name, ::ArrayW<::UnityEngine::Vector4>  values, int32_t  count) ;

/// @brief Method SetGlobalVectorArray, addr 0x18225d0c0, size 0x80, virtual false, abstract: false, final false
static inline void SetGlobalVectorArray(int32_t  nameID, ::ArrayW<::UnityEngine::Vector4>  values) ;

/// @brief Method SetGlobalVectorArrayImpl, addr 0x18225cf80, size 0x80, virtual false, abstract: false, final false
static inline void SetGlobalVectorArrayImpl(int32_t  name, ::ArrayW<::UnityEngine::Vector4>  values, int32_t  count) ;

/// @brief Method SetGlobalVectorArrayImpl_Injected, addr 0x18225cf70, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalVectorArrayImpl_Injected(int32_t  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values, int32_t  count) ;

/// @brief Method SetGlobalVectorImpl, addr 0x18225d150, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalVectorImpl(int32_t  name, ::UnityEngine::Vector4  value) ;

/// @brief Method SetGlobalVectorImpl_Injected, addr 0x18225d140, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalVectorImpl_Injected(int32_t  name, ::by_ref<::UnityEngine::Vector4>  value) ;

/// @brief Method TagToID, addr 0x18225d1c0, size 0x110, virtual false, abstract: false, final false
static inline int32_t TagToID(::StringW  name) ;

/// @brief Method TagToID_Injected, addr 0x18225d1b0, size 0x10, virtual false, abstract: false, final false
static inline int32_t TagToID_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_globalRenderPipeline, addr 0x18225d2e0, size 0x90, virtual false, abstract: false, final false
static inline ::StringW get_globalRenderPipeline() ;

/// @brief Method get_globalRenderPipeline_Injected, addr 0x18225d2d0, size 0x10, virtual false, abstract: false, final false
static inline void get_globalRenderPipeline_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method get_isSupported, addr 0x18225d380, size 0x30, virtual false, abstract: false, final false
inline bool get_isSupported() ;

/// @brief Method get_isSupported_Injected, addr 0x18225d370, size 0x10, virtual false, abstract: false, final false
static inline bool get_isSupported_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_keywordSpace, addr 0x18225d3c0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::LocalKeywordSpace get_keywordSpace() ;

/// @brief Method get_keywordSpace_Injected, addr 0x18225d3b0, size 0x10, virtual false, abstract: false, final false
static inline void get_keywordSpace_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeywordSpace>  ret) ;

/// @brief Method get_passCount, addr 0x18225d410, size 0x30, virtual false, abstract: false, final false
inline int32_t get_passCount() ;

/// @brief Method get_passCount_Injected, addr 0x18225d400, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_passCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_globalRenderPipeline, addr 0x18225d450, size 0xf0, virtual false, abstract: false, final false
static inline void set_globalRenderPipeline(::StringW  value) ;

/// @brief Method set_globalRenderPipeline_Injected, addr 0x18225d440, size 0x10, virtual false, abstract: false, final false
static inline void set_globalRenderPipeline_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Shader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Shader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Shader(Shader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Shader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Shader(Shader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10516};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Shader) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine

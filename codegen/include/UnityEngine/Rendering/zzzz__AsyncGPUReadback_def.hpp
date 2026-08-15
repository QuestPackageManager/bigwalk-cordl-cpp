#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/AsyncGPUReadback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncGPUReadback)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Rendering {
struct AsyncGPUReadbackRequest;
}
namespace UnityEngine::Rendering {
struct AsyncRequestNativeArrayData;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class AsyncGPUReadback;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::AsyncGPUReadback*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::AsyncGPUReadback*, "UnityEngine.Rendering", "AsyncGPUReadback");
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.AsyncGPUReadback
class CORDL_TYPE AsyncGPUReadback : public ::System::Object {
public:
// Declarations
/// @brief Method Request, addr 0x18227d190, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest Request(::UnityEngine::ComputeBuffer*  src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method Request, addr 0x18227cfb0, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest Request(::UnityEngine::GraphicsBuffer*  src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method Request, addr 0x18227d030, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest Request(::UnityEngine::GraphicsBuffer*  src, int32_t  size, int32_t  offset, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method Request, addr 0x18227d0c0, size 0xd0, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest Request(::UnityEngine::Texture*  src, int32_t  mipIndex, int32_t  x, int32_t  width, int32_t  y, int32_t  height, int32_t  z, int32_t  depth, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest RequestIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::GraphicsBuffer*  src, int32_t  size, int32_t  offset, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest RequestIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::Texture*  src, int32_t  mipIndex, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method Request_Internal_ComputeBuffer_1, addr 0x18227cd20, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest Request_Internal_ComputeBuffer_1(::UnityEngine::ComputeBuffer*  buffer, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  data) ;

/// @brief Method Request_Internal_ComputeBuffer_1_Injected, addr 0x18227cd10, size 0x10, virtual false, abstract: false, final false
static inline void Request_Internal_ComputeBuffer_1_Injected(::System::IntPtr  buffer, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  data, ::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>  ret) ;

/// @brief Method Request_Internal_GraphicsBuffer_1, addr 0x18227cd90, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest Request_Internal_GraphicsBuffer_1(::UnityEngine::GraphicsBuffer*  buffer, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  data) ;

/// @brief Method Request_Internal_GraphicsBuffer_1_Injected, addr 0x18227cd80, size 0x10, virtual false, abstract: false, final false
static inline void Request_Internal_GraphicsBuffer_1_Injected(::System::IntPtr  buffer, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  data, ::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>  ret) ;

/// @brief Method Request_Internal_GraphicsBuffer_2, addr 0x18227ce00, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest Request_Internal_GraphicsBuffer_2(::UnityEngine::GraphicsBuffer*  src, int32_t  size, int32_t  offset, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  data) ;

/// @brief Method Request_Internal_GraphicsBuffer_2_Injected, addr 0x18227cdf0, size 0x10, virtual false, abstract: false, final false
static inline void Request_Internal_GraphicsBuffer_2_Injected(::System::IntPtr  src, int32_t  size, int32_t  offset, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  data, ::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>  ret) ;

/// @brief Method Request_Internal_Texture_1, addr 0x18227ce80, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest Request_Internal_Texture_1(::UnityEngine::Texture*  src, int32_t  mipIndex, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  data) ;

/// @brief Method Request_Internal_Texture_1_Injected, addr 0x18227ce70, size 0x10, virtual false, abstract: false, final false
static inline void Request_Internal_Texture_1_Injected(::System::IntPtr  src, int32_t  mipIndex, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  data, ::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>  ret) ;

/// @brief Method Request_Internal_Texture_3, addr 0x18227cf00, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest Request_Internal_Texture_3(::UnityEngine::Texture*  src, int32_t  mipIndex, int32_t  x, int32_t  width, int32_t  y, int32_t  height, int32_t  z, int32_t  depth, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  data) ;

/// @brief Method Request_Internal_Texture_3_Injected, addr 0x18227cef0, size 0x10, virtual false, abstract: false, final false
static inline void Request_Internal_Texture_3_Injected(::System::IntPtr  src, int32_t  mipIndex, int32_t  x, int32_t  width, int32_t  y, int32_t  height, int32_t  z, int32_t  depth, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  data, ::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>  ret) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncGPUReadback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncGPUReadback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncGPUReadback(AsyncGPUReadback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncGPUReadback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncGPUReadback(AsyncGPUReadback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11090};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::AsyncGPUReadback) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering

#pragma once
// IWYU pragma private; include "MA/Flora/BatchCullingExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(BatchCullingExtensions)
namespace MA::Flora {
struct DisposableBatchCullingContext;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::Rendering {
struct BatchCullingContext;
}
namespace UnityEngine::Rendering {
struct BatchCullingViewType;
}
namespace UnityEngine::Rendering {
struct CullingSplit;
}
namespace UnityEngine::Rendering {
struct ScriptableCullingParameters;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Plane;
}
// Forward declare root types
namespace MA::Flora {
class BatchCullingExtensions;
}
// Write type traits
MARK_REF_T(::MA::Flora::BatchCullingExtensions*);
DEFINE_IL2CPP_CLASS(::MA::Flora::BatchCullingExtensions*, "MA.Flora", "BatchCullingExtensions");
// Dependencies System.Object, UnityEngine.Plane
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.BatchCullingExtensions
class CORDL_TYPE BatchCullingExtensions : public ::System::Object {
public:
// Declarations
/// @brief Field TempPlanes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TempPlanes, put=setStaticF_TempPlanes)) ::ArrayW<::UnityEngine::Plane>  TempPlanes;

/// @brief Method Clone, addr 0x1814569d0, size 0x180, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::BatchCullingContext Clone(::UnityEngine::Rendering::BatchCullingContext  cc, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method CreateCameraCullingContext, addr 0x181456fd0, size 0x1b0, virtual false, abstract: false, final false
static inline ::MA::Flora::DisposableBatchCullingContext CreateCameraCullingContext(::UnityEngine::Camera*  camera, ::Unity::Collections::Allocator  allocator, ::UnityEngine::Rendering::BatchCullingViewType  viewType) ;

/// @brief Method CreateCameraCullingContext, addr 0x181456b50, size 0xe0, virtual false, abstract: false, final false
static inline ::MA::Flora::DisposableBatchCullingContext CreateCameraCullingContext(::UnityEngine::Camera*  camera, ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>  cullingParameters, ::Unity::Collections::Allocator  allocator, ::UnityEngine::Rendering::BatchCullingViewType  viewType) ;

/// @brief Method CreateCameraCullingContext, addr 0x181456c30, size 0x3a0, virtual false, abstract: false, final false
static inline ::MA::Flora::DisposableBatchCullingContext CreateCameraCullingContext(::UnityEngine::Camera*  camera, ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>  cullingParameters, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  cullingPlanes, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CullingSplit>  cullingSplits, ::UnityEngine::Rendering::BatchCullingViewType  viewType) ;

/// @brief Method CreatePickingCullingContext, addr 0x1814577b0, size 0x530, virtual false, abstract: false, final false
static inline ::MA::Flora::DisposableBatchCullingContext CreatePickingCullingContext(::UnityEngine::Camera*  camera, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  planes, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method CreatePickingCullingContext, addr 0x181457180, size 0x630, virtual false, abstract: false, final false
static inline ::MA::Flora::DisposableBatchCullingContext CreatePickingCullingContext(::UnityEngine::Camera*  camera, ::UnityEngine::Matrix4x4  projectionMatrix, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Dispose, addr 0x181457d40, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Jobs::JobHandle Dispose(::by_ref<::UnityEngine::Rendering::BatchCullingContext>  context, ::Unity::Jobs::JobHandle  dependency) ;

/// @brief Method Dispose, addr 0x181457ce0, size 0x60, virtual false, abstract: false, final false
static inline void Dispose(::by_ref<::UnityEngine::Rendering::BatchCullingContext>  context) ;

/// @brief Method IsCreated, addr 0x18110d240, size 0x27f0, virtual false, abstract: false, final false
static inline bool IsCreated(::by_ref<::UnityEngine::Rendering::BatchCullingContext>  context) ;

static inline ::ArrayW<::UnityEngine::Plane> getStaticF_TempPlanes() ;

static inline void setStaticF_TempPlanes(::ArrayW<::UnityEngine::Plane>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BatchCullingExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BatchCullingExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BatchCullingExtensions(BatchCullingExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BatchCullingExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BatchCullingExtensions(BatchCullingExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12860};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::BatchCullingExtensions) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora

#pragma once
// IWYU pragma private; include "MA/Flora/OcclusionContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__OccluderDepthPyramidConstants_def.hpp"
#include "MA/Flora/zzzz__OccluderDerivedData_def.hpp"
#include "MA/Flora/zzzz__OccluderMipBounds_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OcclusionContext)
namespace MA::Flora {
struct OccluderDepthPyramidConstants;
}
namespace MA::Flora {
struct OccluderHandles;
}
namespace MA::Flora {
struct OccluderParameters;
}
namespace MA::Flora {
class OcclusionContext_LocalNameID;
}
namespace MA::Flora {
struct OcclusionDebugOutput;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct OccluderSubviewUpdate;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace MA::Flora {
class OcclusionContext_LocalNameID;
}
namespace MA::Flora {
struct OcclusionContext;
}
// Write type traits
MARK_REF_T(::MA::Flora::OcclusionContext_LocalNameID*);
MARK_VAL_T(::MA::Flora::OcclusionContext);
DEFINE_IL2CPP_CLASS(::MA::Flora::OcclusionContext_LocalNameID*, "MA.Flora", "OcclusionContext/LocalNameID");
DEFINE_IL2CPP_CLASS(::MA::Flora::OcclusionContext, "MA.Flora", "OcclusionContext");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.OcclusionContext/LocalNameID
class CORDL_TYPE OcclusionContext_LocalNameID : public ::System::Object {
public:
// Declarations
/// @brief Field DstDepth, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_DstDepth, put=setStaticF_DstDepth)) int32_t  DstDepth;

/// @brief Field OccluderDepthPyramidConstants, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_OccluderDepthPyramidConstants, put=setStaticF_OccluderDepthPyramidConstants)) int32_t  OccluderDepthPyramidConstants;

/// @brief Field OverlayOpacity, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_OverlayOpacity, put=setStaticF_OverlayOpacity)) int32_t  OverlayOpacity;

/// @brief Field SrcDepth, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_SrcDepth, put=setStaticF_SrcDepth)) int32_t  SrcDepth;

static inline int32_t getStaticF_DstDepth() ;

static inline int32_t getStaticF_OccluderDepthPyramidConstants() ;

static inline int32_t getStaticF_OverlayOpacity() ;

static inline int32_t getStaticF_SrcDepth() ;

static inline void setStaticF_DstDepth(int32_t  value) ;

static inline void setStaticF_OccluderDepthPyramidConstants(int32_t  value) ;

static inline void setStaticF_OverlayOpacity(int32_t  value) ;

static inline void setStaticF_SrcDepth(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OcclusionContext_LocalNameID() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OcclusionContext_LocalNameID", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OcclusionContext_LocalNameID(OcclusionContext_LocalNameID && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OcclusionContext_LocalNameID", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OcclusionContext_LocalNameID(OcclusionContext_LocalNameID const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13230};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::OcclusionContext_LocalNameID) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.OccluderDepthPyramidConstants, MA.Flora.OccluderDerivedData, MA.Flora.OccluderMipBounds, Unity.Collections.NativeArray`1<T>, UnityEngine.Vector2Int
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.OcclusionContext
struct CORDL_TYPE OcclusionContext {
public:
// Declarations
using LocalNameID = ::MA::Flora::OcclusionContext_LocalNameID;

 __declspec(property(get=get_DepthBufferSizeInOccluderPixels)) ::UnityEngine::Vector2  DepthBufferSizeInOccluderPixels;

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

 __declspec(property(get=get_IsDebugValid)) bool  IsDebugValid;

 __declspec(property(get=get_SubviewCount)) int32_t  SubviewCount;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method AllocateTexturesIfNecessary, addr 0x1814cf2d0, size 0x250, virtual false, abstract: false, final false
inline void AllocateTexturesIfNecessary(bool  debugOverlayEnabled) ;

/// @brief Method CreateDepthPyramid, addr 0x1814cf520, size 0x5c0, virtual false, abstract: false, final false
inline void CreateDepthPyramid(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::MA::Flora::OccluderParameters>  occluderParams, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>  occluderSubviewUpdates, ::by_ref<::MA::Flora::OccluderHandles>  occluderHandles, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  silhouettePlanes, ::UnityEngine::ComputeShader*  occluderDepthPyramidCS, int32_t  occluderDepthDownscaleKernel) ;

/// @brief Method Dispose, addr 0x1814cfae0, size 0xd0, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetDebugOutput, addr 0x1814cfbb0, size 0x210, virtual false, abstract: false, final false
inline ::MA::Flora::OcclusionDebugOutput GetDebugOutput() ;

/// @brief Method Import, addr 0x1814cfe50, size 0xc0, virtual false, abstract: false, final false
inline ::MA::Flora::OccluderHandles Import() ;

/// @brief Method Import, addr 0x1814cfdc0, size 0x90, virtual false, abstract: false, final false
inline ::MA::Flora::OccluderHandles Import(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph) ;

/// @brief Method IsSubviewValid, addr 0x1814cff10, size 0x30, virtual false, abstract: false, final false
inline bool IsSubviewValid(int32_t  subviewIndex) ;

/// @brief Method NextFrame, addr 0x1814cff40, size 0x90, virtual false, abstract: false, final false
inline void NextFrame() ;

/// @brief Method PrepareOccluders, addr 0x1814cffd0, size 0x110, virtual false, abstract: false, final false
inline void PrepareOccluders(::by_ref<::MA::Flora::OccluderParameters>  occluderParams) ;

/// @brief Method SetupFarDepthPyramidConstants, addr 0x1814d00e0, size 0x890, virtual false, abstract: false, final false
inline ::MA::Flora::OccluderDepthPyramidConstants SetupFarDepthPyramidConstants(::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>  occluderSubviewUpdates, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  silhouettePlanes) ;

/// @brief Method UpdateMipBounds, addr 0x1814d0970, size 0x200, virtual false, abstract: false, final false
inline void UpdateMipBounds() ;

/// @brief Method get_DepthBufferSizeInOccluderPixels, addr 0x1814c2690, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_DepthBufferSizeInOccluderPixels() ;

/// @brief Method get_IsCreated, addr 0x181458e50, size 0x20, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Method get_IsDebugValid, addr 0x1814d0b70, size 0x50, virtual false, abstract: false, final false
inline bool get_IsDebugValid() ;

/// @brief Method get_SubviewCount, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_SubviewCount() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr OcclusionContext() ;

// Ctor Parameters [CppParam { name: "Version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "DepthBufferSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None }, CppParam { name: "SubviewData", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::OccluderDerivedData>", modifiers: "", def_value: None }, CppParam { name: "SubviewValidMask", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "OccluderMipBounds", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::OccluderMipBounds>", modifiers: "", def_value: None }, CppParam { name: "OccluderMipLayoutSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None }, CppParam { name: "OccluderDepthPyramidSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None }, CppParam { name: "OccluderDepthPyramid", ty: "::UnityEngine::Rendering::RTHandle*", modifiers: "", def_value: None }, CppParam { name: "OcclusionDebugOverlaySize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "OcclusionDebugOverlay", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "DebugNeedsClear", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "DepthPyramidConstantBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "DepthPyramidConstantBufferData", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::OccluderDepthPyramidConstants>", modifiers: "", def_value: None }]
constexpr OcclusionContext(int32_t  Version, ::UnityEngine::Vector2Int  DepthBufferSize, ::Unity::Collections::NativeArray_1<::MA::Flora::OccluderDerivedData>  SubviewData, int32_t  SubviewValidMask, ::Unity::Collections::NativeArray_1<::MA::Flora::OccluderMipBounds>  OccluderMipBounds, ::UnityEngine::Vector2Int  OccluderMipLayoutSize, ::UnityEngine::Vector2Int  OccluderDepthPyramidSize, ::UnityEngine::Rendering::RTHandle*  OccluderDepthPyramid, int32_t  OcclusionDebugOverlaySize, ::UnityEngine::GraphicsBuffer*  OcclusionDebugOverlay, bool  DebugNeedsClear, ::UnityEngine::GraphicsBuffer*  DepthPyramidConstantBuffer, ::Unity::Collections::NativeArray_1<::MA::Flora::OccluderDepthPyramidConstants>  DepthPyramidConstantBufferData) noexcept;

/// @brief Field FirstDepthMipIndex offset 0xffffffff size 0x4
static constexpr int32_t  FirstDepthMipIndex{static_cast<int32_t>(0x3)};

/// @brief Field MaxOccluderMips offset 0xffffffff size 0x4
static constexpr int32_t  MaxOccluderMips{static_cast<int32_t>(0x8)};

/// @brief Field MaxSilhouettePlanes offset 0xffffffff size 0x4
static constexpr int32_t  MaxSilhouettePlanes{static_cast<int32_t>(0x6)};

/// @brief Field MaxSubviewsPerView offset 0xffffffff size 0x4
static constexpr int32_t  MaxSubviewsPerView{static_cast<int32_t>(0x6)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13231};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field Version, offset: 0x0, size: 0x4, def value: None
 int32_t  Version;

/// @brief Field DepthBufferSize, offset: 0x4, size: 0x8, def value: None
 ::UnityEngine::Vector2Int  DepthBufferSize;

/// @brief Field SubviewData, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::OccluderDerivedData>  SubviewData;

/// @brief Field SubviewValidMask, offset: 0x20, size: 0x4, def value: None
 int32_t  SubviewValidMask;

/// @brief Field OccluderMipBounds, offset: 0x28, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::OccluderMipBounds>  OccluderMipBounds;

/// @brief Field OccluderMipLayoutSize, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Vector2Int  OccluderMipLayoutSize;

/// @brief Field OccluderDepthPyramidSize, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Vector2Int  OccluderDepthPyramidSize;

/// @brief Field OccluderDepthPyramid, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  OccluderDepthPyramid;

/// @brief Field OcclusionDebugOverlaySize, offset: 0x50, size: 0x4, def value: None
 int32_t  OcclusionDebugOverlaySize;

/// @brief Field OcclusionDebugOverlay, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  OcclusionDebugOverlay;

/// @brief Field DebugNeedsClear, offset: 0x60, size: 0x1, def value: None
 bool  DebugNeedsClear;

/// @brief Field DepthPyramidConstantBuffer, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  DepthPyramidConstantBuffer;

/// @brief Field DepthPyramidConstantBufferData, offset: 0x70, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::OccluderDepthPyramidConstants>  DepthPyramidConstantBufferData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::OcclusionContext, Version) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OcclusionContext, DepthBufferSize) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OcclusionContext, SubviewData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OcclusionContext, SubviewValidMask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OcclusionContext, OccluderMipBounds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OcclusionContext, OccluderMipLayoutSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OcclusionContext, OccluderDepthPyramidSize) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OcclusionContext, OccluderDepthPyramid) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OcclusionContext, OcclusionDebugOverlaySize) == 0x50, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OcclusionContext, OcclusionDebugOverlay) == 0x58, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OcclusionContext, DebugNeedsClear) == 0x60, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OcclusionContext, DepthPyramidConstantBuffer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OcclusionContext, DepthPyramidConstantBufferData) == 0x70, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::OcclusionContext) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora

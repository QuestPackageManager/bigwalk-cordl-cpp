#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/MultiScaleVO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiScaleVO)
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::Rendering::PostProcessing {
class AmbientOcclusion;
}
namespace UnityEngine::Rendering::PostProcessing {
class IAmbientOcclusionMethod;
}
namespace UnityEngine::Rendering::PostProcessing {
struct MultiScaleVO_MipLevel;
}
namespace UnityEngine::Rendering::PostProcessing {
struct MultiScaleVO_Pass;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessResources;
}
namespace UnityEngine::Rendering::PostProcessing {
class PropertySheet;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct DepthTextureMode;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
struct MultiScaleVO_MipLevel;
}
namespace UnityEngine::Rendering::PostProcessing {
struct MultiScaleVO_Pass;
}
namespace UnityEngine::Rendering::PostProcessing {
class MultiScaleVO;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel);
MARK_VAL_T(::UnityEngine::Rendering::PostProcessing::MultiScaleVO_Pass);
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::MultiScaleVO*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel, "UnityEngine.Rendering.PostProcessing", "MultiScaleVO/MipLevel");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::MultiScaleVO_Pass, "UnityEngine.Rendering.PostProcessing", "MultiScaleVO/Pass");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::MultiScaleVO*, "UnityEngine.Rendering.PostProcessing", "MultiScaleVO");
// Dependencies 
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: true
// CS Name: UnityEngine.Rendering.PostProcessing.MultiScaleVO/MipLevel
struct CORDL_TYPE MultiScaleVO_MipLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MultiScaleVO_MipLevel_Unwrapped
enum struct __MultiScaleVO_MipLevel_Unwrapped : int32_t {
__E_Original = static_cast<int32_t>(0x0),
__E_L1 = static_cast<int32_t>(0x1),
__E_L2 = static_cast<int32_t>(0x2),
__E_L3 = static_cast<int32_t>(0x3),
__E_L4 = static_cast<int32_t>(0x4),
__E_L5 = static_cast<int32_t>(0x5),
__E_L6 = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MultiScaleVO_MipLevel_Unwrapped () const noexcept {
return static_cast<__MultiScaleVO_MipLevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MultiScaleVO_MipLevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MultiScaleVO_MipLevel(int32_t  value__) noexcept;

/// @brief Field L1 value: I32(1)
static ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel const L1;

/// @brief Field L2 value: I32(2)
static ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel const L2;

/// @brief Field L3 value: I32(3)
static ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel const L3;

/// @brief Field L4 value: I32(4)
static ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel const L4;

/// @brief Field L5 value: I32(5)
static ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel const L5;

/// @brief Field L6 value: I32(6)
static ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel const L6;

/// @brief Field Original value: I32(0)
static ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel const Original;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18577};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
// Dependencies 
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: true
// CS Name: UnityEngine.Rendering.PostProcessing.MultiScaleVO/Pass
struct CORDL_TYPE MultiScaleVO_Pass {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MultiScaleVO_Pass_Unwrapped
enum struct __MultiScaleVO_Pass_Unwrapped : int32_t {
__E_DepthCopy = static_cast<int32_t>(0x0),
__E_CompositionDeferred = static_cast<int32_t>(0x1),
__E_CompositionForward = static_cast<int32_t>(0x2),
__E_DebugOverlay = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MultiScaleVO_Pass_Unwrapped () const noexcept {
return static_cast<__MultiScaleVO_Pass_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MultiScaleVO_Pass() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MultiScaleVO_Pass(int32_t  value__) noexcept;

/// @brief Field CompositionDeferred value: I32(1)
static ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_Pass const CompositionDeferred;

/// @brief Field CompositionForward value: I32(2)
static ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_Pass const CompositionForward;

/// @brief Field DebugOverlay value: I32(3)
static ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_Pass const DebugOverlay;

/// @brief Field DepthCopy value: I32(0)
static ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_Pass const DepthCopy;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18578};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::MultiScaleVO_Pass, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::MultiScaleVO_Pass) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
// Dependencies System.Object, UnityEngine.RenderTextureFormat, UnityEngine.Rendering.RenderTargetIdentifier
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.MultiScaleVO
class CORDL_TYPE MultiScaleVO : public ::System::Object {
public:
// Declarations
using MipLevel = ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel;

using Pass = ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_Pass;

/// @brief Field float4Texture, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_float4Texture, put=__cordl_internal_set_float4Texture)) bool  float4Texture;

/// @brief Field m_AmbientOnlyAO, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AmbientOnlyAO, put=__cordl_internal_set_m_AmbientOnlyAO)) ::UnityW<::UnityEngine::RenderTexture>  m_AmbientOnlyAO;

/// @brief Field m_Heights, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Heights, put=__cordl_internal_set_m_Heights)) ::ArrayW<int32_t>  m_Heights;

/// @brief Field m_InvThicknessTable, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InvThicknessTable, put=__cordl_internal_set_m_InvThicknessTable)) ::ArrayW<float_t>  m_InvThicknessTable;

/// @brief Field m_MRT, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MRT, put=__cordl_internal_set_m_MRT)) ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  m_MRT;

/// @brief Field m_PropertySheet, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PropertySheet, put=__cordl_internal_set_m_PropertySheet)) ::UnityEngine::Rendering::PostProcessing::PropertySheet*  m_PropertySheet;

/// @brief Field m_R16Format, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_R16Format, put=__cordl_internal_set_m_R16Format)) ::UnityEngine::RenderTextureFormat  m_R16Format;

/// @brief Field m_R8Format, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_R8Format, put=__cordl_internal_set_m_R8Format)) ::UnityEngine::RenderTextureFormat  m_R8Format;

/// @brief Field m_Resources, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Resources, put=__cordl_internal_set_m_Resources)) ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>  m_Resources;

/// @brief Field m_SampleThickness, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SampleThickness, put=__cordl_internal_set_m_SampleThickness)) ::ArrayW<float_t>  m_SampleThickness;

/// @brief Field m_SampleWeightTable, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SampleWeightTable, put=__cordl_internal_set_m_SampleWeightTable)) ::ArrayW<float_t>  m_SampleWeightTable;

/// @brief Field m_ScaledHeights, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScaledHeights, put=__cordl_internal_set_m_ScaledHeights)) ::ArrayW<int32_t>  m_ScaledHeights;

/// @brief Field m_ScaledWidths, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScaledWidths, put=__cordl_internal_set_m_ScaledWidths)) ::ArrayW<int32_t>  m_ScaledWidths;

/// @brief Field m_Settings, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Settings, put=__cordl_internal_set_m_Settings)) ::UnityW<::UnityEngine::Rendering::PostProcessing::AmbientOcclusion>  m_Settings;

/// @brief Field m_Widths, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Widths, put=__cordl_internal_set_m_Widths)) ::ArrayW<int32_t>  m_Widths;

/// @brief Convert operator to "::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod"
constexpr operator  ::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod*() noexcept;

/// @brief Method Alloc, addr 0x181fb8530, size 0x110, virtual false, abstract: false, final false
inline void Alloc(::UnityEngine::Rendering::CommandBuffer*  cmd, int32_t  id, ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel  size, ::UnityEngine::RenderTextureFormat  format, bool  uav, bool  dynamicScale) ;

/// @brief Method AllocArray, addr 0x181fb8420, size 0x110, virtual false, abstract: false, final false
inline void AllocArray(::UnityEngine::Rendering::CommandBuffer*  cmd, int32_t  id, ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel  size, ::UnityEngine::RenderTextureFormat  format, bool  uav, bool  dynamicScale) ;

/// @brief Method CalculateTanHalfFovHeight, addr 0x181fb8640, size 0x30, virtual false, abstract: false, final false
inline float_t CalculateTanHalfFovHeight(::UnityEngine::Camera*  camera) ;

/// @brief Method CalculateZBufferParams, addr 0x181fb8670, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 CalculateZBufferParams(::UnityEngine::Camera*  camera) ;

/// @brief Method CheckAOTexture, addr 0x181fb8710, size 0x180, virtual false, abstract: false, final false
inline void CheckAOTexture(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method CompositeAmbientOnly, addr 0x181fb8890, size 0x1a0, virtual true, abstract: false, final true
inline void CompositeAmbientOnly(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method GenerateAOMap, addr 0x181fb8a30, size 0x8e0, virtual false, abstract: false, final false
inline void GenerateAOMap(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::System::Nullable_1<::UnityEngine::Rendering::RenderTargetIdentifier>  depthMap, bool  invert, bool  isMSAA) ;

/// @brief Method GetCameraFlags, addr 0x1802edd00, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::DepthTextureMode GetCameraFlags() ;

/// @brief Method GetSize, addr 0x181fb9350, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetSize(::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel  mip) ;

/// @brief Method GetSizeArray, addr 0x181fb9310, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetSizeArray(::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel  mip) ;

static inline ::UnityEngine::Rendering::PostProcessing::MultiScaleVO* New_ctor(::UnityEngine::Rendering::PostProcessing::AmbientOcclusion*  settings) ;

/// @brief Method PreparePropertySheet, addr 0x181fb9380, size 0xc0, virtual false, abstract: false, final false
inline void PreparePropertySheet(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method PushAllocCommands, addr 0x181fb9440, size 0x750, virtual false, abstract: false, final false
inline void PushAllocCommands(::UnityEngine::Rendering::CommandBuffer*  cmd, bool  isMSAA, ::UnityEngine::Camera*  camera) ;

/// @brief Method PushDebug, addr 0x181fb9b90, size 0xa0, virtual false, abstract: false, final false
inline void PushDebug(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method PushDownsampleCommands, addr 0x181fb9c30, size 0x720, virtual false, abstract: false, final false
inline void PushDownsampleCommands(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Camera*  camera, ::System::Nullable_1<::UnityEngine::Rendering::RenderTargetIdentifier>  depthMap, bool  isMSAA) ;

/// @brief Method PushReleaseCommands, addr 0x181fba350, size 0x1d0, virtual false, abstract: false, final false
inline void PushReleaseCommands(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method PushRenderCommands, addr 0x181fba520, size 0x550, virtual false, abstract: false, final false
inline void PushRenderCommands(::UnityEngine::Rendering::CommandBuffer*  cmd, int32_t  source, int32_t  destination, ::UnityEngine::Vector3  sourceSize, float_t  tanHalfFovH, bool  isMSAA) ;

/// @brief Method PushUpsampleCommands, addr 0x181fbaa70, size 0x420, virtual false, abstract: false, final false
inline void PushUpsampleCommands(::UnityEngine::Rendering::CommandBuffer*  cmd, int32_t  lowResDepth, int32_t  interleavedAO, int32_t  highResDepth, ::System::Nullable_1<int32_t>  highResAO, ::UnityEngine::Rendering::RenderTargetIdentifier  dest, ::UnityEngine::Vector3  lowResDepthSize, ::UnityEngine::Vector2  highResDepthSize, bool  isMSAA, bool  invert) ;

/// @brief Method Release, addr 0x181fbaea0, size 0x30, virtual true, abstract: false, final true
inline void Release() ;

/// @brief Method Release, addr 0x181fbae90, size 0x10, virtual false, abstract: false, final false
inline void Release(::UnityEngine::Rendering::CommandBuffer*  cmd, int32_t  id) ;

/// @brief Method RenderAfterOpaque, addr 0x181fbaed0, size 0x2b0, virtual true, abstract: false, final true
inline void RenderAfterOpaque(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method RenderAmbientOnly, addr 0x181fbb180, size 0x120, virtual true, abstract: false, final true
inline void RenderAmbientOnly(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method SetResources, addr 0x1802f8080, size 0x10, virtual false, abstract: false, final false
inline void SetResources(::UnityEngine::Rendering::PostProcessing::PostProcessResources*  resources) ;

constexpr bool const& __cordl_internal_get_float4Texture() const;

constexpr bool& __cordl_internal_get_float4Texture() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_m_AmbientOnlyAO() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_m_AmbientOnlyAO() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_m_Heights() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_m_Heights() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_m_InvThicknessTable() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_m_InvThicknessTable() ;

constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> const& __cordl_internal_get_m_MRT() const;

constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>& __cordl_internal_get_m_MRT() ;

constexpr ::UnityEngine::Rendering::PostProcessing::PropertySheet* const& __cordl_internal_get_m_PropertySheet() const;

constexpr ::UnityEngine::Rendering::PostProcessing::PropertySheet*& __cordl_internal_get_m_PropertySheet() ;

constexpr ::UnityEngine::RenderTextureFormat const& __cordl_internal_get_m_R16Format() const;

constexpr ::UnityEngine::RenderTextureFormat& __cordl_internal_get_m_R16Format() ;

constexpr ::UnityEngine::RenderTextureFormat const& __cordl_internal_get_m_R8Format() const;

constexpr ::UnityEngine::RenderTextureFormat& __cordl_internal_get_m_R8Format() ;

constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources> const& __cordl_internal_get_m_Resources() const;

constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>& __cordl_internal_get_m_Resources() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_m_SampleThickness() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_m_SampleThickness() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_m_SampleWeightTable() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_m_SampleWeightTable() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_m_ScaledHeights() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_m_ScaledHeights() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_m_ScaledWidths() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_m_ScaledWidths() ;

constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::AmbientOcclusion> const& __cordl_internal_get_m_Settings() const;

constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::AmbientOcclusion>& __cordl_internal_get_m_Settings() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_m_Widths() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_m_Widths() ;

constexpr void __cordl_internal_set_float4Texture(bool  value) ;

constexpr void __cordl_internal_set_m_AmbientOnlyAO(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_m_Heights(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_m_InvThicknessTable(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_m_MRT(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  value) ;

constexpr void __cordl_internal_set_m_PropertySheet(::UnityEngine::Rendering::PostProcessing::PropertySheet*  value) ;

constexpr void __cordl_internal_set_m_R16Format(::UnityEngine::RenderTextureFormat  value) ;

constexpr void __cordl_internal_set_m_R8Format(::UnityEngine::RenderTextureFormat  value) ;

constexpr void __cordl_internal_set_m_Resources(::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>  value) ;

constexpr void __cordl_internal_set_m_SampleThickness(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_m_SampleWeightTable(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_m_ScaledHeights(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_m_ScaledWidths(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_m_Settings(::UnityW<::UnityEngine::Rendering::PostProcessing::AmbientOcclusion>  value) ;

constexpr void __cordl_internal_set_m_Widths(::ArrayW<int32_t>  value) ;

/// @brief Method .ctor, addr 0x181fbb2a0, size 0x410, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::PostProcessing::AmbientOcclusion*  settings) ;

/// @brief Convert to "::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod"
constexpr ::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod* i___UnityEngine__Rendering__PostProcessing__IAmbientOcclusionMethod() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MultiScaleVO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultiScaleVO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiScaleVO(MultiScaleVO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiScaleVO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiScaleVO(MultiScaleVO const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18579};

/// @brief Field m_SampleThickness, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<float_t>  ___m_SampleThickness;

/// @brief Field m_InvThicknessTable, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<float_t>  ___m_InvThicknessTable;

/// @brief Field m_SampleWeightTable, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<float_t>  ___m_SampleWeightTable;

/// @brief Field m_Widths, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___m_Widths;

/// @brief Field m_Heights, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___m_Heights;

/// @brief Field m_ScaledWidths, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___m_ScaledWidths;

/// @brief Field m_ScaledHeights, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___m_ScaledHeights;

/// @brief Field m_Settings, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::PostProcessing::AmbientOcclusion>  ___m_Settings;

/// @brief Field m_PropertySheet, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::PropertySheet*  ___m_PropertySheet;

/// @brief Field m_Resources, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>  ___m_Resources;

/// @brief Field m_AmbientOnlyAO, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___m_AmbientOnlyAO;

/// @brief Field m_R8Format, offset: 0x68, size: 0x4, def value: None
 ::UnityEngine::RenderTextureFormat  ___m_R8Format;

/// @brief Field m_R16Format, offset: 0x6c, size: 0x4, def value: None
 ::UnityEngine::RenderTextureFormat  ___m_R16Format;

/// @brief Field float4Texture, offset: 0x70, size: 0x1, def value: None
 bool  ___float4Texture;

/// @brief Field m_MRT, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  ___m_MRT;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::MultiScaleVO, ___m_SampleThickness) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::MultiScaleVO, ___m_InvThicknessTable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::MultiScaleVO, ___m_SampleWeightTable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::MultiScaleVO, ___m_Widths) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::MultiScaleVO, ___m_Heights) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::MultiScaleVO, ___m_ScaledWidths) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::MultiScaleVO, ___m_ScaledHeights) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::MultiScaleVO, ___m_Settings) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::MultiScaleVO, ___m_PropertySheet) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::MultiScaleVO, ___m_Resources) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::MultiScaleVO, ___m_AmbientOnlyAO) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::MultiScaleVO, ___m_R8Format) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::MultiScaleVO, ___m_R16Format) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::MultiScaleVO, ___float4Texture) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::MultiScaleVO, ___m_MRT) == 0x78, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::MultiScaleVO) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing

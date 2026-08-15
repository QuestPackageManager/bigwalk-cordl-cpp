#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/DepthProbe.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__ManagedBehaviour_1_def.hpp"
#include "WaveHarmonic/Crest/zzzz__DepthProbeMode_def.hpp"
#include "WaveHarmonic/Crest/zzzz__DepthProbeRefreshMode_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Placement_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DepthProbe)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
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
class ComputeShader;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace WaveHarmonic::Crest {
struct DepthProbeMode;
}
namespace WaveHarmonic::Crest {
struct DepthProbeRefreshMode;
}
namespace WaveHarmonic::Crest {
class DepthProbe_DebugFields;
}
namespace WaveHarmonic::Crest {
class DepthProbe_Input;
}
namespace WaveHarmonic::Crest {
class DepthProbe_ShaderIDs;
}
namespace WaveHarmonic::Crest {
class ILodInput;
}
namespace WaveHarmonic::Crest {
class Lod;
}
namespace WaveHarmonic::Crest {
struct Placement;
}
namespace WaveHarmonic::Crest {
class QualitySettingsOverride;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class DepthProbe;
}
namespace WaveHarmonic::Crest {
class DepthProbe_DebugFields;
}
namespace WaveHarmonic::Crest {
class DepthProbe_Input;
}
namespace WaveHarmonic::Crest {
class DepthProbe_ShaderIDs;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::DepthProbe*);
MARK_REF_T(::WaveHarmonic::Crest::DepthProbe_DebugFields*);
MARK_REF_T(::WaveHarmonic::Crest::DepthProbe_Input*);
MARK_REF_T(::WaveHarmonic::Crest::DepthProbe_ShaderIDs*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::DepthProbe*, "WaveHarmonic.Crest", "DepthProbe");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::DepthProbe_DebugFields*, "WaveHarmonic.Crest", "DepthProbe/DebugFields");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::DepthProbe_Input*, "WaveHarmonic.Crest", "DepthProbe/Input");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::DepthProbe_ShaderIDs*, "WaveHarmonic.Crest", "DepthProbe/ShaderIDs");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.DepthProbe/DebugFields
class CORDL_TYPE DepthProbe_DebugFields : public ::System::Object {
public:
// Declarations
/// @brief Field _ShowHiddenObjects, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__ShowHiddenObjects, put=__cordl_internal_set__ShowHiddenObjects)) bool  _ShowHiddenObjects;

/// @brief Field _ShowSimulationDataInScene, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get__ShowSimulationDataInScene, put=__cordl_internal_set__ShowSimulationDataInScene)) bool  _ShowSimulationDataInScene;

static inline ::WaveHarmonic::Crest::DepthProbe_DebugFields* New_ctor() ;

constexpr bool const& __cordl_internal_get__ShowHiddenObjects() const;

constexpr bool& __cordl_internal_get__ShowHiddenObjects() ;

constexpr bool const& __cordl_internal_get__ShowSimulationDataInScene() const;

constexpr bool& __cordl_internal_get__ShowSimulationDataInScene() ;

constexpr void __cordl_internal_set__ShowHiddenObjects(bool  value) ;

constexpr void __cordl_internal_set__ShowSimulationDataInScene(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DepthProbe_DebugFields() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DepthProbe_DebugFields", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DepthProbe_DebugFields(DepthProbe_DebugFields && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DepthProbe_DebugFields", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DepthProbe_DebugFields(DepthProbe_DebugFields const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16514};

/// @brief Field _ShowHiddenObjects, offset: 0x10, size: 0x1, def value: None
 bool  ____ShowHiddenObjects;

/// @brief Field _ShowSimulationDataInScene, offset: 0x11, size: 0x1, def value: None
 bool  ____ShowSimulationDataInScene;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::DepthProbe_DebugFields, ____ShowHiddenObjects) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthProbe_DebugFields, ____ShowSimulationDataInScene) == 0x11, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::DepthProbe_DebugFields) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.DepthProbe/ShaderIDs
class CORDL_TYPE DepthProbe_ShaderIDs : public ::System::Object {
public:
// Declarations
/// @brief Field s_CamDepthBuffer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_CamDepthBuffer, put=setStaticF_s_CamDepthBuffer)) int32_t  s_CamDepthBuffer;

/// @brief Field s_CameraDepthBufferBackfaces, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_CameraDepthBufferBackfaces, put=setStaticF_s_CameraDepthBufferBackfaces)) int32_t  s_CameraDepthBufferBackfaces;

/// @brief Field s_CustomZBufferParams, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_CustomZBufferParams, put=setStaticF_s_CustomZBufferParams)) int32_t  s_CustomZBufferParams;

/// @brief Field s_DepthProbe, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_DepthProbe, put=setStaticF_s_DepthProbe)) int32_t  s_DepthProbe;

/// @brief Field s_DepthProbeHeightOffset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_DepthProbeHeightOffset, put=setStaticF_s_DepthProbeHeightOffset)) int32_t  s_DepthProbeHeightOffset;

/// @brief Field s_DepthProbeResolution, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_DepthProbeResolution, put=setStaticF_s_DepthProbeResolution)) int32_t  s_DepthProbeResolution;

/// @brief Field s_HeightNearHeightFar, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_HeightNearHeightFar, put=setStaticF_s_HeightNearHeightFar)) int32_t  s_HeightNearHeightFar;

/// @brief Field s_HeightOffset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_HeightOffset, put=setStaticF_s_HeightOffset)) int32_t  s_HeightOffset;

/// @brief Field s_JumpSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_JumpSize, put=setStaticF_s_JumpSize)) int32_t  s_JumpSize;

/// @brief Field s_PreviousPlane, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_PreviousPlane, put=setStaticF_s_PreviousPlane)) int32_t  s_PreviousPlane;

/// @brief Field s_ProjectionToWorld, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ProjectionToWorld, put=setStaticF_s_ProjectionToWorld)) int32_t  s_ProjectionToWorld;

/// @brief Field s_VoronoiPingPong0, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_VoronoiPingPong0, put=setStaticF_s_VoronoiPingPong0)) int32_t  s_VoronoiPingPong0;

/// @brief Field s_VoronoiPingPong1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_VoronoiPingPong1, put=setStaticF_s_VoronoiPingPong1)) int32_t  s_VoronoiPingPong1;

/// @brief Field s_WaterLevel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_WaterLevel, put=setStaticF_s_WaterLevel)) int32_t  s_WaterLevel;

static inline int32_t getStaticF_s_CamDepthBuffer() ;

static inline int32_t getStaticF_s_CameraDepthBufferBackfaces() ;

static inline int32_t getStaticF_s_CustomZBufferParams() ;

static inline int32_t getStaticF_s_DepthProbe() ;

static inline int32_t getStaticF_s_DepthProbeHeightOffset() ;

static inline int32_t getStaticF_s_DepthProbeResolution() ;

static inline int32_t getStaticF_s_HeightNearHeightFar() ;

static inline int32_t getStaticF_s_HeightOffset() ;

static inline int32_t getStaticF_s_JumpSize() ;

static inline int32_t getStaticF_s_PreviousPlane() ;

static inline int32_t getStaticF_s_ProjectionToWorld() ;

static inline int32_t getStaticF_s_VoronoiPingPong0() ;

static inline int32_t getStaticF_s_VoronoiPingPong1() ;

static inline int32_t getStaticF_s_WaterLevel() ;

static inline void setStaticF_s_CamDepthBuffer(int32_t  value) ;

static inline void setStaticF_s_CameraDepthBufferBackfaces(int32_t  value) ;

static inline void setStaticF_s_CustomZBufferParams(int32_t  value) ;

static inline void setStaticF_s_DepthProbe(int32_t  value) ;

static inline void setStaticF_s_DepthProbeHeightOffset(int32_t  value) ;

static inline void setStaticF_s_DepthProbeResolution(int32_t  value) ;

static inline void setStaticF_s_HeightNearHeightFar(int32_t  value) ;

static inline void setStaticF_s_HeightOffset(int32_t  value) ;

static inline void setStaticF_s_JumpSize(int32_t  value) ;

static inline void setStaticF_s_PreviousPlane(int32_t  value) ;

static inline void setStaticF_s_ProjectionToWorld(int32_t  value) ;

static inline void setStaticF_s_VoronoiPingPong0(int32_t  value) ;

static inline void setStaticF_s_VoronoiPingPong1(int32_t  value) ;

static inline void setStaticF_s_WaterLevel(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DepthProbe_ShaderIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DepthProbe_ShaderIDs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DepthProbe_ShaderIDs(DepthProbe_ShaderIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DepthProbe_ShaderIDs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DepthProbe_ShaderIDs(DepthProbe_ShaderIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16515};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::DepthProbe_ShaderIDs) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.DepthProbe/Input
class CORDL_TYPE DepthProbe_Input : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Component)) ::UnityW<::UnityEngine::MonoBehaviour>  Component;

 __declspec(property(get=get_Enabled)) bool  Enabled;

 __declspec(property(get=get_IsCompute)) bool  IsCompute;

 __declspec(property(get=get_Pass)) int32_t  Pass;

 __declspec(property(get=get_Queue)) int32_t  Queue;

 __declspec(property(get=get_Rect)) ::UnityEngine::Rect  Rect;

/// @brief Field _Probe, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Probe, put=__cordl_internal_set__Probe)) ::UnityW<::WaveHarmonic::Crest::DepthProbe>  _Probe;

/// @brief Convert operator to "::WaveHarmonic::Crest::ILodInput"
constexpr operator  ::WaveHarmonic::Crest::ILodInput*() noexcept;

/// @brief Method Draw, addr 0x182559580, size 0x570, virtual true, abstract: false, final true
inline void Draw(::WaveHarmonic::Crest::Lod*  lod, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slices) ;

/// @brief Method Filter, addr 0x1802e30f0, size 0x10, virtual true, abstract: false, final true
inline float_t Filter(::WaveHarmonic::Crest::WaterRenderer*  water, int32_t  slice) ;

static inline ::WaveHarmonic::Crest::DepthProbe_Input* New_ctor(::WaveHarmonic::Crest::DepthProbe*  probe) ;

constexpr ::UnityW<::WaveHarmonic::Crest::DepthProbe> const& __cordl_internal_get__Probe() const;

constexpr ::UnityW<::WaveHarmonic::Crest::DepthProbe>& __cordl_internal_get__Probe() ;

constexpr void __cordl_internal_set__Probe(::UnityW<::WaveHarmonic::Crest::DepthProbe>  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::DepthProbe*  probe) ;

/// @brief Method get_Component, addr 0x1802db4a0, size 0x10, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::MonoBehaviour> get_Component() ;

/// @brief Method get_Enabled, addr 0x182559bc0, size 0x60, virtual true, abstract: false, final true
inline bool get_Enabled() ;

/// @brief Method get_IsCompute, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final true
inline bool get_IsCompute() ;

/// @brief Method get_Pass, addr 0x180393450, size 0x10, virtual true, abstract: false, final true
inline int32_t get_Pass() ;

/// @brief Method get_Queue, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline int32_t get_Queue() ;

/// @brief Method get_Rect, addr 0x182559ce0, size 0x1c0, virtual true, abstract: false, final true
inline ::UnityEngine::Rect get_Rect() ;

/// @brief Convert to "::WaveHarmonic::Crest::ILodInput"
constexpr ::WaveHarmonic::Crest::ILodInput* i___WaveHarmonic__Crest__ILodInput() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DepthProbe_Input() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DepthProbe_Input", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DepthProbe_Input(DepthProbe_Input && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DepthProbe_Input", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DepthProbe_Input(DepthProbe_Input const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16516};

/// @brief Field _Probe, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::DepthProbe>  ____Probe;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::DepthProbe_Input, ____Probe) == 0x10, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::DepthProbe_Input) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies UnityEngine.LayerMask, UnityEngine.Rect, UnityEngine.Vector2, UnityEngine.Vector3, WaveHarmonic.Crest.DepthProbeMode, WaveHarmonic.Crest.DepthProbeRefreshMode, WaveHarmonic.Crest.Internal.ManagedBehaviour`1<T>, WaveHarmonic.Crest.Placement
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.DepthProbe
class CORDL_TYPE DepthProbe : public ::WaveHarmonic::Crest::Internal::ManagedBehaviour_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>> {
public:
// Declarations
using DebugFields = ::WaveHarmonic::Crest::DepthProbe_DebugFields;

using Input = ::WaveHarmonic::Crest::DepthProbe_Input;

using ShaderIDs = ::WaveHarmonic::Crest::DepthProbe_ShaderIDs;

 __declspec(property(get=get_AdditionalJumpFloodRounds, put=set_AdditionalJumpFloodRounds)) int32_t  AdditionalJumpFloodRounds;

 __declspec(property(get=get_CaptureRange, put=set_CaptureRange)) ::UnityEngine::Vector2  CaptureRange;

 __declspec(property(get=get_EnableBackFaceInclusion, put=set_EnableBackFaceInclusion)) bool  EnableBackFaceInclusion;

 __declspec(property(get=get_ExternallyManaged, put=set_ExternallyManaged)) bool  ExternallyManaged;

 __declspec(property(get=get_ExternallyManagedExecution, put=set_ExternallyManagedExecution)) bool  ExternallyManagedExecution;

 __declspec(property(get=get_FillHolesCaptureHeight, put=set_FillHolesCaptureHeight)) float_t  FillHolesCaptureHeight;

 __declspec(property(get=get_FinalFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat  FinalFormat;

 __declspec(property(get=get_GenerateSignedDistanceField, put=set_GenerateSignedDistanceField)) bool  GenerateSignedDistanceField;

 __declspec(property(get=get_Layers, put=set_Layers)) ::UnityEngine::LayerMask  Layers;

 __declspec(property(get=get_Managed, put=set_Managed)) bool  Managed;

 __declspec(property(get=get_ManagedExecution, put=set_ManagedExecution)) bool  ManagedExecution;

 __declspec(property(get=get_OnLateUpdateMethod)) ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*  OnLateUpdateMethod;

 __declspec(property(get=get_OnUpdateMethod)) ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*  OnUpdateMethod;

 __declspec(property(get=get_Outdated)) bool  Outdated;

 __declspec(property(get=get_OverridePosition, put=set_OverridePosition)) bool  OverridePosition;

 __declspec(property(get=get_Placement, put=set_Placement)) ::WaveHarmonic::Crest::Placement  Placement;

 __declspec(property(get=get_Position, put=set_Position)) ::UnityEngine::Vector3  Position;

 __declspec(property(get=get_QualitySettingsOverride)) ::WaveHarmonic::Crest::QualitySettingsOverride*  QualitySettingsOverride;

 __declspec(property(get=get_RealtimeTexture)) ::UnityW<::UnityEngine::RenderTexture>  RealtimeTexture;

 __declspec(property(get=get_Rect)) ::UnityEngine::Rect  Rect;

 __declspec(property(get=get_RefreshMode, put=set_RefreshMode)) ::WaveHarmonic::Crest::DepthProbeRefreshMode  RefreshMode;

 __declspec(property(get=get_Resolution, put=set_Resolution)) int32_t  Resolution;

 __declspec(property(get=get_Rotation)) ::UnityEngine::Quaternion  Rotation;

 __declspec(property(get=get_SavedTexture, put=set_SavedTexture)) ::UnityW<::UnityEngine::Texture2D>  SavedTexture;

 __declspec(property(get=get_Scale, put=set_Scale)) ::UnityEngine::Vector2  Scale;

 __declspec(property(get=get_TargetTexture)) ::UnityW<::UnityEngine::RenderTexture>  TargetTexture;

 __declspec(property(get=get_Texture)) ::UnityW<::UnityEngine::Texture>  Texture;

 __declspec(property(get=get_Type, put=set_Type)) ::WaveHarmonic::Crest::DepthProbeMode  Type;

 __declspec(property(get=get_Version)) int32_t  Version;

/// @brief Field _AdditionalJumpFloodRounds, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__AdditionalJumpFloodRounds, put=__cordl_internal_set__AdditionalJumpFloodRounds)) int32_t  _AdditionalJumpFloodRounds;

/// @brief Field _Camera, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__Camera, put=__cordl_internal_set__Camera)) ::UnityW<::UnityEngine::Camera>  _Camera;

/// @brief Field _CaptureRange, offset 0x64, size 0x8 
 __declspec(property(get=__cordl_internal_get__CaptureRange, put=__cordl_internal_set__CaptureRange)) ::UnityEngine::Vector2  _CaptureRange;

/// @brief Field _CommandBuffer, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__CommandBuffer, put=__cordl_internal_set__CommandBuffer)) ::UnityEngine::Rendering::CommandBuffer*  _CommandBuffer;

/// @brief Field _CurrentStateHash, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentStateHash, put=__cordl_internal_set__CurrentStateHash)) int32_t  _CurrentStateHash;

/// @brief Field _Debug, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__Debug, put=__cordl_internal_set__Debug)) ::WaveHarmonic::Crest::DepthProbe_DebugFields*  _Debug;

/// @brief Field _EnableBackFaceInclusion, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__EnableBackFaceInclusion, put=__cordl_internal_set__EnableBackFaceInclusion)) bool  _EnableBackFaceInclusion;

/// @brief Field _ExternallyManaged, offset 0xd2, size 0x1 
 __declspec(property(get=__cordl_internal_get__ExternallyManaged, put=__cordl_internal_set__ExternallyManaged)) bool  _ExternallyManaged;

/// @brief Field _ExternallyManagedExecution, offset 0xd3, size 0x1 
 __declspec(property(get=__cordl_internal_get__ExternallyManagedExecution, put=__cordl_internal_set__ExternallyManagedExecution)) bool  _ExternallyManagedExecution;

/// @brief Field _FillHolesCaptureHeight, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__FillHolesCaptureHeight, put=__cordl_internal_set__FillHolesCaptureHeight)) float_t  _FillHolesCaptureHeight;

/// @brief Field _GenerateSignedDistanceField, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get__GenerateSignedDistanceField, put=__cordl_internal_set__GenerateSignedDistanceField)) bool  _GenerateSignedDistanceField;

/// @brief Field _Input, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Input, put=__cordl_internal_set__Input)) ::WaveHarmonic::Crest::DepthProbe_Input*  _Input;

/// @brief Field _Layers, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Layers, put=__cordl_internal_set__Layers)) ::UnityEngine::LayerMask  _Layers;

/// @brief Field _Managed, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get__Managed, put=__cordl_internal_set__Managed)) bool  _Managed;

/// @brief Field <ManagedExecution>k__BackingField, offset 0xd1, size 0x1 
 __declspec(property(get=__cordl_internal_get__ManagedExecution_k__BackingField, put=__cordl_internal_set__ManagedExecution_k__BackingField)) bool  _ManagedExecution_k__BackingField;

/// @brief Field <OnAfterRender>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__OnAfterRender_k__BackingField, put=setStaticF__OnAfterRender_k__BackingField)) ::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*  _OnAfterRender_k__BackingField;

/// @brief Field <OnBakeRequest>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__OnBakeRequest_k__BackingField, put=setStaticF__OnBakeRequest_k__BackingField)) ::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*  _OnBakeRequest_k__BackingField;

/// @brief Field <OnBeforeRender>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__OnBeforeRender_k__BackingField, put=setStaticF__OnBeforeRender_k__BackingField)) ::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*  _OnBeforeRender_k__BackingField;

/// @brief Field _OverridePosition, offset 0xd4, size 0x1 
 __declspec(property(get=__cordl_internal_get__OverridePosition, put=__cordl_internal_set__OverridePosition)) bool  _OverridePosition;

/// @brief Field _Placement, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__Placement, put=__cordl_internal_set__Placement)) ::WaveHarmonic::Crest::Placement  _Placement;

/// @brief Field _Position, offset 0xd8, size 0xc 
 __declspec(property(get=__cordl_internal_get__Position, put=__cordl_internal_set__Position)) ::UnityEngine::Vector3  _Position;

/// @brief Field _PreviousPosition, offset 0xf8, size 0xc 
 __declspec(property(get=__cordl_internal_get__PreviousPosition, put=__cordl_internal_set__PreviousPosition)) ::UnityEngine::Vector3  _PreviousPosition;

/// @brief Field _QualitySettingsOverride, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__QualitySettingsOverride, put=__cordl_internal_set__QualitySettingsOverride)) ::WaveHarmonic::Crest::QualitySettingsOverride*  _QualitySettingsOverride;

/// @brief Field _RealtimeTexture, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__RealtimeTexture, put=__cordl_internal_set__RealtimeTexture)) ::UnityW<::UnityEngine::RenderTexture>  _RealtimeTexture;

/// @brief Field _RecalculateBounds, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get__RecalculateBounds, put=__cordl_internal_set__RecalculateBounds)) bool  _RecalculateBounds;

/// @brief Field _Rect, offset 0xa0, size 0x10 
 __declspec(property(get=__cordl_internal_get__Rect, put=__cordl_internal_set__Rect)) ::UnityEngine::Rect  _Rect;

/// @brief Field _RefreshMode, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__RefreshMode, put=__cordl_internal_set__RefreshMode)) ::WaveHarmonic::Crest::DepthProbeRefreshMode  _RefreshMode;

/// @brief Field _RenderedStateHash, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get__RenderedStateHash, put=__cordl_internal_set__RenderedStateHash)) int32_t  _RenderedStateHash;

/// @brief Field _Resolution, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__Resolution, put=__cordl_internal_set__Resolution)) int32_t  _Resolution;

/// @brief Field _SavedTexture, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__SavedTexture, put=__cordl_internal_set__SavedTexture)) ::UnityW<::UnityEngine::Texture2D>  _SavedTexture;

/// @brief Field _Scale, offset 0xe4, size 0x8 
 __declspec(property(get=__cordl_internal_get__Scale, put=__cordl_internal_set__Scale)) ::UnityEngine::Vector2  _Scale;

/// @brief Field _TargetTexture, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__TargetTexture, put=__cordl_internal_set__TargetTexture)) ::UnityW<::UnityEngine::RenderTexture>  _TargetTexture;

/// @brief Field _Type, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__Type, put=__cordl_internal_set__Type)) ::WaveHarmonic::Crest::DepthProbeMode  _Type;

/// @brief Field s_RenderingCamera, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_RenderingCamera, put=setStaticF_s_RenderingCamera)) bool  s_RenderingCamera;

/// @brief Method ApplyJumpFlood, addr 0x182554630, size 0x170, virtual false, abstract: false, final false
inline void ApplyJumpFlood(::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::ComputeShader*  shader, int32_t  kernel, int32_t  jumpSize, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  target) ;

/// @brief Method Bind, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void Bind(T  wrapper) ;

/// @brief Method Disable, addr 0x1825547a0, size 0x140, virtual true, abstract: false, final false
inline void Disable() ;

/// @brief Method ForcePopulate, addr 0x1825548e0, size 0x250, virtual false, abstract: false, final false
inline void ForcePopulate() ;

/// @brief Method GetPlacement, addr 0x182554b30, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::Placement GetPlacement() ;

/// @brief Method GetRefreshMode, addr 0x182554b40, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::DepthProbeRefreshMode GetRefreshMode() ;

/// @brief Method HashState, addr 0x182554b50, size 0x200, virtual false, abstract: false, final false
inline void HashState(::by_ref<int32_t>  hash) ;

/// @brief Method InitObjects, addr 0x182554d50, size 0x820, virtual false, abstract: false, final false
inline bool InitObjects() ;

/// @brief Method Initialize, addr 0x182555570, size 0x2a0, virtual true, abstract: false, final false
inline void Initialize() ;

/// @brief Method IsTextureOutdated, addr 0x182555810, size 0xd0, virtual false, abstract: false, final false
inline bool IsTextureOutdated(::UnityEngine::RenderTexture*  texture, bool  target) ;

/// @brief Method MakeRT, addr 0x1825558e0, size 0x1a0, virtual false, abstract: false, final false
inline void MakeRT(::UnityEngine::RenderTexture*  texture, bool  target) ;

static inline ::WaveHarmonic::Crest::DepthProbe* New_ctor() ;

/// @brief Method OnBeforeBuildCommandBuffer, addr 0x182555a80, size 0x50, virtual false, abstract: false, final false
inline void OnBeforeBuildCommandBuffer(::WaveHarmonic::Crest::WaterRenderer*  water, ::UnityEngine::Camera*  camera) ;

/// @brief Method OnDestroy, addr 0x182555ad0, size 0x60, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnLateUpdate, addr 0x182555b30, size 0x30, virtual false, abstract: false, final false
inline void OnLateUpdate(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method OnMigrate, addr 0x182555b60, size 0x20, virtual true, abstract: false, final false
inline void OnMigrate() ;

/// @brief Method OnStart, addr 0x182555b80, size 0x40, virtual true, abstract: false, final false
inline void OnStart() ;

/// @brief Method OnUpdate, addr 0x182555bc0, size 0x90, virtual false, abstract: false, final false
inline void OnUpdate(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method Populate, addr 0x182555c50, size 0x40, virtual false, abstract: false, final false
inline void Populate() ;

/// @brief Method RenderDepthIntoProbe, addr 0x182555c90, size 0x7d0, virtual false, abstract: false, final false
inline void RenderDepthIntoProbe(int32_t  kernel, float_t  height) ;

/// @brief Method RenderSignedDistanceField, addr 0x182556460, size 0xbd0, virtual false, abstract: false, final false
inline void RenderSignedDistanceField(bool  inverted) ;

/// @brief Method SetDirty, addr 0x182557030, size 0x20, virtual false, abstract: false, final false
inline void SetDirty(::UnityEngine::LayerMask  previous, ::UnityEngine::LayerMask  current) ;

/// @brief Method SetDirty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename I>
inline void SetDirty(I  previous, I  current) ;

/// @brief Method SetUpCameraURP, addr 0x182557050, size 0x50, virtual false, abstract: false, final false
inline void SetUpCameraURP() ;

/// @brief Method UpdatePosition, addr 0x1825570a0, size 0x3c0, virtual false, abstract: false, final false
inline void UpdatePosition(::WaveHarmonic::Crest::WaterRenderer*  water, ::UnityEngine::Transform*  target) ;

constexpr int32_t const& __cordl_internal_get__AdditionalJumpFloodRounds() const;

constexpr int32_t& __cordl_internal_get__AdditionalJumpFloodRounds() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__Camera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__Camera() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__CaptureRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__CaptureRange() ;

constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get__CommandBuffer() const;

constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get__CommandBuffer() ;

constexpr int32_t const& __cordl_internal_get__CurrentStateHash() const;

constexpr int32_t& __cordl_internal_get__CurrentStateHash() ;

constexpr ::WaveHarmonic::Crest::DepthProbe_DebugFields* const& __cordl_internal_get__Debug() const;

constexpr ::WaveHarmonic::Crest::DepthProbe_DebugFields*& __cordl_internal_get__Debug() ;

constexpr bool const& __cordl_internal_get__EnableBackFaceInclusion() const;

constexpr bool& __cordl_internal_get__EnableBackFaceInclusion() ;

constexpr bool const& __cordl_internal_get__ExternallyManaged() const;

constexpr bool& __cordl_internal_get__ExternallyManaged() ;

constexpr bool const& __cordl_internal_get__ExternallyManagedExecution() const;

constexpr bool& __cordl_internal_get__ExternallyManagedExecution() ;

constexpr float_t const& __cordl_internal_get__FillHolesCaptureHeight() const;

constexpr float_t& __cordl_internal_get__FillHolesCaptureHeight() ;

constexpr bool const& __cordl_internal_get__GenerateSignedDistanceField() const;

constexpr bool& __cordl_internal_get__GenerateSignedDistanceField() ;

constexpr ::WaveHarmonic::Crest::DepthProbe_Input* const& __cordl_internal_get__Input() const;

constexpr ::WaveHarmonic::Crest::DepthProbe_Input*& __cordl_internal_get__Input() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__Layers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get__Layers() ;

constexpr bool const& __cordl_internal_get__Managed() const;

constexpr bool& __cordl_internal_get__Managed() ;

constexpr bool const& __cordl_internal_get__ManagedExecution_k__BackingField() const;

constexpr bool& __cordl_internal_get__ManagedExecution_k__BackingField() ;

constexpr bool const& __cordl_internal_get__OverridePosition() const;

constexpr bool& __cordl_internal_get__OverridePosition() ;

constexpr ::WaveHarmonic::Crest::Placement const& __cordl_internal_get__Placement() const;

constexpr ::WaveHarmonic::Crest::Placement& __cordl_internal_get__Placement() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__Position() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__Position() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__PreviousPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__PreviousPosition() ;

constexpr ::WaveHarmonic::Crest::QualitySettingsOverride* const& __cordl_internal_get__QualitySettingsOverride() const;

constexpr ::WaveHarmonic::Crest::QualitySettingsOverride*& __cordl_internal_get__QualitySettingsOverride() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__RealtimeTexture() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__RealtimeTexture() ;

constexpr bool const& __cordl_internal_get__RecalculateBounds() const;

constexpr bool& __cordl_internal_get__RecalculateBounds() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get__Rect() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get__Rect() ;

constexpr ::WaveHarmonic::Crest::DepthProbeRefreshMode const& __cordl_internal_get__RefreshMode() const;

constexpr ::WaveHarmonic::Crest::DepthProbeRefreshMode& __cordl_internal_get__RefreshMode() ;

constexpr int32_t const& __cordl_internal_get__RenderedStateHash() const;

constexpr int32_t& __cordl_internal_get__RenderedStateHash() ;

constexpr int32_t const& __cordl_internal_get__Resolution() const;

constexpr int32_t& __cordl_internal_get__Resolution() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__SavedTexture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__SavedTexture() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__Scale() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__Scale() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__TargetTexture() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__TargetTexture() ;

constexpr ::WaveHarmonic::Crest::DepthProbeMode const& __cordl_internal_get__Type() const;

constexpr ::WaveHarmonic::Crest::DepthProbeMode& __cordl_internal_get__Type() ;

constexpr void __cordl_internal_set__AdditionalJumpFloodRounds(int32_t  value) ;

constexpr void __cordl_internal_set__Camera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__CaptureRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__CommandBuffer(::UnityEngine::Rendering::CommandBuffer*  value) ;

constexpr void __cordl_internal_set__CurrentStateHash(int32_t  value) ;

constexpr void __cordl_internal_set__Debug(::WaveHarmonic::Crest::DepthProbe_DebugFields*  value) ;

constexpr void __cordl_internal_set__EnableBackFaceInclusion(bool  value) ;

constexpr void __cordl_internal_set__ExternallyManaged(bool  value) ;

constexpr void __cordl_internal_set__ExternallyManagedExecution(bool  value) ;

constexpr void __cordl_internal_set__FillHolesCaptureHeight(float_t  value) ;

constexpr void __cordl_internal_set__GenerateSignedDistanceField(bool  value) ;

constexpr void __cordl_internal_set__Input(::WaveHarmonic::Crest::DepthProbe_Input*  value) ;

constexpr void __cordl_internal_set__Layers(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set__Managed(bool  value) ;

constexpr void __cordl_internal_set__ManagedExecution_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__OverridePosition(bool  value) ;

constexpr void __cordl_internal_set__Placement(::WaveHarmonic::Crest::Placement  value) ;

constexpr void __cordl_internal_set__Position(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__PreviousPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__QualitySettingsOverride(::WaveHarmonic::Crest::QualitySettingsOverride*  value) ;

constexpr void __cordl_internal_set__RealtimeTexture(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set__RecalculateBounds(bool  value) ;

constexpr void __cordl_internal_set__Rect(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set__RefreshMode(::WaveHarmonic::Crest::DepthProbeRefreshMode  value) ;

constexpr void __cordl_internal_set__RenderedStateHash(int32_t  value) ;

constexpr void __cordl_internal_set__Resolution(int32_t  value) ;

constexpr void __cordl_internal_set__SavedTexture(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set__Scale(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__TargetTexture(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set__Type(::WaveHarmonic::Crest::DepthProbeMode  value) ;

/// @brief Method .ctor, addr 0x182557460, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>* getStaticF__OnAfterRender_k__BackingField() ;

static inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>* getStaticF__OnBakeRequest_k__BackingField() ;

static inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>* getStaticF__OnBeforeRender_k__BackingField() ;

static inline bool getStaticF_s_RenderingCamera() ;

/// @brief Method get_AdditionalJumpFloodRounds, addr 0x180bb89c0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_AdditionalJumpFloodRounds() ;

/// @brief Method get_CaptureRange, addr 0x1817eecf0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_CaptureRange() ;

/// @brief Method get_EnableBackFaceInclusion, addr 0x180352b00, size 0x10, virtual false, abstract: false, final false
inline bool get_EnableBackFaceInclusion() ;

/// @brief Method get_ExternallyManaged, addr 0x181d97270, size 0x10, virtual false, abstract: false, final false
inline bool get_ExternallyManaged() ;

/// @brief Method get_ExternallyManagedExecution, addr 0x182557520, size 0x10, virtual false, abstract: false, final false
inline bool get_ExternallyManagedExecution() ;

/// @brief Method get_FillHolesCaptureHeight, addr 0x180474bd0, size 0x10, virtual false, abstract: false, final false
inline float_t get_FillHolesCaptureHeight() ;

/// @brief Method get_FinalFormat, addr 0x182557530, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_FinalFormat() ;

/// @brief Method get_GenerateSignedDistanceField, addr 0x1803b2d60, size 0x10, virtual false, abstract: false, final false
inline bool get_GenerateSignedDistanceField() ;

/// @brief Method get_Layers, addr 0x180503b40, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_Layers() ;

/// @brief Method get_Managed, addr 0x180352b10, size 0x10, virtual false, abstract: false, final false
inline bool get_Managed() ;

/// @brief Method get_ManagedExecution, addr 0x1820c7c10, size 0x10, virtual false, abstract: false, final false
inline bool get_ManagedExecution() ;

/// @brief Method get_OnAfterRender, addr 0x1825575a0, size 0x20, virtual false, abstract: false, final false
static inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>* get_OnAfterRender() ;

/// @brief Method get_OnBakeRequest, addr 0x1825575c0, size 0x20, virtual false, abstract: false, final false
static inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>* get_OnBakeRequest() ;

/// @brief Method get_OnBeforeRender, addr 0x1825575e0, size 0x20, virtual false, abstract: false, final false
static inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>* get_OnBeforeRender() ;

/// @brief Method get_OnLateUpdateMethod, addr 0x182557600, size 0x40, virtual true, abstract: false, final false
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* get_OnLateUpdateMethod() ;

/// @brief Method get_OnUpdateMethod, addr 0x182557640, size 0x40, virtual true, abstract: false, final false
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* get_OnUpdateMethod() ;

/// @brief Method get_Outdated, addr 0x182557680, size 0x10, virtual false, abstract: false, final false
inline bool get_Outdated() ;

/// @brief Method get_OverridePosition, addr 0x180371730, size 0x10, virtual false, abstract: false, final false
inline bool get_OverridePosition() ;

/// @brief Method get_Placement, addr 0x182554b30, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::Placement get_Placement() ;

/// @brief Method get_Position, addr 0x182557690, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Position() ;

/// @brief Method get_QualitySettingsOverride, addr 0x1803a74e0, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::QualitySettingsOverride* get_QualitySettingsOverride() ;

/// @brief Method get_RealtimeTexture, addr 0x1802edc30, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> get_RealtimeTexture() ;

/// @brief Method get_Rect, addr 0x182557750, size 0x1b0, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get_Rect() ;

/// @brief Method get_RefreshMode, addr 0x182554b40, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::DepthProbeRefreshMode get_RefreshMode() ;

/// @brief Method get_Resolution, addr 0x18039fc60, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Resolution() ;

/// @brief Method get_Rotation, addr 0x182557900, size 0x150, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_Rotation() ;

/// @brief Method get_SavedTexture, addr 0x1802ec4c0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> get_SavedTexture() ;

/// @brief Method get_Scale, addr 0x182557a50, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_Scale() ;

/// @brief Method get_TargetTexture, addr 0x1803223b0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> get_TargetTexture() ;

/// @brief Method get_Texture, addr 0x182557ab0, size 0x20, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture> get_Texture() ;

/// @brief Method get_Type, addr 0x1803d7410, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::DepthProbeMode get_Type() ;

/// @brief Method get_Version, addr 0x182550980, size 0x20, virtual true, abstract: false, final false
inline int32_t get_Version() ;

static inline void setStaticF__OnAfterRender_k__BackingField(::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*  value) ;

static inline void setStaticF__OnBakeRequest_k__BackingField(::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*  value) ;

static inline void setStaticF__OnBeforeRender_k__BackingField(::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*  value) ;

static inline void setStaticF_s_RenderingCamera(bool  value) ;

/// @brief Method set_AdditionalJumpFloodRounds, addr 0x182557ad0, size 0x20, virtual false, abstract: false, final false
inline void set_AdditionalJumpFloodRounds(int32_t  value) ;

/// @brief Method set_CaptureRange, addr 0x182557af0, size 0x30, virtual false, abstract: false, final false
inline void set_CaptureRange(::UnityEngine::Vector2  value) ;

/// @brief Method set_EnableBackFaceInclusion, addr 0x182557b20, size 0x20, virtual false, abstract: false, final false
inline void set_EnableBackFaceInclusion(bool  value) ;

/// @brief Method set_ExternallyManaged, addr 0x182557b50, size 0x20, virtual false, abstract: false, final false
inline void set_ExternallyManaged(bool  value) ;

/// @brief Method set_ExternallyManagedExecution, addr 0x182557b40, size 0x10, virtual false, abstract: false, final false
inline void set_ExternallyManagedExecution(bool  value) ;

/// @brief Method set_FillHolesCaptureHeight, addr 0x182557b70, size 0x20, virtual false, abstract: false, final false
inline void set_FillHolesCaptureHeight(float_t  value) ;

/// @brief Method set_GenerateSignedDistanceField, addr 0x182557b90, size 0x20, virtual false, abstract: false, final false
inline void set_GenerateSignedDistanceField(bool  value) ;

/// @brief Method set_Layers, addr 0x182557bb0, size 0x30, virtual false, abstract: false, final false
inline void set_Layers(::UnityEngine::LayerMask  value) ;

/// @brief Method set_Managed, addr 0x182557be0, size 0x20, virtual false, abstract: false, final false
inline void set_Managed(bool  value) ;

/// @brief Method set_ManagedExecution, addr 0x1820c8270, size 0x10, virtual false, abstract: false, final false
inline void set_ManagedExecution(bool  value) ;

/// @brief Method set_OnAfterRender, addr 0x182557c00, size 0x30, virtual false, abstract: false, final false
static inline void set_OnAfterRender(::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*  value) ;

/// @brief Method set_OnBakeRequest, addr 0x182557c30, size 0x30, virtual false, abstract: false, final false
static inline void set_OnBakeRequest(::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*  value) ;

/// @brief Method set_OnBeforeRender, addr 0x182557c60, size 0x30, virtual false, abstract: false, final false
static inline void set_OnBeforeRender(::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*  value) ;

/// @brief Method set_OverridePosition, addr 0x182557c90, size 0x30, virtual false, abstract: false, final false
inline void set_OverridePosition(bool  value) ;

/// @brief Method set_Placement, addr 0x180497a90, size 0x10, virtual false, abstract: false, final false
inline void set_Placement(::WaveHarmonic::Crest::Placement  value) ;

/// @brief Method set_Position, addr 0x182557cc0, size 0xa0, virtual false, abstract: false, final false
inline void set_Position(::UnityEngine::Vector3  value) ;

/// @brief Method set_RefreshMode, addr 0x1802e0d10, size 0x10, virtual false, abstract: false, final false
inline void set_RefreshMode(::WaveHarmonic::Crest::DepthProbeRefreshMode  value) ;

/// @brief Method set_Resolution, addr 0x182557d60, size 0x20, virtual false, abstract: false, final false
inline void set_Resolution(int32_t  value) ;

/// @brief Method set_SavedTexture, addr 0x1803117a0, size 0x10, virtual false, abstract: false, final false
inline void set_SavedTexture(::UnityEngine::Texture2D*  value) ;

/// @brief Method set_Scale, addr 0x182557d80, size 0x60, virtual false, abstract: false, final false
inline void set_Scale(::UnityEngine::Vector2  value) ;

/// @brief Method set_Type, addr 0x1803d75f0, size 0x10, virtual false, abstract: false, final false
inline void set_Type(::WaveHarmonic::Crest::DepthProbeMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DepthProbe() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DepthProbe", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DepthProbe(DepthProbe && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DepthProbe", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DepthProbe(DepthProbe const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16517};

/// @brief Field k_CopyKernel offset 0xffffffff size 0x4
static constexpr int32_t  k_CopyKernel{static_cast<int32_t>(0x0)};

/// @brief Field k_FillKernel offset 0xffffffff size 0x4
static constexpr int32_t  k_FillKernel{static_cast<int32_t>(0x1)};

/// @brief Field _Type, offset: 0x50, size: 0x4, def value: None
 ::WaveHarmonic::Crest::DepthProbeMode  ____Type;

/// @brief Field _Placement, offset: 0x54, size: 0x4, def value: None
 ::WaveHarmonic::Crest::Placement  ____Placement;

/// @brief Field _RefreshMode, offset: 0x58, size: 0x4, def value: None
 ::WaveHarmonic::Crest::DepthProbeRefreshMode  ____RefreshMode;

/// @brief Field _Layers, offset: 0x5c, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ____Layers;

/// @brief Field _Resolution, offset: 0x60, size: 0x4, def value: None
 int32_t  ____Resolution;

/// @brief Field _CaptureRange, offset: 0x64, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____CaptureRange;

/// @brief Field _FillHolesCaptureHeight, offset: 0x6c, size: 0x4, def value: None
 float_t  ____FillHolesCaptureHeight;

/// @brief Field _EnableBackFaceInclusion, offset: 0x70, size: 0x1, def value: None
 bool  ____EnableBackFaceInclusion;

/// @brief Field _QualitySettingsOverride, offset: 0x78, size: 0x8, def value: None
 ::WaveHarmonic::Crest::QualitySettingsOverride*  ____QualitySettingsOverride;

/// @brief Field _SavedTexture, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ____SavedTexture;

/// @brief Field _GenerateSignedDistanceField, offset: 0x88, size: 0x1, def value: None
 bool  ____GenerateSignedDistanceField;

/// @brief Field _AdditionalJumpFloodRounds, offset: 0x8c, size: 0x4, def value: None
 int32_t  ____AdditionalJumpFloodRounds;

/// @brief Field _Debug, offset: 0x90, size: 0x8, def value: None
 ::WaveHarmonic::Crest::DepthProbe_DebugFields*  ____Debug;

/// @brief Field _Camera, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____Camera;

/// @brief Field _Rect, offset: 0xa0, size: 0x10, def value: None
 ::UnityEngine::Rect  ____Rect;

/// @brief Field _RecalculateBounds, offset: 0xb0, size: 0x1, def value: None
 bool  ____RecalculateBounds;

/// @brief Field _CommandBuffer, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::Rendering::CommandBuffer*  ____CommandBuffer;

/// @brief Field _RealtimeTexture, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ____RealtimeTexture;

/// @brief Field _TargetTexture, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ____TargetTexture;

/// @brief Field _Managed, offset: 0xd0, size: 0x1, def value: None
 bool  ____Managed;

/// @brief Field <ManagedExecution>k__BackingField, offset: 0xd1, size: 0x1, def value: None
 bool  ____ManagedExecution_k__BackingField;

/// @brief Field _ExternallyManaged, offset: 0xd2, size: 0x1, def value: None
 bool  ____ExternallyManaged;

/// @brief Field _ExternallyManagedExecution, offset: 0xd3, size: 0x1, def value: None
 bool  ____ExternallyManagedExecution;

/// @brief Field _OverridePosition, offset: 0xd4, size: 0x1, def value: None
 bool  ____OverridePosition;

/// @brief Field _Position, offset: 0xd8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____Position;

/// @brief Field _Scale, offset: 0xe4, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____Scale;

/// @brief Field _Input, offset: 0xf0, size: 0x8, def value: None
 ::WaveHarmonic::Crest::DepthProbe_Input*  ____Input;

/// @brief Field _PreviousPosition, offset: 0xf8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____PreviousPosition;

/// @brief Field _RenderedStateHash, offset: 0x104, size: 0x4, def value: None
 int32_t  ____RenderedStateHash;

/// @brief Field _CurrentStateHash, offset: 0x108, size: 0x4, def value: None
 int32_t  ____CurrentStateHash;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::DepthProbe, ____Type) == 0x50, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthProbe, ____Placement) == 0x54, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthProbe, ____RefreshMode) == 0x58, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthProbe, ____Layers) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthProbe, ____Resolution) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthProbe, ____CaptureRange) == 0x64, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthProbe, ____FillHolesCaptureHeight) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthProbe, ____EnableBackFaceInclusion) == 0x70, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthProbe, ____QualitySettingsOverride) == 0x78, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthProbe, ____SavedTexture) == 0x80, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthProbe, ____GenerateSignedDistanceField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthProbe, ____AdditionalJumpFloodRounds) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthProbe, ____Debug) == 0x90, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthProbe, ____Camera) == 0x98, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthProbe, ____Rect) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthProbe, ____RecalculateBounds) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthProbe, ____CommandBuffer) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthProbe, ____RealtimeTexture) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthProbe, ____TargetTexture) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthProbe, ____Managed) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthProbe, ____ManagedExecution_k__BackingField) == 0xd1, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthProbe, ____ExternallyManaged) == 0xd2, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthProbe, ____ExternallyManagedExecution) == 0xd3, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthProbe, ____OverridePosition) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthProbe, ____Position) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthProbe, ____Scale) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthProbe, ____Input) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthProbe, ____PreviousPosition) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthProbe, ____RenderedStateHash) == 0x104, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthProbe, ____CurrentStateHash) == 0x108, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::DepthProbe) == 0x110, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest

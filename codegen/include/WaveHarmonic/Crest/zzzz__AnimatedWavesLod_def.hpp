#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/AnimatedWavesLod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionLayers_def.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionSource_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Lod_1_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaveSampling_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimatedWavesLod)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class RenderTexture;
}
namespace WaveHarmonic::Crest::Utility {
template<typename TKey,typename TValue>
class SortedList_2;
}
namespace WaveHarmonic::Crest {
class AnimatedWavesLod_ShaderIDs;
}
namespace WaveHarmonic::Crest {
struct AnimatedWavesLod_WavelengthFilter;
}
namespace WaveHarmonic::Crest {
class BakedWaveData;
}
namespace WaveHarmonic::Crest {
struct CollisionLayers;
}
namespace WaveHarmonic::Crest {
struct CollisionSource;
}
namespace WaveHarmonic::Crest {
class ICollisionProvider;
}
namespace WaveHarmonic::Crest {
class ILodInput;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
namespace WaveHarmonic::Crest {
class WaterResources_ShapeCombineCompute;
}
namespace WaveHarmonic::Crest {
struct WaveSampling;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class AnimatedWavesLod;
}
namespace WaveHarmonic::Crest {
class AnimatedWavesLod_ShaderIDs;
}
namespace WaveHarmonic::Crest {
struct AnimatedWavesLod_WavelengthFilter;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::AnimatedWavesLod*);
MARK_REF_T(::WaveHarmonic::Crest::AnimatedWavesLod_ShaderIDs*);
MARK_VAL_T(::WaveHarmonic::Crest::AnimatedWavesLod_WavelengthFilter);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::AnimatedWavesLod*, "WaveHarmonic.Crest", "AnimatedWavesLod");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::AnimatedWavesLod_ShaderIDs*, "WaveHarmonic.Crest", "AnimatedWavesLod/ShaderIDs");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::AnimatedWavesLod_WavelengthFilter, "WaveHarmonic.Crest", "AnimatedWavesLod/WavelengthFilter");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.AnimatedWavesLod/ShaderIDs
class CORDL_TYPE AnimatedWavesLod_ShaderIDs : public ::System::Object {
public:
// Declarations
/// @brief Field s_AttenuationInShallows, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_AttenuationInShallows, put=setStaticF_s_AttenuationInShallows)) int32_t  s_AttenuationInShallows;

/// @brief Field s_DynamicWavesTarget, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_DynamicWavesTarget, put=setStaticF_s_DynamicWavesTarget)) int32_t  s_DynamicWavesTarget;

/// @brief Field s_WaveBuffer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_WaveBuffer, put=setStaticF_s_WaveBuffer)) int32_t  s_WaveBuffer;

static inline int32_t getStaticF_s_AttenuationInShallows() ;

static inline int32_t getStaticF_s_DynamicWavesTarget() ;

static inline int32_t getStaticF_s_WaveBuffer() ;

static inline void setStaticF_s_AttenuationInShallows(int32_t  value) ;

static inline void setStaticF_s_DynamicWavesTarget(int32_t  value) ;

static inline void setStaticF_s_WaveBuffer(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimatedWavesLod_ShaderIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimatedWavesLod_ShaderIDs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimatedWavesLod_ShaderIDs(AnimatedWavesLod_ShaderIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimatedWavesLod_ShaderIDs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimatedWavesLod_ShaderIDs(AnimatedWavesLod_ShaderIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16480};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::AnimatedWavesLod_ShaderIDs) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.AnimatedWavesLod/WavelengthFilter
struct CORDL_TYPE AnimatedWavesLod_WavelengthFilter {
public:
// Declarations
/// @brief Method .ctor, addr 0x182563d70, size 0x120, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::WaterRenderer*  water, int32_t  slice, int32_t  resolution) ;

// Ctor Parameters []
// @brief default ctor
constexpr AnimatedWavesLod_WavelengthFilter() ;

// Ctor Parameters [CppParam { name: "_Minimum", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_Maximum", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_TransitionThreshold", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_ViewerAltitudeLevelAlpha", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_Slice", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_Slices", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_HighQualityCombine", ty: "bool", modifiers: "", def_value: None }]
constexpr AnimatedWavesLod_WavelengthFilter(float_t  _Minimum, float_t  _Maximum, float_t  _TransitionThreshold, float_t  _ViewerAltitudeLevelAlpha, int32_t  _Slice, int32_t  _Slices, bool  _HighQualityCombine) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16481};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field _Minimum, offset: 0x0, size: 0x4, def value: None
 float_t  _Minimum;

/// @brief Field _Maximum, offset: 0x4, size: 0x4, def value: None
 float_t  _Maximum;

/// @brief Field _TransitionThreshold, offset: 0x8, size: 0x4, def value: None
 float_t  _TransitionThreshold;

/// @brief Field _ViewerAltitudeLevelAlpha, offset: 0xc, size: 0x4, def value: None
 float_t  _ViewerAltitudeLevelAlpha;

/// @brief Field _Slice, offset: 0x10, size: 0x4, def value: None
 int32_t  _Slice;

/// @brief Field _Slices, offset: 0x14, size: 0x4, def value: None
 int32_t  _Slices;

/// @brief Field _HighQualityCombine, offset: 0x18, size: 0x1, def value: None
 bool  _HighQualityCombine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::AnimatedWavesLod_WavelengthFilter, _Minimum) == 0x0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::AnimatedWavesLod_WavelengthFilter, _Maximum) == 0x4, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::AnimatedWavesLod_WavelengthFilter, _TransitionThreshold) == 0x8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::AnimatedWavesLod_WavelengthFilter, _ViewerAltitudeLevelAlpha) == 0xc, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::AnimatedWavesLod_WavelengthFilter, _Slice) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::AnimatedWavesLod_WavelengthFilter, _Slices) == 0x14, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::AnimatedWavesLod_WavelengthFilter, _HighQualityCombine) == 0x18, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::AnimatedWavesLod_WavelengthFilter) == 0x1c, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies UnityEngine.Color, WaveHarmonic.Crest.CollisionLayers, WaveHarmonic.Crest.CollisionSource, WaveHarmonic.Crest.Lod`1<T>, WaveHarmonic.Crest.WaveSampling
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.AnimatedWavesLod
class CORDL_TYPE AnimatedWavesLod : public ::WaveHarmonic::Crest::Lod_1<::WaveHarmonic::Crest::ICollisionProvider*> {
public:
// Declarations
using ShaderIDs = ::WaveHarmonic::Crest::AnimatedWavesLod_ShaderIDs;

using WavelengthFilter = ::WaveHarmonic::Crest::AnimatedWavesLod_WavelengthFilter;

 __declspec(property(get=get_AttenuationInShallows, put=set_AttenuationInShallows)) float_t  AttenuationInShallows;

 __declspec(property(get=get_BufferCount)) int32_t  BufferCount;

 __declspec(property(get=get_ClearColor)) ::UnityEngine::Color  ClearColor;

 __declspec(property(get=get_CollisionLayers, put=set_CollisionLayers)) ::WaveHarmonic::Crest::CollisionLayers  CollisionLayers;

 __declspec(property(get=get_CollisionSource, put=set_CollisionSource)) ::WaveHarmonic::Crest::CollisionSource  CollisionSource;

 __declspec(property(get=get_GizmoColor)) ::UnityEngine::Color  GizmoColor;

 __declspec(property(get=get_Inputs)) ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  Inputs;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_NeedToReadWriteTextureData)) bool  NeedToReadWriteTextureData;

 __declspec(property(get=get_PreserveWaveQuality)) bool  PreserveWaveQuality;

 __declspec(property(get=get_RequestedTextureFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat  RequestedTextureFormat;

 __declspec(property(get=get_ShallowsMaximumDepth, put=set_ShallowsMaximumDepth)) float_t  ShallowsMaximumDepth;

 __declspec(property(get=get_WaveResolutionMultiplier, put=set_WaveResolutionMultiplier)) float_t  WaveResolutionMultiplier;

 __declspec(property(get=get_WaveSampling, put=set_WaveSampling)) ::WaveHarmonic::Crest::WaveSampling  WaveSampling;

/// @brief Field _AdditionalCameraData, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__AdditionalCameraData, put=__cordl_internal_set__AdditionalCameraData)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::UnityW<::UnityEngine::RenderTexture>>*  _AdditionalCameraData;

/// @brief Field _AttenuationInShallows, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get__AttenuationInShallows, put=__cordl_internal_set__AttenuationInShallows)) float_t  _AttenuationInShallows;

/// @brief Field _BakedWaveData, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__BakedWaveData, put=__cordl_internal_set__BakedWaveData)) ::UnityW<::WaveHarmonic::Crest::BakedWaveData>  _BakedWaveData;

/// @brief Field _CollisionLayers, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__CollisionLayers, put=__cordl_internal_set__CollisionLayers)) ::WaveHarmonic::Crest::CollisionLayers  _CollisionLayers;

/// @brief Field _CollisionSource, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get__CollisionSource, put=__cordl_internal_set__CollisionSource)) ::WaveHarmonic::Crest::CollisionSource  _CollisionSource;

/// @brief Field _CombineShader, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__CombineShader, put=__cordl_internal_set__CombineShader)) ::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute*  _CombineShader;

/// @brief Field _PersistentDataTexture, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__PersistentDataTexture, put=__cordl_internal_set__PersistentDataTexture)) ::UnityW<::UnityEngine::RenderTexture>  _PersistentDataTexture;

/// @brief Field _ShallowsMaximumDepth, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get__ShallowsMaximumDepth, put=__cordl_internal_set__ShallowsMaximumDepth)) float_t  _ShallowsMaximumDepth;

/// @brief Field _WaveResolutionMultiplier, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get__WaveResolutionMultiplier, put=__cordl_internal_set__WaveResolutionMultiplier)) float_t  _WaveResolutionMultiplier;

/// @brief Field _WaveSampling, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get__WaveSampling, put=__cordl_internal_set__WaveSampling)) ::WaveHarmonic::Crest::WaveSampling  _WaveSampling;

 __declspec(property(get=get_ID)) ::StringW  _cordl_ID;

/// @brief Field s_Combine, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_Combine, put=setStaticF_s_Combine)) bool  s_Combine;

/// @brief Field s_GizmoColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_GizmoColor, put=setStaticF_s_GizmoColor)) ::UnityEngine::Color  s_GizmoColor;

/// @brief Field s_Inputs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Inputs, put=setStaticF_s_Inputs)) ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  s_Inputs;

/// @brief Method AfterExecute, addr 0x1825509d0, size 0x20, virtual true, abstract: false, final false
inline void AfterExecute() ;

/// @brief Method BuildCommandBuffer, addr 0x1825509f0, size 0x1310, virtual true, abstract: false, final false
inline void BuildCommandBuffer(::WaveHarmonic::Crest::WaterRenderer*  water, ::UnityEngine::Rendering::CommandBuffer*  buffer) ;

/// @brief Method CreateProvider, addr 0x182551d00, size 0x180, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::ICollisionProvider* CreateProvider(bool  onEnable) ;

/// @brief Method Destroy, addr 0x182551e80, size 0xd0, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method FilterByWavelength, addr 0x182552040, size 0x70, virtual false, abstract: false, final false
static inline float_t FilterByWavelength(::WaveHarmonic::Crest::AnimatedWavesLod_WavelengthFilter  filter, float_t  wavelength) ;

/// @brief Method FilterByWavelength, addr 0x182551f50, size 0xf0, virtual false, abstract: false, final false
static inline float_t FilterByWavelength(::WaveHarmonic::Crest::WaterRenderer*  water, int32_t  slice, float_t  wavelength, int32_t  resolution) ;

/// @brief Method GetWaveResolutionMultiplier, addr 0x1825520b0, size 0x60, virtual false, abstract: false, final false
inline float_t GetWaveResolutionMultiplier() ;

/// @brief Method Initialize, addr 0x182552110, size 0x100, virtual true, abstract: false, final false
inline void Initialize() ;

/// @brief Method LoadCameraData, addr 0x182552210, size 0xf0, virtual true, abstract: false, final false
inline void LoadCameraData(::UnityEngine::Camera*  camera) ;

static inline ::WaveHarmonic::Crest::AnimatedWavesLod* New_ctor() ;

/// @brief Method OnLoad, addr 0x182552300, size 0x50, virtual false, abstract: false, final false
static inline void OnLoad() ;

/// @brief Method RemoveCameraData, addr 0x182552350, size 0xa0, virtual true, abstract: false, final false
inline void RemoveCameraData(::UnityEngine::Camera*  camera) ;

/// @brief Method SetGlobals, addr 0x1825523f0, size 0xa0, virtual true, abstract: false, final false
inline void SetGlobals(bool  enable) ;

/// @brief Method StoreCameraData, addr 0x182552490, size 0x50, virtual true, abstract: false, final false
inline void StoreCameraData(::UnityEngine::Camera*  camera) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::UnityW<::UnityEngine::RenderTexture>>* const& __cordl_internal_get__AdditionalCameraData() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::UnityW<::UnityEngine::RenderTexture>>*& __cordl_internal_get__AdditionalCameraData() ;

constexpr float_t const& __cordl_internal_get__AttenuationInShallows() const;

constexpr float_t& __cordl_internal_get__AttenuationInShallows() ;

constexpr ::UnityW<::WaveHarmonic::Crest::BakedWaveData> const& __cordl_internal_get__BakedWaveData() const;

constexpr ::UnityW<::WaveHarmonic::Crest::BakedWaveData>& __cordl_internal_get__BakedWaveData() ;

constexpr ::WaveHarmonic::Crest::CollisionLayers const& __cordl_internal_get__CollisionLayers() const;

constexpr ::WaveHarmonic::Crest::CollisionLayers& __cordl_internal_get__CollisionLayers() ;

constexpr ::WaveHarmonic::Crest::CollisionSource const& __cordl_internal_get__CollisionSource() const;

constexpr ::WaveHarmonic::Crest::CollisionSource& __cordl_internal_get__CollisionSource() ;

constexpr ::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute* const& __cordl_internal_get__CombineShader() const;

constexpr ::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute*& __cordl_internal_get__CombineShader() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__PersistentDataTexture() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__PersistentDataTexture() ;

constexpr float_t const& __cordl_internal_get__ShallowsMaximumDepth() const;

constexpr float_t& __cordl_internal_get__ShallowsMaximumDepth() ;

constexpr float_t const& __cordl_internal_get__WaveResolutionMultiplier() const;

constexpr float_t& __cordl_internal_get__WaveResolutionMultiplier() ;

constexpr ::WaveHarmonic::Crest::WaveSampling const& __cordl_internal_get__WaveSampling() const;

constexpr ::WaveHarmonic::Crest::WaveSampling& __cordl_internal_get__WaveSampling() ;

constexpr void __cordl_internal_set__AdditionalCameraData(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::UnityW<::UnityEngine::RenderTexture>>*  value) ;

constexpr void __cordl_internal_set__AttenuationInShallows(float_t  value) ;

constexpr void __cordl_internal_set__BakedWaveData(::UnityW<::WaveHarmonic::Crest::BakedWaveData>  value) ;

constexpr void __cordl_internal_set__CollisionLayers(::WaveHarmonic::Crest::CollisionLayers  value) ;

constexpr void __cordl_internal_set__CollisionSource(::WaveHarmonic::Crest::CollisionSource  value) ;

constexpr void __cordl_internal_set__CombineShader(::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute*  value) ;

constexpr void __cordl_internal_set__PersistentDataTexture(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set__ShallowsMaximumDepth(float_t  value) ;

constexpr void __cordl_internal_set__WaveResolutionMultiplier(float_t  value) ;

constexpr void __cordl_internal_set__WaveSampling(::WaveHarmonic::Crest::WaveSampling  value) ;

/// @brief Method .ctor, addr 0x1825525a0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_s_Combine() ;

static inline ::UnityEngine::Color getStaticF_s_GizmoColor() ;

static inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* getStaticF_s_Inputs() ;

/// @brief Method get_AttenuationInShallows, addr 0x1804979a0, size 0x10, virtual false, abstract: false, final false
inline float_t get_AttenuationInShallows() ;

/// @brief Method get_BufferCount, addr 0x182552640, size 0x30, virtual true, abstract: false, final false
inline int32_t get_BufferCount() ;

/// @brief Method get_ClearColor, addr 0x182263110, size 0x20, virtual true, abstract: false, final false
inline ::UnityEngine::Color get_ClearColor() ;

/// @brief Method get_CollisionLayers, addr 0x1803b2d80, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::CollisionLayers get_CollisionLayers() ;

/// @brief Method get_CollisionSource, addr 0x180cbfa90, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::CollisionSource get_CollisionSource() ;

/// @brief Method get_GizmoColor, addr 0x182550900, size 0x40, virtual true, abstract: false, final false
inline ::UnityEngine::Color get_GizmoColor() ;

/// @brief Method get_ID, addr 0x182552670, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_ID() ;

/// @brief Method get_Inputs, addr 0x182550940, size 0x40, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* get_Inputs() ;

/// @brief Method get_Name, addr 0x182552680, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_NeedToReadWriteTextureData, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_NeedToReadWriteTextureData() ;

/// @brief Method get_PreserveWaveQuality, addr 0x182552690, size 0x50, virtual false, abstract: false, final false
inline bool get_PreserveWaveQuality() ;

/// @brief Method get_RequestedTextureFormat, addr 0x1825526e0, size 0x40, virtual true, abstract: false, final false
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_RequestedTextureFormat() ;

/// @brief Method get_ShallowsMaximumDepth, addr 0x180352a80, size 0x10, virtual false, abstract: false, final false
inline float_t get_ShallowsMaximumDepth() ;

/// @brief Method get_WaveResolutionMultiplier, addr 0x1825520b0, size 0x60, virtual false, abstract: false, final false
inline float_t get_WaveResolutionMultiplier() ;

/// @brief Method get_WaveSampling, addr 0x1813abaa0, size 0x20, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::WaveSampling get_WaveSampling() ;

static inline void setStaticF_s_Combine(bool  value) ;

static inline void setStaticF_s_GizmoColor(::UnityEngine::Color  value) ;

static inline void setStaticF_s_Inputs(::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  value) ;

/// @brief Method set_AttenuationInShallows, addr 0x180497ab0, size 0x10, virtual false, abstract: false, final false
inline void set_AttenuationInShallows(float_t  value) ;

/// @brief Method set_CollisionLayers, addr 0x1817eed30, size 0x10, virtual false, abstract: false, final false
inline void set_CollisionLayers(::WaveHarmonic::Crest::CollisionLayers  value) ;

/// @brief Method set_CollisionSource, addr 0x180cbfe50, size 0x40, virtual false, abstract: false, final false
inline void set_CollisionSource(::WaveHarmonic::Crest::CollisionSource  value) ;

/// @brief Method set_ShallowsMaximumDepth, addr 0x180352b20, size 0x10, virtual false, abstract: false, final false
inline void set_ShallowsMaximumDepth(float_t  value) ;

/// @brief Method set_WaveResolutionMultiplier, addr 0x182552720, size 0x10, virtual false, abstract: false, final false
inline void set_WaveResolutionMultiplier(float_t  value) ;

/// @brief Method set_WaveSampling, addr 0x1813f0070, size 0x10, virtual false, abstract: false, final false
inline void set_WaveSampling(::WaveHarmonic::Crest::WaveSampling  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimatedWavesLod() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimatedWavesLod", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimatedWavesLod(AnimatedWavesLod && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimatedWavesLod", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimatedWavesLod(AnimatedWavesLod const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16482};

/// @brief Field k_DrawCombine offset 0xffffffff size 0x8
static constexpr ::ConstString  k_DrawCombine{u"Combine"};

/// @brief Field _CollisionLayers, offset: 0xa8, size: 0x4, def value: None
 ::WaveHarmonic::Crest::CollisionLayers  ____CollisionLayers;

/// @brief Field _BakedWaveData, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::BakedWaveData>  ____BakedWaveData;

/// @brief Field _WaveSampling, offset: 0xb8, size: 0x4, def value: None
 ::WaveHarmonic::Crest::WaveSampling  ____WaveSampling;

/// @brief Field _WaveResolutionMultiplier, offset: 0xbc, size: 0x4, def value: None
 float_t  ____WaveResolutionMultiplier;

/// @brief Field _AttenuationInShallows, offset: 0xc0, size: 0x4, def value: None
 float_t  ____AttenuationInShallows;

/// @brief Field _ShallowsMaximumDepth, offset: 0xc4, size: 0x4, def value: None
 float_t  ____ShallowsMaximumDepth;

/// @brief Field _CombineShader, offset: 0xc8, size: 0x8, def value: None
 ::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute*  ____CombineShader;

/// @brief Field _PersistentDataTexture, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ____PersistentDataTexture;

/// @brief Field _AdditionalCameraData, offset: 0xd8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::UnityW<::UnityEngine::RenderTexture>>*  ____AdditionalCameraData;

/// @brief Field _CollisionSource, offset: 0xe0, size: 0x4, def value: None
 ::WaveHarmonic::Crest::CollisionSource  ____CollisionSource;

/// @brief Size padding 0xf0 - 0xe8 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::AnimatedWavesLod, ____CollisionLayers) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::AnimatedWavesLod, ____BakedWaveData) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::AnimatedWavesLod, ____WaveSampling) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::AnimatedWavesLod, ____WaveResolutionMultiplier) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::AnimatedWavesLod, ____AttenuationInShallows) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::AnimatedWavesLod, ____ShallowsMaximumDepth) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::AnimatedWavesLod, ____CombineShader) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::AnimatedWavesLod, ____PersistentDataTexture) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::AnimatedWavesLod, ____AdditionalCameraData) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::AnimatedWavesLod, ____CollisionSource) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::AnimatedWavesLod) == 0xf0, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest

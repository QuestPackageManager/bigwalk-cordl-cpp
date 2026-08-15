#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ShadowLod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "WaveHarmonic/Crest/zzzz__PersistentLod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__PropertyWrapperMaterial_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShadowLod)
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class Light;
}
namespace WaveHarmonic::Crest::Utility {
template<typename TKey,typename TValue>
class SortedList_2;
}
namespace WaveHarmonic::Crest {
class ILodInput;
}
namespace WaveHarmonic::Crest {
struct PropertyWrapperCompute;
}
namespace WaveHarmonic::Crest {
struct ShadowLod_Error;
}
namespace WaveHarmonic::Crest {
class ShadowLod_ShaderIDs;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
struct ShadowLod_Error;
}
namespace WaveHarmonic::Crest {
class ShadowLod;
}
namespace WaveHarmonic::Crest {
class ShadowLod_ShaderIDs;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::ShadowLod_Error);
MARK_REF_T(::WaveHarmonic::Crest::ShadowLod*);
MARK_REF_T(::WaveHarmonic::Crest::ShadowLod_ShaderIDs*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ShadowLod_Error, "WaveHarmonic.Crest", "ShadowLod/Error");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ShadowLod*, "WaveHarmonic.Crest", "ShadowLod");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ShadowLod_ShaderIDs*, "WaveHarmonic.Crest", "ShadowLod/ShaderIDs");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.ShadowLod/ShaderIDs
class CORDL_TYPE ShadowLod_ShaderIDs : public ::System::Object {
public:
// Declarations
/// @brief Field s_CenterPos, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_CenterPos, put=setStaticF_s_CenterPos)) int32_t  s_CenterPos;

/// @brief Field s_ClearShadows, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ClearShadows, put=setStaticF_s_ClearShadows)) int32_t  s_ClearShadows;

/// @brief Field s_DynamicSoftShadowsFactor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_DynamicSoftShadowsFactor, put=setStaticF_s_DynamicSoftShadowsFactor)) int32_t  s_DynamicSoftShadowsFactor;

/// @brief Field s_JitterDiameters_CurrentFrameWeights, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_JitterDiameters_CurrentFrameWeights, put=setStaticF_s_JitterDiameters_CurrentFrameWeights)) int32_t  s_JitterDiameters_CurrentFrameWeights;

/// @brief Field s_MainCameraProjectionMatrix, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_MainCameraProjectionMatrix, put=setStaticF_s_MainCameraProjectionMatrix)) int32_t  s_MainCameraProjectionMatrix;

/// @brief Field s_SampleColorMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_SampleColorMap, put=setStaticF_s_SampleColorMap)) int32_t  s_SampleColorMap;

/// @brief Field s_Scale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Scale, put=setStaticF_s_Scale)) int32_t  s_Scale;

/// @brief Field s_ShadowPassExecuteLastFrame, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ShadowPassExecuteLastFrame, put=setStaticF_s_ShadowPassExecuteLastFrame)) int32_t  s_ShadowPassExecuteLastFrame;

static inline int32_t getStaticF_s_CenterPos() ;

static inline int32_t getStaticF_s_ClearShadows() ;

static inline int32_t getStaticF_s_DynamicSoftShadowsFactor() ;

static inline int32_t getStaticF_s_JitterDiameters_CurrentFrameWeights() ;

static inline int32_t getStaticF_s_MainCameraProjectionMatrix() ;

static inline int32_t getStaticF_s_SampleColorMap() ;

static inline int32_t getStaticF_s_Scale() ;

static inline int32_t getStaticF_s_ShadowPassExecuteLastFrame() ;

static inline void setStaticF_s_CenterPos(int32_t  value) ;

static inline void setStaticF_s_ClearShadows(int32_t  value) ;

static inline void setStaticF_s_DynamicSoftShadowsFactor(int32_t  value) ;

static inline void setStaticF_s_JitterDiameters_CurrentFrameWeights(int32_t  value) ;

static inline void setStaticF_s_MainCameraProjectionMatrix(int32_t  value) ;

static inline void setStaticF_s_SampleColorMap(int32_t  value) ;

static inline void setStaticF_s_Scale(int32_t  value) ;

static inline void setStaticF_s_ShadowPassExecuteLastFrame(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShadowLod_ShaderIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShadowLod_ShaderIDs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShadowLod_ShaderIDs(ShadowLod_ShaderIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShadowLod_ShaderIDs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShadowLod_ShaderIDs(ShadowLod_ShaderIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16501};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::ShadowLod_ShaderIDs) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.ShadowLod/Error
struct CORDL_TYPE ShadowLod_Error {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ShadowLod_Error_Unwrapped
enum struct __ShadowLod_Error_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_NoLight = static_cast<int32_t>(0x1),
__E_NoShadows = static_cast<int32_t>(0x2),
__E_IncorrectLightType = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ShadowLod_Error_Unwrapped () const noexcept {
return static_cast<__ShadowLod_Error_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ShadowLod_Error() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ShadowLod_Error(int32_t  value__) noexcept;

/// @brief Field IncorrectLightType value: I32(3)
static ::WaveHarmonic::Crest::ShadowLod_Error const IncorrectLightType;

/// @brief Field NoLight value: I32(1)
static ::WaveHarmonic::Crest::ShadowLod_Error const NoLight;

/// @brief Field NoShadows value: I32(2)
static ::WaveHarmonic::Crest::ShadowLod_Error const NoShadows;

/// @brief Field None value: I32(0)
static ::WaveHarmonic::Crest::ShadowLod_Error const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16502};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::ShadowLod_Error, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::ShadowLod_Error) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies UnityEngine.Color, WaveHarmonic.Crest.PersistentLod, WaveHarmonic.Crest.PropertyWrapperMaterial, WaveHarmonic.Crest.ShadowLod::Error
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.ShadowLod
class CORDL_TYPE ShadowLod : public ::WaveHarmonic::Crest::PersistentLod {
public:
// Declarations
using Error = ::WaveHarmonic::Crest::ShadowLod_Error;

using ShaderIDs = ::WaveHarmonic::Crest::ShadowLod_ShaderIDs;

 __declspec(property(get=get_BufferCount)) int32_t  BufferCount;

 __declspec(property(get=get_ClearColor)) ::UnityEngine::Color  ClearColor;

 __declspec(property(get=get_CurrentFrameWeightHard, put=set_CurrentFrameWeightHard)) float_t  CurrentFrameWeightHard;

 __declspec(property(get=get_CurrentFrameWeightSoft, put=set_CurrentFrameWeightSoft)) float_t  CurrentFrameWeightSoft;

 __declspec(property(get=get_GizmoColor)) ::UnityEngine::Color  GizmoColor;

 __declspec(property(get=get_Inputs)) ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  Inputs;

 __declspec(property(get=get_JitterDiameterHard, put=set_JitterDiameterHard)) float_t  JitterDiameterHard;

 __declspec(property(get=get_JitterDiameterSoft, put=set_JitterDiameterSoft)) float_t  JitterDiameterSoft;

 __declspec(property(get=get_Kernel)) int32_t  Kernel;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_NeedToReadWriteTextureData)) bool  NeedToReadWriteTextureData;

 __declspec(property(get=get_RequestedTextureFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat  RequestedTextureFormat;

 __declspec(property(get=get_SimulationShader)) ::UnityW<::UnityEngine::ComputeShader>  SimulationShader;

 __declspec(property(get=get_SkipEndOfFrame)) bool  SkipEndOfFrame;

 __declspec(property(get=get_SkipFlipBuffers)) bool  SkipFlipBuffers;

/// @brief Field _AllowNoShadows, offset 0xd1, size 0x1 
 __declspec(property(get=__cordl_internal_get__AllowNoShadows, put=__cordl_internal_set__AllowNoShadows)) bool  _AllowNoShadows;

/// @brief Field _AllowNullLight, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get__AllowNullLight, put=__cordl_internal_set__AllowNullLight)) bool  _AllowNullLight;

/// @brief Field _CopyShadowMapBuffer, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__CopyShadowMapBuffer, put=__cordl_internal_set__CopyShadowMapBuffer)) ::UnityEngine::Rendering::CommandBuffer*  _CopyShadowMapBuffer;

/// @brief Field _CurrentFrameWeightHard, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentFrameWeightHard, put=__cordl_internal_set__CurrentFrameWeightHard)) float_t  _CurrentFrameWeightHard;

/// @brief Field _CurrentFrameWeightSoft, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentFrameWeightSoft, put=__cordl_internal_set__CurrentFrameWeightSoft)) float_t  _CurrentFrameWeightSoft;

/// @brief Field _DynamicSoftShadows, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get__DynamicSoftShadows, put=__cordl_internal_set__DynamicSoftShadows)) bool  _DynamicSoftShadows;

/// @brief Field _Error, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get__Error, put=__cordl_internal_set__Error)) ::WaveHarmonic::Crest::ShadowLod_Error  _Error;

/// @brief Field _IsSimulationBuffer, offset 0xf4, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSimulationBuffer, put=__cordl_internal_set__IsSimulationBuffer)) bool  _IsSimulationBuffer;

/// @brief Field _JitterDiameterHard, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get__JitterDiameterHard, put=__cordl_internal_set__JitterDiameterHard)) float_t  _JitterDiameterHard;

/// @brief Field _JitterDiameterSoft, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get__JitterDiameterSoft, put=__cordl_internal_set__JitterDiameterSoft)) float_t  _JitterDiameterSoft;

/// @brief Field _Light, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__Light, put=__cordl_internal_set__Light)) ::UnityW<::UnityEngine::Light>  _Light;

/// @brief Field _RenderMaterial, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__RenderMaterial, put=__cordl_internal_set__RenderMaterial)) ::ArrayW<::WaveHarmonic::Crest::PropertyWrapperMaterial>  _RenderMaterial;

/// @brief Field _SoftJitterExtinctionFactor, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get__SoftJitterExtinctionFactor, put=__cordl_internal_set__SoftJitterExtinctionFactor)) float_t  _SoftJitterExtinctionFactor;

 __declspec(property(get=get_ID)) ::StringW  _cordl_ID;

/// @brief Field s_GizmoColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_GizmoColor, put=setStaticF_s_GizmoColor)) ::UnityEngine::Color  s_GizmoColor;

/// @brief Field s_Inputs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Inputs, put=setStaticF_s_Inputs)) ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  s_Inputs;

/// @brief Field s_ProcessData, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_ProcessData, put=setStaticF_s_ProcessData)) bool  s_ProcessData;

/// @brief Method Allocate, addr 0x18255cd30, size 0x1c0, virtual true, abstract: false, final false
inline void Allocate() ;

/// @brief Method BuildCommandBuffer, addr 0x18255cef0, size 0x220, virtual true, abstract: false, final false
inline void BuildCommandBuffer(::WaveHarmonic::Crest::WaterRenderer*  water, ::UnityEngine::Rendering::CommandBuffer*  buffer) ;

/// @brief Method CleanUpShadowCommandBuffers, addr 0x18255d110, size 0x30, virtual false, abstract: false, final false
inline void CleanUpShadowCommandBuffers() ;

/// @brief Method ClearBufferIfLightChanged, addr 0x18255d140, size 0xa0, virtual false, abstract: false, final false
inline void ClearBufferIfLightChanged() ;

/// @brief Method Destroy, addr 0x18255d1e0, size 0xa0, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method Disable, addr 0x18255d280, size 0x50, virtual true, abstract: false, final false
inline void Disable() ;

/// @brief Method Enable, addr 0x18255d2d0, size 0x50, virtual true, abstract: false, final false
inline void Enable() ;

/// @brief Method Initialize, addr 0x18255d320, size 0x140, virtual true, abstract: false, final false
inline void Initialize() ;

static inline ::WaveHarmonic::Crest::ShadowLod* New_ctor() ;

/// @brief Method OnBeginCameraRendering, addr 0x18255d460, size 0x110, virtual false, abstract: false, final false
inline void OnBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera) ;

/// @brief Method OnEndCameraRendering, addr 0x18255d570, size 0xa0, virtual false, abstract: false, final false
inline void OnEndCameraRendering(::UnityEngine::Camera*  camera) ;

/// @brief Method OnLoad, addr 0x18255d610, size 0x60, virtual false, abstract: false, final false
static inline void OnLoad() ;

/// @brief Method SetAdditionalSimulationParameters, addr 0x18255d670, size 0x730, virtual true, abstract: false, final false
inline void SetAdditionalSimulationParameters(::WaveHarmonic::Crest::PropertyWrapperCompute  properties) ;

/// @brief Method SetGlobals, addr 0x18255dda0, size 0x60, virtual true, abstract: false, final false
inline void SetGlobals(bool  enable) ;

/// @brief Method SetUpLight, addr 0x18255de00, size 0x90, virtual false, abstract: false, final false
inline bool SetUpLight() ;

/// @brief Method ShouldRender, addr 0x18255de90, size 0x80, virtual false, abstract: false, final false
inline bool ShouldRender(::UnityEngine::Camera*  camera) ;

/// @brief Method Update, addr 0x18255df10, size 0x310, virtual false, abstract: false, final false
inline void Update(::UnityEngine::Rendering::CommandBuffer*  buffer) ;

/// @brief Method ValidateLight, addr 0x18255e220, size 0x120, virtual false, abstract: false, final false
inline bool ValidateLight() ;

constexpr bool const& __cordl_internal_get__AllowNoShadows() const;

constexpr bool& __cordl_internal_get__AllowNoShadows() ;

constexpr bool const& __cordl_internal_get__AllowNullLight() const;

constexpr bool& __cordl_internal_get__AllowNullLight() ;

constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get__CopyShadowMapBuffer() const;

constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get__CopyShadowMapBuffer() ;

constexpr float_t const& __cordl_internal_get__CurrentFrameWeightHard() const;

constexpr float_t& __cordl_internal_get__CurrentFrameWeightHard() ;

constexpr float_t const& __cordl_internal_get__CurrentFrameWeightSoft() const;

constexpr float_t& __cordl_internal_get__CurrentFrameWeightSoft() ;

constexpr bool const& __cordl_internal_get__DynamicSoftShadows() const;

constexpr bool& __cordl_internal_get__DynamicSoftShadows() ;

constexpr ::WaveHarmonic::Crest::ShadowLod_Error const& __cordl_internal_get__Error() const;

constexpr ::WaveHarmonic::Crest::ShadowLod_Error& __cordl_internal_get__Error() ;

constexpr bool const& __cordl_internal_get__IsSimulationBuffer() const;

constexpr bool& __cordl_internal_get__IsSimulationBuffer() ;

constexpr float_t const& __cordl_internal_get__JitterDiameterHard() const;

constexpr float_t& __cordl_internal_get__JitterDiameterHard() ;

constexpr float_t const& __cordl_internal_get__JitterDiameterSoft() const;

constexpr float_t& __cordl_internal_get__JitterDiameterSoft() ;

constexpr ::UnityW<::UnityEngine::Light> const& __cordl_internal_get__Light() const;

constexpr ::UnityW<::UnityEngine::Light>& __cordl_internal_get__Light() ;

constexpr ::ArrayW<::WaveHarmonic::Crest::PropertyWrapperMaterial> const& __cordl_internal_get__RenderMaterial() const;

constexpr ::ArrayW<::WaveHarmonic::Crest::PropertyWrapperMaterial>& __cordl_internal_get__RenderMaterial() ;

constexpr float_t const& __cordl_internal_get__SoftJitterExtinctionFactor() const;

constexpr float_t& __cordl_internal_get__SoftJitterExtinctionFactor() ;

constexpr void __cordl_internal_set__AllowNoShadows(bool  value) ;

constexpr void __cordl_internal_set__AllowNullLight(bool  value) ;

constexpr void __cordl_internal_set__CopyShadowMapBuffer(::UnityEngine::Rendering::CommandBuffer*  value) ;

constexpr void __cordl_internal_set__CurrentFrameWeightHard(float_t  value) ;

constexpr void __cordl_internal_set__CurrentFrameWeightSoft(float_t  value) ;

constexpr void __cordl_internal_set__DynamicSoftShadows(bool  value) ;

constexpr void __cordl_internal_set__Error(::WaveHarmonic::Crest::ShadowLod_Error  value) ;

constexpr void __cordl_internal_set__IsSimulationBuffer(bool  value) ;

constexpr void __cordl_internal_set__JitterDiameterHard(float_t  value) ;

constexpr void __cordl_internal_set__JitterDiameterSoft(float_t  value) ;

constexpr void __cordl_internal_set__Light(::UnityW<::UnityEngine::Light>  value) ;

constexpr void __cordl_internal_set__RenderMaterial(::ArrayW<::WaveHarmonic::Crest::PropertyWrapperMaterial>  value) ;

constexpr void __cordl_internal_set__SoftJitterExtinctionFactor(float_t  value) ;

/// @brief Method .ctor, addr 0x18255e400, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Color getStaticF_s_GizmoColor() ;

static inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* getStaticF_s_Inputs() ;

static inline bool getStaticF_s_ProcessData() ;

/// @brief Method get_BufferCount, addr 0x1802edfe0, size 0x10, virtual true, abstract: false, final false
inline int32_t get_BufferCount() ;

/// @brief Method get_ClearColor, addr 0x182263110, size 0x20, virtual true, abstract: false, final false
inline ::UnityEngine::Color get_ClearColor() ;

/// @brief Method get_CurrentFrameWeightHard, addr 0x18040c3b0, size 0x10, virtual false, abstract: false, final false
inline float_t get_CurrentFrameWeightHard() ;

/// @brief Method get_CurrentFrameWeightSoft, addr 0x180497700, size 0x10, virtual false, abstract: false, final false
inline float_t get_CurrentFrameWeightSoft() ;

/// @brief Method get_GizmoColor, addr 0x18255ccb0, size 0x40, virtual true, abstract: false, final false
inline ::UnityEngine::Color get_GizmoColor() ;

/// @brief Method get_ID, addr 0x18255e460, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_ID() ;

/// @brief Method get_Inputs, addr 0x18255ccf0, size 0x40, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* get_Inputs() ;

/// @brief Method get_JitterDiameterHard, addr 0x18040c380, size 0x10, virtual false, abstract: false, final false
inline float_t get_JitterDiameterHard() ;

/// @brief Method get_JitterDiameterSoft, addr 0x180371800, size 0x10, virtual false, abstract: false, final false
inline float_t get_JitterDiameterSoft() ;

/// @brief Method get_Kernel, addr 0x18255e470, size 0x40, virtual true, abstract: false, final false
inline int32_t get_Kernel() ;

/// @brief Method get_Name, addr 0x18255e4b0, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_NeedToReadWriteTextureData, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_NeedToReadWriteTextureData() ;

/// @brief Method get_RequestedTextureFormat, addr 0x18255e4c0, size 0x40, virtual true, abstract: false, final false
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_RequestedTextureFormat() ;

/// @brief Method get_SimulationShader, addr 0x18255e500, size 0x70, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::ComputeShader> get_SimulationShader() ;

/// @brief Method get_SkipEndOfFrame, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_SkipEndOfFrame() ;

/// @brief Method get_SkipFlipBuffers, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_SkipFlipBuffers() ;

static inline void setStaticF_s_GizmoColor(::UnityEngine::Color  value) ;

static inline void setStaticF_s_Inputs(::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  value) ;

static inline void setStaticF_s_ProcessData(bool  value) ;

/// @brief Method set_CurrentFrameWeightHard, addr 0x1820c8120, size 0x10, virtual false, abstract: false, final false
inline void set_CurrentFrameWeightHard(float_t  value) ;

/// @brief Method set_CurrentFrameWeightSoft, addr 0x18255e570, size 0x10, virtual false, abstract: false, final false
inline void set_CurrentFrameWeightSoft(float_t  value) ;

/// @brief Method set_JitterDiameterHard, addr 0x18255e580, size 0x10, virtual false, abstract: false, final false
inline void set_JitterDiameterHard(float_t  value) ;

/// @brief Method set_JitterDiameterSoft, addr 0x180497ac0, size 0x10, virtual false, abstract: false, final false
inline void set_JitterDiameterSoft(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShadowLod() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShadowLod", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShadowLod(ShadowLod && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShadowLod", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShadowLod(ShadowLod const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16503};

/// @brief Field k_DrawLodSample offset 0xffffffff size 0x8
static constexpr ::ConstString  k_DrawLodSample{u"Sample"};

/// @brief Field k_MaximumJitter offset 0xffffffff size 0x4
static constexpr float_t  k_MaximumJitter{static_cast<float_t>(32.0f)};

/// @brief Field _DynamicSoftShadows, offset: 0xb8, size: 0x1, def value: None
 bool  ____DynamicSoftShadows;

/// @brief Field _SoftJitterExtinctionFactor, offset: 0xbc, size: 0x4, def value: None
 float_t  ____SoftJitterExtinctionFactor;

/// @brief Field _JitterDiameterSoft, offset: 0xc0, size: 0x4, def value: None
 float_t  ____JitterDiameterSoft;

/// @brief Field _CurrentFrameWeightSoft, offset: 0xc4, size: 0x4, def value: None
 float_t  ____CurrentFrameWeightSoft;

/// @brief Field _JitterDiameterHard, offset: 0xc8, size: 0x4, def value: None
 float_t  ____JitterDiameterHard;

/// @brief Field _CurrentFrameWeightHard, offset: 0xcc, size: 0x4, def value: None
 float_t  ____CurrentFrameWeightHard;

/// @brief Field _AllowNullLight, offset: 0xd0, size: 0x1, def value: None
 bool  ____AllowNullLight;

/// @brief Field _AllowNoShadows, offset: 0xd1, size: 0x1, def value: None
 bool  ____AllowNoShadows;

/// @brief Field _Light, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Light>  ____Light;

/// @brief Field _CopyShadowMapBuffer, offset: 0xe0, size: 0x8, def value: None
 ::UnityEngine::Rendering::CommandBuffer*  ____CopyShadowMapBuffer;

/// @brief Field _RenderMaterial, offset: 0xe8, size: 0x8, def value: None
 ::ArrayW<::WaveHarmonic::Crest::PropertyWrapperMaterial>  ____RenderMaterial;

/// @brief Field _Error, offset: 0xf0, size: 0x4, def value: None
 ::WaveHarmonic::Crest::ShadowLod_Error  ____Error;

/// @brief Field _IsSimulationBuffer, offset: 0xf4, size: 0x1, def value: None
 bool  ____IsSimulationBuffer;

/// @brief Size padding 0x108 - 0xf8 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::ShadowLod, ____DynamicSoftShadows) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShadowLod, ____SoftJitterExtinctionFactor) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShadowLod, ____JitterDiameterSoft) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShadowLod, ____CurrentFrameWeightSoft) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShadowLod, ____JitterDiameterHard) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShadowLod, ____CurrentFrameWeightHard) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShadowLod, ____AllowNullLight) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShadowLod, ____AllowNoShadows) == 0xd1, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShadowLod, ____Light) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShadowLod, ____CopyShadowMapBuffer) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShadowLod, ____RenderMaterial) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShadowLod, ____Error) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShadowLod, ____IsSimulationBuffer) == 0xf4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::ShadowLod) == 0x108, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest

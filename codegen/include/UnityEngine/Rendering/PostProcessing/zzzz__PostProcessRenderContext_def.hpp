#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/PostProcessRenderContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessLayer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PostProcessRenderContext)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering::PostProcessing {
class AutoExposure;
}
namespace UnityEngine::Rendering::PostProcessing {
struct DebugOverlay;
}
namespace UnityEngine::Rendering::PostProcessing {
class LogHistogram;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessDebugLayer;
}
namespace UnityEngine::Rendering::PostProcessing {
struct PostProcessLayer_Antialiasing;
}
namespace UnityEngine::Rendering::PostProcessing {
struct PostProcessRenderContext_StereoRenderingMode;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessResources;
}
namespace UnityEngine::Rendering::PostProcessing {
class PropertySheetFactory;
}
namespace UnityEngine::Rendering::PostProcessing {
class PropertySheet;
}
namespace UnityEngine::Rendering::PostProcessing {
class TemporalAntialiasing;
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
struct FilterMode;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
struct RenderTextureReadWrite;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
struct PostProcessRenderContext_StereoRenderingMode;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode);
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode, "UnityEngine.Rendering.PostProcessing", "PostProcessRenderContext/StereoRenderingMode");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, "UnityEngine.Rendering.PostProcessing", "PostProcessRenderContext");
// Dependencies 
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: true
// CS Name: UnityEngine.Rendering.PostProcessing.PostProcessRenderContext/StereoRenderingMode
struct CORDL_TYPE PostProcessRenderContext_StereoRenderingMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PostProcessRenderContext_StereoRenderingMode_Unwrapped
enum struct __PostProcessRenderContext_StereoRenderingMode_Unwrapped : int32_t {
__E_MultiPass = static_cast<int32_t>(0x0),
__E_SinglePass = static_cast<int32_t>(0x1),
__E_SinglePassInstanced = static_cast<int32_t>(0x2),
__E_SinglePassMultiview = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PostProcessRenderContext_StereoRenderingMode_Unwrapped () const noexcept {
return static_cast<__PostProcessRenderContext_StereoRenderingMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PostProcessRenderContext_StereoRenderingMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PostProcessRenderContext_StereoRenderingMode(int32_t  value__) noexcept;

/// @brief Field MultiPass value: I32(0)
static ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode const MultiPass;

/// @brief Field SinglePass value: I32(1)
static ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode const SinglePass;

/// @brief Field SinglePassInstanced value: I32(2)
static ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode const SinglePassInstanced;

/// @brief Field SinglePassMultiview value: I32(3)
static ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode const SinglePassMultiview;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18642};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
// Dependencies System.Object, UnityEngine.RenderTextureDescriptor, UnityEngine.RenderTextureFormat, UnityEngine.Rendering.PostProcessing.PostProcessLayer::Antialiasing, UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::StereoRenderingMode, UnityEngine.Rendering.RenderTargetIdentifier
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.PostProcessRenderContext
class CORDL_TYPE PostProcessRenderContext : public ::System::Object {
public:
// Declarations
using StereoRenderingMode = ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode;

/// @brief Field <antialiasing>k__BackingField, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get__antialiasing_k__BackingField, put=__cordl_internal_set__antialiasing_k__BackingField)) ::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing  _antialiasing_k__BackingField;

/// @brief Field <command>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__command_k__BackingField, put=__cordl_internal_set__command_k__BackingField)) ::UnityEngine::Rendering::CommandBuffer*  _command_k__BackingField;

/// @brief Field <debugLayer>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__debugLayer_k__BackingField, put=__cordl_internal_set__debugLayer_k__BackingField)) ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*  _debugLayer_k__BackingField;

/// @brief Field <destination>k__BackingField, offset 0x48, size 0x28 
 __declspec(property(get=__cordl_internal_get__destination_k__BackingField, put=__cordl_internal_set__destination_k__BackingField)) ::UnityEngine::Rendering::RenderTargetIdentifier  _destination_k__BackingField;

/// @brief Field <flip>k__BackingField, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get__flip_k__BackingField, put=__cordl_internal_set__flip_k__BackingField)) bool  _flip_k__BackingField;

/// @brief Field <height>k__BackingField, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get__height_k__BackingField, put=__cordl_internal_set__height_k__BackingField)) int32_t  _height_k__BackingField;

/// @brief Field <isSceneView>k__BackingField, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get__isSceneView_k__BackingField, put=__cordl_internal_set__isSceneView_k__BackingField)) bool  _isSceneView_k__BackingField;

/// @brief Field <numberOfEyes>k__BackingField, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__numberOfEyes_k__BackingField, put=__cordl_internal_set__numberOfEyes_k__BackingField)) int32_t  _numberOfEyes_k__BackingField;

/// @brief Field <propertySheets>k__BackingField, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__propertySheets_k__BackingField, put=__cordl_internal_set__propertySheets_k__BackingField)) ::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*  _propertySheets_k__BackingField;

/// @brief Field <resources>k__BackingField, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__resources_k__BackingField, put=__cordl_internal_set__resources_k__BackingField)) ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>  _resources_k__BackingField;

/// @brief Field <screenHeight>k__BackingField, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get__screenHeight_k__BackingField, put=__cordl_internal_set__screenHeight_k__BackingField)) int32_t  _screenHeight_k__BackingField;

/// @brief Field <screenWidth>k__BackingField, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get__screenWidth_k__BackingField, put=__cordl_internal_set__screenWidth_k__BackingField)) int32_t  _screenWidth_k__BackingField;

/// @brief Field <sourceFormat>k__BackingField, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__sourceFormat_k__BackingField, put=__cordl_internal_set__sourceFormat_k__BackingField)) ::UnityEngine::RenderTextureFormat  _sourceFormat_k__BackingField;

/// @brief Field <source>k__BackingField, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get__source_k__BackingField, put=__cordl_internal_set__source_k__BackingField)) ::UnityEngine::Rendering::RenderTargetIdentifier  _source_k__BackingField;

/// @brief Field <stereoActive>k__BackingField, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get__stereoActive_k__BackingField, put=__cordl_internal_set__stereoActive_k__BackingField)) bool  _stereoActive_k__BackingField;

/// @brief Field <stereoRenderingMode>k__BackingField, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get__stereoRenderingMode_k__BackingField, put=__cordl_internal_set__stereoRenderingMode_k__BackingField)) ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode  _stereoRenderingMode_k__BackingField;

/// @brief Field <temporalAntialiasing>k__BackingField, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__temporalAntialiasing_k__BackingField, put=__cordl_internal_set__temporalAntialiasing_k__BackingField)) ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*  _temporalAntialiasing_k__BackingField;

/// @brief Field <userData>k__BackingField, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__userData_k__BackingField, put=__cordl_internal_set__userData_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  _userData_k__BackingField;

/// @brief Field <width>k__BackingField, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__width_k__BackingField, put=__cordl_internal_set__width_k__BackingField)) int32_t  _width_k__BackingField;

/// @brief Field <xrActiveEye>k__BackingField, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get__xrActiveEye_k__BackingField, put=__cordl_internal_set__xrActiveEye_k__BackingField)) int32_t  _xrActiveEye_k__BackingField;

 __declspec(property(get=get_antialiasing, put=set_antialiasing)) ::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing  antialiasing;

/// @brief Field autoExposure, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_autoExposure, put=__cordl_internal_set_autoExposure)) ::UnityW<::UnityEngine::Rendering::PostProcessing::AutoExposure>  autoExposure;

/// @brief Field autoExposureTexture, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_autoExposureTexture, put=__cordl_internal_set_autoExposureTexture)) ::UnityW<::UnityEngine::Texture>  autoExposureTexture;

/// @brief Field bloomBufferNameID, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_bloomBufferNameID, put=__cordl_internal_set_bloomBufferNameID)) int32_t  bloomBufferNameID;

 __declspec(property(get=get_camera, put=set_camera)) ::UnityW<::UnityEngine::Camera>  camera;

 __declspec(property(get=get_command, put=set_command)) ::UnityEngine::Rendering::CommandBuffer*  command;

 __declspec(property(get=get_debugLayer, put=set_debugLayer)) ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*  debugLayer;

 __declspec(property(get=get_destination, put=set_destination)) ::UnityEngine::Rendering::RenderTargetIdentifier  destination;

 __declspec(property(get=get_flip, put=set_flip)) bool  flip;

 __declspec(property(get=get_height, put=set_height)) int32_t  height;

 __declspec(property(get=get_isSceneView, put=set_isSceneView)) bool  isSceneView;

/// @brief Field logHistogram, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_logHistogram, put=__cordl_internal_set_logHistogram)) ::UnityEngine::Rendering::PostProcessing::LogHistogram*  logHistogram;

/// @brief Field logLut, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_logLut, put=__cordl_internal_set_logLut)) ::UnityW<::UnityEngine::Texture>  logLut;

/// @brief Field m_Camera, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Camera, put=__cordl_internal_set_m_Camera)) ::UnityW<::UnityEngine::Camera>  m_Camera;

/// @brief Field m_sourceDescriptor, offset 0xf8, size 0x34 
 __declspec(property(get=__cordl_internal_get_m_sourceDescriptor, put=__cordl_internal_set_m_sourceDescriptor)) ::UnityEngine::RenderTextureDescriptor  m_sourceDescriptor;

 __declspec(property(get=get_numberOfEyes, put=set_numberOfEyes)) int32_t  numberOfEyes;

/// @brief Field physicalCamera, offset 0xf4, size 0x1 
 __declspec(property(get=__cordl_internal_get_physicalCamera, put=__cordl_internal_set_physicalCamera)) bool  physicalCamera;

 __declspec(property(get=get_propertySheets, put=set_propertySheets)) ::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*  propertySheets;

 __declspec(property(get=get_resources, put=set_resources)) ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>  resources;

 __declspec(property(get=get_screenHeight, put=set_screenHeight)) int32_t  screenHeight;

 __declspec(property(get=get_screenWidth, put=set_screenWidth)) int32_t  screenWidth;

 __declspec(property(get=get_source, put=set_source)) ::UnityEngine::Rendering::RenderTargetIdentifier  source;

 __declspec(property(get=get_sourceFormat, put=set_sourceFormat)) ::UnityEngine::RenderTextureFormat  sourceFormat;

 __declspec(property(get=get_stereoActive, put=set_stereoActive)) bool  stereoActive;

 __declspec(property(get=get_stereoRenderingMode, put=set_stereoRenderingMode)) ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode  stereoRenderingMode;

 __declspec(property(get=get_temporalAntialiasing, put=set_temporalAntialiasing)) ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*  temporalAntialiasing;

/// @brief Field uberSheet, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_uberSheet, put=__cordl_internal_set_uberSheet)) ::UnityEngine::Rendering::PostProcessing::PropertySheet*  uberSheet;

 __declspec(property(get=get_userData, put=set_userData)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  userData;

 __declspec(property(get=get_width, put=set_width)) int32_t  width;

 __declspec(property(get=get_xrActiveEye, put=set_xrActiveEye)) int32_t  xrActiveEye;

/// @brief Method GetDescriptor, addr 0x181fca370, size 0x1c0, virtual false, abstract: false, final false
inline ::UnityEngine::RenderTextureDescriptor GetDescriptor(int32_t  depthBufferBits, ::UnityEngine::RenderTextureFormat  colorFormat, ::UnityEngine::RenderTextureReadWrite  readWrite) ;

/// @brief Method GetScreenSpaceTemporaryRT, addr 0x181fca630, size 0x90, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> GetScreenSpaceTemporaryRT(int32_t  depthBufferBits, ::UnityEngine::RenderTextureFormat  colorFormat, ::UnityEngine::RenderTextureReadWrite  readWrite, int32_t  widthOverride, int32_t  heightOverride) ;

/// @brief Method GetScreenSpaceTemporaryRT, addr 0x181fca530, size 0x100, virtual false, abstract: false, final false
inline void GetScreenSpaceTemporaryRT(::UnityEngine::Rendering::CommandBuffer*  cmd, int32_t  nameID, int32_t  depthBufferBits, ::UnityEngine::RenderTextureFormat  colorFormat, ::UnityEngine::RenderTextureReadWrite  readWrite, ::UnityEngine::FilterMode  filter, int32_t  widthOverride, int32_t  heightOverride) ;

/// @brief Method IsDebugOverlayEnabled, addr 0x181fca6c0, size 0x10, virtual false, abstract: false, final false
inline bool IsDebugOverlayEnabled(::UnityEngine::Rendering::PostProcessing::DebugOverlay  overlay) ;

/// @brief Method IsTemporalAntialiasingActive, addr 0x181fca6d0, size 0x30, virtual false, abstract: false, final false
inline bool IsTemporalAntialiasingActive() ;

static inline ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext* New_ctor() ;

/// @brief Method PushDebugOverlay, addr 0x181fca700, size 0x50, virtual false, abstract: false, final false
inline void PushDebugOverlay(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::PostProcessing::PropertySheet*  sheet, int32_t  pass) ;

/// @brief Method Reset, addr 0x181fca750, size 0x220, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method UpdateSinglePassStereoState, addr 0x181fca970, size 0x130, virtual false, abstract: false, final false
inline void UpdateSinglePassStereoState(bool  isTAAEnabled, bool  isAOEnabled, bool  isSSREnabled) ;

constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing const& __cordl_internal_get__antialiasing_k__BackingField() const;

constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing& __cordl_internal_get__antialiasing_k__BackingField() ;

constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get__command_k__BackingField() const;

constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get__command_k__BackingField() ;

constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer* const& __cordl_internal_get__debugLayer_k__BackingField() const;

constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*& __cordl_internal_get__debugLayer_k__BackingField() ;

constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __cordl_internal_get__destination_k__BackingField() const;

constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __cordl_internal_get__destination_k__BackingField() ;

constexpr bool const& __cordl_internal_get__flip_k__BackingField() const;

constexpr bool& __cordl_internal_get__flip_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__height_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__height_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isSceneView_k__BackingField() const;

constexpr bool& __cordl_internal_get__isSceneView_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__numberOfEyes_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__numberOfEyes_k__BackingField() ;

constexpr ::UnityEngine::Rendering::PostProcessing::PropertySheetFactory* const& __cordl_internal_get__propertySheets_k__BackingField() const;

constexpr ::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*& __cordl_internal_get__propertySheets_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources> const& __cordl_internal_get__resources_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>& __cordl_internal_get__resources_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__screenHeight_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__screenHeight_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__screenWidth_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__screenWidth_k__BackingField() ;

constexpr ::UnityEngine::RenderTextureFormat const& __cordl_internal_get__sourceFormat_k__BackingField() const;

constexpr ::UnityEngine::RenderTextureFormat& __cordl_internal_get__sourceFormat_k__BackingField() ;

constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __cordl_internal_get__source_k__BackingField() const;

constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __cordl_internal_get__source_k__BackingField() ;

constexpr bool const& __cordl_internal_get__stereoActive_k__BackingField() const;

constexpr bool& __cordl_internal_get__stereoActive_k__BackingField() ;

constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode const& __cordl_internal_get__stereoRenderingMode_k__BackingField() const;

constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode& __cordl_internal_get__stereoRenderingMode_k__BackingField() ;

constexpr ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing* const& __cordl_internal_get__temporalAntialiasing_k__BackingField() const;

constexpr ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*& __cordl_internal_get__temporalAntialiasing_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& __cordl_internal_get__userData_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& __cordl_internal_get__userData_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__width_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__width_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__xrActiveEye_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__xrActiveEye_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::AutoExposure> const& __cordl_internal_get_autoExposure() const;

constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::AutoExposure>& __cordl_internal_get_autoExposure() ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get_autoExposureTexture() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get_autoExposureTexture() ;

constexpr int32_t const& __cordl_internal_get_bloomBufferNameID() const;

constexpr int32_t& __cordl_internal_get_bloomBufferNameID() ;

constexpr ::UnityEngine::Rendering::PostProcessing::LogHistogram* const& __cordl_internal_get_logHistogram() const;

constexpr ::UnityEngine::Rendering::PostProcessing::LogHistogram*& __cordl_internal_get_logHistogram() ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get_logLut() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get_logLut() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_m_Camera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_m_Camera() ;

constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get_m_sourceDescriptor() const;

constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get_m_sourceDescriptor() ;

constexpr bool const& __cordl_internal_get_physicalCamera() const;

constexpr bool& __cordl_internal_get_physicalCamera() ;

constexpr ::UnityEngine::Rendering::PostProcessing::PropertySheet* const& __cordl_internal_get_uberSheet() const;

constexpr ::UnityEngine::Rendering::PostProcessing::PropertySheet*& __cordl_internal_get_uberSheet() ;

constexpr void __cordl_internal_set__antialiasing_k__BackingField(::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing  value) ;

constexpr void __cordl_internal_set__command_k__BackingField(::UnityEngine::Rendering::CommandBuffer*  value) ;

constexpr void __cordl_internal_set__debugLayer_k__BackingField(::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*  value) ;

constexpr void __cordl_internal_set__destination_k__BackingField(::UnityEngine::Rendering::RenderTargetIdentifier  value) ;

constexpr void __cordl_internal_set__flip_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__height_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__isSceneView_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__numberOfEyes_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__propertySheets_k__BackingField(::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*  value) ;

constexpr void __cordl_internal_set__resources_k__BackingField(::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>  value) ;

constexpr void __cordl_internal_set__screenHeight_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__screenWidth_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__sourceFormat_k__BackingField(::UnityEngine::RenderTextureFormat  value) ;

constexpr void __cordl_internal_set__source_k__BackingField(::UnityEngine::Rendering::RenderTargetIdentifier  value) ;

constexpr void __cordl_internal_set__stereoActive_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__stereoRenderingMode_k__BackingField(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode  value) ;

constexpr void __cordl_internal_set__temporalAntialiasing_k__BackingField(::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*  value) ;

constexpr void __cordl_internal_set__userData_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

constexpr void __cordl_internal_set__width_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__xrActiveEye_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_autoExposure(::UnityW<::UnityEngine::Rendering::PostProcessing::AutoExposure>  value) ;

constexpr void __cordl_internal_set_autoExposureTexture(::UnityW<::UnityEngine::Texture>  value) ;

constexpr void __cordl_internal_set_bloomBufferNameID(int32_t  value) ;

constexpr void __cordl_internal_set_logHistogram(::UnityEngine::Rendering::PostProcessing::LogHistogram*  value) ;

constexpr void __cordl_internal_set_logLut(::UnityW<::UnityEngine::Texture>  value) ;

constexpr void __cordl_internal_set_m_Camera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_m_sourceDescriptor(::UnityEngine::RenderTextureDescriptor  value) ;

constexpr void __cordl_internal_set_physicalCamera(bool  value) ;

constexpr void __cordl_internal_set_uberSheet(::UnityEngine::Rendering::PostProcessing::PropertySheet*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_antialiasing, addr 0x1816bea70, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing get_antialiasing() ;

/// @brief Method get_camera, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Camera> get_camera() ;

/// @brief Method get_command, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::CommandBuffer* get_command() ;

/// @brief Method get_debugLayer, addr 0x180312ea0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer* get_debugLayer() ;

/// @brief Method get_destination, addr 0x181fcaaa0, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RenderTargetIdentifier get_destination() ;

/// @brief Method get_flip, addr 0x1802e5840, size 0x10, virtual false, abstract: false, final false
inline bool get_flip() ;

/// @brief Method get_height, addr 0x181561f30, size 0x10, virtual false, abstract: false, final false
inline int32_t get_height() ;

/// @brief Method get_isSceneView, addr 0x181fcaac0, size 0x10, virtual false, abstract: false, final false
inline bool get_isSceneView() ;

/// @brief Method get_numberOfEyes, addr 0x181c9bb30, size 0x10, virtual false, abstract: false, final false
inline int32_t get_numberOfEyes() ;

/// @brief Method get_propertySheets, addr 0x1802ec4c0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::PostProcessing::PropertySheetFactory* get_propertySheets() ;

/// @brief Method get_resources, addr 0x1803a74e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources> get_resources() ;

/// @brief Method get_screenHeight, addr 0x1803b2d50, size 0x10, virtual false, abstract: false, final false
inline int32_t get_screenHeight() ;

/// @brief Method get_screenWidth, addr 0x1803b2d80, size 0x10, virtual false, abstract: false, final false
inline int32_t get_screenWidth() ;

/// @brief Method get_source, addr 0x181fcaad0, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RenderTargetIdentifier get_source() ;

/// @brief Method get_sourceFormat, addr 0x1803fa740, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::RenderTextureFormat get_sourceFormat() ;

/// @brief Method get_stereoActive, addr 0x1805fa960, size 0x10, virtual false, abstract: false, final false
inline bool get_stereoActive() ;

/// @brief Method get_stereoRenderingMode, addr 0x1803b2c70, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode get_stereoRenderingMode() ;

/// @brief Method get_temporalAntialiasing, addr 0x1802edc30, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing* get_temporalAntialiasing() ;

/// @brief Method get_userData, addr 0x1802e5800, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* get_userData() ;

/// @brief Method get_width, addr 0x1805d4740, size 0x10, virtual false, abstract: false, final false
inline int32_t get_width() ;

/// @brief Method get_xrActiveEye, addr 0x1804081d0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_xrActiveEye() ;

/// @brief Method set_antialiasing, addr 0x181fcaaf0, size 0x10, virtual false, abstract: false, final false
inline void set_antialiasing(::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing  value) ;

/// @brief Method set_camera, addr 0x181fcab00, size 0x190, virtual false, abstract: false, final false
inline void set_camera(::UnityEngine::Camera*  value) ;

/// @brief Method set_command, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_command(::UnityEngine::Rendering::CommandBuffer*  value) ;

/// @brief Method set_debugLayer, addr 0x1803e1880, size 0x20, virtual false, abstract: false, final false
inline void set_debugLayer(::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*  value) ;

/// @brief Method set_destination, addr 0x181fcac90, size 0x20, virtual false, abstract: false, final false
inline void set_destination(::UnityEngine::Rendering::RenderTargetIdentifier  value) ;

/// @brief Method set_flip, addr 0x181fcacb0, size 0x10, virtual false, abstract: false, final false
inline void set_flip(bool  value) ;

/// @brief Method set_height, addr 0x181fcacc0, size 0x10, virtual false, abstract: false, final false
inline void set_height(int32_t  value) ;

/// @brief Method set_isSceneView, addr 0x180487390, size 0x10, virtual false, abstract: false, final false
inline void set_isSceneView(bool  value) ;

/// @brief Method set_numberOfEyes, addr 0x181fcacd0, size 0x10, virtual false, abstract: false, final false
inline void set_numberOfEyes(int32_t  value) ;

/// @brief Method set_propertySheets, addr 0x1803117a0, size 0x10, virtual false, abstract: false, final false
inline void set_propertySheets(::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*  value) ;

/// @brief Method set_resources, addr 0x1803f5420, size 0x10, virtual false, abstract: false, final false
inline void set_resources(::UnityEngine::Rendering::PostProcessing::PostProcessResources*  value) ;

/// @brief Method set_screenHeight, addr 0x181fcace0, size 0x10, virtual false, abstract: false, final false
inline void set_screenHeight(int32_t  value) ;

/// @brief Method set_screenWidth, addr 0x1817eed30, size 0x10, virtual false, abstract: false, final false
inline void set_screenWidth(int32_t  value) ;

/// @brief Method set_source, addr 0x181fcacf0, size 0x20, virtual false, abstract: false, final false
inline void set_source(::UnityEngine::Rendering::RenderTargetIdentifier  value) ;

/// @brief Method set_sourceFormat, addr 0x18051e950, size 0x10, virtual false, abstract: false, final false
inline void set_sourceFormat(::UnityEngine::RenderTextureFormat  value) ;

/// @brief Method set_stereoActive, addr 0x1817eed70, size 0x10, virtual false, abstract: false, final false
inline void set_stereoActive(bool  value) ;

/// @brief Method set_stereoRenderingMode, addr 0x18182c930, size 0x10, virtual false, abstract: false, final false
inline void set_stereoRenderingMode(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode  value) ;

/// @brief Method set_temporalAntialiasing, addr 0x1803d3a10, size 0x20, virtual false, abstract: false, final false
inline void set_temporalAntialiasing(::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*  value) ;

/// @brief Method set_userData, addr 0x180374490, size 0x20, virtual false, abstract: false, final false
inline void set_userData(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

/// @brief Method set_width, addr 0x180cbfed0, size 0x10, virtual false, abstract: false, final false
inline void set_width(int32_t  value) ;

/// @brief Method set_xrActiveEye, addr 0x181fcad10, size 0x10, virtual false, abstract: false, final false
inline void set_xrActiveEye(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostProcessRenderContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostProcessRenderContext", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PostProcessRenderContext(PostProcessRenderContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostProcessRenderContext", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostProcessRenderContext(PostProcessRenderContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18643};

/// @brief Field m_Camera, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___m_Camera;

/// @brief Field <command>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Rendering::CommandBuffer*  ____command_k__BackingField;

/// @brief Field <source>k__BackingField, offset: 0x20, size: 0x28, def value: None
 ::UnityEngine::Rendering::RenderTargetIdentifier  ____source_k__BackingField;

/// @brief Field <destination>k__BackingField, offset: 0x48, size: 0x28, def value: None
 ::UnityEngine::Rendering::RenderTargetIdentifier  ____destination_k__BackingField;

/// @brief Field <sourceFormat>k__BackingField, offset: 0x70, size: 0x4, def value: None
 ::UnityEngine::RenderTextureFormat  ____sourceFormat_k__BackingField;

/// @brief Field <flip>k__BackingField, offset: 0x74, size: 0x1, def value: None
 bool  ____flip_k__BackingField;

/// @brief Field <resources>k__BackingField, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>  ____resources_k__BackingField;

/// @brief Field <propertySheets>k__BackingField, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*  ____propertySheets_k__BackingField;

/// @brief Field <userData>k__BackingField, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  ____userData_k__BackingField;

/// @brief Field <debugLayer>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*  ____debugLayer_k__BackingField;

/// @brief Field <width>k__BackingField, offset: 0x98, size: 0x4, def value: None
 int32_t  ____width_k__BackingField;

/// @brief Field <height>k__BackingField, offset: 0x9c, size: 0x4, def value: None
 int32_t  ____height_k__BackingField;

/// @brief Field <stereoActive>k__BackingField, offset: 0xa0, size: 0x1, def value: None
 bool  ____stereoActive_k__BackingField;

/// @brief Field <xrActiveEye>k__BackingField, offset: 0xa4, size: 0x4, def value: None
 int32_t  ____xrActiveEye_k__BackingField;

/// @brief Field <numberOfEyes>k__BackingField, offset: 0xa8, size: 0x4, def value: None
 int32_t  ____numberOfEyes_k__BackingField;

/// @brief Field <stereoRenderingMode>k__BackingField, offset: 0xac, size: 0x4, def value: None
 ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode  ____stereoRenderingMode_k__BackingField;

/// @brief Field <screenWidth>k__BackingField, offset: 0xb0, size: 0x4, def value: None
 int32_t  ____screenWidth_k__BackingField;

/// @brief Field <screenHeight>k__BackingField, offset: 0xb4, size: 0x4, def value: None
 int32_t  ____screenHeight_k__BackingField;

/// @brief Field <isSceneView>k__BackingField, offset: 0xb8, size: 0x1, def value: None
 bool  ____isSceneView_k__BackingField;

/// @brief Field <antialiasing>k__BackingField, offset: 0xbc, size: 0x4, def value: None
 ::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing  ____antialiasing_k__BackingField;

/// @brief Field <temporalAntialiasing>k__BackingField, offset: 0xc0, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*  ____temporalAntialiasing_k__BackingField;

/// @brief Field uberSheet, offset: 0xc8, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::PropertySheet*  ___uberSheet;

/// @brief Field autoExposureTexture, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ___autoExposureTexture;

/// @brief Field logHistogram, offset: 0xd8, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::LogHistogram*  ___logHistogram;

/// @brief Field logLut, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ___logLut;

/// @brief Field autoExposure, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::PostProcessing::AutoExposure>  ___autoExposure;

/// @brief Field bloomBufferNameID, offset: 0xf0, size: 0x4, def value: None
 int32_t  ___bloomBufferNameID;

/// @brief Field physicalCamera, offset: 0xf4, size: 0x1, def value: None
 bool  ___physicalCamera;

/// @brief Field m_sourceDescriptor, offset: 0xf8, size: 0x34, def value: None
 ::UnityEngine::RenderTextureDescriptor  ___m_sourceDescriptor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext, ___m_Camera) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext, ____command_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext, ____source_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext, ____destination_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext, ____sourceFormat_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext, ____flip_k__BackingField) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext, ____resources_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext, ____propertySheets_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext, ____userData_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext, ____debugLayer_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext, ____width_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext, ____height_k__BackingField) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext, ____stereoActive_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext, ____xrActiveEye_k__BackingField) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext, ____numberOfEyes_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext, ____stereoRenderingMode_k__BackingField) == 0xac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext, ____screenWidth_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext, ____screenHeight_k__BackingField) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext, ____isSceneView_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext, ____antialiasing_k__BackingField) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext, ____temporalAntialiasing_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext, ___uberSheet) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext, ___autoExposureTexture) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext, ___logHistogram) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext, ___logLut) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext, ___autoExposure) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext, ___bloomBufferNameID) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext, ___physicalCamera) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext, ___m_sourceDescriptor) == 0xf8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext) == 0x130, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing

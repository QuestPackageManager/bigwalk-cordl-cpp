#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/PostProcessDebugLayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ColorBlindnessType_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__DebugOverlay_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PostProcessDebugLayer)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::Rendering::PostProcessing {
struct DebugOverlay;
}
namespace UnityEngine::Rendering::PostProcessing {
class HistogramMonitor;
}
namespace UnityEngine::Rendering::PostProcessing {
class LightMeterMonitor;
}
namespace UnityEngine::Rendering::PostProcessing {
struct MonitorType;
}
namespace UnityEngine::Rendering::PostProcessing {
class Monitor;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessDebugLayer_OverlaySettings;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
namespace UnityEngine::Rendering::PostProcessing {
class PropertySheet;
}
namespace UnityEngine::Rendering::PostProcessing {
class VectorscopeMonitor;
}
namespace UnityEngine::Rendering::PostProcessing {
class WaveformMonitor;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
struct DepthTextureMode;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessDebugLayer;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessDebugLayer_OverlaySettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*);
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*, "UnityEngine.Rendering.PostProcessing", "PostProcessDebugLayer");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings*, "UnityEngine.Rendering.PostProcessing", "PostProcessDebugLayer/OverlaySettings");
// Dependencies System.Object, UnityEngine.Rendering.PostProcessing.ColorBlindnessType
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.PostProcessDebugLayer/OverlaySettings
class CORDL_TYPE PostProcessDebugLayer_OverlaySettings : public ::System::Object {
public:
// Declarations
/// @brief Field colorBlindnessStrength, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_colorBlindnessStrength, put=__cordl_internal_set_colorBlindnessStrength)) float_t  colorBlindnessStrength;

/// @brief Field colorBlindnessType, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_colorBlindnessType, put=__cordl_internal_set_colorBlindnessType)) ::UnityEngine::Rendering::PostProcessing::ColorBlindnessType  colorBlindnessType;

/// @brief Field linearDepth, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_linearDepth, put=__cordl_internal_set_linearDepth)) bool  linearDepth;

/// @brief Field motionColorIntensity, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_motionColorIntensity, put=__cordl_internal_set_motionColorIntensity)) float_t  motionColorIntensity;

/// @brief Field motionGridSize, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_motionGridSize, put=__cordl_internal_set_motionGridSize)) int32_t  motionGridSize;

static inline ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings* New_ctor() ;

constexpr float_t const& __cordl_internal_get_colorBlindnessStrength() const;

constexpr float_t& __cordl_internal_get_colorBlindnessStrength() ;

constexpr ::UnityEngine::Rendering::PostProcessing::ColorBlindnessType const& __cordl_internal_get_colorBlindnessType() const;

constexpr ::UnityEngine::Rendering::PostProcessing::ColorBlindnessType& __cordl_internal_get_colorBlindnessType() ;

constexpr bool const& __cordl_internal_get_linearDepth() const;

constexpr bool& __cordl_internal_get_linearDepth() ;

constexpr float_t const& __cordl_internal_get_motionColorIntensity() const;

constexpr float_t& __cordl_internal_get_motionColorIntensity() ;

constexpr int32_t const& __cordl_internal_get_motionGridSize() const;

constexpr int32_t& __cordl_internal_get_motionGridSize() ;

constexpr void __cordl_internal_set_colorBlindnessStrength(float_t  value) ;

constexpr void __cordl_internal_set_colorBlindnessType(::UnityEngine::Rendering::PostProcessing::ColorBlindnessType  value) ;

constexpr void __cordl_internal_set_linearDepth(bool  value) ;

constexpr void __cordl_internal_set_motionColorIntensity(float_t  value) ;

constexpr void __cordl_internal_set_motionGridSize(int32_t  value) ;

/// @brief Method .ctor, addr 0x181fc1220, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostProcessDebugLayer_OverlaySettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostProcessDebugLayer_OverlaySettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PostProcessDebugLayer_OverlaySettings(PostProcessDebugLayer_OverlaySettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostProcessDebugLayer_OverlaySettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostProcessDebugLayer_OverlaySettings(PostProcessDebugLayer_OverlaySettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18622};

/// @brief Field linearDepth, offset: 0x10, size: 0x1, def value: None
 bool  ___linearDepth;

/// @brief Field motionColorIntensity, offset: 0x14, size: 0x4, def value: None
 float_t  ___motionColorIntensity;

/// @brief Field motionGridSize, offset: 0x18, size: 0x4, def value: None
 int32_t  ___motionGridSize;

/// @brief Field colorBlindnessType, offset: 0x1c, size: 0x4, def value: None
 ::UnityEngine::Rendering::PostProcessing::ColorBlindnessType  ___colorBlindnessType;

/// @brief Field colorBlindnessStrength, offset: 0x20, size: 0x4, def value: None
 float_t  ___colorBlindnessStrength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings, ___linearDepth) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings, ___motionColorIntensity) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings, ___motionGridSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings, ___colorBlindnessType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings, ___colorBlindnessStrength) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
// Dependencies System.Object, UnityEngine.Rendering.PostProcessing.DebugOverlay
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.PostProcessDebugLayer
class CORDL_TYPE PostProcessDebugLayer : public ::System::Object {
public:
// Declarations
using OverlaySettings = ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings;

/// @brief Field <debugOverlayActive>k__BackingField, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__debugOverlayActive_k__BackingField, put=__cordl_internal_set__debugOverlayActive_k__BackingField)) bool  _debugOverlayActive_k__BackingField;

/// @brief Field <debugOverlayTarget>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__debugOverlayTarget_k__BackingField, put=__cordl_internal_set__debugOverlayTarget_k__BackingField)) ::UnityW<::UnityEngine::RenderTexture>  _debugOverlayTarget_k__BackingField;

/// @brief Field <debugOverlay>k__BackingField, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__debugOverlay_k__BackingField, put=__cordl_internal_set__debugOverlay_k__BackingField)) ::UnityEngine::Rendering::PostProcessing::DebugOverlay  _debugOverlay_k__BackingField;

 __declspec(property(get=get_debugOverlay, put=set_debugOverlay)) ::UnityEngine::Rendering::PostProcessing::DebugOverlay  debugOverlay;

 __declspec(property(get=get_debugOverlayActive, put=set_debugOverlayActive)) bool  debugOverlayActive;

 __declspec(property(get=get_debugOverlayTarget, put=set_debugOverlayTarget)) ::UnityW<::UnityEngine::RenderTexture>  debugOverlayTarget;

/// @brief Field frameHeight, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_frameHeight, put=__cordl_internal_set_frameHeight)) int32_t  frameHeight;

/// @brief Field frameWidth, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_frameWidth, put=__cordl_internal_set_frameWidth)) int32_t  frameWidth;

/// @brief Field histogram, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_histogram, put=__cordl_internal_set_histogram)) ::UnityEngine::Rendering::PostProcessing::HistogramMonitor*  histogram;

/// @brief Field lightMeter, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_lightMeter, put=__cordl_internal_set_lightMeter)) ::UnityEngine::Rendering::PostProcessing::LightMeterMonitor*  lightMeter;

/// @brief Field m_Monitors, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Monitors, put=__cordl_internal_set_m_Monitors)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::PostProcessing::MonitorType,::UnityEngine::Rendering::PostProcessing::Monitor*>*  m_Monitors;

/// @brief Field overlaySettings, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_overlaySettings, put=__cordl_internal_set_overlaySettings)) ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings*  overlaySettings;

/// @brief Field vectorscope, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_vectorscope, put=__cordl_internal_set_vectorscope)) ::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor*  vectorscope;

/// @brief Field waveform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_waveform, put=__cordl_internal_set_waveform)) ::UnityEngine::Rendering::PostProcessing::WaveformMonitor*  waveform;

/// @brief Method DestroyDebugOverlayTarget, addr 0x181fc13e0, size 0x50, virtual false, abstract: false, final false
inline void DestroyDebugOverlayTarget() ;

/// @brief Method EndFrame, addr 0x181fc1430, size 0xe0, virtual false, abstract: false, final false
inline void EndFrame() ;

/// @brief Method GetCameraFlags, addr 0x181fc1510, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::DepthTextureMode GetCameraFlags() ;

static inline ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer* New_ctor() ;

/// @brief Method OnDisable, addr 0x181fc1540, size 0xe0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x181fc1620, size 0x180, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PushDebugOverlay, addr 0x181fc17a0, size 0x230, virtual false, abstract: false, final false
inline void PushDebugOverlay(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::PostProcessing::PropertySheet*  sheet, int32_t  pass) ;

/// @brief Method RenderMonitors, addr 0x181fc19d0, size 0x300, virtual false, abstract: false, final false
inline void RenderMonitors(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method RenderSpecialOverlays, addr 0x181fc1cd0, size 0x300, virtual false, abstract: false, final false
inline void RenderSpecialOverlays(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method RequestDebugOverlay, addr 0x180e25b60, size 0x5f70, virtual false, abstract: false, final false
inline void RequestDebugOverlay(::UnityEngine::Rendering::PostProcessing::DebugOverlay  mode) ;

/// @brief Method RequestMonitorPass, addr 0x181fc1fd0, size 0x20, virtual false, abstract: false, final false
inline void RequestMonitorPass(::UnityEngine::Rendering::PostProcessing::MonitorType  monitor) ;

/// @brief Method SetFrameSize, addr 0x181fc1ff0, size 0x10, virtual false, abstract: false, final false
inline void SetFrameSize(int32_t  width, int32_t  height) ;

constexpr bool const& __cordl_internal_get__debugOverlayActive_k__BackingField() const;

constexpr bool& __cordl_internal_get__debugOverlayActive_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__debugOverlayTarget_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__debugOverlayTarget_k__BackingField() ;

constexpr ::UnityEngine::Rendering::PostProcessing::DebugOverlay const& __cordl_internal_get__debugOverlay_k__BackingField() const;

constexpr ::UnityEngine::Rendering::PostProcessing::DebugOverlay& __cordl_internal_get__debugOverlay_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_frameHeight() const;

constexpr int32_t& __cordl_internal_get_frameHeight() ;

constexpr int32_t const& __cordl_internal_get_frameWidth() const;

constexpr int32_t& __cordl_internal_get_frameWidth() ;

constexpr ::UnityEngine::Rendering::PostProcessing::HistogramMonitor* const& __cordl_internal_get_histogram() const;

constexpr ::UnityEngine::Rendering::PostProcessing::HistogramMonitor*& __cordl_internal_get_histogram() ;

constexpr ::UnityEngine::Rendering::PostProcessing::LightMeterMonitor* const& __cordl_internal_get_lightMeter() const;

constexpr ::UnityEngine::Rendering::PostProcessing::LightMeterMonitor*& __cordl_internal_get_lightMeter() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::PostProcessing::MonitorType,::UnityEngine::Rendering::PostProcessing::Monitor*>* const& __cordl_internal_get_m_Monitors() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::PostProcessing::MonitorType,::UnityEngine::Rendering::PostProcessing::Monitor*>*& __cordl_internal_get_m_Monitors() ;

constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings* const& __cordl_internal_get_overlaySettings() const;

constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings*& __cordl_internal_get_overlaySettings() ;

constexpr ::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor* const& __cordl_internal_get_vectorscope() const;

constexpr ::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor*& __cordl_internal_get_vectorscope() ;

constexpr ::UnityEngine::Rendering::PostProcessing::WaveformMonitor* const& __cordl_internal_get_waveform() const;

constexpr ::UnityEngine::Rendering::PostProcessing::WaveformMonitor*& __cordl_internal_get_waveform() ;

constexpr void __cordl_internal_set__debugOverlayActive_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__debugOverlayTarget_k__BackingField(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set__debugOverlay_k__BackingField(::UnityEngine::Rendering::PostProcessing::DebugOverlay  value) ;

constexpr void __cordl_internal_set_frameHeight(int32_t  value) ;

constexpr void __cordl_internal_set_frameWidth(int32_t  value) ;

constexpr void __cordl_internal_set_histogram(::UnityEngine::Rendering::PostProcessing::HistogramMonitor*  value) ;

constexpr void __cordl_internal_set_lightMeter(::UnityEngine::Rendering::PostProcessing::LightMeterMonitor*  value) ;

constexpr void __cordl_internal_set_m_Monitors(::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::PostProcessing::MonitorType,::UnityEngine::Rendering::PostProcessing::Monitor*>*  value) ;

constexpr void __cordl_internal_set_overlaySettings(::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings*  value) ;

constexpr void __cordl_internal_set_vectorscope(::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor*  value) ;

constexpr void __cordl_internal_set_waveform(::UnityEngine::Rendering::PostProcessing::WaveformMonitor*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_debugOverlay, addr 0x180e25b50, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::PostProcessing::DebugOverlay get_debugOverlay() ;

/// @brief Method get_debugOverlayActive, addr 0x1802fdd10, size 0x10, virtual false, abstract: false, final false
inline bool get_debugOverlayActive() ;

/// @brief Method get_debugOverlayTarget, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> get_debugOverlayTarget() ;

/// @brief Method set_debugOverlay, addr 0x180e25b60, size 0x5f70, virtual false, abstract: false, final false
inline void set_debugOverlay(::UnityEngine::Rendering::PostProcessing::DebugOverlay  value) ;

/// @brief Method set_debugOverlayActive, addr 0x180503b70, size 0x10, virtual false, abstract: false, final false
inline void set_debugOverlayActive(bool  value) ;

/// @brief Method set_debugOverlayTarget, addr 0x1802e5d90, size 0x10, virtual false, abstract: false, final false
inline void set_debugOverlayTarget(::UnityEngine::RenderTexture*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostProcessDebugLayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostProcessDebugLayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PostProcessDebugLayer(PostProcessDebugLayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostProcessDebugLayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostProcessDebugLayer(PostProcessDebugLayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18623};

/// @brief Field lightMeter, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::LightMeterMonitor*  ___lightMeter;

/// @brief Field histogram, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::HistogramMonitor*  ___histogram;

/// @brief Field waveform, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::WaveformMonitor*  ___waveform;

/// @brief Field vectorscope, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor*  ___vectorscope;

/// @brief Field m_Monitors, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::PostProcessing::MonitorType,::UnityEngine::Rendering::PostProcessing::Monitor*>*  ___m_Monitors;

/// @brief Field frameWidth, offset: 0x38, size: 0x4, def value: None
 int32_t  ___frameWidth;

/// @brief Field frameHeight, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___frameHeight;

/// @brief Field <debugOverlayTarget>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ____debugOverlayTarget_k__BackingField;

/// @brief Field <debugOverlayActive>k__BackingField, offset: 0x48, size: 0x1, def value: None
 bool  ____debugOverlayActive_k__BackingField;

/// @brief Field <debugOverlay>k__BackingField, offset: 0x4c, size: 0x4, def value: None
 ::UnityEngine::Rendering::PostProcessing::DebugOverlay  ____debugOverlay_k__BackingField;

/// @brief Field overlaySettings, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings*  ___overlaySettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer, ___lightMeter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer, ___histogram) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer, ___waveform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer, ___vectorscope) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer, ___m_Monitors) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer, ___frameWidth) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer, ___frameHeight) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer, ____debugOverlayTarget_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer, ____debugOverlayActive_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer, ____debugOverlay_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer, ___overlaySettings) == 0x50, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer) == 0x58, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing

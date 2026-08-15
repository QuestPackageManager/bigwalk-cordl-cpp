#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/PostProcessDebug.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__DebugOverlay_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PostProcessDebug)
namespace UnityEngine::Rendering::PostProcessing {
class Monitor;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessLayer;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessDebug;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::PostProcessDebug*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::PostProcessDebug*, "UnityEngine.Rendering.PostProcessing", "PostProcessDebug");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Rendering.PostProcessing.DebugOverlay
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.PostProcessDebug
class CORDL_TYPE PostProcessDebug : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field debugOverlay, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_debugOverlay, put=__cordl_internal_set_debugOverlay)) ::UnityEngine::Rendering::PostProcessing::DebugOverlay  debugOverlay;

/// @brief Field histogram, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_histogram, put=__cordl_internal_set_histogram)) bool  histogram;

/// @brief Field lightMeter, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_lightMeter, put=__cordl_internal_set_lightMeter)) bool  lightMeter;

/// @brief Field m_CmdAfterEverything, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CmdAfterEverything, put=__cordl_internal_set_m_CmdAfterEverything)) ::UnityEngine::Rendering::CommandBuffer*  m_CmdAfterEverything;

/// @brief Field m_CurrentCamera, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CurrentCamera, put=__cordl_internal_set_m_CurrentCamera)) ::UnityW<::UnityEngine::Camera>  m_CurrentCamera;

/// @brief Field m_PreviousPostProcessLayer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PreviousPostProcessLayer, put=__cordl_internal_set_m_PreviousPostProcessLayer)) ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessLayer>  m_PreviousPostProcessLayer;

/// @brief Field postProcessLayer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_postProcessLayer, put=__cordl_internal_set_postProcessLayer)) ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessLayer>  postProcessLayer;

/// @brief Field vectorscope, offset 0x33, size 0x1 
 __declspec(property(get=__cordl_internal_get_vectorscope, put=__cordl_internal_set_vectorscope)) bool  vectorscope;

/// @brief Field waveform, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get_waveform, put=__cordl_internal_set_waveform)) bool  waveform;

/// @brief Method DrawMonitor, addr 0x181fc2000, size 0x110, virtual false, abstract: false, final false
inline void DrawMonitor(::by_ref<::UnityEngine::Rect>  rect, ::UnityEngine::Rendering::PostProcessing::Monitor*  monitor, bool  enabled) ;

static inline ::UnityEngine::Rendering::PostProcessing::PostProcessDebug* New_ctor() ;

/// @brief Method OnDisable, addr 0x181fc2110, size 0x60, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x181fc2170, size 0x60, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGUI, addr 0x181fc21d0, size 0xe0, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method OnPostRender, addr 0x181fc22b0, size 0xb0, virtual false, abstract: false, final false
inline void OnPostRender() ;

/// @brief Method Reset, addr 0x181fc2360, size 0x30, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Update, addr 0x181fc2520, size 0x10, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateStates, addr 0x181fc2390, size 0x190, virtual false, abstract: false, final false
inline void UpdateStates() ;

constexpr ::UnityEngine::Rendering::PostProcessing::DebugOverlay const& __cordl_internal_get_debugOverlay() const;

constexpr ::UnityEngine::Rendering::PostProcessing::DebugOverlay& __cordl_internal_get_debugOverlay() ;

constexpr bool const& __cordl_internal_get_histogram() const;

constexpr bool& __cordl_internal_get_histogram() ;

constexpr bool const& __cordl_internal_get_lightMeter() const;

constexpr bool& __cordl_internal_get_lightMeter() ;

constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get_m_CmdAfterEverything() const;

constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get_m_CmdAfterEverything() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_m_CurrentCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_m_CurrentCamera() ;

constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessLayer> const& __cordl_internal_get_m_PreviousPostProcessLayer() const;

constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessLayer>& __cordl_internal_get_m_PreviousPostProcessLayer() ;

constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessLayer> const& __cordl_internal_get_postProcessLayer() const;

constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessLayer>& __cordl_internal_get_postProcessLayer() ;

constexpr bool const& __cordl_internal_get_vectorscope() const;

constexpr bool& __cordl_internal_get_vectorscope() ;

constexpr bool const& __cordl_internal_get_waveform() const;

constexpr bool& __cordl_internal_get_waveform() ;

constexpr void __cordl_internal_set_debugOverlay(::UnityEngine::Rendering::PostProcessing::DebugOverlay  value) ;

constexpr void __cordl_internal_set_histogram(bool  value) ;

constexpr void __cordl_internal_set_lightMeter(bool  value) ;

constexpr void __cordl_internal_set_m_CmdAfterEverything(::UnityEngine::Rendering::CommandBuffer*  value) ;

constexpr void __cordl_internal_set_m_CurrentCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_m_PreviousPostProcessLayer(::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessLayer>  value) ;

constexpr void __cordl_internal_set_postProcessLayer(::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessLayer>  value) ;

constexpr void __cordl_internal_set_vectorscope(bool  value) ;

constexpr void __cordl_internal_set_waveform(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostProcessDebug() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostProcessDebug", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PostProcessDebug(PostProcessDebug && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostProcessDebug", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostProcessDebug(PostProcessDebug const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18619};

/// @brief Field postProcessLayer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessLayer>  ___postProcessLayer;

/// @brief Field m_PreviousPostProcessLayer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessLayer>  ___m_PreviousPostProcessLayer;

/// @brief Field lightMeter, offset: 0x30, size: 0x1, def value: None
 bool  ___lightMeter;

/// @brief Field histogram, offset: 0x31, size: 0x1, def value: None
 bool  ___histogram;

/// @brief Field waveform, offset: 0x32, size: 0x1, def value: None
 bool  ___waveform;

/// @brief Field vectorscope, offset: 0x33, size: 0x1, def value: None
 bool  ___vectorscope;

/// @brief Field debugOverlay, offset: 0x34, size: 0x4, def value: None
 ::UnityEngine::Rendering::PostProcessing::DebugOverlay  ___debugOverlay;

/// @brief Field m_CurrentCamera, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___m_CurrentCamera;

/// @brief Field m_CmdAfterEverything, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Rendering::CommandBuffer*  ___m_CmdAfterEverything;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessDebug, ___postProcessLayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessDebug, ___m_PreviousPostProcessLayer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessDebug, ___lightMeter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessDebug, ___histogram) == 0x31, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessDebug, ___waveform) == 0x32, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessDebug, ___vectorscope) == 0x33, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessDebug, ___debugOverlay) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessDebug, ___m_CurrentCamera) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessDebug, ___m_CmdAfterEverything) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::PostProcessDebug) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing

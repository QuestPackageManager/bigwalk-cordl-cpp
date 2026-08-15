#pragma once
// IWYU pragma private; include "UnityEngine/Canvas.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Canvas)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct AdditionalCanvasShaderChannels;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Canvas_WillRenderCanvases;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct RenderMode;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
class Canvas_WillRenderCanvases;
}
// Write type traits
MARK_REF_T(::UnityEngine::Canvas*);
MARK_REF_T(::UnityEngine::Canvas_WillRenderCanvases*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Canvas*, "UnityEngine", "Canvas");
DEFINE_IL2CPP_CLASS(::UnityEngine::Canvas_WillRenderCanvases*, "UnityEngine", "Canvas/WillRenderCanvases");
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Canvas/WillRenderCanvases
class CORDL_TYPE Canvas_WillRenderCanvases : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1802dc3f0, size 0x10, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::UnityEngine::Canvas_WillRenderCanvases* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18057e770, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Canvas_WillRenderCanvases() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Canvas_WillRenderCanvases", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Canvas_WillRenderCanvases(Canvas_WillRenderCanvases && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Canvas_WillRenderCanvases", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Canvas_WillRenderCanvases(Canvas_WillRenderCanvases const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21030};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Canvas_WillRenderCanvases) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Canvas
class CORDL_TYPE Canvas : public ::UnityEngine::Behaviour {
public:
// Declarations
using WillRenderCanvases = ::UnityEngine::Canvas_WillRenderCanvases;

/// @brief Field <externBeginRenderOverlays>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__externBeginRenderOverlays_k__BackingField, put=setStaticF__externBeginRenderOverlays_k__BackingField)) ::System::Action_1<int32_t>*  _externBeginRenderOverlays_k__BackingField;

/// @brief Field <externEndRenderOverlays>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__externEndRenderOverlays_k__BackingField, put=setStaticF__externEndRenderOverlays_k__BackingField)) ::System::Action_1<int32_t>*  _externEndRenderOverlays_k__BackingField;

/// @brief Field <externRenderOverlaysBefore>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__externRenderOverlaysBefore_k__BackingField, put=setStaticF__externRenderOverlaysBefore_k__BackingField)) ::System::Action_2<int32_t,int32_t>*  _externRenderOverlaysBefore_k__BackingField;

 __declspec(property(get=get_additionalShaderChannels, put=set_additionalShaderChannels)) ::UnityEngine::AdditionalCanvasShaderChannels  additionalShaderChannels;

 __declspec(property(get=get_isRootCanvas)) bool  isRootCanvas;

 __declspec(property(get=get_overrideSorting, put=set_overrideSorting)) bool  overrideSorting;

 __declspec(property(get=get_pixelPerfect)) bool  pixelPerfect;

/// @brief Field preWillRenderCanvases, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_preWillRenderCanvases, put=setStaticF_preWillRenderCanvases)) ::UnityEngine::Canvas_WillRenderCanvases*  preWillRenderCanvases;

 __declspec(property(get=get_referencePixelsPerUnit, put=set_referencePixelsPerUnit)) float_t  referencePixelsPerUnit;

 __declspec(property(get=get_renderMode, put=set_renderMode)) ::UnityEngine::RenderMode  renderMode;

 __declspec(property(get=get_renderOrder)) int32_t  renderOrder;

 __declspec(property(get=get_renderingDisplaySize)) ::UnityEngine::Vector2  renderingDisplaySize;

 __declspec(property(get=get_rootCanvas)) ::UnityW<::UnityEngine::Canvas>  rootCanvas;

 __declspec(property(get=get_scaleFactor, put=set_scaleFactor)) float_t  scaleFactor;

 __declspec(property(get=get_sortingLayerID, put=set_sortingLayerID)) int32_t  sortingLayerID;

 __declspec(property(get=get_sortingOrder, put=set_sortingOrder)) int32_t  sortingOrder;

 __declspec(property(get=get_targetDisplay)) int32_t  targetDisplay;

/// @brief Field willRenderCanvases, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_willRenderCanvases, put=setStaticF_willRenderCanvases)) ::UnityEngine::Canvas_WillRenderCanvases*  willRenderCanvases;

 __declspec(property(get=get_worldCamera)) ::UnityW<::UnityEngine::Camera>  worldCamera;

/// @brief Method BeginRenderExtraOverlays, addr 0x182514070, size 0x30, virtual false, abstract: false, final false
static inline void BeginRenderExtraOverlays(int32_t  displayIndex) ;

/// @brief Method EndRenderExtraOverlays, addr 0x1825140a0, size 0x30, virtual false, abstract: false, final false
static inline void EndRenderExtraOverlays(int32_t  displayIndex) ;

/// @brief Method ForceUpdateCanvases, addr 0x1825140d0, size 0x60, virtual false, abstract: false, final false
static inline void ForceUpdateCanvases() ;

/// @brief Method GetDefaultCanvasMaterial, addr 0x182514140, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> GetDefaultCanvasMaterial() ;

/// @brief Method GetDefaultCanvasMaterial_Injected, addr 0x182514130, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetDefaultCanvasMaterial_Injected() ;

/// @brief Method GetETC1SupportedCanvasMaterial, addr 0x182514170, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> GetETC1SupportedCanvasMaterial() ;

/// @brief Method GetETC1SupportedCanvasMaterial_Injected, addr 0x182514160, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetETC1SupportedCanvasMaterial_Injected() ;

static inline ::UnityEngine::Canvas* New_ctor() ;

/// @brief Method RenderExtraOverlaysBefore, addr 0x182514190, size 0x30, virtual false, abstract: false, final false
static inline void RenderExtraOverlaysBefore(int32_t  displayIndex, int32_t  sortingOrder) ;

/// @brief Method SendPreWillRenderCanvases, addr 0x1825141c0, size 0x30, virtual false, abstract: false, final false
static inline void SendPreWillRenderCanvases() ;

/// @brief Method SendWillRenderCanvases, addr 0x1825141f0, size 0x30, virtual false, abstract: false, final false
static inline void SendWillRenderCanvases() ;

/// @brief Method SetExternalCanvasEnabled, addr 0x182514220, size 0x10, virtual false, abstract: false, final false
static inline void SetExternalCanvasEnabled(bool  enabled) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_preWillRenderCanvases, addr 0x182514230, size 0x90, virtual false, abstract: false, final false
static inline void add_preWillRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases*  value) ;

/// @brief Method add_willRenderCanvases, addr 0x1825142c0, size 0x90, virtual false, abstract: false, final false
static inline void add_willRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases*  value) ;

static inline ::System::Action_1<int32_t>* getStaticF__externBeginRenderOverlays_k__BackingField() ;

static inline ::System::Action_1<int32_t>* getStaticF__externEndRenderOverlays_k__BackingField() ;

static inline ::System::Action_2<int32_t,int32_t>* getStaticF__externRenderOverlaysBefore_k__BackingField() ;

static inline ::UnityEngine::Canvas_WillRenderCanvases* getStaticF_preWillRenderCanvases() ;

static inline ::UnityEngine::Canvas_WillRenderCanvases* getStaticF_willRenderCanvases() ;

/// @brief Method get_additionalShaderChannels, addr 0x182514360, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::AdditionalCanvasShaderChannels get_additionalShaderChannels() ;

/// @brief Method get_additionalShaderChannels_Injected, addr 0x182514350, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::AdditionalCanvasShaderChannels get_additionalShaderChannels_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_externBeginRenderOverlays, addr 0x182514390, size 0x20, virtual false, abstract: false, final false
static inline ::System::Action_1<int32_t>* get_externBeginRenderOverlays() ;

/// @brief Method get_externEndRenderOverlays, addr 0x1825143b0, size 0x20, virtual false, abstract: false, final false
static inline ::System::Action_1<int32_t>* get_externEndRenderOverlays() ;

/// @brief Method get_externRenderOverlaysBefore, addr 0x1825143d0, size 0x20, virtual false, abstract: false, final false
static inline ::System::Action_2<int32_t,int32_t>* get_externRenderOverlaysBefore() ;

/// @brief Method get_isRootCanvas, addr 0x182514400, size 0x30, virtual false, abstract: false, final false
inline bool get_isRootCanvas() ;

/// @brief Method get_isRootCanvas_Injected, addr 0x1825143f0, size 0x10, virtual false, abstract: false, final false
static inline bool get_isRootCanvas_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_overrideSorting, addr 0x182514440, size 0x30, virtual false, abstract: false, final false
inline bool get_overrideSorting() ;

/// @brief Method get_overrideSorting_Injected, addr 0x182514430, size 0x10, virtual false, abstract: false, final false
static inline bool get_overrideSorting_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_pixelPerfect, addr 0x182514480, size 0x30, virtual false, abstract: false, final false
inline bool get_pixelPerfect() ;

/// @brief Method get_pixelPerfect_Injected, addr 0x182514470, size 0x10, virtual false, abstract: false, final false
static inline bool get_pixelPerfect_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_referencePixelsPerUnit, addr 0x1825144c0, size 0x30, virtual false, abstract: false, final false
inline float_t get_referencePixelsPerUnit() ;

/// @brief Method get_referencePixelsPerUnit_Injected, addr 0x1825144b0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_referencePixelsPerUnit_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_renderMode, addr 0x182514500, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::RenderMode get_renderMode() ;

/// @brief Method get_renderMode_Injected, addr 0x1825144f0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::RenderMode get_renderMode_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_renderOrder, addr 0x182514540, size 0x30, virtual false, abstract: false, final false
inline int32_t get_renderOrder() ;

/// @brief Method get_renderOrder_Injected, addr 0x182514530, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_renderOrder_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_renderingDisplaySize, addr 0x182514580, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_renderingDisplaySize() ;

/// @brief Method get_renderingDisplaySize_Injected, addr 0x182514570, size 0x10, virtual false, abstract: false, final false
static inline void get_renderingDisplaySize_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_rootCanvas, addr 0x1825145d0, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Canvas> get_rootCanvas() ;

/// @brief Method get_rootCanvas_Injected, addr 0x1825145c0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_rootCanvas_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_scaleFactor, addr 0x182514620, size 0x30, virtual false, abstract: false, final false
inline float_t get_scaleFactor() ;

/// @brief Method get_scaleFactor_Injected, addr 0x182514610, size 0x10, virtual false, abstract: false, final false
static inline float_t get_scaleFactor_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_sortingLayerID, addr 0x182514660, size 0x30, virtual false, abstract: false, final false
inline int32_t get_sortingLayerID() ;

/// @brief Method get_sortingLayerID_Injected, addr 0x182514650, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_sortingLayerID_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_sortingOrder, addr 0x1825146a0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_sortingOrder() ;

/// @brief Method get_sortingOrder_Injected, addr 0x182514690, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_sortingOrder_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_targetDisplay, addr 0x1825146e0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_targetDisplay() ;

/// @brief Method get_targetDisplay_Injected, addr 0x1825146d0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_targetDisplay_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_worldCamera, addr 0x182514720, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Camera> get_worldCamera() ;

/// @brief Method get_worldCamera_Injected, addr 0x182514710, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_worldCamera_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method remove_preWillRenderCanvases, addr 0x182514760, size 0x90, virtual false, abstract: false, final false
static inline void remove_preWillRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases*  value) ;

/// @brief Method remove_willRenderCanvases, addr 0x1825147f0, size 0x90, virtual false, abstract: false, final false
static inline void remove_willRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases*  value) ;

static inline void setStaticF__externBeginRenderOverlays_k__BackingField(::System::Action_1<int32_t>*  value) ;

static inline void setStaticF__externEndRenderOverlays_k__BackingField(::System::Action_1<int32_t>*  value) ;

static inline void setStaticF__externRenderOverlaysBefore_k__BackingField(::System::Action_2<int32_t,int32_t>*  value) ;

static inline void setStaticF_preWillRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases*  value) ;

static inline void setStaticF_willRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases*  value) ;

/// @brief Method set_additionalShaderChannels, addr 0x182514890, size 0x30, virtual false, abstract: false, final false
inline void set_additionalShaderChannels(::UnityEngine::AdditionalCanvasShaderChannels  value) ;

/// @brief Method set_additionalShaderChannels_Injected, addr 0x182514880, size 0x10, virtual false, abstract: false, final false
static inline void set_additionalShaderChannels_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AdditionalCanvasShaderChannels  value) ;

/// @brief Method set_externBeginRenderOverlays, addr 0x1825148c0, size 0x30, virtual false, abstract: false, final false
static inline void set_externBeginRenderOverlays(::System::Action_1<int32_t>*  value) ;

/// @brief Method set_externEndRenderOverlays, addr 0x1825148f0, size 0x30, virtual false, abstract: false, final false
static inline void set_externEndRenderOverlays(::System::Action_1<int32_t>*  value) ;

/// @brief Method set_externRenderOverlaysBefore, addr 0x182514920, size 0x30, virtual false, abstract: false, final false
static inline void set_externRenderOverlaysBefore(::System::Action_2<int32_t,int32_t>*  value) ;

/// @brief Method set_overrideSorting, addr 0x182514960, size 0x30, virtual false, abstract: false, final false
inline void set_overrideSorting(bool  value) ;

/// @brief Method set_overrideSorting_Injected, addr 0x182514950, size 0x10, virtual false, abstract: false, final false
static inline void set_overrideSorting_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_referencePixelsPerUnit, addr 0x1825149a0, size 0x40, virtual false, abstract: false, final false
inline void set_referencePixelsPerUnit(float_t  value) ;

/// @brief Method set_referencePixelsPerUnit_Injected, addr 0x182514990, size 0x10, virtual false, abstract: false, final false
static inline void set_referencePixelsPerUnit_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_renderMode, addr 0x1825149f0, size 0x30, virtual false, abstract: false, final false
inline void set_renderMode(::UnityEngine::RenderMode  value) ;

/// @brief Method set_renderMode_Injected, addr 0x1825149e0, size 0x10, virtual false, abstract: false, final false
static inline void set_renderMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::RenderMode  value) ;

/// @brief Method set_scaleFactor, addr 0x182514a30, size 0x40, virtual false, abstract: false, final false
inline void set_scaleFactor(float_t  value) ;

/// @brief Method set_scaleFactor_Injected, addr 0x182514a20, size 0x10, virtual false, abstract: false, final false
static inline void set_scaleFactor_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_sortingLayerID, addr 0x182514a80, size 0x30, virtual false, abstract: false, final false
inline void set_sortingLayerID(int32_t  value) ;

/// @brief Method set_sortingLayerID_Injected, addr 0x182514a70, size 0x10, virtual false, abstract: false, final false
static inline void set_sortingLayerID_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_sortingOrder, addr 0x182514ac0, size 0x30, virtual false, abstract: false, final false
inline void set_sortingOrder(int32_t  value) ;

/// @brief Method set_sortingOrder_Injected, addr 0x182514ab0, size 0x10, virtual false, abstract: false, final false
static inline void set_sortingOrder_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Canvas() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Canvas", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Canvas(Canvas && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Canvas", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Canvas(Canvas const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21031};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Canvas) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine

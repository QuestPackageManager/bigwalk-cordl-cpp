#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/DebugGUI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__ManagedBehaviour_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugGUI)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Type;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Vector2;
}
namespace WaveHarmonic::Crest {
class DebugGUI_ShaderIDs;
}
namespace WaveHarmonic::Crest {
class Lod;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class DebugGUI;
}
namespace WaveHarmonic::Crest {
class DebugGUI_ShaderIDs;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::DebugGUI*);
MARK_REF_T(::WaveHarmonic::Crest::DebugGUI_ShaderIDs*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::DebugGUI*, "WaveHarmonic.Crest", "DebugGUI");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::DebugGUI_ShaderIDs*, "WaveHarmonic.Crest", "DebugGUI/ShaderIDs");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.DebugGUI/ShaderIDs
class CORDL_TYPE DebugGUI_ShaderIDs : public ::System::Object {
public:
// Declarations
/// @brief Field s_Bias, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Bias, put=setStaticF_s_Bias)) int32_t  s_Bias;

/// @brief Field s_Depth, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Depth, put=setStaticF_s_Depth)) int32_t  s_Depth;

/// @brief Field s_Scale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Scale, put=setStaticF_s_Scale)) int32_t  s_Scale;

static inline int32_t getStaticF_s_Bias() ;

static inline int32_t getStaticF_s_Depth() ;

static inline int32_t getStaticF_s_Scale() ;

static inline void setStaticF_s_Bias(int32_t  value) ;

static inline void setStaticF_s_Depth(int32_t  value) ;

static inline void setStaticF_s_Scale(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugGUI_ShaderIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugGUI_ShaderIDs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugGUI_ShaderIDs(DebugGUI_ShaderIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugGUI_ShaderIDs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugGUI_ShaderIDs(DebugGUI_ShaderIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16631};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::DebugGUI_ShaderIDs) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies UnityEngine.Color, UnityEngine.Vector3, WaveHarmonic.Crest.Internal.ManagedBehaviour`1<T>
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.DebugGUI
class CORDL_TYPE DebugGUI : public ::WaveHarmonic::Crest::Internal::ManagedBehaviour_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>> {
public:
// Declarations
using ShaderIDs = ::WaveHarmonic::Crest::DebugGUI_ShaderIDs;

 __declspec(property(get=get_OnUpdateMethod)) ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*  OnUpdateMethod;

/// @brief Field _DrawAnimatedWaves, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__DrawAnimatedWaves, put=__cordl_internal_set__DrawAnimatedWaves)) bool  _DrawAnimatedWaves;

/// @brief Field _DrawClip, offset 0x5e, size 0x1 
 __declspec(property(get=__cordl_internal_get__DrawClip, put=__cordl_internal_set__DrawClip)) bool  _DrawClip;

/// @brief Field _DrawDepth, offset 0x5d, size 0x1 
 __declspec(property(get=__cordl_internal_get__DrawDepth, put=__cordl_internal_set__DrawDepth)) bool  _DrawDepth;

/// @brief Field _DrawDynamicWaves, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get__DrawDynamicWaves, put=__cordl_internal_set__DrawDynamicWaves)) bool  _DrawDynamicWaves;

/// @brief Field _DrawFlow, offset 0x5b, size 0x1 
 __declspec(property(get=__cordl_internal_get__DrawFlow, put=__cordl_internal_set__DrawFlow)) bool  _DrawFlow;

/// @brief Field _DrawFoam, offset 0x5a, size 0x1 
 __declspec(property(get=__cordl_internal_get__DrawFoam, put=__cordl_internal_set__DrawFoam)) bool  _DrawFoam;

/// @brief Field _DrawLodDatasActualSize, offset 0x52, size 0x1 
 __declspec(property(get=__cordl_internal_get__DrawLodDatasActualSize, put=__cordl_internal_set__DrawLodDatasActualSize)) bool  _DrawLodDatasActualSize;

/// @brief Field _DrawShadow, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get__DrawShadow, put=__cordl_internal_set__DrawShadow)) bool  _DrawShadow;

/// @brief Field _GuiVisible, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get__GuiVisible, put=__cordl_internal_set__GuiVisible)) bool  _GuiVisible;

/// @brief Field _PausedScroll, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__PausedScroll, put=__cordl_internal_set__PausedScroll)) float_t  _PausedScroll;

/// @brief Field _Scroll, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__Scroll, put=__cordl_internal_set__Scroll)) float_t  _Scroll;

/// @brief Field _ShowWaterData, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__ShowWaterData, put=__cordl_internal_set__ShowWaterData)) bool  _ShowWaterData;

/// @brief Field _ViewerPositionLastFrame, offset 0x70, size 0xc 
 __declspec(property(get=__cordl_internal_get__ViewerPositionLastFrame, put=__cordl_internal_set__ViewerPositionLastFrame)) ::UnityEngine::Vector3  _ViewerPositionLastFrame;

/// @brief Field _ViewerVelocity, offset 0x7c, size 0xc 
 __declspec(property(get=__cordl_internal_get__ViewerVelocity, put=__cordl_internal_set__ViewerVelocity)) ::UnityEngine::Vector3  _ViewerVelocity;

/// @brief Field _Water, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__Water, put=__cordl_internal_set__Water)) ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  _Water;

/// @brief Field s_BottomPanelHeight, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_BottomPanelHeight, put=setStaticF_s_BottomPanelHeight)) float_t  s_BottomPanelHeight;

/// @brief Field s_DebugArrayMaterial, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_DebugArrayMaterial, put=setStaticF_s_DebugArrayMaterial)) ::UnityW<::UnityEngine::Material>  s_DebugArrayMaterial;

/// @brief Field s_GuiColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_GuiColor, put=setStaticF_s_GuiColor)) ::UnityEngine::Color  s_GuiColor;

/// @brief Field s_Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Instance, put=setStaticF_s_Instance)) ::UnityW<::WaveHarmonic::Crest::DebugGUI>  s_Instance;

/// @brief Field s_LeftPanelWidth, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_LeftPanelWidth, put=setStaticF_s_LeftPanelWidth)) float_t  s_LeftPanelWidth;

/// @brief Field s_SimulationNames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SimulationNames, put=setStaticF_s_SimulationNames)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>*  s_SimulationNames;

/// @brief Method DrawShapeTargets, addr 0x182572ce0, size 0x3f0, virtual false, abstract: false, final false
inline void DrawShapeTargets() ;

/// @brief Method DrawSim, addr 0x1825730d0, size 0x550, virtual false, abstract: false, final false
inline void DrawSim(::WaveHarmonic::Crest::Lod*  lodData, ::by_ref<bool>  doDraw, ::by_ref<float_t>  offset, float_t  bias, float_t  scale) ;

/// @brief Method DrawSims, addr 0x182573620, size 0x210, virtual false, abstract: false, final false
inline void DrawSims() ;

/// @brief Method DrawTextureArray, addr 0x182573830, size 0x320, virtual false, abstract: false, final false
static inline void DrawTextureArray(::UnityEngine::RenderTexture*  data, int32_t  columnOffsetFromRightSide, float_t  bias, float_t  scale) ;

/// @brief Method DrawVerticalScrollBar, addr 0x182573b50, size 0x270, virtual false, abstract: false, final false
inline void DrawVerticalScrollBar() ;

/// @brief Method InitStatics, addr 0x182573dc0, size 0xb0, virtual false, abstract: false, final false
static inline void InitStatics() ;

/// @brief Method Initialize, addr 0x182573e70, size 0x60, virtual true, abstract: false, final false
inline void Initialize() ;

static inline ::WaveHarmonic::Crest::DebugGUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x182573ed0, size 0x40, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x182573f10, size 0x60, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnGUI, addr 0x1825741b0, size 0x820, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method OnGUIGerstnerSection, addr 0x182573f70, size 0x240, virtual false, abstract: false, final false
inline void OnGUIGerstnerSection(float_t  x, ::by_ref<float_t>  y, float_t  w, float_t  h) ;

/// @brief Method OnUpdate, addr 0x1825749d0, size 0x210, virtual false, abstract: false, final false
inline void OnUpdate(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method OverGUI, addr 0x182574be0, size 0xd0, virtual false, abstract: false, final false
static inline bool OverGUI(::UnityEngine::Vector2  screenPosition) ;

/// @brief Method ToggleGUI, addr 0x182574cb0, size 0x10, virtual false, abstract: false, final false
inline void ToggleGUI() ;

constexpr bool const& __cordl_internal_get__DrawAnimatedWaves() const;

constexpr bool& __cordl_internal_get__DrawAnimatedWaves() ;

constexpr bool const& __cordl_internal_get__DrawClip() const;

constexpr bool& __cordl_internal_get__DrawClip() ;

constexpr bool const& __cordl_internal_get__DrawDepth() const;

constexpr bool& __cordl_internal_get__DrawDepth() ;

constexpr bool const& __cordl_internal_get__DrawDynamicWaves() const;

constexpr bool& __cordl_internal_get__DrawDynamicWaves() ;

constexpr bool const& __cordl_internal_get__DrawFlow() const;

constexpr bool& __cordl_internal_get__DrawFlow() ;

constexpr bool const& __cordl_internal_get__DrawFoam() const;

constexpr bool& __cordl_internal_get__DrawFoam() ;

constexpr bool const& __cordl_internal_get__DrawLodDatasActualSize() const;

constexpr bool& __cordl_internal_get__DrawLodDatasActualSize() ;

constexpr bool const& __cordl_internal_get__DrawShadow() const;

constexpr bool& __cordl_internal_get__DrawShadow() ;

constexpr bool const& __cordl_internal_get__GuiVisible() const;

constexpr bool& __cordl_internal_get__GuiVisible() ;

constexpr float_t const& __cordl_internal_get__PausedScroll() const;

constexpr float_t& __cordl_internal_get__PausedScroll() ;

constexpr float_t const& __cordl_internal_get__Scroll() const;

constexpr float_t& __cordl_internal_get__Scroll() ;

constexpr bool const& __cordl_internal_get__ShowWaterData() const;

constexpr bool& __cordl_internal_get__ShowWaterData() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__ViewerPositionLastFrame() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__ViewerPositionLastFrame() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__ViewerVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__ViewerVelocity() ;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& __cordl_internal_get__Water() const;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& __cordl_internal_get__Water() ;

constexpr void __cordl_internal_set__DrawAnimatedWaves(bool  value) ;

constexpr void __cordl_internal_set__DrawClip(bool  value) ;

constexpr void __cordl_internal_set__DrawDepth(bool  value) ;

constexpr void __cordl_internal_set__DrawDynamicWaves(bool  value) ;

constexpr void __cordl_internal_set__DrawFlow(bool  value) ;

constexpr void __cordl_internal_set__DrawFoam(bool  value) ;

constexpr void __cordl_internal_set__DrawLodDatasActualSize(bool  value) ;

constexpr void __cordl_internal_set__DrawShadow(bool  value) ;

constexpr void __cordl_internal_set__GuiVisible(bool  value) ;

constexpr void __cordl_internal_set__PausedScroll(float_t  value) ;

constexpr void __cordl_internal_set__Scroll(float_t  value) ;

constexpr void __cordl_internal_set__ShowWaterData(bool  value) ;

constexpr void __cordl_internal_set__ViewerPositionLastFrame(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__ViewerVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__Water(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value) ;

/// @brief Method .ctor, addr 0x182574d70, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

static inline float_t getStaticF_s_BottomPanelHeight() ;

static inline ::UnityW<::UnityEngine::Material> getStaticF_s_DebugArrayMaterial() ;

static inline ::UnityEngine::Color getStaticF_s_GuiColor() ;

static inline ::UnityW<::WaveHarmonic::Crest::DebugGUI> getStaticF_s_Instance() ;

static inline float_t getStaticF_s_LeftPanelWidth() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>* getStaticF_s_SimulationNames() ;

/// @brief Method get_DebugArrayMaterial, addr 0x182574d90, size 0x110, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> get_DebugArrayMaterial() ;

/// @brief Method get_OnUpdateMethod, addr 0x182574ea0, size 0x40, virtual true, abstract: false, final false
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* get_OnUpdateMethod() ;

static inline void setStaticF_s_BottomPanelHeight(float_t  value) ;

static inline void setStaticF_s_DebugArrayMaterial(::UnityW<::UnityEngine::Material>  value) ;

static inline void setStaticF_s_GuiColor(::UnityEngine::Color  value) ;

static inline void setStaticF_s_Instance(::UnityW<::WaveHarmonic::Crest::DebugGUI>  value) ;

static inline void setStaticF_s_LeftPanelWidth(float_t  value) ;

static inline void setStaticF_s_SimulationNames(::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugGUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugGUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugGUI(DebugGUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugGUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugGUI(DebugGUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16632};

/// @brief Field k_ScrollBarWidth offset 0xffffffff size 0x4
static constexpr float_t  k_ScrollBarWidth{static_cast<float_t>(20.0f)};

/// @brief Field _ShowWaterData, offset: 0x50, size: 0x1, def value: None
 bool  ____ShowWaterData;

/// @brief Field _GuiVisible, offset: 0x51, size: 0x1, def value: None
 bool  ____GuiVisible;

/// @brief Field _DrawLodDatasActualSize, offset: 0x52, size: 0x1, def value: None
 bool  ____DrawLodDatasActualSize;

/// @brief Field _PausedScroll, offset: 0x54, size: 0x4, def value: None
 float_t  ____PausedScroll;

/// @brief Field _DrawAnimatedWaves, offset: 0x58, size: 0x1, def value: None
 bool  ____DrawAnimatedWaves;

/// @brief Field _DrawDynamicWaves, offset: 0x59, size: 0x1, def value: None
 bool  ____DrawDynamicWaves;

/// @brief Field _DrawFoam, offset: 0x5a, size: 0x1, def value: None
 bool  ____DrawFoam;

/// @brief Field _DrawFlow, offset: 0x5b, size: 0x1, def value: None
 bool  ____DrawFlow;

/// @brief Field _DrawShadow, offset: 0x5c, size: 0x1, def value: None
 bool  ____DrawShadow;

/// @brief Field _DrawDepth, offset: 0x5d, size: 0x1, def value: None
 bool  ____DrawDepth;

/// @brief Field _DrawClip, offset: 0x5e, size: 0x1, def value: None
 bool  ____DrawClip;

/// @brief Field _Scroll, offset: 0x60, size: 0x4, def value: None
 float_t  ____Scroll;

/// @brief Field _Water, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  ____Water;

/// @brief Field _ViewerPositionLastFrame, offset: 0x70, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____ViewerPositionLastFrame;

/// @brief Field _ViewerVelocity, offset: 0x7c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____ViewerVelocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::DebugGUI, ____ShowWaterData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DebugGUI, ____GuiVisible) == 0x51, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DebugGUI, ____DrawLodDatasActualSize) == 0x52, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DebugGUI, ____PausedScroll) == 0x54, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DebugGUI, ____DrawAnimatedWaves) == 0x58, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DebugGUI, ____DrawDynamicWaves) == 0x59, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DebugGUI, ____DrawFoam) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DebugGUI, ____DrawFlow) == 0x5b, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DebugGUI, ____DrawShadow) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DebugGUI, ____DrawDepth) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DebugGUI, ____DrawClip) == 0x5e, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DebugGUI, ____Scroll) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DebugGUI, ____Water) == 0x68, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DebugGUI, ____ViewerPositionLastFrame) == 0x70, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DebugGUI, ____ViewerVelocity) == 0x7c, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::DebugGUI) == 0x88, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest

#pragma once
// IWYU pragma private; include "UnityEngine/GUI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GUI)
namespace System {
struct DateTime;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngineInternal {
class GenericStack;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct FocusType;
}
namespace UnityEngine {
class GUIContent;
}
namespace UnityEngine {
class GUISkin;
}
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
class GUI_WindowFunction;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct ScaleMode;
}
namespace UnityEngine {
class TextEditor;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
class GUI;
}
namespace UnityEngine {
class GUI_WindowFunction;
}
// Write type traits
MARK_REF_T(::UnityEngine::GUI*);
MARK_REF_T(::UnityEngine::GUI_WindowFunction*);
DEFINE_IL2CPP_CLASS(::UnityEngine::GUI*, "UnityEngine", "GUI");
DEFINE_IL2CPP_CLASS(::UnityEngine::GUI_WindowFunction*, "UnityEngine", "GUI/WindowFunction");
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GUI/WindowFunction
class CORDL_TYPE GUI_WindowFunction : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(int32_t  id) ;

static inline ::UnityEngine::GUI_WindowFunction* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180539220, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GUI_WindowFunction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GUI_WindowFunction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GUI_WindowFunction(GUI_WindowFunction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GUI_WindowFunction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GUI_WindowFunction(GUI_WindowFunction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19069};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::GUI_WindowFunction) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.DateTime, System.Object, UnityEngine.Rect
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GUI
class CORDL_TYPE GUI : public ::System::Object {
public:
// Declarations
using WindowFunction = ::UnityEngine::GUI_WindowFunction;

/// @brief Field <nextScrollStepTime>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__nextScrollStepTime_k__BackingField, put=setStaticF__nextScrollStepTime_k__BackingField)) ::System::DateTime  _nextScrollStepTime_k__BackingField;

/// @brief Field <scrollTroughSide>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__scrollTroughSide_k__BackingField, put=setStaticF__scrollTroughSide_k__BackingField)) int32_t  _scrollTroughSide_k__BackingField;

/// @brief Field <scrollViewStates>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__scrollViewStates_k__BackingField, put=setStaticF__scrollViewStates_k__BackingField)) ::UnityEngineInternal::GenericStack*  _scrollViewStates_k__BackingField;

/// @brief Field s_BeginGroupHash, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_BeginGroupHash, put=setStaticF_s_BeginGroupHash)) int32_t  s_BeginGroupHash;

/// @brief Field s_BoxHash, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_BoxHash, put=setStaticF_s_BoxHash)) int32_t  s_BoxHash;

/// @brief Field s_ButonHash, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ButonHash, put=setStaticF_s_ButonHash)) int32_t  s_ButonHash;

/// @brief Field s_ButtonGridHash, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ButtonGridHash, put=setStaticF_s_ButtonGridHash)) int32_t  s_ButtonGridHash;

/// @brief Field s_HotTextField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_HotTextField, put=setStaticF_s_HotTextField)) int32_t  s_HotTextField;

/// @brief Field s_RepeatButtonHash, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_RepeatButtonHash, put=setStaticF_s_RepeatButtonHash)) int32_t  s_RepeatButtonHash;

/// @brief Field s_ScrollControlId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ScrollControlId, put=setStaticF_s_ScrollControlId)) int32_t  s_ScrollControlId;

/// @brief Field s_ScrollviewHash, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ScrollviewHash, put=setStaticF_s_ScrollviewHash)) int32_t  s_ScrollviewHash;

/// @brief Field s_Skin, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Skin, put=setStaticF_s_Skin)) ::UnityW<::UnityEngine::GUISkin>  s_Skin;

/// @brief Field s_SliderHash, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_SliderHash, put=setStaticF_s_SliderHash)) int32_t  s_SliderHash;

/// @brief Field s_ToggleHash, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ToggleHash, put=setStaticF_s_ToggleHash)) int32_t  s_ToggleHash;

/// @brief Field s_ToolTipRect, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_ToolTipRect, put=setStaticF_s_ToolTipRect)) ::UnityEngine::Rect  s_ToolTipRect;

/// @brief Method BeginGroup, addr 0x1822ca270, size 0x80, virtual false, abstract: false, final false
static inline void BeginGroup(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method BeginGroup, addr 0x1822ca020, size 0x250, virtual false, abstract: false, final false
static inline void BeginGroup(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style, ::UnityEngine::Vector2  scrollOffset) ;

/// @brief Method BeginScrollView, addr 0x1822ca2f0, size 0xab0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 BeginScrollView(::UnityEngine::Rect  position, ::UnityEngine::Vector2  scrollPosition, ::UnityEngine::Rect  viewRect, bool  alwaysShowHorizontal, bool  alwaysShowVertical, ::UnityEngine::GUIStyle*  horizontalScrollbar, ::UnityEngine::GUIStyle*  verticalScrollbar, ::UnityEngine::GUIStyle*  background) ;

/// @brief Method Box, addr 0x1822cada0, size 0x170, virtual false, abstract: false, final false
static inline void Box(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method Box, addr 0x1822caf80, size 0x70, virtual false, abstract: false, final false
static inline void Box(::UnityEngine::Rect  position, ::StringW  text) ;

/// @brief Method Box, addr 0x1822caf10, size 0x70, virtual false, abstract: false, final false
static inline void Box(::UnityEngine::Rect  position, ::StringW  text, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method Button, addr 0x1822cb060, size 0x210, virtual false, abstract: false, final false
static inline bool Button(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method Button, addr 0x1822cb270, size 0x190, virtual false, abstract: false, final false
static inline bool Button(::UnityEngine::Rect  position, int32_t  id, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method Button, addr 0x1822caff0, size 0x70, virtual false, abstract: false, final false
static inline bool Button(::UnityEngine::Rect  position, ::StringW  text) ;

/// @brief Method CalculateScaledTextureRects, addr 0x1822cb400, size 0x1b0, virtual false, abstract: false, final false
static inline bool CalculateScaledTextureRects(::UnityEngine::Rect  position, ::UnityEngine::ScaleMode  scaleMode, float_t  imageAspect, ::by_ref<::UnityEngine::Rect>  outScreenRect, ::by_ref<::UnityEngine::Rect>  outSourceRect) ;

/// @brief Method CallWindowDelegate, addr 0x1822cb5b0, size 0x250, virtual false, abstract: false, final false
static inline void CallWindowDelegate(::UnityEngine::GUI_WindowFunction*  func, int32_t  id, int32_t  instanceID, ::UnityEngine::GUISkin*  _skin, int32_t  forceRect, float_t  width, float_t  height, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method DoButton, addr 0x1822cb800, size 0xf0, virtual false, abstract: false, final false
static inline bool DoButton(::UnityEngine::Rect  position, int32_t  id, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method DoControl, addr 0x1822cb8f0, size 0x2e0, virtual false, abstract: false, final false
static inline bool DoControl(::UnityEngine::Rect  position, int32_t  id, bool  on, bool  hover, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method DoLabel, addr 0x1822cbbd0, size 0x290, virtual false, abstract: false, final false
static inline void DoLabel(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method DoRepeatButton, addr 0x1822cbe60, size 0x350, virtual false, abstract: false, final false
static inline bool DoRepeatButton(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style, ::UnityEngine::FocusType  focusType) ;

/// @brief Method DoSetSkin, addr 0x1822cc1b0, size 0x120, virtual false, abstract: false, final false
static inline void DoSetSkin(::UnityEngine::GUISkin*  newSkin) ;

/// @brief Method DoTextField, addr 0x1822cc2d0, size 0xb0, virtual false, abstract: false, final false
static inline void DoTextField(::UnityEngine::Rect  position, int32_t  id, ::UnityEngine::GUIContent*  content, bool  multiline, int32_t  maxLength, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method DoTextField, addr 0x1822cc5c0, size 0xa0, virtual false, abstract: false, final false
static inline void DoTextField(::UnityEngine::Rect  position, int32_t  id, ::UnityEngine::GUIContent*  content, bool  multiline, int32_t  maxLength, ::UnityEngine::GUIStyle*  style, ::StringW  secureText) ;

/// @brief Method DoTextField, addr 0x1822cc380, size 0x240, virtual false, abstract: false, final false
static inline void DoTextField(::UnityEngine::Rect  position, int32_t  id, ::UnityEngine::GUIContent*  content, bool  multiline, int32_t  maxLength, ::UnityEngine::GUIStyle*  style, ::StringW  secureText, char16_t  maskChar) ;

/// @brief Method DoToggle, addr 0x1822cc660, size 0x100, virtual false, abstract: false, final false
static inline bool DoToggle(::UnityEngine::Rect  position, int32_t  id, bool  value, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method DoWindow, addr 0x1822cc760, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect DoWindow(int32_t  id, ::UnityEngine::Rect  clientRect, ::UnityEngine::GUI_WindowFunction*  func, ::UnityEngine::GUIContent*  title, ::UnityEngine::GUIStyle*  style, ::UnityEngine::GUISkin*  skin, bool  forceRectOnLayout) ;

/// @brief Method DragWindow, addr 0x1822cc860, size 0x30, virtual false, abstract: false, final false
static inline void DragWindow(::UnityEngine::Rect  position) ;

/// @brief Method DragWindow_Injected, addr 0x1822cc850, size 0x10, virtual false, abstract: false, final false
static inline void DragWindow_Injected(::by_ref<::UnityEngine::Rect>  position) ;

/// @brief Method DrawTexture, addr 0x1822cd9c0, size 0x1e0, virtual false, abstract: false, final false
static inline void DrawTexture(::UnityEngine::Rect  position, ::UnityEngine::Texture*  image) ;

/// @brief Method DrawTexture, addr 0x1822cd7e0, size 0x1e0, virtual false, abstract: false, final false
static inline void DrawTexture(::UnityEngine::Rect  position, ::UnityEngine::Texture*  image, ::UnityEngine::ScaleMode  scaleMode) ;

/// @brief Method DrawTexture, addr 0x1822cc890, size 0x1d0, virtual false, abstract: false, final false
static inline void DrawTexture(::UnityEngine::Rect  position, ::UnityEngine::Texture*  image, ::UnityEngine::ScaleMode  scaleMode, bool  alphaBlend) ;

/// @brief Method DrawTexture, addr 0x1822cd480, size 0x1c0, virtual false, abstract: false, final false
static inline void DrawTexture(::UnityEngine::Rect  position, ::UnityEngine::Texture*  image, ::UnityEngine::ScaleMode  scaleMode, bool  alphaBlend, float_t  imageAspect) ;

/// @brief Method DrawTexture, addr 0x1822cd640, size 0x1a0, virtual false, abstract: false, final false
static inline void DrawTexture(::UnityEngine::Rect  position, ::UnityEngine::Texture*  image, ::UnityEngine::ScaleMode  scaleMode, bool  alphaBlend, float_t  imageAspect, ::UnityEngine::Color  color, float_t  borderWidth, float_t  borderRadius) ;

/// @brief Method DrawTexture, addr 0x1822cca60, size 0x170, virtual false, abstract: false, final false
static inline void DrawTexture(::UnityEngine::Rect  position, ::UnityEngine::Texture*  image, ::UnityEngine::ScaleMode  scaleMode, bool  alphaBlend, float_t  imageAspect, ::UnityEngine::Color  color, ::UnityEngine::Vector4  borderWidths, float_t  borderRadius) ;

/// @brief Method DrawTexture, addr 0x1822cd340, size 0x140, virtual false, abstract: false, final false
static inline void DrawTexture(::UnityEngine::Rect  position, ::UnityEngine::Texture*  image, ::UnityEngine::ScaleMode  scaleMode, bool  alphaBlend, float_t  imageAspect, ::UnityEngine::Color  color, ::UnityEngine::Vector4  borderWidths, ::UnityEngine::Vector4  borderRadiuses) ;

/// @brief Method DrawTexture, addr 0x1822cd200, size 0x140, virtual false, abstract: false, final false
static inline void DrawTexture(::UnityEngine::Rect  position, ::UnityEngine::Texture*  image, ::UnityEngine::ScaleMode  scaleMode, bool  alphaBlend, float_t  imageAspect, ::UnityEngine::Color  color, ::UnityEngine::Vector4  borderWidths, ::UnityEngine::Vector4  borderRadiuses, bool  drawSmoothCorners) ;

/// @brief Method DrawTexture, addr 0x1822ccbd0, size 0x630, virtual false, abstract: false, final false
static inline void DrawTexture(::UnityEngine::Rect  position, ::UnityEngine::Texture*  image, ::UnityEngine::ScaleMode  scaleMode, bool  alphaBlend, float_t  imageAspect, ::UnityEngine::Color  leftColor, ::UnityEngine::Color  topColor, ::UnityEngine::Color  rightColor, ::UnityEngine::Color  bottomColor, ::UnityEngine::Vector4  borderWidths, ::UnityEngine::Vector4  borderRadiuses, bool  drawSmoothCorners) ;

/// @brief Method EndGroup, addr 0x1822cdba0, size 0x30, virtual false, abstract: false, final false
static inline void EndGroup() ;

/// @brief Method EndScrollView, addr 0x1822cdbd0, size 0xae0, virtual false, abstract: false, final false
static inline void EndScrollView(bool  handleScrollWheel) ;

/// @brief Method GrabMouseControl, addr 0x1822ce6b0, size 0x10, virtual false, abstract: false, final false
static inline void GrabMouseControl(int32_t  id) ;

/// @brief Method HandleTextFieldEventForDesktop, addr 0x1822ce6c0, size 0x560, virtual false, abstract: false, final false
static inline void HandleTextFieldEventForDesktop(::UnityEngine::Rect  position, int32_t  id, ::UnityEngine::GUIContent*  content, bool  multiline, int32_t  maxLength, ::UnityEngine::GUIStyle*  style, ::UnityEngine::TextEditor*  editor) ;

/// @brief Method HandleTextFieldEventForTouchscreen, addr 0x1822cec20, size 0x390, virtual false, abstract: false, final false
static inline void HandleTextFieldEventForTouchscreen(::UnityEngine::Rect  position, int32_t  id, ::UnityEngine::GUIContent*  content, bool  multiline, int32_t  maxLength, ::UnityEngine::GUIStyle*  style, ::StringW  secureText, char16_t  maskChar, ::UnityEngine::TextEditor*  editor) ;

/// @brief Method HasMouseControl, addr 0x1822cefb0, size 0x10, virtual false, abstract: false, final false
static inline bool HasMouseControl(int32_t  id) ;

/// @brief Method HorizontalScrollbar, addr 0x1822cefc0, size 0x2a0, virtual false, abstract: false, final false
static inline float_t HorizontalScrollbar(::UnityEngine::Rect  position, float_t  value, float_t  size, float_t  leftValue, float_t  rightValue, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method HorizontalSlider, addr 0x1822cf260, size 0x190, virtual false, abstract: false, final false
static inline float_t HorizontalSlider(::UnityEngine::Rect  position, float_t  value, float_t  leftValue, float_t  rightValue) ;

/// @brief Method InternalRepaintEditorWindow, addr 0x1822cf3f0, size 0x10, virtual false, abstract: false, final false
static inline void InternalRepaintEditorWindow() ;

/// @brief Method Internal_DoWindow, addr 0x1822cf410, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect Internal_DoWindow(int32_t  id, int32_t  instanceID, ::UnityEngine::Rect  clientRect, ::UnityEngine::GUI_WindowFunction*  func, ::UnityEngine::GUIContent*  title, ::UnityEngine::GUIStyle*  style, ::System::Object*  skin, bool  forceRectOnLayout) ;

/// @brief Method Internal_DoWindow_Injected, addr 0x1822cf400, size 0x10, virtual false, abstract: false, final false
static inline void Internal_DoWindow_Injected(int32_t  id, int32_t  instanceID, ::by_ref<::UnityEngine::Rect>  clientRect, ::UnityEngine::GUI_WindowFunction*  func, ::UnityEngine::GUIContent*  title, ::UnityEngine::GUIStyle*  style, ::System::Object*  skin, bool  forceRectOnLayout, ::by_ref<::UnityEngine::Rect>  ret) ;

/// @brief Method Label, addr 0x1822cf600, size 0x80, virtual false, abstract: false, final false
static inline void Label(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method Label, addr 0x1822cf550, size 0xb0, virtual false, abstract: false, final false
static inline void Label(::UnityEngine::Rect  position, ::StringW  text) ;

/// @brief Method Label, addr 0x1822cf4b0, size 0xa0, virtual false, abstract: false, final false
static inline void Label(::UnityEngine::Rect  position, ::StringW  text, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method PasswordField, addr 0x1822cf730, size 0x1e0, virtual false, abstract: false, final false
static inline ::StringW PasswordField(::UnityEngine::Rect  position, ::StringW  password, char16_t  maskChar, int32_t  maxLength, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method PasswordFieldGetStrToShow, addr 0x1822cf680, size 0xb0, virtual false, abstract: false, final false
static inline ::StringW PasswordFieldGetStrToShow(::StringW  password, char16_t  maskChar) ;

/// @brief Method ReleaseMouseControl, addr 0x1822cf910, size 0x10, virtual false, abstract: false, final false
static inline void ReleaseMouseControl() ;

/// @brief Method Scroller, addr 0x1822cfad0, size 0x600, virtual false, abstract: false, final false
static inline float_t Scroller(::UnityEngine::Rect  position, float_t  value, float_t  size, float_t  leftValue, float_t  rightValue, ::UnityEngine::GUIStyle*  slider, ::UnityEngine::GUIStyle*  thumb, ::UnityEngine::GUIStyle*  leftButton, ::UnityEngine::GUIStyle*  rightButton, bool  horiz) ;

/// @brief Method ScrollerRepeatButton, addr 0x1822cf920, size 0x1b0, virtual false, abstract: false, final false
static inline bool ScrollerRepeatButton(int32_t  scrollerID, ::UnityEngine::Rect  rect, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method Slider, addr 0x1822d00d0, size 0x1e0, virtual false, abstract: false, final false
static inline float_t Slider(::UnityEngine::Rect  position, float_t  value, float_t  size, float_t  start, float_t  end, ::UnityEngine::GUIStyle*  slider, ::UnityEngine::GUIStyle*  thumb, bool  horiz, int32_t  id, ::UnityEngine::GUIStyle*  thumbExtent) ;

/// @brief Method Toggle, addr 0x1822d0330, size 0x210, virtual false, abstract: false, final false
static inline bool Toggle(::UnityEngine::Rect  position, bool  value, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method Toggle, addr 0x1822d02b0, size 0x80, virtual false, abstract: false, final false
static inline bool Toggle(::UnityEngine::Rect  position, bool  value, ::StringW  text) ;

/// @brief Method VerticalScrollbar, addr 0x1822d0540, size 0x2a0, virtual false, abstract: false, final false
static inline float_t VerticalScrollbar(::UnityEngine::Rect  position, float_t  value, float_t  size, float_t  topValue, float_t  bottomValue, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method VerticalSlider, addr 0x1822d07e0, size 0xb0, virtual false, abstract: false, final false
static inline float_t VerticalSlider(::UnityEngine::Rect  position, float_t  value, float_t  topValue, float_t  bottomValue, ::UnityEngine::GUIStyle*  slider, ::UnityEngine::GUIStyle*  thumb) ;

/// @brief Method Window, addr 0x1822d0890, size 0x160, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect Window(int32_t  id, ::UnityEngine::Rect  clientRect, ::UnityEngine::GUI_WindowFunction*  func, ::UnityEngine::GUIContent*  title, ::UnityEngine::GUIStyle*  style) ;

static inline ::System::DateTime getStaticF__nextScrollStepTime_k__BackingField() ;

static inline int32_t getStaticF__scrollTroughSide_k__BackingField() ;

static inline ::UnityEngineInternal::GenericStack* getStaticF__scrollViewStates_k__BackingField() ;

static inline int32_t getStaticF_s_BeginGroupHash() ;

static inline int32_t getStaticF_s_BoxHash() ;

static inline int32_t getStaticF_s_ButonHash() ;

static inline int32_t getStaticF_s_ButtonGridHash() ;

static inline int32_t getStaticF_s_HotTextField() ;

static inline int32_t getStaticF_s_RepeatButtonHash() ;

static inline int32_t getStaticF_s_ScrollControlId() ;

static inline int32_t getStaticF_s_ScrollviewHash() ;

static inline ::UnityW<::UnityEngine::GUISkin> getStaticF_s_Skin() ;

static inline int32_t getStaticF_s_SliderHash() ;

static inline int32_t getStaticF_s_ToggleHash() ;

static inline ::UnityEngine::Rect getStaticF_s_ToolTipRect() ;

/// @brief Method get_backgroundColor, addr 0x1822d0c10, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_backgroundColor() ;

/// @brief Method get_backgroundColor_Injected, addr 0x1822d0c00, size 0x10, virtual false, abstract: false, final false
static inline void get_backgroundColor_Injected(::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method get_blendMaterial, addr 0x1822d0c60, size 0x40, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> get_blendMaterial() ;

/// @brief Method get_blendMaterial_Injected, addr 0x1822d0c50, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_blendMaterial_Injected() ;

/// @brief Method get_blitMaterial, addr 0x1822d0cb0, size 0x40, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> get_blitMaterial() ;

/// @brief Method get_blitMaterial_Injected, addr 0x1822d0ca0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_blitMaterial_Injected() ;

/// @brief Method get_changed, addr 0x1822d0cf0, size 0x10, virtual false, abstract: false, final false
static inline bool get_changed() ;

/// @brief Method get_color, addr 0x1822d0d10, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_color() ;

/// @brief Method get_color_Injected, addr 0x1822d0d00, size 0x10, virtual false, abstract: false, final false
static inline void get_color_Injected(::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method get_contentColor, addr 0x1822d0d60, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_contentColor() ;

/// @brief Method get_contentColor_Injected, addr 0x1822d0d50, size 0x10, virtual false, abstract: false, final false
static inline void get_contentColor_Injected(::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method get_enabled, addr 0x1822d0da0, size 0x10, virtual false, abstract: false, final false
static inline bool get_enabled() ;

/// @brief Method get_matrix, addr 0x1822be960, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 get_matrix() ;

/// @brief Method get_nextScrollStepTime, addr 0x1822d0db0, size 0x40, virtual false, abstract: false, final false
static inline ::System::DateTime get_nextScrollStepTime() ;

/// @brief Method get_roundedRectMaterial, addr 0x1822d0e00, size 0x40, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> get_roundedRectMaterial() ;

/// @brief Method get_roundedRectMaterial_Injected, addr 0x1822d0df0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_roundedRectMaterial_Injected() ;

/// @brief Method get_roundedRectWithColorPerBorderMaterial, addr 0x1822d0e50, size 0x40, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> get_roundedRectWithColorPerBorderMaterial() ;

/// @brief Method get_roundedRectWithColorPerBorderMaterial_Injected, addr 0x1822d0e40, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_roundedRectWithColorPerBorderMaterial_Injected() ;

/// @brief Method get_scrollTroughSide, addr 0x1822d0e90, size 0x40, virtual false, abstract: false, final false
static inline int32_t get_scrollTroughSide() ;

/// @brief Method get_scrollViewStates, addr 0x1822d0ed0, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngineInternal::GenericStack* get_scrollViewStates() ;

/// @brief Method get_skin, addr 0x1822d0f10, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GUISkin> get_skin() ;

/// @brief Method get_usePageScrollbars, addr 0x1822d0f70, size 0x10, virtual false, abstract: false, final false
static inline bool get_usePageScrollbars() ;

static inline void setStaticF__nextScrollStepTime_k__BackingField(::System::DateTime  value) ;

static inline void setStaticF__scrollTroughSide_k__BackingField(int32_t  value) ;

static inline void setStaticF__scrollViewStates_k__BackingField(::UnityEngineInternal::GenericStack*  value) ;

static inline void setStaticF_s_BeginGroupHash(int32_t  value) ;

static inline void setStaticF_s_BoxHash(int32_t  value) ;

static inline void setStaticF_s_ButonHash(int32_t  value) ;

static inline void setStaticF_s_ButtonGridHash(int32_t  value) ;

static inline void setStaticF_s_HotTextField(int32_t  value) ;

static inline void setStaticF_s_RepeatButtonHash(int32_t  value) ;

static inline void setStaticF_s_ScrollControlId(int32_t  value) ;

static inline void setStaticF_s_ScrollviewHash(int32_t  value) ;

static inline void setStaticF_s_Skin(::UnityW<::UnityEngine::GUISkin>  value) ;

static inline void setStaticF_s_SliderHash(int32_t  value) ;

static inline void setStaticF_s_ToggleHash(int32_t  value) ;

static inline void setStaticF_s_ToolTipRect(::UnityEngine::Rect  value) ;

/// @brief Method set_backgroundColor, addr 0x1822d0f90, size 0x30, virtual false, abstract: false, final false
static inline void set_backgroundColor(::UnityEngine::Color  value) ;

/// @brief Method set_backgroundColor_Injected, addr 0x1822d0f80, size 0x10, virtual false, abstract: false, final false
static inline void set_backgroundColor_Injected(::by_ref<::UnityEngine::Color>  value) ;

/// @brief Method set_changed, addr 0x1822d0fc0, size 0x10, virtual false, abstract: false, final false
static inline void set_changed(bool  value) ;

/// @brief Method set_color, addr 0x1822d0fe0, size 0x30, virtual false, abstract: false, final false
static inline void set_color(::UnityEngine::Color  value) ;

/// @brief Method set_color_Injected, addr 0x1822d0fd0, size 0x10, virtual false, abstract: false, final false
static inline void set_color_Injected(::by_ref<::UnityEngine::Color>  value) ;

/// @brief Method set_contentColor, addr 0x1822d1020, size 0x30, virtual false, abstract: false, final false
static inline void set_contentColor(::UnityEngine::Color  value) ;

/// @brief Method set_contentColor_Injected, addr 0x1822d1010, size 0x10, virtual false, abstract: false, final false
static inline void set_contentColor_Injected(::by_ref<::UnityEngine::Color>  value) ;

/// @brief Method set_enabled, addr 0x1822d1050, size 0x10, virtual false, abstract: false, final false
static inline void set_enabled(bool  value) ;

/// @brief Method set_matrix, addr 0x1822d1060, size 0x40, virtual false, abstract: false, final false
static inline void set_matrix(::UnityEngine::Matrix4x4  value) ;

/// @brief Method set_nextScrollStepTime, addr 0x1822d10a0, size 0x50, virtual false, abstract: false, final false
static inline void set_nextScrollStepTime(::System::DateTime  value) ;

/// @brief Method set_scrollTroughSide, addr 0x1822d10f0, size 0x50, virtual false, abstract: false, final false
static inline void set_scrollTroughSide(int32_t  value) ;

/// @brief Method set_skin, addr 0x1822d1140, size 0x160, virtual false, abstract: false, final false
static inline void set_skin(::UnityEngine::GUISkin*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GUI(GUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GUI(GUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19070};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::GUI) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine

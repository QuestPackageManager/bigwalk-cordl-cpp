#pragma once
// IWYU pragma private; include "UnityEngine/Display.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Display)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Display_DisplaysUpdatedDelegate;
}
namespace UnityEngine {
struct RenderBuffer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Display;
}
namespace UnityEngine {
class Display_DisplaysUpdatedDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::Display*);
MARK_REF_T(::UnityEngine::Display_DisplaysUpdatedDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Display*, "UnityEngine", "Display");
DEFINE_IL2CPP_CLASS(::UnityEngine::Display_DisplaysUpdatedDelegate*, "UnityEngine", "Display/DisplaysUpdatedDelegate");
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Display/DisplaysUpdatedDelegate
class CORDL_TYPE Display_DisplaysUpdatedDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1802dc3f0, size 0x10, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::UnityEngine::Display_DisplaysUpdatedDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18057e770, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Display_DisplaysUpdatedDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Display_DisplaysUpdatedDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Display_DisplaysUpdatedDelegate(Display_DisplaysUpdatedDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Display_DisplaysUpdatedDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Display_DisplaysUpdatedDelegate(Display_DisplaysUpdatedDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10482};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Display_DisplaysUpdatedDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Display
class CORDL_TYPE Display : public ::System::Object {
public:
// Declarations
using DisplaysUpdatedDelegate = ::UnityEngine::Display_DisplaysUpdatedDelegate;

/// @brief Field _mainDisplay, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__mainDisplay, put=setStaticF__mainDisplay)) ::UnityEngine::Display*  _mainDisplay;

 __declspec(property(get=get_colorBuffer)) ::UnityEngine::RenderBuffer  colorBuffer;

/// @brief Field displays, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_displays, put=setStaticF_displays)) ::ArrayW<::UnityEngine::Display*>  displays;

/// @brief Field m_ActiveEditorGameViewTarget, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_m_ActiveEditorGameViewTarget, put=setStaticF_m_ActiveEditorGameViewTarget)) int32_t  m_ActiveEditorGameViewTarget;

/// @brief Field nativeDisplay, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nativeDisplay, put=__cordl_internal_set_nativeDisplay)) ::System::IntPtr  nativeDisplay;

/// @brief Field onDisplaysUpdated, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onDisplaysUpdated, put=setStaticF_onDisplaysUpdated)) ::UnityEngine::Display_DisplaysUpdatedDelegate*  onDisplaysUpdated;

 __declspec(property(get=get_renderingHeight)) int32_t  renderingHeight;

 __declspec(property(get=get_renderingWidth)) int32_t  renderingWidth;

 __declspec(property(get=get_requiresSrgbBlitToBackbuffer)) bool  requiresSrgbBlitToBackbuffer;

 __declspec(property(get=get_systemHeight)) int32_t  systemHeight;

 __declspec(property(get=get_systemWidth)) int32_t  systemWidth;

/// @brief Method FireDisplaysUpdated, addr 0x182244e50, size 0x50, virtual false, abstract: false, final false
static inline void FireDisplaysUpdated() ;

/// @brief Method GetRenderingBuffersImpl, addr 0x182244ea0, size 0x10, virtual false, abstract: false, final false
static inline void GetRenderingBuffersImpl(::System::IntPtr  nativeDisplay, ::by_ref<::UnityEngine::RenderBuffer>  color, ::by_ref<::UnityEngine::RenderBuffer>  depth) ;

/// @brief Method GetRenderingExtImpl, addr 0x182244eb0, size 0x10, virtual false, abstract: false, final false
static inline void GetRenderingExtImpl(::System::IntPtr  nativeDisplay, ::by_ref<int32_t>  w, ::by_ref<int32_t>  h) ;

/// @brief Method GetSystemExtImpl, addr 0x182244ec0, size 0x10, virtual false, abstract: false, final false
static inline void GetSystemExtImpl(::System::IntPtr  nativeDisplay, ::by_ref<int32_t>  w, ::by_ref<int32_t>  h) ;

static inline ::UnityEngine::Display* New_ctor() ;

static inline ::UnityEngine::Display* New_ctor(::System::IntPtr  nativeDisplay) ;

/// @brief Method RecreateDisplayList, addr 0x182244ed0, size 0x110, virtual false, abstract: false, final false
static inline void RecreateDisplayList(::ArrayW<::System::IntPtr>  nativeDisplay) ;

/// @brief Method RelativeMouseAt, addr 0x182244ff0, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 RelativeMouseAt(::UnityEngine::Vector3  inputMouseCoordinates) ;

/// @brief Method RelativeMouseAtImpl, addr 0x182244fe0, size 0x10, virtual false, abstract: false, final false
static inline int32_t RelativeMouseAtImpl(int32_t  x, int32_t  y, ::by_ref<int32_t>  rx, ::by_ref<int32_t>  ry) ;

/// @brief Method RequiresSrgbBlitToBackbufferImpl, addr 0x182245060, size 0x10, virtual false, abstract: false, final false
static inline bool RequiresSrgbBlitToBackbufferImpl(::System::IntPtr  nativeDisplay) ;

constexpr ::System::IntPtr const& __cordl_internal_get_nativeDisplay() const;

constexpr ::System::IntPtr& __cordl_internal_get_nativeDisplay() ;

constexpr void __cordl_internal_set_nativeDisplay(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x182245180, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804bda40, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  nativeDisplay) ;

static inline ::UnityEngine::Display* getStaticF__mainDisplay() ;

static inline ::ArrayW<::UnityEngine::Display*> getStaticF_displays() ;

static inline int32_t getStaticF_m_ActiveEditorGameViewTarget() ;

static inline ::UnityEngine::Display_DisplaysUpdatedDelegate* getStaticF_onDisplaysUpdated() ;

/// @brief Method get_colorBuffer, addr 0x1822451b0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::RenderBuffer get_colorBuffer() ;

/// @brief Method get_main, addr 0x1822451f0, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Display* get_main() ;

/// @brief Method get_renderingHeight, addr 0x182245230, size 0x30, virtual false, abstract: false, final false
inline int32_t get_renderingHeight() ;

/// @brief Method get_renderingWidth, addr 0x182245260, size 0x30, virtual false, abstract: false, final false
inline int32_t get_renderingWidth() ;

/// @brief Method get_requiresSrgbBlitToBackbuffer, addr 0x182245290, size 0x10, virtual false, abstract: false, final false
inline bool get_requiresSrgbBlitToBackbuffer() ;

/// @brief Method get_systemHeight, addr 0x1822452a0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_systemHeight() ;

/// @brief Method get_systemWidth, addr 0x1822452d0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_systemWidth() ;

static inline void setStaticF__mainDisplay(::UnityEngine::Display*  value) ;

static inline void setStaticF_displays(::ArrayW<::UnityEngine::Display*>  value) ;

static inline void setStaticF_m_ActiveEditorGameViewTarget(int32_t  value) ;

static inline void setStaticF_onDisplaysUpdated(::UnityEngine::Display_DisplaysUpdatedDelegate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Display() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Display", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Display(Display && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Display", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Display(Display const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10483};

/// @brief Field nativeDisplay, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___nativeDisplay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Display, ___nativeDisplay) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Display) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine

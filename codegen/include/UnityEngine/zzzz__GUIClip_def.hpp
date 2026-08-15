#pragma once
// IWYU pragma private; include "UnityEngine/GUIClip.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GUIClip)
namespace System {
class IDisposable;
}
namespace UnityEngine {
struct GUIClip_ParentClipScope;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class GUIClip;
}
namespace UnityEngine {
struct GUIClip_ParentClipScope;
}
// Write type traits
MARK_REF_T(::UnityEngine::GUIClip*);
MARK_VAL_T(::UnityEngine::GUIClip_ParentClipScope);
DEFINE_IL2CPP_CLASS(::UnityEngine::GUIClip*, "UnityEngine", "GUIClip");
DEFINE_IL2CPP_CLASS(::UnityEngine::GUIClip_ParentClipScope, "UnityEngine", "GUIClip/ParentClipScope");
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.GUIClip/ParentClipScope
struct CORDL_TYPE GUIClip_ParentClipScope {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1822d23f0, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0x1822d2410, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Matrix4x4  objectTransform, ::UnityEngine::Rect  clipRect) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr GUIClip_ParentClipScope() ;

// Ctor Parameters [CppParam { name: "m_Disposed", ty: "bool", modifiers: "", def_value: None }]
constexpr GUIClip_ParentClipScope(bool  m_Disposed) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19071};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field m_Disposed, offset: 0x0, size: 0x1, def value: None
 bool  m_Disposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::GUIClip_ParentClipScope, m_Disposed) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::GUIClip_ParentClipScope) == 0x1, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GUIClip
class CORDL_TYPE GUIClip : public ::System::Object {
public:
// Declarations
using ParentClipScope = ::UnityEngine::GUIClip_ParentClipScope;

/// @brief Method GetMatrix, addr 0x1822be960, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 GetMatrix() ;

/// @brief Method GetMatrix_Injected, addr 0x1822be950, size 0x10, virtual false, abstract: false, final false
static inline void GetMatrix_Injected(::by_ref<::UnityEngine::Matrix4x4>  ret) ;

/// @brief Method Internal_GetCount, addr 0x1822be990, size 0x10, virtual false, abstract: false, final false
static inline int32_t Internal_GetCount() ;

/// @brief Method Internal_Pop, addr 0x1822be9b0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_Pop() ;

/// @brief Method Internal_PopParentClip, addr 0x1822be9a0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_PopParentClip() ;

/// @brief Method Internal_Push, addr 0x1822bea60, size 0x30, virtual false, abstract: false, final false
static inline void Internal_Push(::UnityEngine::Rect  screenRect, ::UnityEngine::Vector2  scrollOffset, ::UnityEngine::Vector2  renderOffset, bool  resetOffset) ;

/// @brief Method Internal_PushParentClip, addr 0x1822be9d0, size 0x70, virtual false, abstract: false, final false
static inline void Internal_PushParentClip(::UnityEngine::Matrix4x4  objectTransform, ::UnityEngine::Rect  clipRect) ;

/// @brief Method Internal_PushParentClip, addr 0x1822bea40, size 0x10, virtual false, abstract: false, final false
static inline void Internal_PushParentClip(::UnityEngine::Matrix4x4  renderTransform, ::UnityEngine::Matrix4x4  inputTransform, ::UnityEngine::Rect  clipRect) ;

/// @brief Method Internal_PushParentClip_Injected, addr 0x1822be9c0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_PushParentClip_Injected(::by_ref<::UnityEngine::Matrix4x4>  renderTransform, ::by_ref<::UnityEngine::Matrix4x4>  inputTransform, ::by_ref<::UnityEngine::Rect>  clipRect) ;

/// @brief Method Internal_Push_Injected, addr 0x1822bea50, size 0x10, virtual false, abstract: false, final false
static inline void Internal_Push_Injected(::by_ref<::UnityEngine::Rect>  screenRect, ::by_ref<::UnityEngine::Vector2>  scrollOffset, ::by_ref<::UnityEngine::Vector2>  renderOffset, bool  resetOffset) ;

/// @brief Method Pop, addr 0x1822be9b0, size 0x10, virtual false, abstract: false, final false
static inline void Pop() ;

/// @brief Method Push, addr 0x1822bea90, size 0x30, virtual false, abstract: false, final false
static inline void Push(::UnityEngine::Rect  screenRect, ::UnityEngine::Vector2  scrollOffset, ::UnityEngine::Vector2  renderOffset, bool  resetOffset) ;

/// @brief Method SetMatrix, addr 0x1822bead0, size 0x10, virtual false, abstract: false, final false
static inline void SetMatrix(::UnityEngine::Matrix4x4  m) ;

/// @brief Method SetMatrix_Injected, addr 0x1822beac0, size 0x10, virtual false, abstract: false, final false
static inline void SetMatrix_Injected(::by_ref<::UnityEngine::Matrix4x4>  m) ;

/// @brief Method UnclipToWindow, addr 0x1822beb20, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 UnclipToWindow(::UnityEngine::Vector2  pos) ;

/// @brief Method UnclipToWindow_Vector2, addr 0x1822beaf0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 UnclipToWindow_Vector2(::UnityEngine::Vector2  pos) ;

/// @brief Method UnclipToWindow_Vector2_Injected, addr 0x1822beae0, size 0x10, virtual false, abstract: false, final false
static inline void UnclipToWindow_Vector2_Injected(::by_ref<::UnityEngine::Vector2>  pos, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_visibleRect, addr 0x1822beb60, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect get_visibleRect() ;

/// @brief Method get_visibleRect_Injected, addr 0x1822beb50, size 0x10, virtual false, abstract: false, final false
static inline void get_visibleRect_Injected(::by_ref<::UnityEngine::Rect>  ret) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GUIClip() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GUIClip", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GUIClip(GUIClip && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GUIClip", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GUIClip(GUIClip const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19072};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::GUIClip) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine

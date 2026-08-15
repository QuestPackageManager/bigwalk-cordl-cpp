#pragma once
// IWYU pragma private; include "UnityEngine/SpriteRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
CORDL_MODULE_EXPORT(SpriteRenderer)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace UnityEngine {
class SpriteRenderer;
}
// Write type traits
MARK_REF_T(::UnityEngine::SpriteRenderer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::SpriteRenderer*, "UnityEngine", "SpriteRenderer");
// Dependencies UnityEngine.Renderer
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SpriteRenderer
class CORDL_TYPE SpriteRenderer : public ::UnityEngine::Renderer {
public:
// Declarations
/// @brief Field m_SpriteChangeEvent, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SpriteChangeEvent, put=__cordl_internal_set_m_SpriteChangeEvent)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::SpriteRenderer>>*  m_SpriteChangeEvent;

 __declspec(property(get=get_sprite, put=set_sprite)) ::UnityW<::UnityEngine::Sprite>  sprite;

/// @brief Method InvokeSpriteChanged, addr 0x18224b590, size 0x50, virtual false, abstract: false, final false
inline void InvokeSpriteChanged() ;

static inline ::UnityEngine::SpriteRenderer* New_ctor() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::SpriteRenderer>>* const& __cordl_internal_get_m_SpriteChangeEvent() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::SpriteRenderer>>*& __cordl_internal_get_m_SpriteChangeEvent() ;

constexpr void __cordl_internal_set_m_SpriteChangeEvent(::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::SpriteRenderer>>*  value) ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_sprite, addr 0x18224b5f0, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Sprite> get_sprite() ;

/// @brief Method get_sprite_Injected, addr 0x18224b5e0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_sprite_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_sprite, addr 0x18224b640, size 0x50, virtual false, abstract: false, final false
inline void set_sprite(::UnityEngine::Sprite*  value) ;

/// @brief Method set_sprite_Injected, addr 0x18224b630, size 0x10, virtual false, abstract: false, final false
static inline void set_sprite_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpriteRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpriteRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpriteRenderer(SpriteRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpriteRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpriteRenderer(SpriteRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10415};

/// @brief Field m_SpriteChangeEvent, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::SpriteRenderer>>*  ___m_SpriteChangeEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::SpriteRenderer, ___m_SpriteChangeEvent) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::SpriteRenderer) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine

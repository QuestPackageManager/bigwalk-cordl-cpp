#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/PostProcessAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEvent_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PostProcessAttribute)
namespace System {
class Type;
}
namespace UnityEngine::Rendering::PostProcessing {
struct PostProcessEvent;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::PostProcessAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::PostProcessAttribute*, "UnityEngine.Rendering.PostProcessing", "PostProcessAttribute");
// Dependencies System.Attribute, UnityEngine.Rendering.PostProcessing.PostProcessEvent
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.PostProcessAttribute
class CORDL_TYPE PostProcessAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field allowInSceneView, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowInSceneView, put=__cordl_internal_set_allowInSceneView)) bool  allowInSceneView;

/// @brief Field builtinEffect, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_builtinEffect, put=__cordl_internal_set_builtinEffect)) bool  builtinEffect;

/// @brief Field eventType, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_eventType, put=__cordl_internal_set_eventType)) ::UnityEngine::Rendering::PostProcessing::PostProcessEvent  eventType;

/// @brief Field menuItem, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_menuItem, put=__cordl_internal_set_menuItem)) ::StringW  menuItem;

/// @brief Field renderer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderer, put=__cordl_internal_set_renderer)) ::System::Type*  renderer;

static inline ::UnityEngine::Rendering::PostProcessing::PostProcessAttribute* New_ctor(::System::Type*  renderer, ::UnityEngine::Rendering::PostProcessing::PostProcessEvent  eventType, ::StringW  menuItem, bool  allowInSceneView) ;

static inline ::UnityEngine::Rendering::PostProcessing::PostProcessAttribute* New_ctor(::System::Type*  renderer, ::StringW  menuItem, bool  allowInSceneView) ;

constexpr bool const& __cordl_internal_get_allowInSceneView() const;

constexpr bool& __cordl_internal_get_allowInSceneView() ;

constexpr bool const& __cordl_internal_get_builtinEffect() const;

constexpr bool& __cordl_internal_get_builtinEffect() ;

constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessEvent const& __cordl_internal_get_eventType() const;

constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessEvent& __cordl_internal_get_eventType() ;

constexpr ::StringW const& __cordl_internal_get_menuItem() const;

constexpr ::StringW& __cordl_internal_get_menuItem() ;

constexpr ::System::Type* const& __cordl_internal_get_renderer() const;

constexpr ::System::Type*& __cordl_internal_get_renderer() ;

constexpr void __cordl_internal_set_allowInSceneView(bool  value) ;

constexpr void __cordl_internal_set_builtinEffect(bool  value) ;

constexpr void __cordl_internal_set_eventType(::UnityEngine::Rendering::PostProcessing::PostProcessEvent  value) ;

constexpr void __cordl_internal_set_menuItem(::StringW  value) ;

constexpr void __cordl_internal_set_renderer(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x181fbb700, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  renderer, ::UnityEngine::Rendering::PostProcessing::PostProcessEvent  eventType, ::StringW  menuItem, bool  allowInSceneView) ;

/// @brief Method .ctor, addr 0x181fbb6b0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  renderer, ::StringW  menuItem, bool  allowInSceneView) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostProcessAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostProcessAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PostProcessAttribute(PostProcessAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostProcessAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostProcessAttribute(PostProcessAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18535};

/// @brief Field renderer, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ___renderer;

/// @brief Field eventType, offset: 0x18, size: 0x4, def value: None
 ::UnityEngine::Rendering::PostProcessing::PostProcessEvent  ___eventType;

/// @brief Field menuItem, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___menuItem;

/// @brief Field allowInSceneView, offset: 0x28, size: 0x1, def value: None
 bool  ___allowInSceneView;

/// @brief Field builtinEffect, offset: 0x29, size: 0x1, def value: None
 bool  ___builtinEffect;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessAttribute, ___renderer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessAttribute, ___eventType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessAttribute, ___menuItem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessAttribute, ___allowInSceneView) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessAttribute, ___builtinEffect) == 0x29, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::PostProcessAttribute) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing

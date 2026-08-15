#pragma once
// IWYU pragma private; include "UnityEngine/TextMesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TextMesh)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine {
class TextMesh;
}
// Write type traits
MARK_REF_T(::UnityEngine::TextMesh*);
DEFINE_IL2CPP_CLASS(::UnityEngine::TextMesh*, "UnityEngine", "TextMesh");
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TextMesh
class CORDL_TYPE TextMesh : public ::UnityEngine::Component {
public:
// Declarations
 __declspec(property(put=set_color)) ::UnityEngine::Color  color;

 __declspec(property(put=set_text)) ::StringW  text;

static inline ::UnityEngine::TextMesh* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method set_color, addr 0x18235b080, size 0x30, virtual false, abstract: false, final false
inline void set_color(::UnityEngine::Color  value) ;

/// @brief Method set_color_Injected, addr 0x18235b070, size 0x10, virtual false, abstract: false, final false
static inline void set_color_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Color>  value) ;

/// @brief Method set_text, addr 0x18235b0c0, size 0x120, virtual false, abstract: false, final false
inline void set_text(::StringW  value) ;

/// @brief Method set_text_Injected, addr 0x18235b0b0, size 0x10, virtual false, abstract: false, final false
static inline void set_text_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextMesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextMesh", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextMesh(TextMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextMesh", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextMesh(TextMesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21456};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::TextMesh) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine

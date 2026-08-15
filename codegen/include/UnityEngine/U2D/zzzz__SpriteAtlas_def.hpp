#pragma once
// IWYU pragma private; include "UnityEngine/U2D/SpriteAtlas.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SpriteAtlas)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace UnityEngine::U2D {
class SpriteAtlas;
}
// Write type traits
MARK_REF_T(::UnityEngine::U2D::SpriteAtlas*);
DEFINE_IL2CPP_CLASS(::UnityEngine::U2D::SpriteAtlas*, "UnityEngine.U2D", "SpriteAtlas");
// Dependencies UnityEngine.Object
namespace UnityEngine::U2D {
// Is value type: false
// CS Name: UnityEngine.U2D.SpriteAtlas
class CORDL_TYPE SpriteAtlas : public ::UnityEngine::Object {
public:
// Declarations
/// @brief Method CanBindTo, addr 0x1822b5520, size 0x170, virtual false, abstract: false, final false
inline bool CanBindTo(::UnityEngine::Sprite*  sprite) ;

/// @brief Method CanBindTo_Injected, addr 0x1822b5510, size 0x10, virtual false, abstract: false, final false
static inline bool CanBindTo_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  sprite) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpriteAtlas() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpriteAtlas", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpriteAtlas(SpriteAtlas && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpriteAtlas", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpriteAtlas(SpriteAtlas const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11335};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::U2D::SpriteAtlas) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::U2D

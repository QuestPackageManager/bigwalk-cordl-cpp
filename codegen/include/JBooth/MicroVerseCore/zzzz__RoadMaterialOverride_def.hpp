#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/RoadMaterialOverride.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RoadMaterialOverride)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class RoadMaterialOverride;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::RoadMaterialOverride*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::RoadMaterialOverride*, "JBooth.MicroVerseCore", "RoadMaterialOverride");
// Dependencies UnityEngine.MonoBehaviour
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.RoadMaterialOverride
class CORDL_TYPE RoadMaterialOverride : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field maskTexture, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_maskTexture, put=__cordl_internal_set_maskTexture)) ::UnityW<::UnityEngine::Texture2D>  maskTexture;

/// @brief Field meshRenderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshRenderer, put=__cordl_internal_set_meshRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  meshRenderer;

/// @brief Method ClearCache, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void ClearCache() ;

static inline ::JBooth::MicroVerseCore::RoadMaterialOverride* New_ctor() ;

/// @brief Method OnEnable, addr 0x18141e960, size 0xb0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Override, addr 0x18141ea10, size 0x160, virtual false, abstract: false, final false
inline void Override(::UnityEngine::Material*  m) ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_maskTexture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_maskTexture() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_meshRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_meshRenderer() ;

constexpr void __cordl_internal_set_maskTexture(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoadMaterialOverride() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoadMaterialOverride", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RoadMaterialOverride(RoadMaterialOverride && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoadMaterialOverride", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoadMaterialOverride(RoadMaterialOverride const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17958};

/// @brief Field meshRenderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___meshRenderer;

/// @brief Field maskTexture, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___maskTexture;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::RoadMaterialOverride, ___meshRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::RoadMaterialOverride, ___maskTexture) == 0x28, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::RoadMaterialOverride) == 0x30, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore

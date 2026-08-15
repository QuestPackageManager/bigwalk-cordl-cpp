#pragma once
// IWYU pragma private; include "GlobalNamespace/DevBoundsHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DevBoundsHelper)
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class DevBoundsHelper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DevBoundsHelper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DevBoundsHelper*, "", "DevBoundsHelper");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DevBoundsHelper
class CORDL_TYPE DevBoundsHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _renderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Field _text, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__text, put=__cordl_internal_set__text)) ::UnityW<::TMPro::TMP_Text>  _text;

/// @brief Method DrawLinesToCorners, addr 0x1803e60c0, size 0x2f0, virtual false, abstract: false, final false
inline void DrawLinesToCorners(::UnityEngine::Bounds  bounds) ;

static inline ::GlobalNamespace::DevBoundsHelper* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x1803e63b0, size 0x340, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__text() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__text() ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DevBoundsHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DevBoundsHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DevBoundsHelper(DevBoundsHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DevBoundsHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DevBoundsHelper(DevBoundsHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4902};

/// @brief Field _renderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// @brief Field _text, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____text;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DevBoundsHelper, ____renderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevBoundsHelper, ____text) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DevBoundsHelper) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

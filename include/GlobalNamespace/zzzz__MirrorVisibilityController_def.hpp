#pragma once
// IWYU pragma private; include "GlobalNamespace/MirrorVisibilityController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MirrorVisibilityController)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MirrorVisibilityController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MirrorVisibilityController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MirrorVisibilityController*, "", "MirrorVisibilityController");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MirrorVisibilityController
class CORDL_TYPE MirrorVisibilityController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::GameObject>  target;

static inline ::GlobalNamespace::MirrorVisibilityController* New_ctor() ;

/// @brief Method OnBecameInvisible, addr 0x1804042c0, size 0x30, virtual false, abstract: false, final false
inline void OnBecameInvisible() ;

/// @brief Method OnBecameVisible, addr 0x1804042f0, size 0x30, virtual false, abstract: false, final false
inline void OnBecameVisible() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MirrorVisibilityController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MirrorVisibilityController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MirrorVisibilityController(MirrorVisibilityController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MirrorVisibilityController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MirrorVisibilityController(MirrorVisibilityController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5080};

/// @brief Field target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MirrorVisibilityController, ___target) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MirrorVisibilityController) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

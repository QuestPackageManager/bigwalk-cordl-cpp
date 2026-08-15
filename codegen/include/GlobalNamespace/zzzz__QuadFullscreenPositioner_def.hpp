#pragma once
// IWYU pragma private; include "GlobalNamespace/QuadFullscreenPositioner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(QuadFullscreenPositioner)
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class QuadFullscreenPositioner;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::QuadFullscreenPositioner*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::QuadFullscreenPositioner*, "", "QuadFullscreenPositioner");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: QuadFullscreenPositioner
class CORDL_TYPE QuadFullscreenPositioner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field camera, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_camera, put=__cordl_internal_set_camera)) ::UnityW<::UnityEngine::Camera>  camera;

/// @brief Method LateUpdate, addr 0x1803eec40, size 0x10, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::QuadFullscreenPositioner* New_ctor() ;

/// @brief Method OnEnable, addr 0x1803eec40, size 0x10, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Refresh, addr 0x1803eec50, size 0x260, virtual false, abstract: false, final false
inline void Refresh() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_camera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_camera() ;

constexpr void __cordl_internal_set_camera(::UnityW<::UnityEngine::Camera>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QuadFullscreenPositioner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QuadFullscreenPositioner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
QuadFullscreenPositioner(QuadFullscreenPositioner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QuadFullscreenPositioner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
QuadFullscreenPositioner(QuadFullscreenPositioner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4965};

/// @brief Field camera, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___camera;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::QuadFullscreenPositioner, ___camera) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::QuadFullscreenPositioner) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimancerFrameHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AnimancerFrameHelper)
namespace Animancer {
class AnimancerComponent;
}
// Forward declare root types
namespace GlobalNamespace {
class AnimancerFrameHelper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AnimancerFrameHelper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnimancerFrameHelper*, "", "AnimancerFrameHelper");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AnimancerFrameHelper
class CORDL_TYPE AnimancerFrameHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field animancerComponent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_animancerComponent, put=__cordl_internal_set_animancerComponent)) ::UnityW<::Animancer::AnimancerComponent>  animancerComponent;

/// @brief Method Clear, addr 0x1803d4fc0, size 0x10, virtual false, abstract: false, final false
inline void Clear() ;

static inline ::GlobalNamespace::AnimancerFrameHelper* New_ctor() ;

/// @brief Method PauseAfterOneFrame, addr 0x1803038d0, size 0x10, virtual false, abstract: false, final false
inline void PauseAfterOneFrame() ;

/// @brief Method Update, addr 0x1803f7860, size 0x60, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get_animancerComponent() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get_animancerComponent() ;

constexpr void __cordl_internal_set_animancerComponent(::UnityW<::Animancer::AnimancerComponent>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimancerFrameHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimancerFrameHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimancerFrameHelper(AnimancerFrameHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimancerFrameHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimancerFrameHelper(AnimancerFrameHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5017};

/// @brief Field animancerComponent, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ___animancerComponent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnimancerFrameHelper, ___animancerComponent) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AnimancerFrameHelper) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

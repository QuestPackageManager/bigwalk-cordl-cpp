#pragma once
// IWYU pragma private; include "Animancer/Examples/Layers/LayeredAnimationManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LayeredAnimationManager)
namespace Animancer {
class AnimancerComponent;
}
namespace Animancer {
class AnimancerLayer;
}
namespace Animancer {
class ITransition;
}
namespace UnityEngine {
class AvatarMask;
}
// Forward declare root types
namespace Animancer::Examples::Layers {
class LayeredAnimationManager;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::Layers::LayeredAnimationManager*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::Layers::LayeredAnimationManager*, "Animancer.Examples.Layers", "LayeredAnimationManager");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer::Examples::Layers {
// Is value type: false
// CS Name: Animancer.Examples.Layers.LayeredAnimationManager
class CORDL_TYPE LayeredAnimationManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _ActionFadeDuration, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__ActionFadeDuration, put=__cordl_internal_set__ActionFadeDuration)) float_t  _ActionFadeDuration;

/// @brief Field _ActionLayer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__ActionLayer, put=__cordl_internal_set__ActionLayer)) ::Animancer::AnimancerLayer*  _ActionLayer;

/// @brief Field _ActionMask, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__ActionMask, put=__cordl_internal_set__ActionMask)) ::UnityW<::UnityEngine::AvatarMask>  _ActionMask;

/// @brief Field _Animancer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animancer, put=__cordl_internal_set__Animancer)) ::UnityW<::Animancer::AnimancerComponent>  _Animancer;

/// @brief Field _BaseLayer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__BaseLayer, put=__cordl_internal_set__BaseLayer)) ::Animancer::AnimancerLayer*  _BaseLayer;

/// @brief Field _CanPlayActionFullBody, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__CanPlayActionFullBody, put=__cordl_internal_set__CanPlayActionFullBody)) bool  _CanPlayActionFullBody;

/// @brief Method Awake, addr 0x1802fdd20, size 0x90, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FadeOutUpperBody, addr 0x1802fddb0, size 0x30, virtual false, abstract: false, final false
inline void FadeOutUpperBody() ;

static inline ::Animancer::Examples::Layers::LayeredAnimationManager* New_ctor() ;

/// @brief Method PlayAction, addr 0x1802fde80, size 0xd0, virtual false, abstract: false, final false
inline void PlayAction(::Animancer::ITransition*  transition) ;

/// @brief Method PlayActionFullBody, addr 0x1802fdde0, size 0xa0, virtual false, abstract: false, final false
inline void PlayActionFullBody(float_t  fadeDuration) ;

/// @brief Method PlayBase, addr 0x1802fdf50, size 0x50, virtual false, abstract: false, final false
inline void PlayBase(::Animancer::ITransition*  transition, bool  canPlayActionFullBody) ;

constexpr float_t const& __cordl_internal_get__ActionFadeDuration() const;

constexpr float_t& __cordl_internal_get__ActionFadeDuration() ;

constexpr ::Animancer::AnimancerLayer* const& __cordl_internal_get__ActionLayer() const;

constexpr ::Animancer::AnimancerLayer*& __cordl_internal_get__ActionLayer() ;

constexpr ::UnityW<::UnityEngine::AvatarMask> const& __cordl_internal_get__ActionMask() const;

constexpr ::UnityW<::UnityEngine::AvatarMask>& __cordl_internal_get__ActionMask() ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get__Animancer() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get__Animancer() ;

constexpr ::Animancer::AnimancerLayer* const& __cordl_internal_get__BaseLayer() const;

constexpr ::Animancer::AnimancerLayer*& __cordl_internal_get__BaseLayer() ;

constexpr bool const& __cordl_internal_get__CanPlayActionFullBody() const;

constexpr bool& __cordl_internal_get__CanPlayActionFullBody() ;

constexpr void __cordl_internal_set__ActionFadeDuration(float_t  value) ;

constexpr void __cordl_internal_set__ActionLayer(::Animancer::AnimancerLayer*  value) ;

constexpr void __cordl_internal_set__ActionMask(::UnityW<::UnityEngine::AvatarMask>  value) ;

constexpr void __cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set__BaseLayer(::Animancer::AnimancerLayer*  value) ;

constexpr void __cordl_internal_set__CanPlayActionFullBody(bool  value) ;

/// @brief Method .ctor, addr 0x1802fdfa0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LayeredAnimationManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LayeredAnimationManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LayeredAnimationManager(LayeredAnimationManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LayeredAnimationManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LayeredAnimationManager(LayeredAnimationManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19990};

/// @brief Field _Animancer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ____Animancer;

/// @brief Field _ActionMask, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AvatarMask>  ____ActionMask;

/// @brief Field _ActionFadeDuration, offset: 0x30, size: 0x4, def value: None
 float_t  ____ActionFadeDuration;

/// @brief Field _BaseLayer, offset: 0x38, size: 0x8, def value: None
 ::Animancer::AnimancerLayer*  ____BaseLayer;

/// @brief Field _ActionLayer, offset: 0x40, size: 0x8, def value: None
 ::Animancer::AnimancerLayer*  ____ActionLayer;

/// @brief Field _CanPlayActionFullBody, offset: 0x48, size: 0x1, def value: None
 bool  ____CanPlayActionFullBody;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::Layers::LayeredAnimationManager, ____Animancer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Layers::LayeredAnimationManager, ____ActionMask) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Layers::LayeredAnimationManager, ____ActionFadeDuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Layers::LayeredAnimationManager, ____BaseLayer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Layers::LayeredAnimationManager, ____ActionLayer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Layers::LayeredAnimationManager, ____CanPlayActionFullBody) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::Layers::LayeredAnimationManager) == 0x50, "Size mismatch!");

} // namespace end def Animancer::Examples::Layers

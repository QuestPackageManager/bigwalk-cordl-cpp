#pragma once
// IWYU pragma private; include "Animancer/Examples/DirectionalSprites/DirectionalBasics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
CORDL_MODULE_EXPORT(DirectionalBasics)
namespace Animancer {
class AnimancerComponent;
}
namespace Animancer {
class DirectionalAnimationSet;
}
// Forward declare root types
namespace Animancer::Examples::DirectionalSprites {
class DirectionalBasics;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::DirectionalSprites::DirectionalBasics*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::DirectionalSprites::DirectionalBasics*, "Animancer.Examples.DirectionalSprites", "DirectionalBasics");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace Animancer::Examples::DirectionalSprites {
// Is value type: false
// CS Name: Animancer.Examples.DirectionalSprites.DirectionalBasics
class CORDL_TYPE DirectionalBasics : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _Animancer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animancer, put=__cordl_internal_set__Animancer)) ::UnityW<::Animancer::AnimancerComponent>  _Animancer;

/// @brief Field _Facing, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Facing, put=__cordl_internal_set__Facing)) ::UnityEngine::Vector2  _Facing;

/// @brief Field _Idles, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Idles, put=__cordl_internal_set__Idles)) ::UnityW<::Animancer::DirectionalAnimationSet>  _Idles;

/// @brief Field _Walks, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Walks, put=__cordl_internal_set__Walks)) ::UnityW<::Animancer::DirectionalAnimationSet>  _Walks;

static inline ::Animancer::Examples::DirectionalSprites::DirectionalBasics* New_ctor() ;

/// @brief Method Play, addr 0x1802f9e00, size 0x60, virtual false, abstract: false, final false
inline void Play(::Animancer::DirectionalAnimationSet*  animations) ;

/// @brief Method Update, addr 0x1802f9e60, size 0x170, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get__Animancer() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get__Animancer() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__Facing() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__Facing() ;

constexpr ::UnityW<::Animancer::DirectionalAnimationSet> const& __cordl_internal_get__Idles() const;

constexpr ::UnityW<::Animancer::DirectionalAnimationSet>& __cordl_internal_get__Idles() ;

constexpr ::UnityW<::Animancer::DirectionalAnimationSet> const& __cordl_internal_get__Walks() const;

constexpr ::UnityW<::Animancer::DirectionalAnimationSet>& __cordl_internal_get__Walks() ;

constexpr void __cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set__Facing(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__Idles(::UnityW<::Animancer::DirectionalAnimationSet>  value) ;

constexpr void __cordl_internal_set__Walks(::UnityW<::Animancer::DirectionalAnimationSet>  value) ;

/// @brief Method .ctor, addr 0x1802f9fd0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DirectionalBasics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DirectionalBasics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DirectionalBasics(DirectionalBasics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DirectionalBasics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DirectionalBasics(DirectionalBasics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20014};

/// @brief Field _Animancer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ____Animancer;

/// @brief Field _Idles, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Animancer::DirectionalAnimationSet>  ____Idles;

/// @brief Field _Walks, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Animancer::DirectionalAnimationSet>  ____Walks;

/// @brief Field _Facing, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____Facing;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::DirectionalSprites::DirectionalBasics, ____Animancer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::DirectionalSprites::DirectionalBasics, ____Idles) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::DirectionalSprites::DirectionalBasics, ____Walks) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::DirectionalSprites::DirectionalBasics, ____Facing) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::DirectionalSprites::DirectionalBasics) == 0x40, "Size mismatch!");

} // namespace end def Animancer::Examples::DirectionalSprites

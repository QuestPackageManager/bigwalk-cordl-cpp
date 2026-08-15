#pragma once
// IWYU pragma private; include "Animancer/AnimancerJob_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationScriptPlayable_def.hpp"
CORDL_MODULE_EXPORT(AnimancerJob_1)
namespace Animancer {
class AnimancerPlayable;
}
// Forward declare root types
namespace Animancer {
template<typename T>
class AnimancerJob_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Animancer::AnimancerJob_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Animancer::AnimancerJob_1, "Animancer", "AnimancerJob`1");
// Dependencies System.Object, UnityEngine.Animations.AnimationScriptPlayable
namespace Animancer {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Animancer.AnimancerJob`1<T>
class CORDL_TYPE AnimancerJob_1 : public ::System::Object {
public:
// Declarations
/// @brief Field _Job, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Job, put=__cordl_internal_set__Job)) T  _Job;

/// @brief Field _Playable, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get__Playable, put=__cordl_internal_set__Playable)) ::UnityEngine::Animations::AnimationScriptPlayable  _Playable;

/// @brief Method CreatePlayable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CreatePlayable(::Animancer::AnimancerPlayable*  animancer) ;

/// @brief Method Destroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Destroy() ;

static inline ::Animancer::AnimancerJob_1<T>* New_ctor() ;

constexpr T const& __cordl_internal_get__Job() const;

constexpr T& __cordl_internal_get__Job() ;

constexpr ::UnityEngine::Animations::AnimationScriptPlayable const& __cordl_internal_get__Playable() const;

constexpr ::UnityEngine::Animations::AnimationScriptPlayable& __cordl_internal_get__Playable() ;

constexpr void __cordl_internal_set__Job(T  value) ;

constexpr void __cordl_internal_set__Playable(::UnityEngine::Animations::AnimationScriptPlayable  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimancerJob_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimancerJob_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimancerJob_1(AnimancerJob_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimancerJob_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimancerJob_1(AnimancerJob_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18157};

/// @brief Field _Job, offset: 0x10, size: 0x8, def value: None
 T  ____Job;

/// @brief Field _Playable, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Animations::AnimationScriptPlayable  ____Playable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer

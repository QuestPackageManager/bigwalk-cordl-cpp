#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimMoment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimMoment)
namespace Animancer {
class AnimancerComponent;
}
namespace GlobalNamespace {
class AnimancerFrameHelper;
}
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PeckSwitch;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace GlobalNamespace {
class AnimMoment;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AnimMoment*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnimMoment*, "", "AnimMoment");
// Dependencies PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AnimMoment
class CORDL_TYPE AnimMoment : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field animancerComponent, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_animancerComponent, put=__cordl_internal_set_animancerComponent)) ::UnityW<::Animancer::AnimancerComponent>  animancerComponent;

/// @brief Field animancerFrameHelper, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_animancerFrameHelper, put=__cordl_internal_set_animancerFrameHelper)) ::UnityW<::GlobalNamespace::AnimancerFrameHelper>  animancerFrameHelper;

/// @brief Field animationSpeed, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_animationSpeed, put=__cordl_internal_set_animationSpeed)) float_t  animationSpeed;

/// @brief Field initialized, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Field layer, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_layer, put=__cordl_internal_set_layer)) int32_t  layer;

/// @brief Field logVerbose, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field mainClip, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainClip, put=__cordl_internal_set_mainClip)) ::UnityW<::UnityEngine::AnimationClip>  mainClip;

/// @brief Field onClipFinish, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_onClipFinish, put=__cordl_internal_set_onClipFinish)) ::UnityW<::GlobalNamespace::PeckSwitch>  onClipFinish;

/// @brief Field peckSystem, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_peckSystem, put=__cordl_internal_set_peckSystem)) ::GlobalNamespace::PeckSystemReference  peckSystem;

/// @brief Method Awake, addr 0x1803f7110, size 0x50, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Initialize, addr 0x1803f7160, size 0xf0, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::AnimMoment* New_ctor() ;

/// @brief Method OnFinish, addr 0x1803f7250, size 0x170, virtual false, abstract: false, final false
inline void OnFinish() ;

/// @brief Method PauseState, addr 0x1803f73c0, size 0x130, virtual false, abstract: false, final false
inline void PauseState() ;

/// @brief Method Peck, addr 0x1803f74f0, size 0x170, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method Start, addr 0x1803f7660, size 0x10, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get_animancerComponent() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get_animancerComponent() ;

constexpr ::UnityW<::GlobalNamespace::AnimancerFrameHelper> const& __cordl_internal_get_animancerFrameHelper() const;

constexpr ::UnityW<::GlobalNamespace::AnimancerFrameHelper>& __cordl_internal_get_animancerFrameHelper() ;

constexpr float_t const& __cordl_internal_get_animationSpeed() const;

constexpr float_t& __cordl_internal_get_animationSpeed() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr int32_t const& __cordl_internal_get_layer() const;

constexpr int32_t& __cordl_internal_get_layer() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get_mainClip() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get_mainClip() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onClipFinish() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onClipFinish() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_peckSystem() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_peckSystem() ;

constexpr void __cordl_internal_set_animancerComponent(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set_animancerFrameHelper(::UnityW<::GlobalNamespace::AnimancerFrameHelper>  value) ;

constexpr void __cordl_internal_set_animationSpeed(float_t  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_layer(int32_t  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_mainClip(::UnityW<::UnityEngine::AnimationClip>  value) ;

constexpr void __cordl_internal_set_onClipFinish(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_peckSystem(::GlobalNamespace::PeckSystemReference  value) ;

/// @brief Method .ctor, addr 0x1803f7670, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimMoment() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimMoment", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimMoment(AnimMoment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimMoment", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimMoment(AnimMoment const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5021};

/// @brief Field peckSystem, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___peckSystem;

/// @brief Field onClipFinish, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onClipFinish;

/// @brief Field animancerComponent, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ___animancerComponent;

/// @brief Field animancerFrameHelper, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AnimancerFrameHelper>  ___animancerFrameHelper;

/// @brief Field mainClip, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ___mainClip;

/// @brief Field layer, offset: 0x68, size: 0x4, def value: None
 int32_t  ___layer;

/// @brief Field animationSpeed, offset: 0x6c, size: 0x4, def value: None
 float_t  ___animationSpeed;

/// @brief Field logVerbose, offset: 0x70, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field initialized, offset: 0x71, size: 0x1, def value: None
 bool  ___initialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnimMoment, ___peckSystem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimMoment, ___onClipFinish) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimMoment, ___animancerComponent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimMoment, ___animancerFrameHelper) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimMoment, ___mainClip) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimMoment, ___layer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimMoment, ___animationSpeed) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimMoment, ___logVerbose) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimMoment, ___initialized) == 0x71, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AnimMoment) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace

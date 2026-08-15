#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimLogic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimLogic)
namespace Animancer {
class AnimancerComponent;
}
namespace GlobalNamespace {
struct AnimLogic_ClipSetting;
}
namespace GlobalNamespace {
struct AnimLogic_StateSetting;
}
namespace GlobalNamespace {
struct PeckContext;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace GlobalNamespace {
class AnimLogic;
}
namespace GlobalNamespace {
struct AnimLogic_ClipSetting;
}
namespace GlobalNamespace {
struct AnimLogic_StateSetting;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AnimLogic*);
MARK_VAL_T(::GlobalNamespace::AnimLogic_ClipSetting);
MARK_VAL_T(::GlobalNamespace::AnimLogic_StateSetting);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnimLogic*, "", "AnimLogic");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnimLogic_ClipSetting, "", "AnimLogic/ClipSetting");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnimLogic_StateSetting, "", "AnimLogic/StateSetting");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: AnimLogic/ClipSetting
struct CORDL_TYPE AnimLogic_ClipSetting {
public:
// Declarations
 __declspec(property(get=get_speedWithDirection)) float_t  speedWithDirection;

/// @brief Method get_speedWithDirection, addr 0x1803f8190, size 0x50, virtual false, abstract: false, final false
inline float_t get_speedWithDirection() ;

// Ctor Parameters []
// @brief default ctor
constexpr AnimLogic_ClipSetting() ;

// Ctor Parameters [CppParam { name: "clip", ty: "::UnityW<::UnityEngine::AnimationClip>", modifiers: "", def_value: None }, CppParam { name: "backwards", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "speed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "layer", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "forceReplay", ty: "bool", modifiers: "", def_value: None }]
constexpr AnimLogic_ClipSetting(::UnityW<::UnityEngine::AnimationClip>  clip, bool  backwards, float_t  speed, int32_t  layer, bool  forceReplay) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5019};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field clip, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  clip;

/// @brief Field backwards, offset: 0x8, size: 0x1, def value: None
 bool  backwards;

/// @brief Field speed, offset: 0xc, size: 0x4, def value: None
 float_t  speed;

/// @brief Field layer, offset: 0x10, size: 0x4, def value: None
 int32_t  layer;

/// @brief Field forceReplay, offset: 0x14, size: 0x1, def value: None
 bool  forceReplay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnimLogic_ClipSetting, clip) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimLogic_ClipSetting, backwards) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimLogic_ClipSetting, speed) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimLogic_ClipSetting, layer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimLogic_ClipSetting, forceReplay) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AnimLogic_ClipSetting) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies AnimLogic::ClipSetting
namespace GlobalNamespace {
// Is value type: true
// CS Name: AnimLogic/StateSetting
struct CORDL_TYPE AnimLogic_StateSetting {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AnimLogic_StateSetting() ;

// Ctor Parameters [CppParam { name: "clipSettings", ty: "::ArrayW<::GlobalNamespace::AnimLogic_ClipSetting>", modifiers: "", def_value: None }]
constexpr AnimLogic_StateSetting(::ArrayW<::GlobalNamespace::AnimLogic_ClipSetting>  clipSettings) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5018};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field clipSettings, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::AnimLogic_ClipSetting>  clipSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnimLogic_StateSetting, clipSettings) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AnimLogic_StateSetting) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies AnimLogic::StateSetting, PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AnimLogic
class CORDL_TYPE AnimLogic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ClipSetting = ::GlobalNamespace::AnimLogic_ClipSetting;

using StateSetting = ::GlobalNamespace::AnimLogic_StateSetting;

/// @brief Field animancerComponent, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_animancerComponent, put=__cordl_internal_set_animancerComponent)) ::UnityW<::Animancer::AnimancerComponent>  animancerComponent;

/// @brief Field clipState, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_clipState, put=__cordl_internal_set_clipState)) int32_t  clipState;

/// @brief Field logVerbose, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field peckState, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_peckState, put=__cordl_internal_set_peckState)) int32_t  peckState;

/// @brief Field peckSystem, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_peckSystem, put=__cordl_internal_set_peckSystem)) ::GlobalNamespace::PeckSystemReference  peckSystem;

/// @brief Field stateSettings, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_stateSettings, put=__cordl_internal_set_stateSettings)) ::ArrayW<::GlobalNamespace::AnimLogic_StateSetting>  stateSettings;

/// @brief Method Awake, addr 0x1803f6c00, size 0x50, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::AnimLogic* New_ctor() ;

/// @brief Method OnClipEnd, addr 0x1803f6c50, size 0xa0, virtual false, abstract: false, final false
inline void OnClipEnd() ;

/// @brief Method Peck, addr 0x1803f6cf0, size 0x60, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method PlayClip, addr 0x1803f6d50, size 0x3c0, virtual false, abstract: false, final false
inline void PlayClip(::GlobalNamespace::AnimLogic_ClipSetting  clipSetting) ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get_animancerComponent() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get_animancerComponent() ;

constexpr int32_t const& __cordl_internal_get_clipState() const;

constexpr int32_t& __cordl_internal_get_clipState() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr int32_t const& __cordl_internal_get_peckState() const;

constexpr int32_t& __cordl_internal_get_peckState() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_peckSystem() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_peckSystem() ;

constexpr ::ArrayW<::GlobalNamespace::AnimLogic_StateSetting> const& __cordl_internal_get_stateSettings() const;

constexpr ::ArrayW<::GlobalNamespace::AnimLogic_StateSetting>& __cordl_internal_get_stateSettings() ;

constexpr void __cordl_internal_set_animancerComponent(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set_clipState(int32_t  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_peckState(int32_t  value) ;

constexpr void __cordl_internal_set_peckSystem(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_stateSettings(::ArrayW<::GlobalNamespace::AnimLogic_StateSetting>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimLogic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimLogic", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimLogic(AnimLogic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimLogic", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimLogic(AnimLogic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5020};

/// @brief Field peckSystem, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___peckSystem;

/// @brief Field stateSettings, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::AnimLogic_StateSetting>  ___stateSettings;

/// @brief Field animancerComponent, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ___animancerComponent;

/// @brief Field logVerbose, offset: 0x58, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field peckState, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___peckState;

/// @brief Field clipState, offset: 0x60, size: 0x4, def value: None
 int32_t  ___clipState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnimLogic, ___peckSystem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimLogic, ___stateSettings) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimLogic, ___animancerComponent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimLogic, ___logVerbose) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimLogic, ___peckState) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimLogic, ___clipState) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AnimLogic) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace

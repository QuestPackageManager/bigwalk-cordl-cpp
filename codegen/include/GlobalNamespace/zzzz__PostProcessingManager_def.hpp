#pragma once
// IWYU pragma private; include "GlobalNamespace/PostProcessingManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PostProcessingManager)
namespace UnityEngine::Rendering {
class Volume;
}
// Forward declare root types
namespace GlobalNamespace {
class PostProcessingManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PostProcessingManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PostProcessingManager*, "", "PostProcessingManager");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PostProcessingManager
class CORDL_TYPE PostProcessingManager : public ::System::Object {
public:
// Declarations
/// @brief Field basePPVolume, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_basePPVolume, put=__cordl_internal_set_basePPVolume)) ::UnityW<::UnityEngine::Rendering::Volume>  basePPVolume;

/// @brief Field blindfoldPPVolume, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_blindfoldPPVolume, put=__cordl_internal_set_blindfoldPPVolume)) ::UnityW<::UnityEngine::Rendering::Volume>  blindfoldPPVolume;

/// @brief Field blinkingPPVolume, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_blinkingPPVolume, put=__cordl_internal_set_blinkingPPVolume)) ::UnityW<::UnityEngine::Rendering::Volume>  blinkingPPVolume;

/// @brief Field dreamClearnessPPVolume, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_dreamClearnessPPVolume, put=__cordl_internal_set_dreamClearnessPPVolume)) ::UnityW<::UnityEngine::Rendering::Volume>  dreamClearnessPPVolume;

/// @brief Field dreamingPPVolume, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_dreamingPPVolume, put=__cordl_internal_set_dreamingPPVolume)) ::UnityW<::UnityEngine::Rendering::Volume>  dreamingPPVolume;

/// @brief Field lobbyVisionPPVolume, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_lobbyVisionPPVolume, put=__cordl_internal_set_lobbyVisionPPVolume)) ::UnityW<::UnityEngine::Rendering::Volume>  lobbyVisionPPVolume;

/// @brief Field sleepingPPVolume, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sleepingPPVolume, put=__cordl_internal_set_sleepingPPVolume)) ::UnityW<::UnityEngine::Rendering::Volume>  sleepingPPVolume;

/// @brief Field speechlessPPVolume, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_speechlessPPVolume, put=__cordl_internal_set_speechlessPPVolume)) ::UnityW<::UnityEngine::Rendering::Volume>  speechlessPPVolume;

/// @brief Field xRayPPVolume, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_xRayPPVolume, put=__cordl_internal_set_xRayPPVolume)) ::UnityW<::UnityEngine::Rendering::Volume>  xRayPPVolume;

static inline ::GlobalNamespace::PostProcessingManager* New_ctor() ;

/// @brief Method SetBlindfold, addr 0x180427f60, size 0x70, virtual false, abstract: false, final false
static inline void SetBlindfold(bool  active) ;

/// @brief Method SetBlinkness, addr 0x180427fd0, size 0x40, virtual false, abstract: false, final false
static inline void SetBlinkness(float_t  blinkness) ;

/// @brief Method SetDazed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void SetDazed(bool  active) ;

/// @brief Method SetDreamClearness, addr 0x180428010, size 0x40, virtual false, abstract: false, final false
static inline void SetDreamClearness(float_t  dreamClearness) ;

/// @brief Method SetDreamness, addr 0x180428050, size 0x40, virtual false, abstract: false, final false
static inline void SetDreamness(float_t  dreamness) ;

/// @brief Method SetLobbyVision, addr 0x180428090, size 0x70, virtual false, abstract: false, final false
static inline void SetLobbyVision(bool  active) ;

/// @brief Method SetNightVision, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void SetNightVision(bool  active) ;

/// @brief Method SetSleepiness, addr 0x180428100, size 0x60, virtual false, abstract: false, final false
static inline void SetSleepiness(float_t  sleepiness) ;

/// @brief Method SetSpeechless, addr 0x180428160, size 0x70, virtual false, abstract: false, final false
static inline void SetSpeechless(bool  active) ;

/// @brief Method SetXray, addr 0x1804281d0, size 0x70, virtual false, abstract: false, final false
static inline void SetXray(bool  active) ;

/// @brief Method ToggleMotionSicknessVignette, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void ToggleMotionSicknessVignette() ;

constexpr ::UnityW<::UnityEngine::Rendering::Volume> const& __cordl_internal_get_basePPVolume() const;

constexpr ::UnityW<::UnityEngine::Rendering::Volume>& __cordl_internal_get_basePPVolume() ;

constexpr ::UnityW<::UnityEngine::Rendering::Volume> const& __cordl_internal_get_blindfoldPPVolume() const;

constexpr ::UnityW<::UnityEngine::Rendering::Volume>& __cordl_internal_get_blindfoldPPVolume() ;

constexpr ::UnityW<::UnityEngine::Rendering::Volume> const& __cordl_internal_get_blinkingPPVolume() const;

constexpr ::UnityW<::UnityEngine::Rendering::Volume>& __cordl_internal_get_blinkingPPVolume() ;

constexpr ::UnityW<::UnityEngine::Rendering::Volume> const& __cordl_internal_get_dreamClearnessPPVolume() const;

constexpr ::UnityW<::UnityEngine::Rendering::Volume>& __cordl_internal_get_dreamClearnessPPVolume() ;

constexpr ::UnityW<::UnityEngine::Rendering::Volume> const& __cordl_internal_get_dreamingPPVolume() const;

constexpr ::UnityW<::UnityEngine::Rendering::Volume>& __cordl_internal_get_dreamingPPVolume() ;

constexpr ::UnityW<::UnityEngine::Rendering::Volume> const& __cordl_internal_get_lobbyVisionPPVolume() const;

constexpr ::UnityW<::UnityEngine::Rendering::Volume>& __cordl_internal_get_lobbyVisionPPVolume() ;

constexpr ::UnityW<::UnityEngine::Rendering::Volume> const& __cordl_internal_get_sleepingPPVolume() const;

constexpr ::UnityW<::UnityEngine::Rendering::Volume>& __cordl_internal_get_sleepingPPVolume() ;

constexpr ::UnityW<::UnityEngine::Rendering::Volume> const& __cordl_internal_get_speechlessPPVolume() const;

constexpr ::UnityW<::UnityEngine::Rendering::Volume>& __cordl_internal_get_speechlessPPVolume() ;

constexpr ::UnityW<::UnityEngine::Rendering::Volume> const& __cordl_internal_get_xRayPPVolume() const;

constexpr ::UnityW<::UnityEngine::Rendering::Volume>& __cordl_internal_get_xRayPPVolume() ;

constexpr void __cordl_internal_set_basePPVolume(::UnityW<::UnityEngine::Rendering::Volume>  value) ;

constexpr void __cordl_internal_set_blindfoldPPVolume(::UnityW<::UnityEngine::Rendering::Volume>  value) ;

constexpr void __cordl_internal_set_blinkingPPVolume(::UnityW<::UnityEngine::Rendering::Volume>  value) ;

constexpr void __cordl_internal_set_dreamClearnessPPVolume(::UnityW<::UnityEngine::Rendering::Volume>  value) ;

constexpr void __cordl_internal_set_dreamingPPVolume(::UnityW<::UnityEngine::Rendering::Volume>  value) ;

constexpr void __cordl_internal_set_lobbyVisionPPVolume(::UnityW<::UnityEngine::Rendering::Volume>  value) ;

constexpr void __cordl_internal_set_sleepingPPVolume(::UnityW<::UnityEngine::Rendering::Volume>  value) ;

constexpr void __cordl_internal_set_speechlessPPVolume(::UnityW<::UnityEngine::Rendering::Volume>  value) ;

constexpr void __cordl_internal_set_xRayPPVolume(::UnityW<::UnityEngine::Rendering::Volume>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_instance, addr 0x180428240, size 0x30, virtual false, abstract: false, final false
static inline ::GlobalNamespace::PostProcessingManager* get_instance() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostProcessingManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostProcessingManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PostProcessingManager(PostProcessingManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostProcessingManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostProcessingManager(PostProcessingManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5192};

/// @brief Field basePPVolume, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::Volume>  ___basePPVolume;

/// @brief Field sleepingPPVolume, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::Volume>  ___sleepingPPVolume;

/// @brief Field dreamingPPVolume, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::Volume>  ___dreamingPPVolume;

/// @brief Field dreamClearnessPPVolume, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::Volume>  ___dreamClearnessPPVolume;

/// @brief Field blinkingPPVolume, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::Volume>  ___blinkingPPVolume;

/// @brief Field blindfoldPPVolume, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::Volume>  ___blindfoldPPVolume;

/// @brief Field xRayPPVolume, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::Volume>  ___xRayPPVolume;

/// @brief Field speechlessPPVolume, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::Volume>  ___speechlessPPVolume;

/// @brief Field lobbyVisionPPVolume, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::Volume>  ___lobbyVisionPPVolume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PostProcessingManager, ___basePPVolume) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PostProcessingManager, ___sleepingPPVolume) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PostProcessingManager, ___dreamingPPVolume) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PostProcessingManager, ___dreamClearnessPPVolume) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PostProcessingManager, ___blinkingPPVolume) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PostProcessingManager, ___blindfoldPPVolume) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PostProcessingManager, ___xRayPPVolume) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PostProcessingManager, ___speechlessPPVolume) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PostProcessingManager, ___lobbyVisionPPVolume) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PostProcessingManager) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace

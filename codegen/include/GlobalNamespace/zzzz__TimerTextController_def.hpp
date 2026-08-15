#pragma once
// IWYU pragma private; include "GlobalNamespace/TimerTextController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimerTextController)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class PeckEffectTimerNetworked;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class TimerTextController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TimerTextController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimerTextController*, "", "TimerTextController");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TimerTextController
class CORDL_TYPE TimerTextController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field AudioTransform, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_AudioTransform, put=__cordl_internal_set_AudioTransform)) ::UnityW<::UnityEngine::Transform>  AudioTransform;

/// @brief Field RunSound, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_RunSound, put=__cordl_internal_set_RunSound)) ::UnityW<::GlobalNamespace::AudioAsset>  RunSound;

/// @brief Field StartSound, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_StartSound, put=__cordl_internal_set_StartSound)) ::UnityW<::GlobalNamespace::AudioAsset>  StartSound;

/// @brief Field StopSound, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_StopSound, put=__cordl_internal_set_StopSound)) ::UnityW<::GlobalNamespace::AudioAsset>  StopSound;

/// @brief Field displayedSeconds, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_displayedSeconds, put=__cordl_internal_set_displayedSeconds)) int32_t  displayedSeconds;

/// @brief Field peckEffectTimer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_peckEffectTimer, put=__cordl_internal_set_peckEffectTimer)) ::UnityW<::GlobalNamespace::PeckEffectTimerNetworked>  peckEffectTimer;

/// @brief Field textField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_textField, put=__cordl_internal_set_textField)) ::UnityW<::TMPro::TMP_Text>  textField;

static inline ::GlobalNamespace::TimerTextController* New_ctor() ;

/// @brief Method OnDisable, addr 0x1803f20c0, size 0xc0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803f2180, size 0x130, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnFinish, addr 0x1803f22b0, size 0x90, virtual false, abstract: false, final false
inline void OnFinish() ;

/// @brief Method OnStart, addr 0x1803f2340, size 0x90, virtual false, abstract: false, final false
inline void OnStart() ;

/// @brief Method Update, addr 0x1803f23d0, size 0x1c0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_AudioTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_AudioTransform() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_RunSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_RunSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_StartSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_StartSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_StopSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_StopSound() ;

constexpr int32_t const& __cordl_internal_get_displayedSeconds() const;

constexpr int32_t& __cordl_internal_get_displayedSeconds() ;

constexpr ::UnityW<::GlobalNamespace::PeckEffectTimerNetworked> const& __cordl_internal_get_peckEffectTimer() const;

constexpr ::UnityW<::GlobalNamespace::PeckEffectTimerNetworked>& __cordl_internal_get_peckEffectTimer() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_textField() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_textField() ;

constexpr void __cordl_internal_set_AudioTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_RunSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_StartSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_StopSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_displayedSeconds(int32_t  value) ;

constexpr void __cordl_internal_set_peckEffectTimer(::UnityW<::GlobalNamespace::PeckEffectTimerNetworked>  value) ;

constexpr void __cordl_internal_set_textField(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimerTextController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimerTextController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimerTextController(TimerTextController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimerTextController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimerTextController(TimerTextController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4971};

/// @brief Field peckEffectTimer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckEffectTimerNetworked>  ___peckEffectTimer;

/// @brief Field textField, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___textField;

/// @brief Field StartSound, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___StartSound;

/// @brief Field StopSound, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___StopSound;

/// @brief Field RunSound, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___RunSound;

/// @brief Field AudioTransform, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___AudioTransform;

/// @brief Field displayedSeconds, offset: 0x50, size: 0x4, def value: None
 int32_t  ___displayedSeconds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimerTextController, ___peckEffectTimer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimerTextController, ___textField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimerTextController, ___StartSound) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimerTextController, ___StopSound) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimerTextController, ___RunSound) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimerTextController, ___AudioTransform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimerTextController, ___displayedSeconds) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TimerTextController) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace

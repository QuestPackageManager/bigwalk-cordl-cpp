#pragma once
// IWYU pragma private; include "GlobalNamespace/ValidatorDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValidatorDisplay)
namespace GlobalNamespace {
class AudioEvent;
}
namespace GlobalNamespace {
class AudioScatterContainer;
}
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class SoundCue;
}
namespace GlobalNamespace {
struct ValidatorDisplay_ValidatorState;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct ValidatorDisplay_ValidatorState;
}
namespace GlobalNamespace {
class ValidatorDisplay;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ValidatorDisplay_ValidatorState);
MARK_REF_T(::GlobalNamespace::ValidatorDisplay*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ValidatorDisplay_ValidatorState, "", "ValidatorDisplay/ValidatorState");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ValidatorDisplay*, "", "ValidatorDisplay");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ValidatorDisplay/ValidatorState
struct CORDL_TYPE ValidatorDisplay_ValidatorState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ValidatorDisplay_ValidatorState_Unwrapped
enum struct __ValidatorDisplay_ValidatorState_Unwrapped : int32_t {
__E_Off = static_cast<int32_t>(0x0),
__E_Blank = static_cast<int32_t>(0x1),
__E_Success = static_cast<int32_t>(0x2),
__E_Failure = static_cast<int32_t>(0x3),
__E_Thinking = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ValidatorDisplay_ValidatorState_Unwrapped () const noexcept {
return static_cast<__ValidatorDisplay_ValidatorState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ValidatorDisplay_ValidatorState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ValidatorDisplay_ValidatorState(int32_t  value__) noexcept;

/// @brief Field Blank value: I32(1)
static ::GlobalNamespace::ValidatorDisplay_ValidatorState const Blank;

/// @brief Field Failure value: I32(3)
static ::GlobalNamespace::ValidatorDisplay_ValidatorState const Failure;

/// @brief Field Off value: I32(0)
static ::GlobalNamespace::ValidatorDisplay_ValidatorState const Off;

/// @brief Field Success value: I32(2)
static ::GlobalNamespace::ValidatorDisplay_ValidatorState const Success;

/// @brief Field Thinking value: I32(4)
static ::GlobalNamespace::ValidatorDisplay_ValidatorState const Thinking;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5151};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ValidatorDisplay_ValidatorState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ValidatorDisplay_ValidatorState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PeckSystemReference, UnityEngine.Color, UnityEngine.MonoBehaviour, ValidatorDisplay::ValidatorState
namespace GlobalNamespace {
// Is value type: false
// CS Name: ValidatorDisplay
class CORDL_TYPE ValidatorDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ValidatorState = ::GlobalNamespace::ValidatorDisplay_ValidatorState;

/// @brief Field _materialInstance, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialInstance, put=__cordl_internal_set__materialInstance)) ::UnityW<::UnityEngine::Material>  _materialInstance;

/// @brief Field _staticEvent, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__staticEvent, put=__cordl_internal_set__staticEvent)) ::GlobalNamespace::AudioEvent*  _staticEvent;

/// @brief Field _thinkingEvent, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__thinkingEvent, put=__cordl_internal_set__thinkingEvent)) ::GlobalNamespace::AudioEvent*  _thinkingEvent;

/// @brief Field audioTransform, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioTransform, put=__cordl_internal_set_audioTransform)) ::UnityW<::UnityEngine::Transform>  audioTransform;

/// @brief Field blankColor, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get_blankColor, put=__cordl_internal_set_blankColor)) ::UnityEngine::Color  blankColor;

/// @brief Field correctSound, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_correctSound, put=__cordl_internal_set_correctSound)) ::UnityW<::GlobalNamespace::SoundCue>  correctSound;

/// @brief Field failureColor, offset 0x80, size 0x10 
 __declspec(property(get=__cordl_internal_get_failureColor, put=__cordl_internal_set_failureColor)) ::UnityEngine::Color  failureColor;

/// @brief Field incorrectSound, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_incorrectSound, put=__cordl_internal_set_incorrectSound)) ::UnityW<::GlobalNamespace::SoundCue>  incorrectSound;

/// @brief Field logVerbose, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field offSound, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_offSound, put=__cordl_internal_set_offSound)) ::UnityW<::GlobalNamespace::SoundCue>  offSound;

/// @brief Field onChange, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_onChange, put=__cordl_internal_set_onChange)) ::System::Action_1<::GlobalNamespace::ValidatorDisplay_ValidatorState>*  onChange;

/// @brief Field parentDisplay, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentDisplay, put=__cordl_internal_set_parentDisplay)) ::UnityW<::GlobalNamespace::ValidatorDisplay>  parentDisplay;

/// @brief Field peckSystemReference, offset 0x38, size 0x28 
 __declspec(property(get=__cordl_internal_get_peckSystemReference, put=__cordl_internal_set_peckSystemReference)) ::GlobalNamespace::PeckSystemReference  peckSystemReference;

/// @brief Field screenRenderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_screenRenderer, put=__cordl_internal_set_screenRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  screenRenderer;

/// @brief Field state, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::ValidatorDisplay_ValidatorState  state;

/// @brief Field staticSound, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_staticSound, put=__cordl_internal_set_staticSound)) ::UnityW<::GlobalNamespace::SoundCue>  staticSound;

/// @brief Field submeshIndex, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_submeshIndex, put=__cordl_internal_set_submeshIndex)) int32_t  submeshIndex;

/// @brief Field successColor, offset 0x70, size 0x10 
 __declspec(property(get=__cordl_internal_get_successColor, put=__cordl_internal_set_successColor)) ::UnityEngine::Color  successColor;

/// @brief Field thinkingSound, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_thinkingSound, put=__cordl_internal_set_thinkingSound)) ::UnityW<::GlobalNamespace::AudioScatterContainer>  thinkingSound;

/// @brief Method Awake, addr 0x18041a940, size 0x210, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::ValidatorDisplay* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18041ab50, size 0x10, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnPeck, addr 0x18041ab60, size 0x10, virtual false, abstract: false, final false
inline void OnPeck(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method SetDisplay, addr 0x18041ac30, size 0x10, virtual false, abstract: false, final false
inline void SetDisplay(::GlobalNamespace::ValidatorDisplay_ValidatorState  newState) ;

/// @brief Method SetDisplay, addr 0x18041ab70, size 0xc0, virtual false, abstract: false, final false
inline void SetDisplay(::GlobalNamespace::ValidatorDisplay_ValidatorState  newState, bool  forceUpdate) ;

/// @brief Method SetPropertyBlock, addr 0x18041ac40, size 0x690, virtual false, abstract: false, final false
inline void SetPropertyBlock(::GlobalNamespace::ValidatorDisplay_ValidatorState  newState) ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__materialInstance() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__materialInstance() ;

constexpr ::GlobalNamespace::AudioEvent* const& __cordl_internal_get__staticEvent() const;

constexpr ::GlobalNamespace::AudioEvent*& __cordl_internal_get__staticEvent() ;

constexpr ::GlobalNamespace::AudioEvent* const& __cordl_internal_get__thinkingEvent() const;

constexpr ::GlobalNamespace::AudioEvent*& __cordl_internal_get__thinkingEvent() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_audioTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_audioTransform() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_blankColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_blankColor() ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get_correctSound() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get_correctSound() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_failureColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_failureColor() ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get_incorrectSound() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get_incorrectSound() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get_offSound() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get_offSound() ;

constexpr ::System::Action_1<::GlobalNamespace::ValidatorDisplay_ValidatorState>* const& __cordl_internal_get_onChange() const;

constexpr ::System::Action_1<::GlobalNamespace::ValidatorDisplay_ValidatorState>*& __cordl_internal_get_onChange() ;

constexpr ::UnityW<::GlobalNamespace::ValidatorDisplay> const& __cordl_internal_get_parentDisplay() const;

constexpr ::UnityW<::GlobalNamespace::ValidatorDisplay>& __cordl_internal_get_parentDisplay() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_peckSystemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_peckSystemReference() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_screenRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_screenRenderer() ;

constexpr ::GlobalNamespace::ValidatorDisplay_ValidatorState const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::ValidatorDisplay_ValidatorState& __cordl_internal_get_state() ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get_staticSound() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get_staticSound() ;

constexpr int32_t const& __cordl_internal_get_submeshIndex() const;

constexpr int32_t& __cordl_internal_get_submeshIndex() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_successColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_successColor() ;

constexpr ::UnityW<::GlobalNamespace::AudioScatterContainer> const& __cordl_internal_get_thinkingSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioScatterContainer>& __cordl_internal_get_thinkingSound() ;

constexpr void __cordl_internal_set__materialInstance(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__staticEvent(::GlobalNamespace::AudioEvent*  value) ;

constexpr void __cordl_internal_set__thinkingEvent(::GlobalNamespace::AudioEvent*  value) ;

constexpr void __cordl_internal_set_audioTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_blankColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_correctSound(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set_failureColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_incorrectSound(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_offSound(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set_onChange(::System::Action_1<::GlobalNamespace::ValidatorDisplay_ValidatorState>*  value) ;

constexpr void __cordl_internal_set_parentDisplay(::UnityW<::GlobalNamespace::ValidatorDisplay>  value) ;

constexpr void __cordl_internal_set_peckSystemReference(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_screenRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::ValidatorDisplay_ValidatorState  value) ;

constexpr void __cordl_internal_set_staticSound(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set_submeshIndex(int32_t  value) ;

constexpr void __cordl_internal_set_successColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_thinkingSound(::UnityW<::GlobalNamespace::AudioScatterContainer>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValidatorDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValidatorDisplay", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ValidatorDisplay(ValidatorDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValidatorDisplay", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValidatorDisplay(ValidatorDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5152};

/// @brief Field screenRenderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___screenRenderer;

/// @brief Field submeshIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  ___submeshIndex;

/// @brief Field parentDisplay, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ValidatorDisplay>  ___parentDisplay;

/// @brief Field peckSystemReference, offset: 0x38, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___peckSystemReference;

/// @brief Field blankColor, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Color  ___blankColor;

/// @brief Field successColor, offset: 0x70, size: 0x10, def value: None
 ::UnityEngine::Color  ___successColor;

/// @brief Field failureColor, offset: 0x80, size: 0x10, def value: None
 ::UnityEngine::Color  ___failureColor;

/// @brief Field logVerbose, offset: 0x90, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field audioTransform, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___audioTransform;

/// @brief Field staticSound, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ___staticSound;

/// @brief Field correctSound, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ___correctSound;

/// @brief Field incorrectSound, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ___incorrectSound;

/// @brief Field offSound, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ___offSound;

/// @brief Field thinkingSound, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioScatterContainer>  ___thinkingSound;

/// @brief Field _thinkingEvent, offset: 0xc8, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  ____thinkingEvent;

/// @brief Field _staticEvent, offset: 0xd0, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  ____staticEvent;

/// @brief Field _materialInstance, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____materialInstance;

/// @brief Field state, offset: 0xe0, size: 0x4, def value: None
 ::GlobalNamespace::ValidatorDisplay_ValidatorState  ___state;

/// @brief Field onChange, offset: 0xe8, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::ValidatorDisplay_ValidatorState>*  ___onChange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ValidatorDisplay, ___screenRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ValidatorDisplay, ___submeshIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ValidatorDisplay, ___parentDisplay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ValidatorDisplay, ___peckSystemReference) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ValidatorDisplay, ___blankColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ValidatorDisplay, ___successColor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ValidatorDisplay, ___failureColor) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ValidatorDisplay, ___logVerbose) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ValidatorDisplay, ___audioTransform) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ValidatorDisplay, ___staticSound) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ValidatorDisplay, ___correctSound) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ValidatorDisplay, ___incorrectSound) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ValidatorDisplay, ___offSound) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ValidatorDisplay, ___thinkingSound) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ValidatorDisplay, ____thinkingEvent) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ValidatorDisplay, ____staticEvent) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ValidatorDisplay, ____materialInstance) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ValidatorDisplay, ___state) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ValidatorDisplay, ___onChange) == 0xe8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ValidatorDisplay) == 0xf0, "Size mismatch!");

} // namespace end def GlobalNamespace

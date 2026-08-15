#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimatorSoundEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AnimatorSoundEvent)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class AudioSourceController;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class AnimatorSoundEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AnimatorSoundEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnimatorSoundEvent*, "", "AnimatorSoundEvent");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AnimatorSoundEvent
class CORDL_TYPE AnimatorSoundEvent : public ::System::Object {
public:
// Declarations
/// @brief Field Asc, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Asc, put=__cordl_internal_set_Asc)) ::UnityW<::GlobalNamespace::AudioSourceController>  Asc;

/// @brief Field AudioTransform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_AudioTransform, put=__cordl_internal_set_AudioTransform)) ::UnityW<::UnityEngine::Transform>  AudioTransform;

/// @brief Field AudioTransformName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_AudioTransformName, put=__cordl_internal_set_AudioTransformName)) ::StringW  AudioTransformName;

/// @brief Field PlayTime, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_PlayTime, put=__cordl_internal_set_PlayTime)) float_t  PlayTime;

/// @brief Field Played, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_Played, put=__cordl_internal_set_Played)) bool  Played;

/// @brief Field Probability, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Probability, put=__cordl_internal_set_Probability)) float_t  Probability;

/// @brief Field Sound, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Sound, put=__cordl_internal_set_Sound)) ::UnityW<::GlobalNamespace::AudioAsset>  Sound;

/// @brief Field StopTime, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_StopTime, put=__cordl_internal_set_StopTime)) float_t  StopTime;

static inline ::GlobalNamespace::AnimatorSoundEvent* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get_Asc() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get_Asc() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_AudioTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_AudioTransform() ;

constexpr ::StringW const& __cordl_internal_get_AudioTransformName() const;

constexpr ::StringW& __cordl_internal_get_AudioTransformName() ;

constexpr float_t const& __cordl_internal_get_PlayTime() const;

constexpr float_t& __cordl_internal_get_PlayTime() ;

constexpr bool const& __cordl_internal_get_Played() const;

constexpr bool& __cordl_internal_get_Played() ;

constexpr float_t const& __cordl_internal_get_Probability() const;

constexpr float_t& __cordl_internal_get_Probability() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_Sound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_Sound() ;

constexpr float_t const& __cordl_internal_get_StopTime() const;

constexpr float_t& __cordl_internal_get_StopTime() ;

constexpr void __cordl_internal_set_Asc(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set_AudioTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_AudioTransformName(::StringW  value) ;

constexpr void __cordl_internal_set_PlayTime(float_t  value) ;

constexpr void __cordl_internal_set_Played(bool  value) ;

constexpr void __cordl_internal_set_Probability(float_t  value) ;

constexpr void __cordl_internal_set_Sound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_StopTime(float_t  value) ;

/// @brief Method .ctor, addr 0x18046d250, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimatorSoundEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimatorSoundEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimatorSoundEvent(AnimatorSoundEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimatorSoundEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimatorSoundEvent(AnimatorSoundEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17478};

/// @brief Field Sound, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___Sound;

/// @brief Field Probability, offset: 0x18, size: 0x4, def value: None
 float_t  ___Probability;

/// @brief Field PlayTime, offset: 0x1c, size: 0x4, def value: None
 float_t  ___PlayTime;

/// @brief Field StopTime, offset: 0x20, size: 0x4, def value: None
 float_t  ___StopTime;

/// @brief Field AudioTransformName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___AudioTransformName;

/// @brief Field AudioTransform, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___AudioTransform;

/// @brief Field Asc, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ___Asc;

/// @brief Field Played, offset: 0x40, size: 0x1, def value: None
 bool  ___Played;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnimatorSoundEvent, ___Sound) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatorSoundEvent, ___Probability) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatorSoundEvent, ___PlayTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatorSoundEvent, ___StopTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatorSoundEvent, ___AudioTransformName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatorSoundEvent, ___AudioTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatorSoundEvent, ___Asc) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatorSoundEvent, ___Played) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AnimatorSoundEvent) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "Enviro/EnviroAudioClip.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnviroAudioClip)
namespace Enviro {
struct EnviroAudioClip_PlayBackType;
}
namespace UnityEngine::Audio {
class AudioMixerGroup;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace Enviro {
struct EnviroAudioClip_PlayBackType;
}
namespace Enviro {
class EnviroAudioClip;
}
// Write type traits
MARK_VAL_T(::Enviro::EnviroAudioClip_PlayBackType);
MARK_REF_T(::Enviro::EnviroAudioClip*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroAudioClip_PlayBackType, "Enviro", "EnviroAudioClip/PlayBackType");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroAudioClip*, "Enviro", "EnviroAudioClip");
// Dependencies 
namespace Enviro {
// Is value type: true
// CS Name: Enviro.EnviroAudioClip/PlayBackType
struct CORDL_TYPE EnviroAudioClip_PlayBackType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EnviroAudioClip_PlayBackType_Unwrapped
enum struct __EnviroAudioClip_PlayBackType_Unwrapped : int32_t {
__E_Always = static_cast<int32_t>(0x0),
__E_BasedOnSun = static_cast<int32_t>(0x1),
__E_BasedOnMoon = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EnviroAudioClip_PlayBackType_Unwrapped () const noexcept {
return static_cast<__EnviroAudioClip_PlayBackType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EnviroAudioClip_PlayBackType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EnviroAudioClip_PlayBackType(int32_t  value__) noexcept;

/// @brief Field Always value: I32(0)
static ::Enviro::EnviroAudioClip_PlayBackType const Always;

/// @brief Field BasedOnMoon value: I32(2)
static ::Enviro::EnviroAudioClip_PlayBackType const BasedOnMoon;

/// @brief Field BasedOnSun value: I32(1)
static ::Enviro::EnviroAudioClip_PlayBackType const BasedOnSun;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18435};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroAudioClip_PlayBackType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroAudioClip_PlayBackType) == 0x4, "Size mismatch!");

} // namespace end def Enviro
// Dependencies Enviro.EnviroAudioClip::PlayBackType, System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroAudioClip
class CORDL_TYPE EnviroAudioClip : public ::System::Object {
public:
// Declarations
using PlayBackType = ::Enviro::EnviroAudioClip_PlayBackType;

/// @brief Field audioClip, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioClip, put=__cordl_internal_set_audioClip)) ::UnityW<::UnityEngine::AudioClip>  audioClip;

/// @brief Field audioMixerGroup, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioMixerGroup, put=__cordl_internal_set_audioMixerGroup)) ::UnityW<::UnityEngine::Audio::AudioMixerGroup>  audioMixerGroup;

/// @brief Field loop, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_loop, put=__cordl_internal_set_loop)) bool  loop;

/// @brief Field maxVolume, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxVolume, put=__cordl_internal_set_maxVolume)) float_t  maxVolume;

/// @brief Field myAudioSource, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_myAudioSource, put=__cordl_internal_set_myAudioSource)) ::UnityW<::UnityEngine::AudioSource>  myAudioSource;

/// @brief Field name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field playBackType, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_playBackType, put=__cordl_internal_set_playBackType)) ::Enviro::EnviroAudioClip_PlayBackType  playBackType;

/// @brief Field showEditor, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_showEditor, put=__cordl_internal_set_showEditor)) bool  showEditor;

/// @brief Field volume, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_volume, put=__cordl_internal_set_volume)) float_t  volume;

/// @brief Field volumeCurve, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_volumeCurve, put=__cordl_internal_set_volumeCurve)) ::UnityEngine::AnimationCurve*  volumeCurve;

static inline ::Enviro::EnviroAudioClip* New_ctor() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_audioClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_audioClip() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup> const& __cordl_internal_get_audioMixerGroup() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup>& __cordl_internal_get_audioMixerGroup() ;

constexpr bool const& __cordl_internal_get_loop() const;

constexpr bool& __cordl_internal_get_loop() ;

constexpr float_t const& __cordl_internal_get_maxVolume() const;

constexpr float_t& __cordl_internal_get_maxVolume() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_myAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_myAudioSource() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr ::Enviro::EnviroAudioClip_PlayBackType const& __cordl_internal_get_playBackType() const;

constexpr ::Enviro::EnviroAudioClip_PlayBackType& __cordl_internal_get_playBackType() ;

constexpr bool const& __cordl_internal_get_showEditor() const;

constexpr bool& __cordl_internal_get_showEditor() ;

constexpr float_t const& __cordl_internal_get_volume() const;

constexpr float_t& __cordl_internal_get_volume() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_volumeCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_volumeCurve() ;

constexpr void __cordl_internal_set_audioClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_audioMixerGroup(::UnityW<::UnityEngine::Audio::AudioMixerGroup>  value) ;

constexpr void __cordl_internal_set_loop(bool  value) ;

constexpr void __cordl_internal_set_maxVolume(float_t  value) ;

constexpr void __cordl_internal_set_myAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_playBackType(::Enviro::EnviroAudioClip_PlayBackType  value) ;

constexpr void __cordl_internal_set_showEditor(bool  value) ;

constexpr void __cordl_internal_set_volume(float_t  value) ;

constexpr void __cordl_internal_set_volumeCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method .ctor, addr 0x1805fc450, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroAudioClip() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroAudioClip", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroAudioClip(EnviroAudioClip && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroAudioClip", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroAudioClip(EnviroAudioClip const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18436};

/// @brief Field showEditor, offset: 0x10, size: 0x1, def value: None
 bool  ___showEditor;

/// @brief Field name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field audioClip, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___audioClip;

/// @brief Field audioMixerGroup, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixerGroup>  ___audioMixerGroup;

/// @brief Field playBackType, offset: 0x30, size: 0x4, def value: None
 ::Enviro::EnviroAudioClip_PlayBackType  ___playBackType;

/// @brief Field myAudioSource, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___myAudioSource;

/// @brief Field loop, offset: 0x40, size: 0x1, def value: None
 bool  ___loop;

/// @brief Field volume, offset: 0x44, size: 0x4, def value: None
 float_t  ___volume;

/// @brief Field volumeCurve, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___volumeCurve;

/// @brief Field maxVolume, offset: 0x50, size: 0x4, def value: None
 float_t  ___maxVolume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroAudioClip, ___showEditor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAudioClip, ___name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAudioClip, ___audioClip) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAudioClip, ___audioMixerGroup) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAudioClip, ___playBackType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAudioClip, ___myAudioSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAudioClip, ___loop) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAudioClip, ___volume) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAudioClip, ___volumeCurve) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAudioClip, ___maxVolume) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroAudioClip) == 0x58, "Size mismatch!");

} // namespace end def Enviro

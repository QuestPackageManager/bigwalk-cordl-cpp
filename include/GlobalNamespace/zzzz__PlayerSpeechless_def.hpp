#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerSpeechless.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerSpeechless)
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class SpeechlessZone;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerSpeechless;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerSpeechless*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerSpeechless*, "", "PlayerSpeechless");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSpeechless
class CORDL_TYPE PlayerSpeechless : public ::System::Object {
public:
// Declarations
/// @brief Field _isInNoVisualZone, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__isInNoVisualZone, put=__cordl_internal_set__isInNoVisualZone)) bool  _isInNoVisualZone;

/// @brief Field _speechlessZone, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__speechlessZone, put=__cordl_internal_set__speechlessZone)) ::UnityW<::GlobalNamespace::SpeechlessZone>  _speechlessZone;

/// @brief Field _speechlessness, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__speechlessness, put=__cordl_internal_set__speechlessness)) float_t  _speechlessness;

 __declspec(property(put=set_isInNoVisualZone)) bool  isInNoVisualZone;

/// @brief Field logValueChanges, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_logValueChanges, put=__cordl_internal_set_logValueChanges)) bool  logValueChanges;

/// @brief Field logVerbose, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field playerCharacter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

 __declspec(property(get=get_speechlessZone, put=set_speechlessZone)) ::UnityW<::GlobalNamespace::SpeechlessZone>  speechlessZone;

 __declspec(property(get=get_speechlessness, put=set_speechlessness)) float_t  speechlessness;

 __declspec(property(get=get_speechlessnessAudio)) float_t  speechlessnessAudio;

/// @brief Method GetDepth, addr 0x180375d30, size 0xe0, virtual false, abstract: false, final false
static inline float_t GetDepth(::GlobalNamespace::SpeechlessZone*  speechlessZone, ::UnityEngine::Vector3  samplePoint) ;

/// @brief Method Initialize, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

static inline ::GlobalNamespace::PlayerSpeechless* New_ctor() ;

/// @brief Method RefreshPostProcessing, addr 0x180375e10, size 0x90, virtual false, abstract: false, final false
inline void RefreshPostProcessing() ;

/// @brief Method Update, addr 0x180375ea0, size 0x150, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__isInNoVisualZone() const;

constexpr bool& __cordl_internal_get__isInNoVisualZone() ;

constexpr ::UnityW<::GlobalNamespace::SpeechlessZone> const& __cordl_internal_get__speechlessZone() const;

constexpr ::UnityW<::GlobalNamespace::SpeechlessZone>& __cordl_internal_get__speechlessZone() ;

constexpr float_t const& __cordl_internal_get__speechlessness() const;

constexpr float_t& __cordl_internal_get__speechlessness() ;

constexpr bool const& __cordl_internal_get_logValueChanges() const;

constexpr bool& __cordl_internal_get_logValueChanges() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr void __cordl_internal_set__isInNoVisualZone(bool  value) ;

constexpr void __cordl_internal_set__speechlessZone(::UnityW<::GlobalNamespace::SpeechlessZone>  value) ;

constexpr void __cordl_internal_set__speechlessness(float_t  value) ;

constexpr void __cordl_internal_set_logValueChanges(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_speechlessZone, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SpeechlessZone> get_speechlessZone() ;

/// @brief Method get_speechlessness, addr 0x1802f80a0, size 0x10, virtual false, abstract: false, final false
inline float_t get_speechlessness() ;

/// @brief Method get_speechlessnessAudio, addr 0x1802f80a0, size 0x10, virtual false, abstract: false, final false
inline float_t get_speechlessnessAudio() ;

/// @brief Method set_isInNoVisualZone, addr 0x180375ff0, size 0x10, virtual false, abstract: false, final false
inline void set_isInNoVisualZone(bool  value) ;

/// @brief Method set_speechlessZone, addr 0x180376000, size 0x170, virtual false, abstract: false, final false
inline void set_speechlessZone(::GlobalNamespace::SpeechlessZone*  value) ;

/// @brief Method set_speechlessness, addr 0x180376170, size 0xb0, virtual false, abstract: false, final false
inline void set_speechlessness(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerSpeechless() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerSpeechless", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerSpeechless(PlayerSpeechless && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerSpeechless", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerSpeechless(PlayerSpeechless const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5482};

/// @brief Field activePropertyName offset 0xffffffff size 0x8
static constexpr ::ConstString  activePropertyName{u"SpeechlessActive"};

/// @brief Field modulationPropertyName offset 0xffffffff size 0x8
static constexpr ::ConstString  modulationPropertyName{u"SpeechlessModulation"};

/// @brief Field powerPropertyName offset 0xffffffff size 0x8
static constexpr ::ConstString  powerPropertyName{u"SpeechlessPower"};

/// @brief Field _speechlessZone, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SpeechlessZone>  ____speechlessZone;

/// @brief Field _isInNoVisualZone, offset: 0x18, size: 0x1, def value: None
 bool  ____isInNoVisualZone;

/// @brief Field _speechlessness, offset: 0x1c, size: 0x4, def value: None
 float_t  ____speechlessness;

/// @brief Field logVerbose, offset: 0x20, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field logValueChanges, offset: 0x21, size: 0x1, def value: None
 bool  ___logValueChanges;

/// @brief Field playerCharacter, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSpeechless, ____speechlessZone) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpeechless, ____isInNoVisualZone) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpeechless, ____speechlessness) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpeechless, ___logVerbose) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpeechless, ___logValueChanges) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpeechless, ___playerCharacter) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerSpeechless) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

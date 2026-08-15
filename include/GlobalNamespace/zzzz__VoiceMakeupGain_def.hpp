#pragma once
// IWYU pragma private; include "GlobalNamespace/VoiceMakeupGain.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VoiceMakeupGain)
namespace GlobalNamespace {
class VoiceMakeupGain_State;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class VoiceMakeupGain;
}
namespace GlobalNamespace {
class VoiceMakeupGain_State;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VoiceMakeupGain*);
MARK_REF_T(::GlobalNamespace::VoiceMakeupGain_State*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoiceMakeupGain*, "", "VoiceMakeupGain");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoiceMakeupGain_State*, "", "VoiceMakeupGain/State");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: VoiceMakeupGain/State
class CORDL_TYPE VoiceMakeupGain_State : public ::System::Object {
public:
// Declarations
/// @brief Field Envelope, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Envelope, put=__cordl_internal_set_Envelope)) float_t  Envelope;

/// @brief Field GainDb, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_GainDb, put=__cordl_internal_set_GainDb)) float_t  GainDb;

/// @brief Field Level, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_Level, put=__cordl_internal_set_Level)) float_t  Level;

/// @brief Field SpeechSeconds, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_SpeechSeconds, put=__cordl_internal_set_SpeechSeconds)) float_t  SpeechSeconds;

static inline ::GlobalNamespace::VoiceMakeupGain_State* New_ctor() ;

constexpr float_t const& __cordl_internal_get_Envelope() const;

constexpr float_t& __cordl_internal_get_Envelope() ;

constexpr float_t const& __cordl_internal_get_GainDb() const;

constexpr float_t& __cordl_internal_get_GainDb() ;

constexpr float_t const& __cordl_internal_get_Level() const;

constexpr float_t& __cordl_internal_get_Level() ;

constexpr float_t const& __cordl_internal_get_SpeechSeconds() const;

constexpr float_t& __cordl_internal_get_SpeechSeconds() ;

constexpr void __cordl_internal_set_Envelope(float_t  value) ;

constexpr void __cordl_internal_set_GainDb(float_t  value) ;

constexpr void __cordl_internal_set_Level(float_t  value) ;

constexpr void __cordl_internal_set_SpeechSeconds(float_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceMakeupGain_State() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceMakeupGain_State", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceMakeupGain_State(VoiceMakeupGain_State && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceMakeupGain_State", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceMakeupGain_State(VoiceMakeupGain_State const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4889};

/// @brief Field Envelope, offset: 0x10, size: 0x4, def value: None
 float_t  ___Envelope;

/// @brief Field Level, offset: 0x14, size: 0x4, def value: None
 float_t  ___Level;

/// @brief Field SpeechSeconds, offset: 0x18, size: 0x4, def value: None
 float_t  ___SpeechSeconds;

/// @brief Field GainDb, offset: 0x1c, size: 0x4, def value: None
 float_t  ___GainDb;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoiceMakeupGain_State, ___Envelope) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceMakeupGain_State, ___Level) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceMakeupGain_State, ___SpeechSeconds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceMakeupGain_State, ___GainDb) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoiceMakeupGain_State) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: VoiceMakeupGain
class CORDL_TYPE VoiceMakeupGain : public ::System::Object {
public:
// Declarations
using State = ::GlobalNamespace::VoiceMakeupGain_State;

/// @brief Field s_states, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_states, put=setStaticF_s_states)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::VoiceMakeupGain_State*>*  s_states;

/// @brief Field s_targetARV, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_targetARV, put=setStaticF_s_targetARV)) float_t  s_targetARV;

/// @brief Method Clear, addr 0x1803f2c10, size 0x50, virtual false, abstract: false, final false
static inline void Clear() ;

/// @brief Method Evaluate, addr 0x1803f2c60, size 0x3a0, virtual false, abstract: false, final false
static inline float_t Evaluate(::StringW  playerName, float_t  arv, bool  isSpeaking, float_t  deltaTime) ;

/// @brief Method TryGetState, addr 0x1803f3000, size 0xc0, virtual false, abstract: false, final false
static inline bool TryGetState(::StringW  playerName, ::by_ref<float_t>  gainDb, ::by_ref<float_t>  level) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::VoiceMakeupGain_State*>* getStaticF_s_states() ;

static inline float_t getStaticF_s_targetARV() ;

/// @brief Method get_TargetARV, addr 0x1803f31b0, size 0x40, virtual false, abstract: false, final false
static inline float_t get_TargetARV() ;

/// @brief Method get_Volume, addr 0x1803f3250, size 0xa0, virtual false, abstract: false, final false
static inline float_t get_Volume() ;

/// @brief Method get_VolumeDb, addr 0x1803f31f0, size 0x60, virtual false, abstract: false, final false
static inline float_t get_VolumeDb() ;

static inline void setStaticF_s_states(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::VoiceMakeupGain_State*>*  value) ;

static inline void setStaticF_s_targetARV(float_t  value) ;

/// @brief Method set_TargetARV, addr 0x1803f32f0, size 0x80, virtual false, abstract: false, final false
static inline void set_TargetARV(float_t  value) ;

/// @brief Method set_Volume, addr 0x1803f3370, size 0xe0, virtual false, abstract: false, final false
static inline void set_Volume(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceMakeupGain() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceMakeupGain", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceMakeupGain(VoiceMakeupGain && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceMakeupGain", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceMakeupGain(VoiceMakeupGain const& ) = delete;

/// @brief Field COMPRESSOR_CREST offset 0xffffffff size 0x4
static constexpr float_t  COMPRESSOR_CREST{static_cast<float_t>(4.0f)};

/// @brief Field CONFIDENCE_SECONDS offset 0xffffffff size 0x4
static constexpr float_t  CONFIDENCE_SECONDS{static_cast<float_t>(0.5f)};

/// @brief Field DebugBypass offset 0xffffffff size 0x1
static constexpr bool  DebugBypass{false};

/// @brief Field ENVELOPE_ATTACK_SECONDS offset 0xffffffff size 0x4
static constexpr float_t  ENVELOPE_ATTACK_SECONDS{static_cast<float_t>(0.15f)};

/// @brief Field ENVELOPE_RELEASE_SECONDS offset 0xffffffff size 0x4
static constexpr float_t  ENVELOPE_RELEASE_SECONDS{static_cast<float_t>(1.0f)};

/// @brief Field LEVEL_CLIMB_SECONDS offset 0xffffffff size 0x4
static constexpr float_t  LEVEL_CLIMB_SECONDS{static_cast<float_t>(6.0f)};

/// @brief Field LEVEL_DROP_SECONDS offset 0xffffffff size 0x4
static constexpr float_t  LEVEL_DROP_SECONDS{static_cast<float_t>(2.0f)};

/// @brief Field LEVEL_WARMUP_SECONDS offset 0xffffffff size 0x4
static constexpr float_t  LEVEL_WARMUP_SECONDS{static_cast<float_t>(0.25f)};

/// @brief Field MAX_TARGET_ARV offset 0xffffffff size 0x4
static constexpr float_t  MAX_TARGET_ARV{static_cast<float_t>(0.4f)};

/// @brief Field MIN_TARGET_ARV offset 0xffffffff size 0x4
static constexpr float_t  MIN_TARGET_ARV{static_cast<float_t>(0.01f)};

/// @brief Field REFERENCE_ARV offset 0xffffffff size 0x4
static constexpr float_t  REFERENCE_ARV{static_cast<float_t>(0.132f)};

/// @brief Field RELATIVE_GATE offset 0xffffffff size 0x4
static constexpr float_t  RELATIVE_GATE{static_cast<float_t>(0.1f)};

/// @brief Field SETTLE_DB_PER_SECOND offset 0xffffffff size 0x4
static constexpr float_t  SETTLE_DB_PER_SECOND{static_cast<float_t>(24.0f)};

/// @brief Field SETTLE_SECONDS offset 0xffffffff size 0x4
static constexpr float_t  SETTLE_SECONDS{static_cast<float_t>(1.0f)};

/// @brief Field SLEW_DOWN_DB_PER_SECOND offset 0xffffffff size 0x4
static constexpr float_t  SLEW_DOWN_DB_PER_SECOND{static_cast<float_t>(1.0f)};

/// @brief Field SLEW_UP_DB_PER_SECOND offset 0xffffffff size 0x4
static constexpr float_t  SLEW_UP_DB_PER_SECOND{static_cast<float_t>(12.0f)};

/// @brief Field SPEECH_FLOOR offset 0xffffffff size 0x4
static constexpr float_t  SPEECH_FLOOR{static_cast<float_t>(0.005f)};

/// @brief Field VOLUME_CURVE offset 0xffffffff size 0x4
static constexpr float_t  VOLUME_CURVE{static_cast<float_t>(1.5f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4890};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::VoiceMakeupGain) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

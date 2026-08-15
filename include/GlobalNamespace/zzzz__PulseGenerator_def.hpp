#pragma once
// IWYU pragma private; include "GlobalNamespace/PulseGenerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PulseGenerator)
namespace GlobalNamespace {
class PeckSystemBlock;
}
namespace GlobalNamespace {
struct PulseGenerator_PulseGeneratorState;
}
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
struct PulseGenerator_PulseGeneratorState;
}
namespace GlobalNamespace {
class PulseGenerator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PulseGenerator_PulseGeneratorState);
MARK_REF_T(::GlobalNamespace::PulseGenerator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PulseGenerator_PulseGeneratorState, "", "PulseGenerator/PulseGeneratorState");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PulseGenerator*, "", "PulseGenerator");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PulseGenerator/PulseGeneratorState
struct CORDL_TYPE PulseGenerator_PulseGeneratorState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PulseGenerator_PulseGeneratorState_Unwrapped
enum struct __PulseGenerator_PulseGeneratorState_Unwrapped : int32_t {
__E_Inactive = static_cast<int32_t>(0x0),
__E_Warmup = static_cast<int32_t>(0x1),
__E_Playback = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PulseGenerator_PulseGeneratorState_Unwrapped () const noexcept {
return static_cast<__PulseGenerator_PulseGeneratorState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PulseGenerator_PulseGeneratorState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PulseGenerator_PulseGeneratorState(int32_t  value__) noexcept;

/// @brief Field Inactive value: I32(0)
static ::GlobalNamespace::PulseGenerator_PulseGeneratorState const Inactive;

/// @brief Field Playback value: I32(2)
static ::GlobalNamespace::PulseGenerator_PulseGeneratorState const Playback;

/// @brief Field Warmup value: I32(1)
static ::GlobalNamespace::PulseGenerator_PulseGeneratorState const Warmup;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5041};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PulseGenerator_PulseGeneratorState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PulseGenerator_PulseGeneratorState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Mirror.NetworkBehaviour, PulseGenerator::PulseGeneratorState, TrackedPeckState
namespace GlobalNamespace {
// Is value type: false
// CS Name: PulseGenerator
class CORDL_TYPE PulseGenerator : public ::Mirror::NetworkBehaviour {
public:
// Declarations
using PulseGeneratorState = ::GlobalNamespace::PulseGenerator_PulseGeneratorState;

 __declspec(property(get=get_Networkseed, put=set_Networkseed)) int32_t  Networkseed;

/// @brief Field _currentState, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentState, put=__cordl_internal_set__currentState)) ::GlobalNamespace::PulseGenerator_PulseGeneratorState  _currentState;

 __declspec(property(get=get_currentState, put=set_currentState)) ::GlobalNamespace::PulseGenerator_PulseGeneratorState  currentState;

/// @brief Field isInCooldown, offset 0xa1, size 0x1 
 __declspec(property(get=__cordl_internal_get_isInCooldown, put=__cordl_internal_set_isInCooldown)) bool  isInCooldown;

/// @brief Field isInWarmup, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_isInWarmup, put=__cordl_internal_set_isInWarmup)) bool  isInWarmup;

/// @brief Field lastPlayedIndex, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastPlayedIndex, put=__cordl_internal_set_lastPlayedIndex)) int32_t  lastPlayedIndex;

/// @brief Field lastPlayedTime, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastPlayedTime, put=__cordl_internal_set_lastPlayedTime)) float_t  lastPlayedTime;

/// @brief Field logVerbose, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field onFinishPlayback, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFinishPlayback, put=__cordl_internal_set_onFinishPlayback)) ::System::Action*  onFinishPlayback;

/// @brief Field outputs, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_outputs, put=__cordl_internal_set_outputs)) ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>  outputs;

/// @brief Field playbackIndicators, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_playbackIndicators, put=__cordl_internal_set_playbackIndicators)) ::UnityW<::GlobalNamespace::PeckSystemBlock>  playbackIndicators;

/// @brief Field seed, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_seed, put=__cordl_internal_set_seed)) int32_t  seed;

/// @brief Field sequence, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_sequence, put=__cordl_internal_set_sequence)) ::System::Collections::Generic::List_1<int32_t>*  sequence;

/// @brief Field total, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_total, put=__cordl_internal_set_total)) int32_t  total;

/// @brief Method Awake, addr 0x180407900, size 0x50, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DeserializeSyncVars, addr 0x180407950, size 0xd0, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method MatchesTotal, addr 0x180407a20, size 0x20, virtual false, abstract: false, final false
inline bool MatchesTotal(int32_t  total) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::GlobalNamespace::PulseGenerator* New_ctor() ;

/// @brief Method OnChangeSeed, addr 0x180407a40, size 0x90, virtual false, abstract: false, final false
inline void OnChangeSeed(int32_t  oldSeed, int32_t  newSeed) ;

/// @brief Method SerializeSyncVars, addr 0x180407ad0, size 0x50, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

/// @brief Method ServerClear, addr 0x180407b20, size 0xb0, virtual false, abstract: false, final false
inline void ServerClear() ;

/// @brief Method ServerScrambleAndPlayback, addr 0x180407bd0, size 0xa0, virtual false, abstract: false, final false
inline void ServerScrambleAndPlayback() ;

/// @brief Method SetPulse, addr 0x180407c70, size 0xa0, virtual false, abstract: false, final false
inline void SetPulse(int32_t  index) ;

/// @brief Method SetRandomSeed, addr 0x180407d10, size 0x70, virtual false, abstract: false, final false
inline void SetRandomSeed() ;

/// @brief Method SetSequenceFromSeed, addr 0x180407d80, size 0x270, virtual false, abstract: false, final false
inline void SetSequenceFromSeed(int32_t  seed) ;

/// @brief Method StartPlayback, addr 0x180407ff0, size 0x60, virtual false, abstract: false, final false
inline void StartPlayback() ;

/// @brief Method Update, addr 0x180408050, size 0x180, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::GlobalNamespace::PulseGenerator_PulseGeneratorState const& __cordl_internal_get__currentState() const;

constexpr ::GlobalNamespace::PulseGenerator_PulseGeneratorState& __cordl_internal_get__currentState() ;

constexpr bool const& __cordl_internal_get_isInCooldown() const;

constexpr bool& __cordl_internal_get_isInCooldown() ;

constexpr bool const& __cordl_internal_get_isInWarmup() const;

constexpr bool& __cordl_internal_get_isInWarmup() ;

constexpr int32_t const& __cordl_internal_get_lastPlayedIndex() const;

constexpr int32_t& __cordl_internal_get_lastPlayedIndex() ;

constexpr float_t const& __cordl_internal_get_lastPlayedTime() const;

constexpr float_t& __cordl_internal_get_lastPlayedTime() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::System::Action* const& __cordl_internal_get_onFinishPlayback() const;

constexpr ::System::Action*& __cordl_internal_get_onFinishPlayback() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>> const& __cordl_internal_get_outputs() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>& __cordl_internal_get_outputs() ;

constexpr ::UnityW<::GlobalNamespace::PeckSystemBlock> const& __cordl_internal_get_playbackIndicators() const;

constexpr ::UnityW<::GlobalNamespace::PeckSystemBlock>& __cordl_internal_get_playbackIndicators() ;

constexpr int32_t const& __cordl_internal_get_seed() const;

constexpr int32_t& __cordl_internal_get_seed() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_sequence() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_sequence() ;

constexpr int32_t const& __cordl_internal_get_total() const;

constexpr int32_t& __cordl_internal_get_total() ;

constexpr void __cordl_internal_set__currentState(::GlobalNamespace::PulseGenerator_PulseGeneratorState  value) ;

constexpr void __cordl_internal_set_isInCooldown(bool  value) ;

constexpr void __cordl_internal_set_isInWarmup(bool  value) ;

constexpr void __cordl_internal_set_lastPlayedIndex(int32_t  value) ;

constexpr void __cordl_internal_set_lastPlayedTime(float_t  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_onFinishPlayback(::System::Action*  value) ;

constexpr void __cordl_internal_set_outputs(::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>  value) ;

constexpr void __cordl_internal_set_playbackIndicators(::UnityW<::GlobalNamespace::PeckSystemBlock>  value) ;

constexpr void __cordl_internal_set_seed(int32_t  value) ;

constexpr void __cordl_internal_set_sequence(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_total(int32_t  value) ;

/// @brief Method .ctor, addr 0x180360450, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Networkseed, addr 0x180371740, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Networkseed() ;

/// @brief Method get_currentState, addr 0x1804081d0, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::PulseGenerator_PulseGeneratorState get_currentState() ;

/// @brief Method set_Networkseed, addr 0x1804081e0, size 0x70, virtual false, abstract: false, final false
inline void set_Networkseed(::ByRefConst<int32_t>  value) ;

/// @brief Method set_currentState, addr 0x180408250, size 0x90, virtual false, abstract: false, final false
inline void set_currentState(::GlobalNamespace::PulseGenerator_PulseGeneratorState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PulseGenerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PulseGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PulseGenerator(PulseGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PulseGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PulseGenerator(PulseGenerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5042};

/// @brief Field cooldownDuration offset 0xffffffff size 0x4
static constexpr float_t  cooldownDuration{static_cast<float_t>(2.0f)};

/// @brief Field cycleDuration offset 0xffffffff size 0x4
static constexpr float_t  cycleDuration{static_cast<float_t>(0.5f)};

/// @brief Field maxTotal offset 0xffffffff size 0x4
static constexpr int32_t  maxTotal{static_cast<int32_t>(0x1e)};

/// @brief Field minTotal offset 0xffffffff size 0x4
static constexpr int32_t  minTotal{static_cast<int32_t>(0xa)};

/// @brief Field warmupDuration offset 0xffffffff size 0x4
static constexpr float_t  warmupDuration{static_cast<float_t>(4.0f)};

/// @brief Field outputs, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>  ___outputs;

/// @brief Field playbackIndicators, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSystemBlock>  ___playbackIndicators;

/// @brief Field logVerbose, offset: 0x78, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field seed, offset: 0x7c, size: 0x4, def value: None
 int32_t  ___seed;

/// @brief Field sequence, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___sequence;

/// @brief Field total, offset: 0x88, size: 0x4, def value: None
 int32_t  ___total;

/// @brief Field lastPlayedIndex, offset: 0x8c, size: 0x4, def value: None
 int32_t  ___lastPlayedIndex;

/// @brief Field lastPlayedTime, offset: 0x90, size: 0x4, def value: None
 float_t  ___lastPlayedTime;

/// @brief Field onFinishPlayback, offset: 0x98, size: 0x8, def value: None
 ::System::Action*  ___onFinishPlayback;

/// @brief Field isInWarmup, offset: 0xa0, size: 0x1, def value: None
 bool  ___isInWarmup;

/// @brief Field isInCooldown, offset: 0xa1, size: 0x1, def value: None
 bool  ___isInCooldown;

/// @brief Field _currentState, offset: 0xa4, size: 0x4, def value: None
 ::GlobalNamespace::PulseGenerator_PulseGeneratorState  ____currentState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PulseGenerator, ___outputs) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PulseGenerator, ___playbackIndicators) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PulseGenerator, ___logVerbose) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PulseGenerator, ___seed) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PulseGenerator, ___sequence) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PulseGenerator, ___total) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PulseGenerator, ___lastPlayedIndex) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PulseGenerator, ___lastPlayedTime) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PulseGenerator, ___onFinishPlayback) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PulseGenerator, ___isInWarmup) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PulseGenerator, ___isInCooldown) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PulseGenerator, ____currentState) == 0xa4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PulseGenerator) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerTeacher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerTeacher)
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
struct PlayerTeacher_LearnState;
}
// Forward declare root types
namespace GlobalNamespace {
struct PlayerTeacher_LearnState;
}
namespace GlobalNamespace {
class PlayerTeacher;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlayerTeacher_LearnState);
MARK_REF_T(::GlobalNamespace::PlayerTeacher*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerTeacher_LearnState, "", "PlayerTeacher/LearnState");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerTeacher*, "", "PlayerTeacher");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerTeacher/LearnState
struct CORDL_TYPE PlayerTeacher_LearnState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PlayerTeacher_LearnState_Unwrapped
enum struct __PlayerTeacher_LearnState_Unwrapped : int32_t {
__E_Uninitialized = static_cast<int32_t>(0x0),
__E_Observing = static_cast<int32_t>(0x1),
__E_Teaching = static_cast<int32_t>(0x2),
__E_Proven = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayerTeacher_LearnState_Unwrapped () const noexcept {
return static_cast<__PlayerTeacher_LearnState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlayerTeacher_LearnState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlayerTeacher_LearnState(int32_t  value__) noexcept;

/// @brief Field Observing value: I32(1)
static ::GlobalNamespace::PlayerTeacher_LearnState const Observing;

/// @brief Field Proven value: I32(3)
static ::GlobalNamespace::PlayerTeacher_LearnState const Proven;

/// @brief Field Teaching value: I32(2)
static ::GlobalNamespace::PlayerTeacher_LearnState const Teaching;

/// @brief Field Uninitialized value: I32(0)
static ::GlobalNamespace::PlayerTeacher_LearnState const Uninitialized;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5485};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerTeacher_LearnState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerTeacher_LearnState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PlayerTeacher::LearnState, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerTeacher
class CORDL_TYPE PlayerTeacher : public ::System::Object {
public:
// Declarations
using LearnState = ::GlobalNamespace::PlayerTeacher_LearnState;

/// @brief Field hasEnteredTeachingZone, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasEnteredTeachingZone, put=__cordl_internal_set_hasEnteredTeachingZone)) bool  hasEnteredTeachingZone;

/// @brief Field localPlayerLearnState, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_localPlayerLearnState, put=__cordl_internal_set_localPlayerLearnState)) ::GlobalNamespace::PlayerTeacher_LearnState  localPlayerLearnState;

/// @brief Field logVerbose, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field observationPeriod, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_observationPeriod, put=__cordl_internal_set_observationPeriod)) float_t  observationPeriod;

/// @brief Field playerCharacter, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

/// @brief Field waitDuration, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_waitDuration, put=__cordl_internal_set_waitDuration)) float_t  waitDuration;

/// @brief Method EnterTeachingZone, addr 0x180376410, size 0x10, virtual false, abstract: false, final false
inline void EnterTeachingZone() ;

/// @brief Method ExitTeachingZone, addr 0x180376420, size 0x120, virtual false, abstract: false, final false
inline void ExitTeachingZone() ;

/// @brief Method GetSaveKey, addr 0x180376540, size 0x50, virtual false, abstract: false, final false
inline ::StringW GetSaveKey() ;

/// @brief Method Initialize, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

static inline ::GlobalNamespace::PlayerTeacher* New_ctor() ;

/// @brief Method ReceiveInitialValue, addr 0x180376590, size 0x50, virtual false, abstract: false, final false
inline void ReceiveInitialValue(bool  canWalk) ;

/// @brief Method RecordProvenWalking, addr 0x1803765e0, size 0x110, virtual false, abstract: false, final false
inline void RecordProvenWalking() ;

/// @brief Method ServerLoadHasLearnedWalking, addr 0x1803766f0, size 0x130, virtual false, abstract: false, final false
inline void ServerLoadHasLearnedWalking() ;

/// @brief Method ServerSaveWalkingProven, addr 0x180376820, size 0x60, virtual false, abstract: false, final false
inline void ServerSaveWalkingProven() ;

/// @brief Method Update, addr 0x180376880, size 0x80, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_hasEnteredTeachingZone() const;

constexpr bool& __cordl_internal_get_hasEnteredTeachingZone() ;

constexpr ::GlobalNamespace::PlayerTeacher_LearnState const& __cordl_internal_get_localPlayerLearnState() const;

constexpr ::GlobalNamespace::PlayerTeacher_LearnState& __cordl_internal_get_localPlayerLearnState() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr float_t const& __cordl_internal_get_observationPeriod() const;

constexpr float_t& __cordl_internal_get_observationPeriod() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr float_t const& __cordl_internal_get_waitDuration() const;

constexpr float_t& __cordl_internal_get_waitDuration() ;

constexpr void __cordl_internal_set_hasEnteredTeachingZone(bool  value) ;

constexpr void __cordl_internal_set_localPlayerLearnState(::GlobalNamespace::PlayerTeacher_LearnState  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_observationPeriod(float_t  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_waitDuration(float_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerTeacher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerTeacher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerTeacher(PlayerTeacher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerTeacher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerTeacher(PlayerTeacher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5486};

/// @brief Field observationPeriod, offset: 0x10, size: 0x4, def value: None
 float_t  ___observationPeriod;

/// @brief Field logVerbose, offset: 0x14, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field playerCharacter, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

/// @brief Field waitDuration, offset: 0x20, size: 0x4, def value: None
 float_t  ___waitDuration;

/// @brief Field hasEnteredTeachingZone, offset: 0x24, size: 0x1, def value: None
 bool  ___hasEnteredTeachingZone;

/// @brief Field localPlayerLearnState, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::PlayerTeacher_LearnState  ___localPlayerLearnState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerTeacher, ___observationPeriod) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTeacher, ___logVerbose) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTeacher, ___playerCharacter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTeacher, ___waitDuration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTeacher, ___hasEnteredTeachingZone) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTeacher, ___localPlayerLearnState) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerTeacher) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

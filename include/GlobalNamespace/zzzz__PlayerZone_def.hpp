#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerZone)
namespace GlobalNamespace {
class PeckSwitch;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerZone;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerZone*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerZone*, "", "PlayerZone");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerZone
class CORDL_TYPE PlayerZone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field <playersInZone>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__playersInZone_k__BackingField, put=__cordl_internal_set__playersInZone_k__BackingField)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  _playersInZone_k__BackingField;

/// @brief Field logVerbose, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field onDisconnectFromZone, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_onDisconnectFromZone, put=__cordl_internal_set_onDisconnectFromZone)) ::System::Action*  onDisconnectFromZone;

/// @brief Field onEmptySwitch, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onEmptySwitch, put=__cordl_internal_set_onEmptySwitch)) ::UnityW<::GlobalNamespace::PeckSwitch>  onEmptySwitch;

/// @brief Field onEnterSwitch, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onEnterSwitch, put=__cordl_internal_set_onEnterSwitch)) ::UnityW<::GlobalNamespace::PeckSwitch>  onEnterSwitch;

/// @brief Field onEnterZone, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_onEnterZone, put=__cordl_internal_set_onEnterZone)) ::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  onEnterZone;

/// @brief Field onExitSwitch, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onExitSwitch, put=__cordl_internal_set_onExitSwitch)) ::UnityW<::GlobalNamespace::PeckSwitch>  onExitSwitch;

/// @brief Field onExitZone, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_onExitZone, put=__cordl_internal_set_onExitZone)) ::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  onExitZone;

/// @brief Field onNotEmptySwitch, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onNotEmptySwitch, put=__cordl_internal_set_onNotEmptySwitch)) ::UnityW<::GlobalNamespace::PeckSwitch>  onNotEmptySwitch;

/// @brief Field onPlayerDestroyed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onPlayerDestroyed, put=setStaticF_onPlayerDestroyed)) ::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  onPlayerDestroyed;

/// @brief Field overlapCounts, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_overlapCounts, put=__cordl_internal_set_overlapCounts)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PlayerCharacter>,int32_t>*  overlapCounts;

 __declspec(property(get=get_playersInZone, put=set_playersInZone)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  playersInZone;

/// @brief Method CheckForPlayer, addr 0x180395730, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::PlayerCharacter> CheckForPlayer(::UnityEngine::Collider*  collider) ;

static inline ::GlobalNamespace::PlayerZone* New_ctor() ;

/// @brief Method OnDisable, addr 0x180395780, size 0xf0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x180395870, size 0xf0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPlayerDestroyed, addr 0x180395960, size 0xe0, virtual false, abstract: false, final false
inline void OnPlayerDestroyed(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

/// @brief Method OnTriggerEnter, addr 0x180395a40, size 0x2e0, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  collider) ;

/// @brief Method OnTriggerExit, addr 0x180395d20, size 0x200, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  collider) ;

/// @brief Method ProcessExitEvents, addr 0x180395f20, size 0xf0, virtual false, abstract: false, final false
inline void ProcessExitEvents(::GlobalNamespace::PlayerCharacter*  changedPlayer) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>* const& __cordl_internal_get__playersInZone_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*& __cordl_internal_get__playersInZone_k__BackingField() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::System::Action* const& __cordl_internal_get_onDisconnectFromZone() const;

constexpr ::System::Action*& __cordl_internal_get_onDisconnectFromZone() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onEmptySwitch() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onEmptySwitch() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onEnterSwitch() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onEnterSwitch() ;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>* const& __cordl_internal_get_onEnterZone() const;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*& __cordl_internal_get_onEnterZone() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onExitSwitch() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onExitSwitch() ;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>* const& __cordl_internal_get_onExitZone() const;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*& __cordl_internal_get_onExitZone() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onNotEmptySwitch() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onNotEmptySwitch() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PlayerCharacter>,int32_t>* const& __cordl_internal_get_overlapCounts() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PlayerCharacter>,int32_t>*& __cordl_internal_get_overlapCounts() ;

constexpr void __cordl_internal_set__playersInZone_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_onDisconnectFromZone(::System::Action*  value) ;

constexpr void __cordl_internal_set_onEmptySwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_onEnterSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_onEnterZone(::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  value) ;

constexpr void __cordl_internal_set_onExitSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_onExitZone(::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  value) ;

constexpr void __cordl_internal_set_onNotEmptySwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_overlapCounts(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PlayerCharacter>,int32_t>*  value) ;

/// @brief Method .ctor, addr 0x180396010, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>* getStaticF_onPlayerDestroyed() ;

/// @brief Method get_playersInZone, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>* get_playersInZone() ;

static inline void setStaticF_onPlayerDestroyed(::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  value) ;

/// @brief Method set_playersInZone, addr 0x180308de0, size 0x10, virtual false, abstract: false, final false
inline void set_playersInZone(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerZone", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerZone(PlayerZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerZone", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerZone(PlayerZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5624};

/// @brief Field onEnterSwitch, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onEnterSwitch;

/// @brief Field onExitSwitch, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onExitSwitch;

/// @brief Field onNotEmptySwitch, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onNotEmptySwitch;

/// @brief Field onEmptySwitch, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onEmptySwitch;

/// @brief Field logVerbose, offset: 0x40, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field overlapCounts, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PlayerCharacter>,int32_t>*  ___overlapCounts;

/// @brief Field <playersInZone>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  ____playersInZone_k__BackingField;

/// @brief Field onEnterZone, offset: 0x58, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  ___onEnterZone;

/// @brief Field onExitZone, offset: 0x60, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  ___onExitZone;

/// @brief Field onDisconnectFromZone, offset: 0x68, size: 0x8, def value: None
 ::System::Action*  ___onDisconnectFromZone;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerZone, ___onEnterSwitch) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerZone, ___onExitSwitch) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerZone, ___onNotEmptySwitch) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerZone, ___onEmptySwitch) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerZone, ___logVerbose) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerZone, ___overlapCounts) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerZone, ____playersInZone_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerZone, ___onEnterZone) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerZone, ___onExitZone) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerZone, ___onDisconnectFromZone) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerZone) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace

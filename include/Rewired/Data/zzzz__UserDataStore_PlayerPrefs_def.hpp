#pragma once
// IWYU pragma private; include "Rewired/Data/UserDataStore_PlayerPrefs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Data/zzzz__UserDataStore_def.hpp"
#include "Rewired/zzzz__AxisRange_def.hpp"
#include "Rewired/zzzz__ControllerElementType_def.hpp"
#include "Rewired/zzzz__Pole_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UserDataStore_PlayerPrefs)
namespace Rewired::Data {
class ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo;
}
namespace Rewired::Data {
class ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo;
}
namespace Rewired::Data {
struct ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry;
}
namespace Rewired::Data {
struct UserDataStore_PlayerPrefs_ActionMappingSaveMode;
}
namespace Rewired::Data {
class UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo;
}
namespace Rewired::Data {
class UserDataStore_PlayerPrefs_ControllerElementByRoleMap;
}
namespace Rewired::Data {
class UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo;
}
namespace Rewired::Data {
class UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88;
}
namespace Rewired::Data {
class UserDataStore_PlayerPrefs___c__DisplayClass86_0;
}
namespace Rewired::Data {
class UserDataStore_PlayerPrefs___c__DisplayClass86_1;
}
namespace Rewired::Data {
class UserDataStore_PlayerPrefs___c__DisplayClass86_2;
}
namespace Rewired {
class ActionElementMap;
}
namespace Rewired {
struct ControllerIdentifier;
}
namespace Rewired {
class ControllerMapSaveData;
}
namespace Rewired {
class ControllerMap;
}
namespace Rewired {
class ControllerStatusChangedEventArgs;
}
namespace Rewired {
struct ControllerType;
}
namespace Rewired {
class Controller_Element;
}
namespace Rewired {
class Controller;
}
namespace Rewired {
struct ElementAssignment;
}
namespace Rewired {
class InputBehavior;
}
namespace Rewired {
class Joystick;
}
namespace Rewired {
struct PlayerSaveData;
}
namespace Rewired {
class Player;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Rewired::Data {
struct UserDataStore_PlayerPrefs_ActionMappingSaveMode;
}
namespace Rewired::Data {
class ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo;
}
namespace Rewired::Data {
class ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo;
}
namespace Rewired::Data {
class UserDataStore_PlayerPrefs;
}
namespace Rewired::Data {
class UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo;
}
namespace Rewired::Data {
class UserDataStore_PlayerPrefs_ControllerElementByRoleMap;
}
namespace Rewired::Data {
class UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo;
}
namespace Rewired::Data {
class UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88;
}
namespace Rewired::Data {
class UserDataStore_PlayerPrefs___c__DisplayClass86_0;
}
namespace Rewired::Data {
class UserDataStore_PlayerPrefs___c__DisplayClass86_1;
}
namespace Rewired::Data {
class UserDataStore_PlayerPrefs___c__DisplayClass86_2;
}
namespace Rewired::Data {
struct ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry;
}
// Write type traits
MARK_VAL_T(::Rewired::Data::UserDataStore_PlayerPrefs_ActionMappingSaveMode);
MARK_REF_T(::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo*);
MARK_REF_T(::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo*);
MARK_REF_T(::Rewired::Data::UserDataStore_PlayerPrefs*);
MARK_REF_T(::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo*);
MARK_REF_T(::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap*);
MARK_REF_T(::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo*);
MARK_REF_T(::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88*);
MARK_REF_T(::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_0*);
MARK_REF_T(::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_1*);
MARK_REF_T(::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_2*);
MARK_VAL_T(::Rewired::Data::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry);
DEFINE_IL2CPP_CLASS(::Rewired::Data::UserDataStore_PlayerPrefs_ActionMappingSaveMode, "Rewired.Data", "UserDataStore_PlayerPrefs/ActionMappingSaveMode");
DEFINE_IL2CPP_CLASS(::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo*, "Rewired.Data", "UserDataStore_PlayerPrefs/ControllerAssignmentSaveInfo/JoystickInfo");
DEFINE_IL2CPP_CLASS(::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo*, "Rewired.Data", "UserDataStore_PlayerPrefs/ControllerAssignmentSaveInfo/PlayerInfo");
DEFINE_IL2CPP_CLASS(::Rewired::Data::UserDataStore_PlayerPrefs*, "Rewired.Data", "UserDataStore_PlayerPrefs");
DEFINE_IL2CPP_CLASS(::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo*, "Rewired.Data", "UserDataStore_PlayerPrefs/ControllerAssignmentSaveInfo");
DEFINE_IL2CPP_CLASS(::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap*, "Rewired.Data", "UserDataStore_PlayerPrefs/ControllerElementByRoleMap");
DEFINE_IL2CPP_CLASS(::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo*, "Rewired.Data", "UserDataStore_PlayerPrefs/JoystickAssignmentHistoryInfo");
DEFINE_IL2CPP_CLASS(::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88*, "Rewired.Data", "UserDataStore_PlayerPrefs/<LoadJoystickAssignmentsDeferred>d__88");
DEFINE_IL2CPP_CLASS(::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_0*, "Rewired.Data", "UserDataStore_PlayerPrefs/<>c__DisplayClass86_0");
DEFINE_IL2CPP_CLASS(::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_1*, "Rewired.Data", "UserDataStore_PlayerPrefs/<>c__DisplayClass86_1");
DEFINE_IL2CPP_CLASS(::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_2*, "Rewired.Data", "UserDataStore_PlayerPrefs/<>c__DisplayClass86_2");
DEFINE_IL2CPP_CLASS(::Rewired::Data::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry, "Rewired.Data", "UserDataStore_PlayerPrefs/ControllerElementByRoleMap/Entry");
// Dependencies System.Guid, System.Object
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.UserDataStore_PlayerPrefs/ControllerAssignmentSaveInfo/JoystickInfo
class CORDL_TYPE ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo : public ::System::Object {
public:
// Declarations
/// @brief Field hardwareIdentifier, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_hardwareIdentifier, put=__cordl_internal_set_hardwareIdentifier)) ::StringW  hardwareIdentifier;

/// @brief Field id, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) int32_t  id;

/// @brief Field instanceGuid, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_instanceGuid, put=__cordl_internal_set_instanceGuid)) ::System::Guid  instanceGuid;

static inline ::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_hardwareIdentifier() const;

constexpr ::StringW& __cordl_internal_get_hardwareIdentifier() ;

constexpr int32_t const& __cordl_internal_get_id() const;

constexpr int32_t& __cordl_internal_get_id() ;

constexpr ::System::Guid const& __cordl_internal_get_instanceGuid() const;

constexpr ::System::Guid& __cordl_internal_get_instanceGuid() ;

constexpr void __cordl_internal_set_hardwareIdentifier(::StringW  value) ;

constexpr void __cordl_internal_set_id(int32_t  value) ;

constexpr void __cordl_internal_set_instanceGuid(::System::Guid  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo(ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo(ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5684};

/// @brief Field instanceGuid, offset: 0x10, size: 0x10, def value: None
 ::System::Guid  ___instanceGuid;

/// @brief Field hardwareIdentifier, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___hardwareIdentifier;

/// @brief Field id, offset: 0x28, size: 0x4, def value: None
 int32_t  ___id;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo, ___instanceGuid) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo, ___hardwareIdentifier) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo, ___id) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo) == 0x30, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies Rewired.Data.UserDataStore_PlayerPrefs::ControllerAssignmentSaveInfo::JoystickInfo, System.Object
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.UserDataStore_PlayerPrefs/ControllerAssignmentSaveInfo/PlayerInfo
class CORDL_TYPE ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo : public ::System::Object {
public:
// Declarations
/// @brief Field hasKeyboard, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasKeyboard, put=__cordl_internal_set_hasKeyboard)) bool  hasKeyboard;

/// @brief Field hasMouse, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasMouse, put=__cordl_internal_set_hasMouse)) bool  hasMouse;

/// @brief Field id, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) int32_t  id;

 __declspec(property(get=get_joystickCount)) int32_t  joystickCount;

/// @brief Field joysticks, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_joysticks, put=__cordl_internal_set_joysticks)) ::ArrayW<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo*>  joysticks;

/// @brief Method ContainsJoystick, addr 0x1803ab990, size 0x60, virtual false, abstract: false, final false
inline bool ContainsJoystick(int32_t  joystickId) ;

/// @brief Method IndexOfJoystick, addr 0x1803ab9f0, size 0x60, virtual false, abstract: false, final false
inline int32_t IndexOfJoystick(int32_t  joystickId) ;

static inline ::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo* New_ctor() ;

constexpr bool const& __cordl_internal_get_hasKeyboard() const;

constexpr bool& __cordl_internal_get_hasKeyboard() ;

constexpr bool const& __cordl_internal_get_hasMouse() const;

constexpr bool& __cordl_internal_get_hasMouse() ;

constexpr int32_t const& __cordl_internal_get_id() const;

constexpr int32_t& __cordl_internal_get_id() ;

constexpr ::ArrayW<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo*> const& __cordl_internal_get_joysticks() const;

constexpr ::ArrayW<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo*>& __cordl_internal_get_joysticks() ;

constexpr void __cordl_internal_set_hasKeyboard(bool  value) ;

constexpr void __cordl_internal_set_hasMouse(bool  value) ;

constexpr void __cordl_internal_set_id(int32_t  value) ;

constexpr void __cordl_internal_set_joysticks(::ArrayW<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo*>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_joystickCount, addr 0x1803aba50, size 0x20, virtual false, abstract: false, final false
inline int32_t get_joystickCount() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo(ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo(ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5683};

/// @brief Field id, offset: 0x10, size: 0x4, def value: None
 int32_t  ___id;

/// @brief Field hasKeyboard, offset: 0x14, size: 0x1, def value: None
 bool  ___hasKeyboard;

/// @brief Field hasMouse, offset: 0x15, size: 0x1, def value: None
 bool  ___hasMouse;

/// @brief Field joysticks, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo*>  ___joysticks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo, ___id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo, ___hasKeyboard) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo, ___hasMouse) == 0x15, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo, ___joysticks) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies Rewired.Data.UserDataStore_PlayerPrefs::ControllerAssignmentSaveInfo::PlayerInfo, System.Object
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.UserDataStore_PlayerPrefs/ControllerAssignmentSaveInfo
class CORDL_TYPE UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo : public ::System::Object {
public:
// Declarations
using JoystickInfo = ::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo;

using PlayerInfo = ::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo;

 __declspec(property(get=get_playerCount)) int32_t  playerCount;

/// @brief Field players, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_players, put=__cordl_internal_set_players)) ::ArrayW<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo*>  players;

/// @brief Method ContainsPlayer, addr 0x1803a8e50, size 0x60, virtual false, abstract: false, final false
inline bool ContainsPlayer(int32_t  playerId) ;

/// @brief Method IndexOfPlayer, addr 0x1803a8eb0, size 0x60, virtual false, abstract: false, final false
inline int32_t IndexOfPlayer(int32_t  playerId) ;

static inline ::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo* New_ctor() ;

static inline ::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo* New_ctor(int32_t  playerCount) ;

constexpr ::ArrayW<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo*> const& __cordl_internal_get_players() const;

constexpr ::ArrayW<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo*>& __cordl_internal_get_players() ;

constexpr void __cordl_internal_set_players(::ArrayW<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo*>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1803a8fb0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(int32_t  playerCount) ;

/// @brief Method get_playerCount, addr 0x1803a9050, size 0x20, virtual false, abstract: false, final false
inline int32_t get_playerCount() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo(UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo(UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5685};

/// @brief Field players, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo*>  ___players;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo, ___players) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo) == 0x18, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies System.Object
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.UserDataStore_PlayerPrefs/JoystickAssignmentHistoryInfo
class CORDL_TYPE UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo : public ::System::Object {
public:
// Declarations
/// @brief Field joystick, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_joystick, put=__cordl_internal_set_joystick)) ::Rewired::Joystick*  joystick;

/// @brief Field oldJoystickId, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_oldJoystickId, put=__cordl_internal_set_oldJoystickId)) int32_t  oldJoystickId;

static inline ::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo* New_ctor(::Rewired::Joystick*  joystick, int32_t  oldJoystickId) ;

constexpr ::Rewired::Joystick* const& __cordl_internal_get_joystick() const;

constexpr ::Rewired::Joystick*& __cordl_internal_get_joystick() ;

constexpr int32_t const& __cordl_internal_get_oldJoystickId() const;

constexpr int32_t& __cordl_internal_get_oldJoystickId() ;

constexpr void __cordl_internal_set_joystick(::Rewired::Joystick*  value) ;

constexpr void __cordl_internal_set_oldJoystickId(int32_t  value) ;

/// @brief Method .ctor, addr 0x1803aacc0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Joystick*  joystick, int32_t  oldJoystickId) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo(UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo(UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5686};

/// @brief Field joystick, offset: 0x10, size: 0x8, def value: None
 ::Rewired::Joystick*  ___joystick;

/// @brief Field oldJoystickId, offset: 0x18, size: 0x4, def value: None
 int32_t  ___oldJoystickId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo, ___joystick) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo, ___oldJoystickId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies Rewired.AxisRange, Rewired.ControllerElementType, Rewired.Pole
namespace Rewired::Data {
// Is value type: true
// CS Name: Rewired.Data.UserDataStore_PlayerPrefs/ControllerElementByRoleMap/Entry
struct CORDL_TYPE ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry {
public:
// Declarations
/// @brief Method ToString, addr 0x1803aa4b0, size 0x140, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TryGetElementAssignment, addr 0x1803aa5f0, size 0x200, virtual false, abstract: false, final false
inline bool TryGetElementAssignment(::Rewired::ControllerType  controllerType, ::Rewired::Controller_Element*  targetElement, ::by_ref<::Rewired::ElementAssignment>  assignment) ;

// Ctor Parameters []
// @brief default ctor
constexpr ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry() ;

// Ctor Parameters [CppParam { name: "actionId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "elementType", ty: "::Rewired::ControllerElementType", modifiers: "", def_value: None }, CppParam { name: "axisRange", ty: "::Rewired::AxisRange", modifiers: "", def_value: None }, CppParam { name: "invert", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "axisContribution", ty: "::Rewired::Pole", modifiers: "", def_value: None }]
constexpr ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry(int32_t  actionId, ::Rewired::ControllerElementType  elementType, ::Rewired::AxisRange  axisRange, bool  invert, ::Rewired::Pole  axisContribution) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5687};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field actionId, offset: 0x0, size: 0x4, def value: None
 int32_t  actionId;

/// @brief Field elementType, offset: 0x4, size: 0x4, def value: None
 ::Rewired::ControllerElementType  elementType;

/// @brief Field axisRange, offset: 0x8, size: 0x4, def value: None
 ::Rewired::AxisRange  axisRange;

/// @brief Field invert, offset: 0xc, size: 0x1, def value: None
 bool  invert;

/// @brief Field axisContribution, offset: 0x10, size: 0x4, def value: None
 ::Rewired::Pole  axisContribution;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry, actionId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry, elementType) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry, axisRange) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry, invert) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry, axisContribution) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry) == 0x14, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies System.Object
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.UserDataStore_PlayerPrefs/ControllerElementByRoleMap
class CORDL_TYPE UserDataStore_PlayerPrefs_ControllerElementByRoleMap : public ::System::Object {
public:
// Declarations
using Entry = ::Rewired::Data::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry;

/// @brief Field data, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::System::Collections::Generic::List_1<::Rewired::Data::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry>*  data;

/// @brief Field role, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_role, put=__cordl_internal_set_role)) ::StringW  role;

/// @brief Method Add, addr 0x1803a9190, size 0x120, virtual false, abstract: false, final false
inline void Add(::Rewired::ActionElementMap*  elementMap) ;

/// @brief Method FromJson, addr 0x1803a9300, size 0x50, virtual false, abstract: false, final false
static inline ::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap* FromJson(::StringW  role, ::StringW  json) ;

static inline ::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap* New_ctor() ;

/// @brief Method ToJson, addr 0x1803a9350, size 0x10, virtual false, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x1803a9360, size 0x170, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Collections::Generic::List_1<::Rewired::Data::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry>* const& __cordl_internal_get_data() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::Data::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry>*& __cordl_internal_get_data() ;

constexpr ::StringW const& __cordl_internal_get_role() const;

constexpr ::StringW& __cordl_internal_get_role() ;

constexpr void __cordl_internal_set_data(::System::Collections::Generic::List_1<::Rewired::Data::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry>*  value) ;

constexpr void __cordl_internal_set_role(::StringW  value) ;

/// @brief Method .ctor, addr 0x1803a9690, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserDataStore_PlayerPrefs_ControllerElementByRoleMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserDataStore_PlayerPrefs_ControllerElementByRoleMap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserDataStore_PlayerPrefs_ControllerElementByRoleMap(UserDataStore_PlayerPrefs_ControllerElementByRoleMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserDataStore_PlayerPrefs_ControllerElementByRoleMap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserDataStore_PlayerPrefs_ControllerElementByRoleMap(UserDataStore_PlayerPrefs_ControllerElementByRoleMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5688};

/// @brief Field role, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___role;

/// @brief Field data, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::Data::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry>*  ___data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap, ___role) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap, ___data) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies 
namespace Rewired::Data {
// Is value type: true
// CS Name: Rewired.Data.UserDataStore_PlayerPrefs/ActionMappingSaveMode
struct CORDL_TYPE UserDataStore_PlayerPrefs_ActionMappingSaveMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UserDataStore_PlayerPrefs_ActionMappingSaveMode_Unwrapped
enum struct __UserDataStore_PlayerPrefs_ActionMappingSaveMode_Unwrapped : int32_t {
__E_ByController = static_cast<int32_t>(0x0),
__E_ByControllerElementRole = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UserDataStore_PlayerPrefs_ActionMappingSaveMode_Unwrapped () const noexcept {
return static_cast<__UserDataStore_PlayerPrefs_ActionMappingSaveMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UserDataStore_PlayerPrefs_ActionMappingSaveMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UserDataStore_PlayerPrefs_ActionMappingSaveMode(int32_t  value__) noexcept;

/// @brief Field ByController value: I32(0)
static ::Rewired::Data::UserDataStore_PlayerPrefs_ActionMappingSaveMode const ByController;

/// @brief Field ByControllerElementRole value: I32(1)
static ::Rewired::Data::UserDataStore_PlayerPrefs_ActionMappingSaveMode const ByControllerElementRole;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5689};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::UserDataStore_PlayerPrefs_ActionMappingSaveMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::UserDataStore_PlayerPrefs_ActionMappingSaveMode) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies System.Object
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.UserDataStore_PlayerPrefs/<>c__DisplayClass86_0
class CORDL_TYPE UserDataStore_PlayerPrefs___c__DisplayClass86_0 : public ::System::Object {
public:
// Declarations
/// @brief Field joystick, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_joystick, put=__cordl_internal_set_joystick)) ::Rewired::Joystick*  joystick;

static inline ::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_0* New_ctor() ;

/// @brief Method <LoadJoystickAssignmentsNow>b__0, addr 0x1803b5bb0, size 0x20, virtual false, abstract: false, final false
inline bool _LoadJoystickAssignmentsNow_b__0(::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo*  x) ;

constexpr ::Rewired::Joystick* const& __cordl_internal_get_joystick() const;

constexpr ::Rewired::Joystick*& __cordl_internal_get_joystick() ;

constexpr void __cordl_internal_set_joystick(::Rewired::Joystick*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserDataStore_PlayerPrefs___c__DisplayClass86_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserDataStore_PlayerPrefs___c__DisplayClass86_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserDataStore_PlayerPrefs___c__DisplayClass86_0(UserDataStore_PlayerPrefs___c__DisplayClass86_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserDataStore_PlayerPrefs___c__DisplayClass86_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserDataStore_PlayerPrefs___c__DisplayClass86_0(UserDataStore_PlayerPrefs___c__DisplayClass86_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5690};

/// @brief Field joystick, offset: 0x10, size: 0x8, def value: None
 ::Rewired::Joystick*  ___joystick;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_0, ___joystick) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_0) == 0x18, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies System.Object
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.UserDataStore_PlayerPrefs/<>c__DisplayClass86_1
class CORDL_TYPE UserDataStore_PlayerPrefs___c__DisplayClass86_1 : public ::System::Object {
public:
// Declarations
/// @brief Field joystickInfo, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_joystickInfo, put=__cordl_internal_set_joystickInfo)) ::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo*  joystickInfo;

static inline ::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_1* New_ctor() ;

/// @brief Method <LoadJoystickAssignmentsNow>b__1, addr 0x1803b5bd0, size 0x30, virtual false, abstract: false, final false
inline bool _LoadJoystickAssignmentsNow_b__1(::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo*  x) ;

constexpr ::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo* const& __cordl_internal_get_joystickInfo() const;

constexpr ::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo*& __cordl_internal_get_joystickInfo() ;

constexpr void __cordl_internal_set_joystickInfo(::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserDataStore_PlayerPrefs___c__DisplayClass86_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserDataStore_PlayerPrefs___c__DisplayClass86_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserDataStore_PlayerPrefs___c__DisplayClass86_1(UserDataStore_PlayerPrefs___c__DisplayClass86_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserDataStore_PlayerPrefs___c__DisplayClass86_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserDataStore_PlayerPrefs___c__DisplayClass86_1(UserDataStore_PlayerPrefs___c__DisplayClass86_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5691};

/// @brief Field joystickInfo, offset: 0x10, size: 0x8, def value: None
 ::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo*  ___joystickInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_1, ___joystickInfo) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_1) == 0x18, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies System.Object
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.UserDataStore_PlayerPrefs/<>c__DisplayClass86_2
class CORDL_TYPE UserDataStore_PlayerPrefs___c__DisplayClass86_2 : public ::System::Object {
public:
// Declarations
/// @brief Field match, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_match, put=__cordl_internal_set_match)) ::Rewired::Joystick*  match;

static inline ::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_2* New_ctor() ;

/// @brief Method <LoadJoystickAssignmentsNow>b__2, addr 0x1803b5bb0, size 0x20, virtual false, abstract: false, final false
inline bool _LoadJoystickAssignmentsNow_b__2(::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo*  x) ;

constexpr ::Rewired::Joystick* const& __cordl_internal_get_match() const;

constexpr ::Rewired::Joystick*& __cordl_internal_get_match() ;

constexpr void __cordl_internal_set_match(::Rewired::Joystick*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserDataStore_PlayerPrefs___c__DisplayClass86_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserDataStore_PlayerPrefs___c__DisplayClass86_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserDataStore_PlayerPrefs___c__DisplayClass86_2(UserDataStore_PlayerPrefs___c__DisplayClass86_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserDataStore_PlayerPrefs___c__DisplayClass86_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserDataStore_PlayerPrefs___c__DisplayClass86_2(UserDataStore_PlayerPrefs___c__DisplayClass86_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5692};

/// @brief Field match, offset: 0x10, size: 0x8, def value: None
 ::Rewired::Joystick*  ___match;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_2, ___match) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_2) == 0x18, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies System.Object
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.UserDataStore_PlayerPrefs/<LoadJoystickAssignmentsDeferred>d__88
class CORDL_TYPE UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Rewired::Data::UserDataStore_PlayerPrefs>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1803b5540, size 0xe0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Rewired::Data::UserDataStore_PlayerPrefs> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Rewired::Data::UserDataStore_PlayerPrefs>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Rewired::Data::UserDataStore_PlayerPrefs>  value) ;

/// @brief Method .ctor, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88(UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88(UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5693};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Rewired::Data::UserDataStore_PlayerPrefs>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88) == 0x28, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies Rewired.Data.UserDataStore, Rewired.Data.UserDataStore_PlayerPrefs::ActionMappingSaveMode
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.UserDataStore_PlayerPrefs
class CORDL_TYPE UserDataStore_PlayerPrefs : public ::Rewired::Data::UserDataStore {
public:
// Declarations
using ActionMappingSaveMode = ::Rewired::Data::UserDataStore_PlayerPrefs_ActionMappingSaveMode;

using ControllerAssignmentSaveInfo = ::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo;

using ControllerElementByRoleMap = ::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap;

using JoystickAssignmentHistoryInfo = ::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo;

using _LoadJoystickAssignmentsDeferred_d__88 = ::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88;

using __c__DisplayClass86_0 = ::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_0;

using __c__DisplayClass86_1 = ::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_1;

using __c__DisplayClass86_2 = ::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_2;

 __declspec(property(get=get_IsEnabled, put=set_IsEnabled)) bool  IsEnabled;

 __declspec(property(get=get_LoadDataOnStart, put=set_LoadDataOnStart)) bool  LoadDataOnStart;

 __declspec(property(get=get_LoadJoystickAssignments, put=set_LoadJoystickAssignments)) bool  LoadJoystickAssignments;

 __declspec(property(get=get_LoadKeyboardAssignments, put=set_LoadKeyboardAssignments)) bool  LoadKeyboardAssignments;

 __declspec(property(get=get_LoadMouseAssignments, put=set_LoadMouseAssignments)) bool  LoadMouseAssignments;

 __declspec(property(get=get_PlayerPrefsKeyPrefix, put=set_PlayerPrefsKeyPrefix)) ::StringW  PlayerPrefsKeyPrefix;

/// @brief Field __allActionIds, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___allActionIds, put=__cordl_internal_set___allActionIds)) ::System::Collections::Generic::List_1<int32_t>*  __allActionIds;

/// @brief Field __allActionIdsString, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get___allActionIdsString, put=__cordl_internal_set___allActionIdsString)) ::StringW  __allActionIdsString;

/// @brief Field _actionMappingSaveMode, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__actionMappingSaveMode, put=__cordl_internal_set__actionMappingSaveMode)) ::Rewired::Data::UserDataStore_PlayerPrefs_ActionMappingSaveMode  _actionMappingSaveMode;

/// @brief Field _sb, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__sb, put=__cordl_internal_set__sb)) ::System::Text::StringBuilder*  _sb;

/// @brief Field _tempElementByRoleMaps, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__tempElementByRoleMaps, put=__cordl_internal_set__tempElementByRoleMaps)) ::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap*>*  _tempElementByRoleMaps;

/// @brief Field _tempElementByRoleMapsEnabled, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__tempElementByRoleMapsEnabled, put=__cordl_internal_set__tempElementByRoleMapsEnabled)) ::System::Collections::Generic::Dictionary_2<::StringW,bool>*  _tempElementByRoleMapsEnabled;

 __declspec(property(get=get_actionMappingSaveMode, put=set_actionMappingSaveMode)) ::Rewired::Data::UserDataStore_PlayerPrefs_ActionMappingSaveMode  actionMappingSaveMode;

 __declspec(property(get=get_allActionIds)) ::System::Collections::Generic::List_1<int32_t>*  allActionIds;

 __declspec(property(get=get_allActionIdsString)) ::StringW  allActionIdsString;

/// @brief Field allowImpreciseJoystickAssignmentMatching, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowImpreciseJoystickAssignmentMatching, put=__cordl_internal_set_allowImpreciseJoystickAssignmentMatching)) bool  allowImpreciseJoystickAssignmentMatching;

/// @brief Field deferredJoystickAssignmentLoadPending, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_deferredJoystickAssignmentLoadPending, put=__cordl_internal_set_deferredJoystickAssignmentLoadPending)) bool  deferredJoystickAssignmentLoadPending;

/// @brief Field isEnabled, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isEnabled, put=__cordl_internal_set_isEnabled)) bool  isEnabled;

 __declspec(property(get=get_loadControllerAssignments)) bool  loadControllerAssignments;

/// @brief Field loadDataOnStart, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_loadDataOnStart, put=__cordl_internal_set_loadDataOnStart)) bool  loadDataOnStart;

/// @brief Field loadJoystickAssignments, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get_loadJoystickAssignments, put=__cordl_internal_set_loadJoystickAssignments)) bool  loadJoystickAssignments;

/// @brief Field loadKeyboardAssignments, offset 0x23, size 0x1 
 __declspec(property(get=__cordl_internal_get_loadKeyboardAssignments, put=__cordl_internal_set_loadKeyboardAssignments)) bool  loadKeyboardAssignments;

/// @brief Field loadMouseAssignments, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_loadMouseAssignments, put=__cordl_internal_set_loadMouseAssignments)) bool  loadMouseAssignments;

/// @brief Field playerPrefsKeyPrefix, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerPrefsKeyPrefix, put=__cordl_internal_set_playerPrefsKeyPrefix)) ::StringW  playerPrefsKeyPrefix;

 __declspec(property(get=get_playerPrefsKey_controllerAssignments)) ::StringW  playerPrefsKey_controllerAssignments;

/// @brief Field wasJoystickEverDetected, offset 0x3a, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasJoystickEverDetected, put=__cordl_internal_set_wasJoystickEverDetected)) bool  wasJoystickEverDetected;

/// @brief Method AddControllerElementByRoleMapEntry, addr 0x1803b6230, size 0x230, virtual false, abstract: false, final false
inline bool AddControllerElementByRoleMapEntry(::Rewired::Player*  player, ::Rewired::Controller*  controller, ::Rewired::ActionElementMap*  elementMap, ::by_ref<::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap*>*>  maps) ;

/// @brief Method AddDefaultMappingsForNewActions, addr 0x1803b6460, size 0x480, virtual false, abstract: false, final false
inline void AddDefaultMappingsForNewActions(::Rewired::ControllerIdentifier  controllerIdentifier, ::Rewired::ControllerMap*  controllerMap, ::System::Collections::Generic::List_1<int32_t>*  knownActionIds) ;

/// @brief Method AppendBaseKey, addr 0x1803b68e0, size 0x20, virtual false, abstract: false, final false
static inline void AppendBaseKey(::System::Text::StringBuilder*  sb, ::StringW  playerPrefsKeyPrefix) ;

/// @brief Method AppendControllerElementByRoleMapKey, addr 0x1803a0510, size 0xe0, virtual false, abstract: false, final false
static inline void AppendControllerElementByRoleMapKey(::System::Text::StringBuilder*  sb, ::StringW  elementRole, int32_t  categoryId, int32_t  layoutId, int32_t  ppKeyVersion) ;

/// @brief Method AppendControllerMapKey, addr 0x1803b6be0, size 0xa0, virtual false, abstract: false, final false
static inline void AppendControllerMapKey(::System::Text::StringBuilder*  sb, ::Rewired::Player*  player, ::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  categoryId, int32_t  layoutId, int32_t  ppKeyVersion) ;

/// @brief Method AppendControllerMapKeyCommonSuffix, addr 0x1803b6900, size 0x2e0, virtual false, abstract: false, final false
static inline void AppendControllerMapKeyCommonSuffix(::System::Text::StringBuilder*  sb, ::Rewired::Player*  player, ::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  categoryId, int32_t  layoutId, int32_t  ppKeyVersion) ;

/// @brief Method AppendControllerMapKnownActionIdsKey, addr 0x1803b6c80, size 0xa0, virtual false, abstract: false, final false
static inline void AppendControllerMapKnownActionIdsKey(::System::Text::StringBuilder*  sb, ::Rewired::Player*  player, ::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  categoryId, int32_t  layoutId, int32_t  ppKeyVersion) ;

/// @brief Method AppendInputBehaviorKey, addr 0x1803b6d20, size 0x60, virtual false, abstract: false, final false
static inline void AppendInputBehaviorKey(::System::Text::StringBuilder*  sb, int32_t  inputBehaviorId) ;

/// @brief Method AppendJoystickCalibrationMapKey, addr 0x1803b6d80, size 0x110, virtual false, abstract: false, final false
static inline void AppendJoystickCalibrationMapKey(::System::Text::StringBuilder*  sb, ::Rewired::Joystick*  joystick) ;

/// @brief Method AppendPlayerKey, addr 0x1803b6e90, size 0x60, virtual false, abstract: false, final false
static inline void AppendPlayerKey(::System::Text::StringBuilder*  sb, ::Rewired::Player*  player) ;

/// @brief Method ControllerAssignmentSaveDataExists, addr 0x1803b6ef0, size 0x80, virtual false, abstract: false, final false
inline bool ControllerAssignmentSaveDataExists() ;

/// @brief Method FindJoystickPrecise, addr 0x1803a0860, size 0x150, virtual false, abstract: false, final false
inline ::Rewired::Joystick* FindJoystickPrecise(::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo*  joystickInfo) ;

/// @brief Method GetControllerElementByRoleMapPlayerPrefsKey, addr 0x1803b6f70, size 0x180, virtual false, abstract: false, final false
inline ::StringW GetControllerElementByRoleMapPlayerPrefsKey(::Rewired::Player*  player, ::StringW  elementRole, int32_t  categoryId, int32_t  layoutId, int32_t  ppKeyVersion) ;

/// @brief Method GetControllerMapKnownActionIds, addr 0x1803b7230, size 0x180, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<int32_t>* GetControllerMapKnownActionIds(::Rewired::Player*  player, ::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  categoryId, int32_t  layoutId) ;

/// @brief Method GetControllerMapKnownActionIdsPlayerPrefsKey, addr 0x1803b70f0, size 0x140, virtual false, abstract: false, final false
inline ::StringW GetControllerMapKnownActionIdsPlayerPrefsKey(::Rewired::Player*  player, ::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  categoryId, int32_t  layoutId, int32_t  ppKeyVersion) ;

/// @brief Method GetControllerMapPlayerPrefsKey, addr 0x1803b73b0, size 0x140, virtual false, abstract: false, final false
inline ::StringW GetControllerMapPlayerPrefsKey(::Rewired::Player*  player, ::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  categoryId, int32_t  layoutId, int32_t  ppKeyVersion) ;

/// @brief Method GetControllerMapType, addr 0x1803b74f0, size 0xb0, virtual false, abstract: false, final false
static inline ::System::Type* GetControllerMapType(::Rewired::ControllerType  controllerType) ;

/// @brief Method GetControllerMapXml, addr 0x1803b75a0, size 0xc0, virtual false, abstract: false, final false
inline ::StringW GetControllerMapXml(::Rewired::Player*  player, ::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  categoryId, int32_t  layoutId) ;

/// @brief Method GetDuplicateIndex, addr 0x1803a0eb0, size 0x3d0, virtual false, abstract: false, final false
static inline int32_t GetDuplicateIndex(::Rewired::Player*  player, ::Rewired::ControllerIdentifier  controllerIdentifier) ;

/// @brief Method GetInputBehaviorPlayerPrefsKey, addr 0x1803b7660, size 0x100, virtual false, abstract: false, final false
inline ::StringW GetInputBehaviorPlayerPrefsKey(::Rewired::Player*  player, int32_t  inputBehaviorId) ;

/// @brief Method GetInputBehaviorXml, addr 0x1803b7760, size 0x50, virtual false, abstract: false, final false
inline ::StringW GetInputBehaviorXml(::Rewired::Player*  player, int32_t  id) ;

/// @brief Method GetJoystickCalibrationMapPlayerPrefsKey, addr 0x1803b77b0, size 0x170, virtual false, abstract: false, final false
inline ::StringW GetJoystickCalibrationMapPlayerPrefsKey(::Rewired::Joystick*  joystick) ;

/// @brief Method GetJoystickCalibrationMapXml, addr 0x1803b7920, size 0x50, virtual false, abstract: false, final false
inline ::StringW GetJoystickCalibrationMapXml(::Rewired::Joystick*  joystick) ;

/// @brief Method Load, addr 0x1803ba940, size 0x20, virtual true, abstract: false, final false
inline void Load() ;

/// @brief Method LoadAll, addr 0x1803b7b80, size 0x1d0, virtual false, abstract: false, final false
inline int32_t LoadAll() ;

/// @brief Method LoadAllJoystickCalibrationData, addr 0x1803b7970, size 0x210, virtual false, abstract: false, final false
inline int32_t LoadAllJoystickCalibrationData() ;

/// @brief Method LoadControllerAssignmentData, addr 0x1803b7d50, size 0xb0, virtual false, abstract: false, final false
inline ::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo* LoadControllerAssignmentData() ;

/// @brief Method LoadControllerAssignmentsNow, addr 0x1803b7e00, size 0x70, virtual false, abstract: false, final false
inline bool LoadControllerAssignmentsNow() ;

/// @brief Method LoadControllerData, addr 0x1803b7f50, size 0x30, virtual true, abstract: false, final false
inline void LoadControllerData(::Rewired::ControllerType  controllerType, int32_t  controllerId) ;

/// @brief Method LoadControllerData, addr 0x1803b7f80, size 0xd0, virtual true, abstract: false, final false
inline void LoadControllerData(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId) ;

/// @brief Method LoadControllerDataNow, addr 0x1803b7f30, size 0x20, virtual false, abstract: false, final false
inline int32_t LoadControllerDataNow(::Rewired::ControllerType  controllerType, int32_t  controllerId) ;

/// @brief Method LoadControllerDataNow, addr 0x1803b7e70, size 0xc0, virtual false, abstract: false, final false
inline int32_t LoadControllerDataNow(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId) ;

/// @brief Method LoadControllerElementMapByRole, addr 0x1803b8050, size 0x100, virtual false, abstract: false, final false
inline bool LoadControllerElementMapByRole(::Rewired::Player*  player, ::Rewired::Controller*  controller, ::StringW  role, int32_t  mapCategoryId, int32_t  layoutId, ::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap*>*  elementByRoleMaps) ;

/// @brief Method LoadControllerMap, addr 0x1803b8210, size 0x290, virtual false, abstract: false, final false
inline ::Rewired::ControllerMap* LoadControllerMap(::Rewired::Player*  player, ::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  categoryId, int32_t  layoutId) ;

/// @brief Method LoadControllerMap, addr 0x1803b8150, size 0xc0, virtual true, abstract: false, final false
inline ::Rewired::ControllerMap* LoadControllerMap(int32_t  playerId, ::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  categoryId, int32_t  layoutId) ;

/// @brief Method LoadControllerMaps, addr 0x1803b84a0, size 0x930, virtual false, abstract: false, final false
inline int32_t LoadControllerMaps(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId) ;

/// @brief Method LoadInputBehavior, addr 0x1803b8fb0, size 0x140, virtual true, abstract: false, final false
inline void LoadInputBehavior(int32_t  playerId, int32_t  behaviorId) ;

/// @brief Method LoadInputBehaviorNow, addr 0x1803b8f00, size 0xb0, virtual false, abstract: false, final false
inline int32_t LoadInputBehaviorNow(::Rewired::Player*  player, ::Rewired::InputBehavior*  inputBehavior) ;

/// @brief Method LoadInputBehaviorNow, addr 0x1803b8dd0, size 0x130, virtual false, abstract: false, final false
inline int32_t LoadInputBehaviorNow(int32_t  playerId, int32_t  behaviorId) ;

/// @brief Method LoadInputBehaviors, addr 0x1803b90f0, size 0x290, virtual false, abstract: false, final false
inline int32_t LoadInputBehaviors(int32_t  playerId) ;

/// @brief Method LoadJoystickAssignmentsDeferred, addr 0x1803b9380, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* LoadJoystickAssignmentsDeferred() ;

/// @brief Method LoadJoystickAssignmentsNow, addr 0x1803b93d0, size 0xb50, virtual false, abstract: false, final false
inline bool LoadJoystickAssignmentsNow(::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo*  data) ;

/// @brief Method LoadJoystickCalibrationData, addr 0x1803b9fe0, size 0x80, virtual false, abstract: false, final false
inline int32_t LoadJoystickCalibrationData(::Rewired::Joystick*  joystick) ;

/// @brief Method LoadJoystickCalibrationData, addr 0x1803b9f20, size 0xc0, virtual false, abstract: false, final false
inline int32_t LoadJoystickCalibrationData(int32_t  joystickId) ;

/// @brief Method LoadJoystickData, addr 0x1803ba060, size 0x220, virtual false, abstract: false, final false
inline int32_t LoadJoystickData(int32_t  joystickId) ;

/// @brief Method LoadKeyboardAndMouseAssignmentsNow, addr 0x1803ba280, size 0x320, virtual false, abstract: false, final false
inline bool LoadKeyboardAndMouseAssignmentsNow(::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo*  data) ;

/// @brief Method LoadPlayerData, addr 0x1803ba8c0, size 0x80, virtual true, abstract: false, final false
inline void LoadPlayerData(int32_t  playerId) ;

/// @brief Method LoadPlayerDataNow, addr 0x1803ba5a0, size 0x2c0, virtual false, abstract: false, final false
inline int32_t LoadPlayerDataNow(::Rewired::Player*  player) ;

/// @brief Method LoadPlayerDataNow, addr 0x1803ba860, size 0x60, virtual false, abstract: false, final false
inline int32_t LoadPlayerDataNow(int32_t  playerId) ;

static inline ::Rewired::Data::UserDataStore_PlayerPrefs* New_ctor() ;

/// @brief Method OnControllerConnected, addr 0x1803ba960, size 0xb0, virtual true, abstract: false, final false
inline void OnControllerConnected(::Rewired::ControllerStatusChangedEventArgs*  args) ;

/// @brief Method OnControllerDisconnected, addr 0x1803baa10, size 0x20, virtual true, abstract: false, final false
inline void OnControllerDisconnected(::Rewired::ControllerStatusChangedEventArgs*  args) ;

/// @brief Method OnControllerMapsSaved, addr 0x1803baa30, size 0x1c0, virtual false, abstract: false, final false
inline void OnControllerMapsSaved(::Rewired::Player*  player) ;

/// @brief Method OnControllerPreDisconnect, addr 0x1803babf0, size 0x30, virtual true, abstract: false, final false
inline void OnControllerPreDisconnect(::Rewired::ControllerStatusChangedEventArgs*  args) ;

/// @brief Method OnInitialize, addr 0x1803bac20, size 0x90, virtual true, abstract: false, final false
inline void OnInitialize() ;

/// @brief Method RefreshLayoutManager, addr 0x1803a47b0, size 0x70, virtual false, abstract: false, final false
inline void RefreshLayoutManager(int32_t  playerId) ;

/// @brief Method Save, addr 0x1803bca30, size 0x20, virtual true, abstract: false, final false
inline void Save() ;

/// @brief Method SaveAll, addr 0x1803baea0, size 0x2d0, virtual false, abstract: false, final false
inline void SaveAll() ;

/// @brief Method SaveAllJoystickCalibrationData, addr 0x1803bacb0, size 0x1f0, virtual false, abstract: false, final false
inline void SaveAllJoystickCalibrationData() ;

/// @brief Method SaveControllerAssignments, addr 0x1803bb170, size 0x390, virtual false, abstract: false, final false
inline bool SaveControllerAssignments() ;

/// @brief Method SaveControllerData, addr 0x1803bb610, size 0x40, virtual true, abstract: false, final false
inline void SaveControllerData(::Rewired::ControllerType  controllerType, int32_t  controllerId) ;

/// @brief Method SaveControllerData, addr 0x1803bb590, size 0x80, virtual true, abstract: false, final false
inline void SaveControllerData(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId) ;

/// @brief Method SaveControllerDataNow, addr 0x1803bb560, size 0x30, virtual false, abstract: false, final false
inline void SaveControllerDataNow(::Rewired::ControllerType  controllerType, int32_t  controllerId) ;

/// @brief Method SaveControllerDataNow, addr 0x1803bb500, size 0x60, virtual false, abstract: false, final false
inline void SaveControllerDataNow(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId) ;

/// @brief Method SaveControllerMap, addr 0x1803bbc50, size 0x90, virtual false, abstract: false, final false
inline void SaveControllerMap(::Rewired::Player*  player, ::Rewired::ControllerMap*  controllerMap) ;

/// @brief Method SaveControllerMap, addr 0x1803bbce0, size 0xd0, virtual true, abstract: false, final false
inline void SaveControllerMap(int32_t  playerId, ::Rewired::ControllerMap*  controllerMap) ;

/// @brief Method SaveControllerMapByController, addr 0x1803bb9f0, size 0x260, virtual false, abstract: false, final false
inline void SaveControllerMapByController(::Rewired::Player*  player, ::Rewired::ControllerMap*  controllerMap) ;

/// @brief Method SaveControllerMapByControllerElementRole, addr 0x1803bb650, size 0x3a0, virtual false, abstract: false, final false
inline void SaveControllerMapByControllerElementRole(::Rewired::Player*  player, ::Rewired::Controller*  controller, ::Rewired::ControllerMap*  controllerMap) ;

/// @brief Method SaveControllerMaps, addr 0x1803bbf80, size 0x150, virtual false, abstract: false, final false
inline void SaveControllerMaps(::Rewired::Player*  player, ::Rewired::PlayerSaveData  playerSaveData) ;

/// @brief Method SaveControllerMaps, addr 0x1803bbdb0, size 0x1d0, virtual false, abstract: false, final false
inline void SaveControllerMaps(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId) ;

/// @brief Method SaveInputBehavior, addr 0x1803bc1f0, size 0x100, virtual true, abstract: false, final false
inline void SaveInputBehavior(int32_t  playerId, int32_t  behaviorId) ;

/// @brief Method SaveInputBehaviorNow, addr 0x1803bc0d0, size 0x50, virtual false, abstract: false, final false
inline void SaveInputBehaviorNow(::Rewired::Player*  player, ::Rewired::InputBehavior*  inputBehavior) ;

/// @brief Method SaveInputBehaviorNow, addr 0x1803bc120, size 0xd0, virtual false, abstract: false, final false
inline void SaveInputBehaviorNow(int32_t  playerId, int32_t  behaviorId) ;

/// @brief Method SaveInputBehaviors, addr 0x1803bc2f0, size 0xb0, virtual false, abstract: false, final false
inline void SaveInputBehaviors(::Rewired::Player*  player, ::Rewired::PlayerSaveData  playerSaveData) ;

/// @brief Method SaveJoystickCalibrationData, addr 0x1803bc450, size 0x80, virtual false, abstract: false, final false
inline void SaveJoystickCalibrationData(::Rewired::Joystick*  joystick) ;

/// @brief Method SaveJoystickCalibrationData, addr 0x1803bc3a0, size 0xb0, virtual false, abstract: false, final false
inline void SaveJoystickCalibrationData(int32_t  joystickId) ;

/// @brief Method SaveJoystickData, addr 0x1803bc4d0, size 0x200, virtual false, abstract: false, final false
inline void SaveJoystickData(int32_t  joystickId) ;

/// @brief Method SavePlayerData, addr 0x1803bc990, size 0xa0, virtual true, abstract: false, final false
inline void SavePlayerData(int32_t  playerId) ;

/// @brief Method SavePlayerDataNow, addr 0x1803bc6d0, size 0x240, virtual false, abstract: false, final false
inline void SavePlayerDataNow(::Rewired::Player*  player) ;

/// @brief Method SavePlayerDataNow, addr 0x1803bc910, size 0x80, virtual false, abstract: false, final false
inline void SavePlayerDataNow(int32_t  playerId) ;

/// @brief Method SortOldestToNewest, addr 0x1803a6bc0, size 0xd0, virtual false, abstract: false, final false
static inline int32_t SortOldestToNewest(::Rewired::ControllerMapSaveData*  a, ::Rewired::ControllerMapSaveData*  b) ;

/// @brief Method TryFindJoysticksImprecise, addr 0x1803a6c90, size 0x260, virtual false, abstract: false, final false
inline bool TryFindJoysticksImprecise(::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo*  joystickInfo, ::by_ref<::System::Collections::Generic::List_1<::Rewired::Joystick*>*>  matches) ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get___allActionIds() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get___allActionIds() ;

constexpr ::StringW const& __cordl_internal_get___allActionIdsString() const;

constexpr ::StringW& __cordl_internal_get___allActionIdsString() ;

constexpr ::Rewired::Data::UserDataStore_PlayerPrefs_ActionMappingSaveMode const& __cordl_internal_get__actionMappingSaveMode() const;

constexpr ::Rewired::Data::UserDataStore_PlayerPrefs_ActionMappingSaveMode& __cordl_internal_get__actionMappingSaveMode() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get__sb() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get__sb() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap*>* const& __cordl_internal_get__tempElementByRoleMaps() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap*>*& __cordl_internal_get__tempElementByRoleMaps() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,bool>* const& __cordl_internal_get__tempElementByRoleMapsEnabled() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,bool>*& __cordl_internal_get__tempElementByRoleMapsEnabled() ;

constexpr bool const& __cordl_internal_get_allowImpreciseJoystickAssignmentMatching() const;

constexpr bool& __cordl_internal_get_allowImpreciseJoystickAssignmentMatching() ;

constexpr bool const& __cordl_internal_get_deferredJoystickAssignmentLoadPending() const;

constexpr bool& __cordl_internal_get_deferredJoystickAssignmentLoadPending() ;

constexpr bool const& __cordl_internal_get_isEnabled() const;

constexpr bool& __cordl_internal_get_isEnabled() ;

constexpr bool const& __cordl_internal_get_loadDataOnStart() const;

constexpr bool& __cordl_internal_get_loadDataOnStart() ;

constexpr bool const& __cordl_internal_get_loadJoystickAssignments() const;

constexpr bool& __cordl_internal_get_loadJoystickAssignments() ;

constexpr bool const& __cordl_internal_get_loadKeyboardAssignments() const;

constexpr bool& __cordl_internal_get_loadKeyboardAssignments() ;

constexpr bool const& __cordl_internal_get_loadMouseAssignments() const;

constexpr bool& __cordl_internal_get_loadMouseAssignments() ;

constexpr ::StringW const& __cordl_internal_get_playerPrefsKeyPrefix() const;

constexpr ::StringW& __cordl_internal_get_playerPrefsKeyPrefix() ;

constexpr bool const& __cordl_internal_get_wasJoystickEverDetected() const;

constexpr bool& __cordl_internal_get_wasJoystickEverDetected() ;

constexpr void __cordl_internal_set___allActionIds(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set___allActionIdsString(::StringW  value) ;

constexpr void __cordl_internal_set__actionMappingSaveMode(::Rewired::Data::UserDataStore_PlayerPrefs_ActionMappingSaveMode  value) ;

constexpr void __cordl_internal_set__sb(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set__tempElementByRoleMaps(::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap*>*  value) ;

constexpr void __cordl_internal_set__tempElementByRoleMapsEnabled(::System::Collections::Generic::Dictionary_2<::StringW,bool>*  value) ;

constexpr void __cordl_internal_set_allowImpreciseJoystickAssignmentMatching(bool  value) ;

constexpr void __cordl_internal_set_deferredJoystickAssignmentLoadPending(bool  value) ;

constexpr void __cordl_internal_set_isEnabled(bool  value) ;

constexpr void __cordl_internal_set_loadDataOnStart(bool  value) ;

constexpr void __cordl_internal_set_loadJoystickAssignments(bool  value) ;

constexpr void __cordl_internal_set_loadKeyboardAssignments(bool  value) ;

constexpr void __cordl_internal_set_loadMouseAssignments(bool  value) ;

constexpr void __cordl_internal_set_playerPrefsKeyPrefix(::StringW  value) ;

constexpr void __cordl_internal_set_wasJoystickEverDetected(bool  value) ;

/// @brief Method .ctor, addr 0x1803bca50, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsEnabled, addr 0x1803a7410, size 0x10, virtual false, abstract: false, final false
inline bool get_IsEnabled() ;

/// @brief Method get_LoadDataOnStart, addr 0x1803a7440, size 0x10, virtual false, abstract: false, final false
inline bool get_LoadDataOnStart() ;

/// @brief Method get_LoadJoystickAssignments, addr 0x1803a7450, size 0x10, virtual false, abstract: false, final false
inline bool get_LoadJoystickAssignments() ;

/// @brief Method get_LoadKeyboardAssignments, addr 0x1803a7460, size 0x10, virtual false, abstract: false, final false
inline bool get_LoadKeyboardAssignments() ;

/// @brief Method get_LoadMouseAssignments, addr 0x1803a7470, size 0x10, virtual false, abstract: false, final false
inline bool get_LoadMouseAssignments() ;

/// @brief Method get_PlayerPrefsKeyPrefix, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_PlayerPrefsKeyPrefix() ;

/// @brief Method get_actionMappingSaveMode, addr 0x1803914a0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Data::UserDataStore_PlayerPrefs_ActionMappingSaveMode get_actionMappingSaveMode() ;

/// @brief Method get_allActionIds, addr 0x1803bcbd0, size 0x200, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<int32_t>* get_allActionIds() ;

/// @brief Method get_allActionIdsString, addr 0x1803bcad0, size 0x100, virtual false, abstract: false, final false
inline ::StringW get_allActionIdsString() ;

/// @brief Method get_loadControllerAssignments, addr 0x1803a7420, size 0x20, virtual false, abstract: false, final false
inline bool get_loadControllerAssignments() ;

/// @brief Method get_playerPrefsKey_controllerAssignments, addr 0x1803bcdd0, size 0x20, virtual false, abstract: false, final false
inline ::StringW get_playerPrefsKey_controllerAssignments() ;

/// @brief Method set_IsEnabled, addr 0x1803a7480, size 0x10, virtual false, abstract: false, final false
inline void set_IsEnabled(bool  value) ;

/// @brief Method set_LoadDataOnStart, addr 0x1803a7490, size 0x10, virtual false, abstract: false, final false
inline void set_LoadDataOnStart(bool  value) ;

/// @brief Method set_LoadJoystickAssignments, addr 0x1803a74a0, size 0x10, virtual false, abstract: false, final false
inline void set_LoadJoystickAssignments(bool  value) ;

/// @brief Method set_LoadKeyboardAssignments, addr 0x1803a74b0, size 0x10, virtual false, abstract: false, final false
inline void set_LoadKeyboardAssignments(bool  value) ;

/// @brief Method set_LoadMouseAssignments, addr 0x1803a74c0, size 0x10, virtual false, abstract: false, final false
inline void set_LoadMouseAssignments(bool  value) ;

/// @brief Method set_PlayerPrefsKeyPrefix, addr 0x1802d9830, size 0x10, virtual false, abstract: false, final false
inline void set_PlayerPrefsKeyPrefix(::StringW  value) ;

/// @brief Method set_actionMappingSaveMode, addr 0x1803914c0, size 0x10, virtual false, abstract: false, final false
inline void set_actionMappingSaveMode(::Rewired::Data::UserDataStore_PlayerPrefs_ActionMappingSaveMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserDataStore_PlayerPrefs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserDataStore_PlayerPrefs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserDataStore_PlayerPrefs(UserDataStore_PlayerPrefs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserDataStore_PlayerPrefs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserDataStore_PlayerPrefs(UserDataStore_PlayerPrefs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5694};

/// @brief Field controllerElementByRoleMapPPKeyVersion offset 0xffffffff size 0x4
static constexpr int32_t  controllerElementByRoleMapPPKeyVersion{static_cast<int32_t>(0x0)};

/// @brief Field controllerMapPPKeyVersion offset 0xffffffff size 0x4
static constexpr int32_t  controllerMapPPKeyVersion{static_cast<int32_t>(0x2)};

/// @brief Field controllerMapPPKeyVersion_includeDuplicateJoystickIndex offset 0xffffffff size 0x4
static constexpr int32_t  controllerMapPPKeyVersion_includeDuplicateJoystickIndex{static_cast<int32_t>(0x1)};

/// @brief Field controllerMapPPKeyVersion_includeFormatVersion offset 0xffffffff size 0x4
static constexpr int32_t  controllerMapPPKeyVersion_includeFormatVersion{static_cast<int32_t>(0x2)};

/// @brief Field controllerMapPPKeyVersion_original offset 0xffffffff size 0x4
static constexpr int32_t  controllerMapPPKeyVersion_original{static_cast<int32_t>(0x0)};

/// @brief Field controllerMapPPKeyVersion_supportDisconnectedControllers offset 0xffffffff size 0x4
static constexpr int32_t  controllerMapPPKeyVersion_supportDisconnectedControllers{static_cast<int32_t>(0x2)};

/// @brief Field logPrefix offset 0xffffffff size 0x8
static constexpr ::ConstString  logPrefix{u"Rewired: "};

/// @brief Field playerPrefsKeySuffix_controllerAssignments offset 0xffffffff size 0x8
static constexpr ::ConstString  playerPrefsKeySuffix_controllerAssignments{u"ControllerAssignments"};

/// @brief Field thisScriptName offset 0xffffffff size 0x8
static constexpr ::ConstString  thisScriptName{u"UserDataStore_PlayerPrefs"};

/// @brief Field isEnabled, offset: 0x20, size: 0x1, def value: None
 bool  ___isEnabled;

/// @brief Field loadDataOnStart, offset: 0x21, size: 0x1, def value: None
 bool  ___loadDataOnStart;

/// @brief Field loadJoystickAssignments, offset: 0x22, size: 0x1, def value: None
 bool  ___loadJoystickAssignments;

/// @brief Field loadKeyboardAssignments, offset: 0x23, size: 0x1, def value: None
 bool  ___loadKeyboardAssignments;

/// @brief Field loadMouseAssignments, offset: 0x24, size: 0x1, def value: None
 bool  ___loadMouseAssignments;

/// @brief Field _actionMappingSaveMode, offset: 0x28, size: 0x4, def value: None
 ::Rewired::Data::UserDataStore_PlayerPrefs_ActionMappingSaveMode  ____actionMappingSaveMode;

/// @brief Field playerPrefsKeyPrefix, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___playerPrefsKeyPrefix;

/// @brief Field allowImpreciseJoystickAssignmentMatching, offset: 0x38, size: 0x1, def value: None
 bool  ___allowImpreciseJoystickAssignmentMatching;

/// @brief Field deferredJoystickAssignmentLoadPending, offset: 0x39, size: 0x1, def value: None
 bool  ___deferredJoystickAssignmentLoadPending;

/// @brief Field wasJoystickEverDetected, offset: 0x3a, size: 0x1, def value: None
 bool  ___wasJoystickEverDetected;

/// @brief Field __allActionIds, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  _____allActionIds;

/// @brief Field __allActionIdsString, offset: 0x48, size: 0x8, def value: None
 ::StringW  _____allActionIdsString;

/// @brief Field _sb, offset: 0x50, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ____sb;

/// @brief Field _tempElementByRoleMaps, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap*>*  ____tempElementByRoleMaps;

/// @brief Field _tempElementByRoleMapsEnabled, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,bool>*  ____tempElementByRoleMapsEnabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::UserDataStore_PlayerPrefs, ___isEnabled) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::UserDataStore_PlayerPrefs, ___loadDataOnStart) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::UserDataStore_PlayerPrefs, ___loadJoystickAssignments) == 0x22, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::UserDataStore_PlayerPrefs, ___loadKeyboardAssignments) == 0x23, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::UserDataStore_PlayerPrefs, ___loadMouseAssignments) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::UserDataStore_PlayerPrefs, ____actionMappingSaveMode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::UserDataStore_PlayerPrefs, ___playerPrefsKeyPrefix) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::UserDataStore_PlayerPrefs, ___allowImpreciseJoystickAssignmentMatching) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::UserDataStore_PlayerPrefs, ___deferredJoystickAssignmentLoadPending) == 0x39, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::UserDataStore_PlayerPrefs, ___wasJoystickEverDetected) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::UserDataStore_PlayerPrefs, _____allActionIds) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::UserDataStore_PlayerPrefs, _____allActionIdsString) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::UserDataStore_PlayerPrefs, ____sb) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::UserDataStore_PlayerPrefs, ____tempElementByRoleMaps) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::UserDataStore_PlayerPrefs, ____tempElementByRoleMapsEnabled) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::UserDataStore_PlayerPrefs) == 0x68, "Size mismatch!");

} // namespace end def Rewired::Data

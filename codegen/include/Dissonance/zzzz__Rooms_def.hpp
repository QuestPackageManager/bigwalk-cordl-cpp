#pragma once
// IWYU pragma private; include "Dissonance/Rooms.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Rooms)
namespace Dissonance {
class IRooms;
}
namespace Dissonance {
class Log;
}
namespace Dissonance {
class RoomMembershipComparer;
}
namespace Dissonance {
struct RoomMembership;
}
namespace Dissonance {
struct RoomName;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Dissonance {
class Rooms;
}
// Write type traits
MARK_REF_T(::Dissonance::Rooms*);
DEFINE_IL2CPP_CLASS(::Dissonance::Rooms*, "Dissonance", "Rooms");
// Dependencies System.Object
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.Rooms
class CORDL_TYPE Rooms : public ::System::Object {
public:
// Declarations
/// @brief Field Comparer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Comparer, put=setStaticF_Comparer)) ::Dissonance::RoomMembershipComparer*  Comparer;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) ::Dissonance::RoomMembership  Item[];

/// @brief Field JoinedRoom, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_JoinedRoom, put=__cordl_internal_set_JoinedRoom)) ::System::Action_1<::StringW>*  JoinedRoom;

/// @brief Field LeftRoom, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_LeftRoom, put=__cordl_internal_set_LeftRoom)) ::System::Action_1<::StringW>*  LeftRoom;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

 __declspec(property(get=get_Memberships)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  Memberships;

/// @brief Field _roomNames, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__roomNames, put=__cordl_internal_set__roomNames)) ::System::Collections::Generic::List_1<::StringW>*  _roomNames;

/// @brief Field _roomNamesReadonly, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__roomNamesReadonly, put=__cordl_internal_set__roomNamesReadonly)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  _roomNamesReadonly;

/// @brief Field _rooms, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__rooms, put=__cordl_internal_set__rooms)) ::System::Collections::Generic::List_1<::Dissonance::RoomMembership>*  _rooms;

/// @brief Convert operator to "::Dissonance::IRooms"
constexpr operator  ::Dissonance::IRooms*() noexcept;

/// @brief Method Contains, addr 0x1805cfe90, size 0xc0, virtual false, abstract: false, final false
inline bool Contains(::StringW  roomName) ;

/// @brief Method Dissonance.IRooms.Name, addr 0x1805cff50, size 0x70, virtual true, abstract: false, final true
inline ::StringW Dissonance_IRooms_Name(uint16_t  roomId) ;

/// @brief Method FindById, addr 0x1805cffc0, size 0xd0, virtual false, abstract: false, final false
inline ::System::Nullable_1<int32_t> FindById(uint16_t  id) ;

/// @brief Method Join, addr 0x1805d0110, size 0x290, virtual false, abstract: false, final false
inline ::Dissonance::RoomMembership Join(::Dissonance::RoomName  roomName) ;

/// @brief Method Join, addr 0x1805d0090, size 0x80, virtual false, abstract: false, final false
inline ::Dissonance::RoomMembership Join(::StringW  roomName) ;

/// @brief Method Leave, addr 0x1805d03a0, size 0x1b0, virtual false, abstract: false, final false
inline bool Leave(::Dissonance::RoomMembership  membership) ;

/// @brief Method Name, addr 0x1805d0550, size 0x70, virtual false, abstract: false, final false
inline ::StringW Name(uint16_t  roomId) ;

static inline ::Dissonance::Rooms* New_ctor() ;

/// @brief Method OnJoinedRoom, addr 0x1805d05c0, size 0x80, virtual false, abstract: false, final false
inline void OnJoinedRoom(::Dissonance::RoomMembership  membership) ;

/// @brief Method OnLeftRoom, addr 0x1805d0640, size 0x70, virtual false, abstract: false, final false
inline void OnLeftRoom(::Dissonance::RoomMembership  membership) ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_JoinedRoom() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_JoinedRoom() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_LeftRoom() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_LeftRoom() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__roomNames() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__roomNames() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* const& __cordl_internal_get__roomNamesReadonly() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*& __cordl_internal_get__roomNamesReadonly() ;

constexpr ::System::Collections::Generic::List_1<::Dissonance::RoomMembership>* const& __cordl_internal_get__rooms() const;

constexpr ::System::Collections::Generic::List_1<::Dissonance::RoomMembership>*& __cordl_internal_get__rooms() ;

constexpr void __cordl_internal_set_JoinedRoom(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_LeftRoom(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__roomNames(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__roomNamesReadonly(::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__rooms(::System::Collections::Generic::List_1<::Dissonance::RoomMembership>*  value) ;

/// @brief Method .ctor, addr 0x1805d0730, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_JoinedRoom, addr 0x1805d07e0, size 0x90, virtual false, abstract: false, final false
inline void add_JoinedRoom(::System::Action_1<::StringW>*  value) ;

/// @brief Method add_LeftRoom, addr 0x1805d0870, size 0x90, virtual false, abstract: false, final false
inline void add_LeftRoom(::System::Action_1<::StringW>*  value) ;

static inline ::Dissonance::RoomMembershipComparer* getStaticF_Comparer() ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_Count, addr 0x1802f4180, size 0x20, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0x1805d0900, size 0x40, virtual false, abstract: false, final false
inline ::Dissonance::RoomMembership get_Item(int32_t  i) ;

/// @brief Method get_Memberships, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* get_Memberships() ;

/// @brief Convert to "::Dissonance::IRooms"
constexpr ::Dissonance::IRooms* i___Dissonance__IRooms() noexcept;

/// @brief Method remove_JoinedRoom, addr 0x1805d0940, size 0x90, virtual false, abstract: false, final false
inline void remove_JoinedRoom(::System::Action_1<::StringW>*  value) ;

/// @brief Method remove_LeftRoom, addr 0x1805d09d0, size 0x90, virtual false, abstract: false, final false
inline void remove_LeftRoom(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF_Comparer(::Dissonance::RoomMembershipComparer*  value) ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Rooms() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Rooms", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Rooms(Rooms && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Rooms", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Rooms(Rooms const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16821};

/// @brief Field _rooms, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Dissonance::RoomMembership>*  ____rooms;

/// @brief Field _roomNames, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____roomNames;

/// @brief Field _roomNamesReadonly, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  ____roomNamesReadonly;

/// @brief Field JoinedRoom, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___JoinedRoom;

/// @brief Field LeftRoom, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___LeftRoom;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Rooms, ____rooms) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Rooms, ____roomNames) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Rooms, ____roomNamesReadonly) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Rooms, ___JoinedRoom) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Rooms, ___LeftRoom) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Rooms) == 0x38, "Size mismatch!");

} // namespace end def Dissonance

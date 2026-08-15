#pragma once
// IWYU pragma private; include "Dissonance/Rooms.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/zzzz__Rooms_def.hpp"
#include "Dissonance/zzzz__IRooms_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "Dissonance/zzzz__RoomMembershipComparer_def.hpp"
#include "Dissonance/zzzz__RoomMembership_def.hpp"
#include "Dissonance/zzzz__RoomName_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Rooms.get_Memberships
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* (::Dissonance::Rooms::*)()>(&::Dissonance::Rooms::get_Memberships)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {"get_Memberships", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Rooms.add_JoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Rooms::*)(::System::Action_1<::StringW>*)>(&::Dissonance::Rooms::add_JoinedRoom)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805d07e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {"add_JoinedRoom", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Rooms.remove_JoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Rooms::*)(::System::Action_1<::StringW>*)>(&::Dissonance::Rooms::remove_JoinedRoom)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805d0940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {"remove_JoinedRoom", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Rooms.add_LeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Rooms::*)(::System::Action_1<::StringW>*)>(&::Dissonance::Rooms::add_LeftRoom)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805d0870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {"add_LeftRoom", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Rooms.remove_LeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Rooms::*)(::System::Action_1<::StringW>*)>(&::Dissonance::Rooms::remove_LeftRoom)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805d09d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {"remove_LeftRoom", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Rooms._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Rooms::*)()>(&::Dissonance::Rooms::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805d0730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Rooms.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Rooms::*)()>(&::Dissonance::Rooms::get_Count)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f4180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Rooms.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::RoomMembership (::Dissonance::Rooms::*)(int32_t)>(&::Dissonance::Rooms::get_Item)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805d0900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Rooms.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Rooms::*)(::StringW)>(&::Dissonance::Rooms::Contains)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805cfe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {"Contains", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Rooms.Join
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::RoomMembership (::Dissonance::Rooms::*)(::StringW)>(&::Dissonance::Rooms::Join)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805d0090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {"Join", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Rooms.Join
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::RoomMembership (::Dissonance::Rooms::*)(::Dissonance::RoomName)>(&::Dissonance::Rooms::Join)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1805d0110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {"Join", {}, {::i2c::type_of<::Dissonance::RoomName>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Rooms.Leave
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Rooms::*)(::Dissonance::RoomMembership)>(&::Dissonance::Rooms::Leave)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1805d03a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {"Leave", {}, {::i2c::type_of<::Dissonance::RoomMembership>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Rooms.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Rooms::*)(::Dissonance::RoomMembership)>(&::Dissonance::Rooms::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805d05c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {"OnJoinedRoom", {}, {::i2c::type_of<::Dissonance::RoomMembership>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Rooms.OnLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Rooms::*)(::Dissonance::RoomMembership)>(&::Dissonance::Rooms::OnLeftRoom)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805d0640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {"OnLeftRoom", {}, {::i2c::type_of<::Dissonance::RoomMembership>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Rooms.Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::Rooms::*)(uint16_t)>(&::Dissonance::Rooms::Name)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805d0550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {"Name", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Rooms.Dissonance_IRooms_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::Rooms::*)(uint16_t)>(&::Dissonance::Rooms::Dissonance_IRooms_Name)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805cff50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {"Dissonance.IRooms.Name", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Rooms.FindById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (::Dissonance::Rooms::*)(uint16_t)>(&::Dissonance::Rooms::FindById)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805cffc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {"FindById", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Dissonance::RoomMembership>*& Dissonance::Rooms::__cordl_internal_get__rooms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rooms;
}
constexpr ::System::Collections::Generic::List_1<::Dissonance::RoomMembership>* const& Dissonance::Rooms::__cordl_internal_get__rooms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rooms;
}
constexpr void Dissonance::Rooms::__cordl_internal_set__rooms(::System::Collections::Generic::List_1<::Dissonance::RoomMembership>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rooms = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Dissonance::Rooms::__cordl_internal_get__roomNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomNames;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Dissonance::Rooms::__cordl_internal_get__roomNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomNames;
}
constexpr void Dissonance::Rooms::__cordl_internal_set__roomNames(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____roomNames = value;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*& Dissonance::Rooms::__cordl_internal_get__roomNamesReadonly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomNamesReadonly;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* const& Dissonance::Rooms::__cordl_internal_get__roomNamesReadonly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomNamesReadonly;
}
constexpr void Dissonance::Rooms::__cordl_internal_set__roomNamesReadonly(::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____roomNamesReadonly = value;
}
constexpr ::System::Action_1<::StringW>*& Dissonance::Rooms::__cordl_internal_get_JoinedRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JoinedRoom;
}
constexpr ::System::Action_1<::StringW>* const& Dissonance::Rooms::__cordl_internal_get_JoinedRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JoinedRoom;
}
constexpr void Dissonance::Rooms::__cordl_internal_set_JoinedRoom(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JoinedRoom = value;
}
constexpr ::System::Action_1<::StringW>*& Dissonance::Rooms::__cordl_internal_get_LeftRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LeftRoom;
}
constexpr ::System::Action_1<::StringW>* const& Dissonance::Rooms::__cordl_internal_get_LeftRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LeftRoom;
}
constexpr void Dissonance::Rooms::__cordl_internal_set_LeftRoom(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LeftRoom = value;
}
inline void Dissonance::Rooms::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Rooms*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::Rooms::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Rooms*>();
}
inline void Dissonance::Rooms::setStaticF_Comparer(::Dissonance::RoomMembershipComparer*  value)  {
::cordl_internals::setStaticField<::Dissonance::RoomMembershipComparer*, "Comparer", ::Dissonance::Rooms*>(std::forward<::Dissonance::RoomMembershipComparer*>(value));
}
inline ::Dissonance::RoomMembershipComparer* Dissonance::Rooms::getStaticF_Comparer()  {
return ::cordl_internals::getStaticField<::Dissonance::RoomMembershipComparer*, "Comparer", ::Dissonance::Rooms*>();
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* Dissonance::Rooms::get_Memberships()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {"get_Memberships", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*>(this, ___internal_method);
}
inline void Dissonance::Rooms::add_JoinedRoom(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {"add_JoinedRoom", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Rooms::remove_JoinedRoom(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {"remove_JoinedRoom", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Rooms::add_LeftRoom(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {"add_LeftRoom", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Rooms::remove_LeftRoom(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {"remove_LeftRoom", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Rooms::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Dissonance::Rooms::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Dissonance::RoomMembership Dissonance::Rooms::get_Item(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::RoomMembership>(this, ___internal_method, i);
}
inline bool Dissonance::Rooms::Contains(::StringW  roomName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {"Contains", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, roomName);
}
inline ::Dissonance::RoomMembership Dissonance::Rooms::Join(::StringW  roomName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {"Join", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::RoomMembership>(this, ___internal_method, roomName);
}
inline ::Dissonance::RoomMembership Dissonance::Rooms::Join(::Dissonance::RoomName  roomName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {"Join", {}, {::i2c::type_of<::Dissonance::RoomName>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::RoomMembership>(this, ___internal_method, roomName);
}
inline bool Dissonance::Rooms::Leave(::Dissonance::RoomMembership  membership)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {"Leave", {}, {::i2c::type_of<::Dissonance::RoomMembership>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, membership);
}
inline void Dissonance::Rooms::OnJoinedRoom(::Dissonance::RoomMembership  membership)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {"OnJoinedRoom", {}, {::i2c::type_of<::Dissonance::RoomMembership>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, membership);
}
inline void Dissonance::Rooms::OnLeftRoom(::Dissonance::RoomMembership  membership)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {"OnLeftRoom", {}, {::i2c::type_of<::Dissonance::RoomMembership>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, membership);
}
inline ::StringW Dissonance::Rooms::Name(uint16_t  roomId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {"Name", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, roomId);
}
inline ::StringW Dissonance::Rooms::Dissonance_IRooms_Name(uint16_t  roomId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {"Dissonance.IRooms.Name", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, roomId);
}
inline ::System::Nullable_1<int32_t> Dissonance::Rooms::FindById(uint16_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Rooms*>(),
                        {"FindById", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(this, ___internal_method, id);
}
inline ::Dissonance::Rooms* Dissonance::Rooms::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Rooms*>());
}
/// @brief Convert operator to "::Dissonance::IRooms"
constexpr  Dissonance::Rooms::operator ::Dissonance::IRooms*() noexcept {
return static_cast<::Dissonance::IRooms*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::IRooms"
constexpr ::Dissonance::IRooms* Dissonance::Rooms::i___Dissonance__IRooms() noexcept {
return static_cast<::Dissonance::IRooms*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Rooms::Rooms()   {
}

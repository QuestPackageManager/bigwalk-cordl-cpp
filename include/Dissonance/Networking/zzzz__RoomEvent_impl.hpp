#pragma once
// IWYU pragma private; include "Dissonance/Networking/RoomEvent.hpp"
#include "Dissonance/Networking/zzzz__RoomEvent_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Networking::RoomEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::RoomEvent::*)(::StringW, ::StringW, bool, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*)>(&::Dissonance::Networking::RoomEvent::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805e7970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::RoomEvent>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Networking::RoomEvent::_ctor(::StringW  name, ::StringW  room, bool  joined, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  rooms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::RoomEvent>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, room, joined, rooms);
}
// Ctor Parameters [CppParam { name: "PlayerName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "Room", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "Joined", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "Rooms", ty: "::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Networking::RoomEvent::RoomEvent(::StringW  PlayerName, ::StringW  Room, bool  Joined, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  Rooms) noexcept  {
this->PlayerName = PlayerName;
this->Room = Room;
this->Joined = Joined;
this->Rooms = Rooms;
}
// Ctor Parameters []
constexpr ::Dissonance::Networking::RoomEvent::RoomEvent()   {
}

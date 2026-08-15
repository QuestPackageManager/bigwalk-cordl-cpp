#pragma once
// IWYU pragma private; include "Rewired/Data/UserDataStore_KeyValue.hpp"
#include "Rewired/Data/zzzz__UserDataStore_impl.hpp"
#include "Rewired/zzzz__AxisRange_impl.hpp"
#include "Rewired/zzzz__ControllerElementType_impl.hpp"
#include "Rewired/zzzz__Pole_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Data/zzzz__UserDataStore_KeyValue_def.hpp"
#include "Rewired/Data/zzzz__UserDataStore_KeyValue_def.hpp"
#include "Rewired/zzzz__ActionElementMap_def.hpp"
#include "Rewired/zzzz__ControllerIdentifier_def.hpp"
#include "Rewired/zzzz__ControllerMapSaveData_def.hpp"
#include "Rewired/zzzz__ControllerMap_def.hpp"
#include "Rewired/zzzz__ControllerStatusChangedEventArgs_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__ElementAssignment_def.hpp"
#include "Rewired/zzzz__InputBehavior_def.hpp"
#include "Rewired/zzzz__Joystick_def.hpp"
#include "Rewired/zzzz__PlayerSaveData_def.hpp"
#include "Rewired/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo::*)()>(&::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Guid& Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo::__cordl_internal_get_instanceGuid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceGuid;
}
constexpr ::System::Guid const& Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo::__cordl_internal_get_instanceGuid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceGuid;
}
constexpr void Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo::__cordl_internal_set_instanceGuid(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instanceGuid = value;
}
constexpr ::StringW& Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo::__cordl_internal_get_hardwareIdentifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hardwareIdentifier;
}
constexpr ::StringW const& Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo::__cordl_internal_get_hardwareIdentifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hardwareIdentifier;
}
constexpr void Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo::__cordl_internal_set_hardwareIdentifier(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hardwareIdentifier = value;
}
constexpr int32_t& Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr int32_t const& Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo::__cordl_internal_set_id(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___id = value;
}
inline void Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo* Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo()   {
}
//  Writing Method size for method: ::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo.get_joystickCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo::*)()>(&::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo::get_joystickCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803aba50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo*>(),
                        {"get_joystickCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo.IndexOfJoystick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo::*)(int32_t)>(&::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo::IndexOfJoystick)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803ab9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo*>(),
                        {"IndexOfJoystick", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo.ContainsJoystick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo::*)(int32_t)>(&::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo::ContainsJoystick)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803ab990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo*>(),
                        {"ContainsJoystick", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo::*)()>(&::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr int32_t const& Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo::__cordl_internal_set_id(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___id = value;
}
constexpr bool& Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo::__cordl_internal_get_hasKeyboard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasKeyboard;
}
constexpr bool const& Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo::__cordl_internal_get_hasKeyboard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasKeyboard;
}
constexpr void Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo::__cordl_internal_set_hasKeyboard(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasKeyboard = value;
}
constexpr bool& Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo::__cordl_internal_get_hasMouse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasMouse;
}
constexpr bool const& Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo::__cordl_internal_get_hasMouse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasMouse;
}
constexpr void Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo::__cordl_internal_set_hasMouse(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasMouse = value;
}
constexpr ::ArrayW<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo*>& Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo::__cordl_internal_get_joysticks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joysticks;
}
constexpr ::ArrayW<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo*> const& Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo::__cordl_internal_get_joysticks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joysticks;
}
constexpr void Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo::__cordl_internal_set_joysticks(::ArrayW<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joysticks = value;
}
inline int32_t Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo::get_joystickCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo*>(),
                        {"get_joystickCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo::IndexOfJoystick(int32_t  joystickId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo*>(),
                        {"IndexOfJoystick", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, joystickId);
}
inline bool Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo::ContainsJoystick(int32_t  joystickId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo*>(),
                        {"ContainsJoystick", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, joystickId);
}
inline void Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo* Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo()   {
}
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo.get_playerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo::*)()>(&::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo::get_playerCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803a9050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo*>(),
                        {"get_playerCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo::*)()>(&::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo::*)(int32_t)>(&::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803a8f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo.IndexOfPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo::*)(int32_t)>(&::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo::IndexOfPlayer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803a8eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo*>(),
                        {"IndexOfPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo.ContainsPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo::*)(int32_t)>(&::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo::ContainsPlayer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803a8e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo*>(),
                        {"ContainsPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo*>& Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo::__cordl_internal_get_players()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___players;
}
constexpr ::ArrayW<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo*> const& Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo::__cordl_internal_get_players() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___players;
}
constexpr void Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo::__cordl_internal_set_players(::ArrayW<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_PlayerInfo*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___players = value;
}
inline int32_t Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo::get_playerCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo*>(),
                        {"get_playerCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo::_ctor(int32_t  playerCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCount);
}
inline int32_t Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo::IndexOfPlayer(int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo*>(),
                        {"IndexOfPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, playerId);
}
inline bool Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo::ContainsPlayer(int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo*>(),
                        {"ContainsPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerId);
}
inline ::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo* Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo*>());
}
inline ::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo* Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo::New_ctor(int32_t  playerCount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo*>(playerCount));
}
// Ctor Parameters []
constexpr ::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo::UserDataStore_KeyValue_ControllerAssignmentSaveInfo()   {
}
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue_JoystickAssignmentHistoryInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue_JoystickAssignmentHistoryInfo::*)(::Rewired::Joystick*, int32_t)>(&::Rewired::Data::UserDataStore_KeyValue_JoystickAssignmentHistoryInfo::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803aacc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_JoystickAssignmentHistoryInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Joystick*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Joystick*& Rewired::Data::UserDataStore_KeyValue_JoystickAssignmentHistoryInfo::__cordl_internal_get_joystick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystick;
}
constexpr ::Rewired::Joystick* const& Rewired::Data::UserDataStore_KeyValue_JoystickAssignmentHistoryInfo::__cordl_internal_get_joystick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystick;
}
constexpr void Rewired::Data::UserDataStore_KeyValue_JoystickAssignmentHistoryInfo::__cordl_internal_set_joystick(::Rewired::Joystick*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joystick = value;
}
constexpr int32_t& Rewired::Data::UserDataStore_KeyValue_JoystickAssignmentHistoryInfo::__cordl_internal_get_oldJoystickId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oldJoystickId;
}
constexpr int32_t const& Rewired::Data::UserDataStore_KeyValue_JoystickAssignmentHistoryInfo::__cordl_internal_get_oldJoystickId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oldJoystickId;
}
constexpr void Rewired::Data::UserDataStore_KeyValue_JoystickAssignmentHistoryInfo::__cordl_internal_set_oldJoystickId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oldJoystickId = value;
}
inline void Rewired::Data::UserDataStore_KeyValue_JoystickAssignmentHistoryInfo::_ctor(::Rewired::Joystick*  joystick, int32_t  oldJoystickId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_JoystickAssignmentHistoryInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Joystick*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, joystick, oldJoystickId);
}
inline ::Rewired::Data::UserDataStore_KeyValue_JoystickAssignmentHistoryInfo* Rewired::Data::UserDataStore_KeyValue_JoystickAssignmentHistoryInfo::New_ctor(::Rewired::Joystick*  joystick, int32_t  oldJoystickId)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::UserDataStore_KeyValue_JoystickAssignmentHistoryInfo*>(joystick, oldJoystickId));
}
// Ctor Parameters []
constexpr ::Rewired::Data::UserDataStore_KeyValue_JoystickAssignmentHistoryInfo::UserDataStore_KeyValue_JoystickAssignmentHistoryInfo()   {
}
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue_IDataStore.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_KeyValue_IDataStore::*)()>(&::Rewired::Data::UserDataStore_KeyValue_IDataStore::Save)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_IDataStore*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_IDataStore*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue_IDataStore.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_KeyValue_IDataStore::*)()>(&::Rewired::Data::UserDataStore_KeyValue_IDataStore::Load)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_IDataStore*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_IDataStore*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue_IDataStore.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_KeyValue_IDataStore::*)()>(&::Rewired::Data::UserDataStore_KeyValue_IDataStore::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_IDataStore*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_IDataStore*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue_IDataStore.TryGetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_KeyValue_IDataStore::*)(::StringW, ::by_ref<::System::Object*>)>(&::Rewired::Data::UserDataStore_KeyValue_IDataStore::TryGetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_IDataStore*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_IDataStore*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue_IDataStore.SetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_KeyValue_IDataStore::*)(::StringW, ::System::Object*)>(&::Rewired::Data::UserDataStore_KeyValue_IDataStore::SetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_IDataStore*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_IDataStore*>(), 4}
                ));
    return ___internal_method;
  }
};
inline bool Rewired::Data::UserDataStore_KeyValue_IDataStore::Save()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_IDataStore*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Data::UserDataStore_KeyValue_IDataStore::Load()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_IDataStore*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Data::UserDataStore_KeyValue_IDataStore::Clear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_IDataStore*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Data::UserDataStore_KeyValue_IDataStore::TryGetValue(::StringW  key, ::by_ref<::System::Object*>  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_IDataStore*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, result);
}
inline bool Rewired::Data::UserDataStore_KeyValue_IDataStore::SetValue(::StringW  key, ::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_IDataStore*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
//  Writing Method size for method: ::Rewired::Data::ControllerElementByRoleMap_UserDataStore_KeyValue_Entry.TryGetElementAssignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ControllerElementByRoleMap_UserDataStore_KeyValue_Entry::*)(::Rewired::ControllerType, ::Rewired::Controller_Element*, ::by_ref<::Rewired::ElementAssignment>)>(&::Rewired::Data::ControllerElementByRoleMap_UserDataStore_KeyValue_Entry::TryGetElementAssignment)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1803aa5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerElementByRoleMap_UserDataStore_KeyValue_Entry>(),
                        {"TryGetElementAssignment", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<::Rewired::Controller_Element*>(), ::i2c::type_of<::by_ref<::Rewired::ElementAssignment>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerElementByRoleMap_UserDataStore_KeyValue_Entry.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::ControllerElementByRoleMap_UserDataStore_KeyValue_Entry::*)()>(&::Rewired::Data::ControllerElementByRoleMap_UserDataStore_KeyValue_Entry::ToString)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1803aa4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::ControllerElementByRoleMap_UserDataStore_KeyValue_Entry>(),
                    {::i2c::class_of<::Rewired::Data::ControllerElementByRoleMap_UserDataStore_KeyValue_Entry>(), 3}
                ));
    return ___internal_method;
  }
};
inline bool Rewired::Data::ControllerElementByRoleMap_UserDataStore_KeyValue_Entry::TryGetElementAssignment(::Rewired::ControllerType  controllerType, ::Rewired::Controller_Element*  targetElement, ::by_ref<::Rewired::ElementAssignment>  assignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerElementByRoleMap_UserDataStore_KeyValue_Entry>(),
                        {"TryGetElementAssignment", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<::Rewired::Controller_Element*>(), ::i2c::type_of<::by_ref<::Rewired::ElementAssignment>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, controllerType, targetElement, assignment);
}
inline ::StringW Rewired::Data::ControllerElementByRoleMap_UserDataStore_KeyValue_Entry::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::ControllerElementByRoleMap_UserDataStore_KeyValue_Entry>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "actionId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "elementType", ty: "::Rewired::ControllerElementType", modifiers: "", def_value: Some("{}") }, CppParam { name: "axisRange", ty: "::Rewired::AxisRange", modifiers: "", def_value: Some("{}") }, CppParam { name: "invert", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "axisContribution", ty: "::Rewired::Pole", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Data::ControllerElementByRoleMap_UserDataStore_KeyValue_Entry::ControllerElementByRoleMap_UserDataStore_KeyValue_Entry(int32_t  actionId, ::Rewired::ControllerElementType  elementType, ::Rewired::AxisRange  axisRange, bool  invert, ::Rewired::Pole  axisContribution) noexcept  {
this->actionId = actionId;
this->elementType = elementType;
this->axisRange = axisRange;
this->invert = invert;
this->axisContribution = axisContribution;
}
// Ctor Parameters []
constexpr ::Rewired::Data::ControllerElementByRoleMap_UserDataStore_KeyValue_Entry::ControllerElementByRoleMap_UserDataStore_KeyValue_Entry()   {
}
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap::*)()>(&::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803a9640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap::*)(::Rewired::ActionElementMap*)>(&::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap::Add)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1803a9070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap*>(),
                        {"Add", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap::*)()>(&::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap::ToString)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1803a94d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap::*)()>(&::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap::ToJson)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a9350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap*>(),
                        {"ToJson", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap.FromJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap* (*)(::StringW, ::StringW)>(&::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap::FromJson)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803a92b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap*>(),
                        {"FromJson", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap::__cordl_internal_get_role()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___role;
}
constexpr ::StringW const& Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap::__cordl_internal_get_role() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___role;
}
constexpr void Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap::__cordl_internal_set_role(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___role = value;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::Data::ControllerElementByRoleMap_UserDataStore_KeyValue_Entry>*& Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::Data::ControllerElementByRoleMap_UserDataStore_KeyValue_Entry>* const& Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap::__cordl_internal_set_data(::System::Collections::Generic::List_1<::Rewired::Data::ControllerElementByRoleMap_UserDataStore_KeyValue_Entry>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
inline void Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap::Add(::Rewired::ActionElementMap*  elementMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap*>(),
                        {"Add", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elementMap);
}
inline ::StringW Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap::ToJson()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap*>(),
                        {"ToJson", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap* Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap::FromJson(::StringW  role, ::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap*>(),
                        {"FromJson", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap*>(nullptr, ___internal_method, role, json);
}
inline ::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap* Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap::UserDataStore_KeyValue_ControllerElementByRoleMap()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Data::UserDataStore_KeyValue_ActionMappingSaveMode::UserDataStore_KeyValue_ActionMappingSaveMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Data::UserDataStore_KeyValue_ActionMappingSaveMode::UserDataStore_KeyValue_ActionMappingSaveMode()   {
}
constexpr ::Rewired::Data::UserDataStore_KeyValue_ActionMappingSaveMode  Rewired::Data::UserDataStore_KeyValue_ActionMappingSaveMode::ByController{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Data::UserDataStore_KeyValue_ActionMappingSaveMode  Rewired::Data::UserDataStore_KeyValue_ActionMappingSaveMode::ByControllerElementRole{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_0::*)()>(&::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_0._LoadJoystickAssignmentsNow_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_0::*)(::Rewired::Data::UserDataStore_KeyValue_JoystickAssignmentHistoryInfo*)>(&::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_0::_LoadJoystickAssignmentsNow_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803b5bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_0*>(),
                        {"<LoadJoystickAssignmentsNow>b__0", {}, {::i2c::type_of<::Rewired::Data::UserDataStore_KeyValue_JoystickAssignmentHistoryInfo*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Joystick*& Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_0::__cordl_internal_get_joystick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystick;
}
constexpr ::Rewired::Joystick* const& Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_0::__cordl_internal_get_joystick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystick;
}
constexpr void Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_0::__cordl_internal_set_joystick(::Rewired::Joystick*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joystick = value;
}
inline void Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_0::_LoadJoystickAssignmentsNow_b__0(::Rewired::Data::UserDataStore_KeyValue_JoystickAssignmentHistoryInfo*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_0*>(),
                        {"<LoadJoystickAssignmentsNow>b__0", {}, {::i2c::type_of<::Rewired::Data::UserDataStore_KeyValue_JoystickAssignmentHistoryInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_0* Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_0*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_0::UserDataStore_KeyValue___c__DisplayClass79_0()   {
}
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_1::*)()>(&::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_1::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_1._LoadJoystickAssignmentsNow_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_1::*)(::Rewired::Data::UserDataStore_KeyValue_JoystickAssignmentHistoryInfo*)>(&::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_1::_LoadJoystickAssignmentsNow_b__1)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803b5bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_1*>(),
                        {"<LoadJoystickAssignmentsNow>b__1", {}, {::i2c::type_of<::Rewired::Data::UserDataStore_KeyValue_JoystickAssignmentHistoryInfo*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo*& Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_1::__cordl_internal_get_joystickInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystickInfo;
}
constexpr ::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo* const& Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_1::__cordl_internal_get_joystickInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystickInfo;
}
constexpr void Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_1::__cordl_internal_set_joystickInfo(::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joystickInfo = value;
}
inline void Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_1::_LoadJoystickAssignmentsNow_b__1(::Rewired::Data::UserDataStore_KeyValue_JoystickAssignmentHistoryInfo*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_1*>(),
                        {"<LoadJoystickAssignmentsNow>b__1", {}, {::i2c::type_of<::Rewired::Data::UserDataStore_KeyValue_JoystickAssignmentHistoryInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_1* Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_1*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_1::UserDataStore_KeyValue___c__DisplayClass79_1()   {
}
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_2::*)()>(&::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_2::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_2*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_2._LoadJoystickAssignmentsNow_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_2::*)(::Rewired::Data::UserDataStore_KeyValue_JoystickAssignmentHistoryInfo*)>(&::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_2::_LoadJoystickAssignmentsNow_b__2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803b5bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_2*>(),
                        {"<LoadJoystickAssignmentsNow>b__2", {}, {::i2c::type_of<::Rewired::Data::UserDataStore_KeyValue_JoystickAssignmentHistoryInfo*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Joystick*& Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_2::__cordl_internal_get_match()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___match;
}
constexpr ::Rewired::Joystick* const& Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_2::__cordl_internal_get_match() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___match;
}
constexpr void Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_2::__cordl_internal_set_match(::Rewired::Joystick*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___match = value;
}
inline void Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_2*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_2::_LoadJoystickAssignmentsNow_b__2(::Rewired::Data::UserDataStore_KeyValue_JoystickAssignmentHistoryInfo*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_2*>(),
                        {"<LoadJoystickAssignmentsNow>b__2", {}, {::i2c::type_of<::Rewired::Data::UserDataStore_KeyValue_JoystickAssignmentHistoryInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_2* Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_2::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_2*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::UserDataStore_KeyValue___c__DisplayClass79_2::UserDataStore_KeyValue___c__DisplayClass79_2()   {
}
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::*)(int32_t)>(&::Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::*)()>(&::Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::*)()>(&::Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::MoveNext)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803b5460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::*)()>(&::Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::*)()>(&::Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::*)()>(&::Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Rewired::Data::UserDataStore_KeyValue>& Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Rewired::Data::UserDataStore_KeyValue> const& Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::__cordl_internal_set___4__this(::UnityW<::Rewired::Data::UserDataStore_KeyValue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81* Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Data::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81::UserDataStore_KeyValue__LoadJoystickAssignmentsDeferred_d__81()   {
}
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.get_isEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_KeyValue::*)()>(&::Rewired::Data::UserDataStore_KeyValue::get_isEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"get_isEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.set_isEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(bool)>(&::Rewired::Data::UserDataStore_KeyValue::set_isEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"set_isEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.get_loadDataOnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_KeyValue::*)()>(&::Rewired::Data::UserDataStore_KeyValue::get_loadDataOnStart)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"get_loadDataOnStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.set_loadDataOnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(bool)>(&::Rewired::Data::UserDataStore_KeyValue::set_loadDataOnStart)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"set_loadDataOnStart", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.get_loadJoystickAssignments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_KeyValue::*)()>(&::Rewired::Data::UserDataStore_KeyValue::get_loadJoystickAssignments)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"get_loadJoystickAssignments", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.set_loadJoystickAssignments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(bool)>(&::Rewired::Data::UserDataStore_KeyValue::set_loadJoystickAssignments)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"set_loadJoystickAssignments", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.get_loadKeyboardAssignments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_KeyValue::*)()>(&::Rewired::Data::UserDataStore_KeyValue::get_loadKeyboardAssignments)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"get_loadKeyboardAssignments", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.set_loadKeyboardAssignments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(bool)>(&::Rewired::Data::UserDataStore_KeyValue::set_loadKeyboardAssignments)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"set_loadKeyboardAssignments", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.get_loadMouseAssignments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_KeyValue::*)()>(&::Rewired::Data::UserDataStore_KeyValue::get_loadMouseAssignments)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"get_loadMouseAssignments", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.set_loadMouseAssignments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(bool)>(&::Rewired::Data::UserDataStore_KeyValue::set_loadMouseAssignments)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"set_loadMouseAssignments", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.get_actionMappingSaveMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::UserDataStore_KeyValue_ActionMappingSaveMode (::Rewired::Data::UserDataStore_KeyValue::*)()>(&::Rewired::Data::UserDataStore_KeyValue::get_actionMappingSaveMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"get_actionMappingSaveMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.set_actionMappingSaveMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::Data::UserDataStore_KeyValue_ActionMappingSaveMode)>(&::Rewired::Data::UserDataStore_KeyValue::set_actionMappingSaveMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"set_actionMappingSaveMode", {}, {::i2c::type_of<::Rewired::Data::UserDataStore_KeyValue_ActionMappingSaveMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.get_dataStore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::UserDataStore_KeyValue_IDataStore* (::Rewired::Data::UserDataStore_KeyValue::*)()>(&::Rewired::Data::UserDataStore_KeyValue::get_dataStore)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.get_loadControllerAssignments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_KeyValue::*)()>(&::Rewired::Data::UserDataStore_KeyValue::get_loadControllerAssignments)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803a7420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"get_loadControllerAssignments", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.get_allActionIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<int32_t>* (::Rewired::Data::UserDataStore_KeyValue::*)()>(&::Rewired::Data::UserDataStore_KeyValue::get_allActionIds)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1803a7210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"get_allActionIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.get_allActionIdsString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::UserDataStore_KeyValue::*)()>(&::Rewired::Data::UserDataStore_KeyValue::get_allActionIdsString)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1803a7110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"get_allActionIdsString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)()>(&::Rewired::Data::UserDataStore_KeyValue::Save)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803a6b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.SaveControllerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(int32_t, ::Rewired::ControllerType, int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::SaveControllerData)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803a5280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.SaveControllerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::ControllerType, int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::SaveControllerData)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1803a51b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.SavePlayerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::SavePlayerData)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803a6a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.SaveInputBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(int32_t, int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::SaveInputBehavior)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1803a6170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)()>(&::Rewired::Data::UserDataStore_KeyValue::Load)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803a43f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.LoadControllerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(int32_t, ::Rewired::ControllerType, int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::LoadControllerData)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1803a1be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.LoadControllerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::ControllerType, int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::LoadControllerData)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803a1b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.LoadPlayerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::LoadPlayerData)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803a4330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.LoadInputBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(int32_t, int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::LoadInputBehavior)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803a2bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.OnInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)()>(&::Rewired::Data::UserDataStore_KeyValue::OnInitialize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803a4720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.OnControllerConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::ControllerStatusChangedEventArgs*)>(&::Rewired::Data::UserDataStore_KeyValue::OnControllerConnected)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803a4460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.OnControllerPreDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::ControllerStatusChangedEventArgs*)>(&::Rewired::Data::UserDataStore_KeyValue::OnControllerPreDisconnect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803a46f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.OnControllerDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::ControllerStatusChangedEventArgs*)>(&::Rewired::Data::UserDataStore_KeyValue::OnControllerDisconnected)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803a4510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.SaveControllerMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(int32_t, ::Rewired::ControllerMap*)>(&::Rewired::Data::UserDataStore_KeyValue::SaveControllerMap)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803a5b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.LoadControllerMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerMap* (::Rewired::Data::UserDataStore_KeyValue::*)(int32_t, ::Rewired::ControllerIdentifier, int32_t, int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::LoadControllerMap)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803a2040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.ClearSaveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)()>(&::Rewired::Data::UserDataStore_KeyValue::ClearSaveData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803a0820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.LoadAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::UserDataStore_KeyValue::*)()>(&::Rewired::Data::UserDataStore_KeyValue::LoadAll)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1803a17b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.LoadPlayerDataNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::UserDataStore_KeyValue::*)(int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::LoadPlayerDataNow)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803a4010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadPlayerDataNow", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.LoadPlayerDataNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::Player*)>(&::Rewired::Data::UserDataStore_KeyValue::LoadPlayerDataNow)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1803a4070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadPlayerDataNow", {}, {::i2c::type_of<::Rewired::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.LoadAllJoystickCalibrationData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::UserDataStore_KeyValue::*)()>(&::Rewired::Data::UserDataStore_KeyValue::LoadAllJoystickCalibrationData)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1803a1590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadAllJoystickCalibrationData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.LoadJoystickCalibrationData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::Joystick*)>(&::Rewired::Data::UserDataStore_KeyValue::LoadJoystickCalibrationData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803a39e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadJoystickCalibrationData", {}, {::i2c::type_of<::Rewired::Joystick*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.LoadJoystickCalibrationData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::UserDataStore_KeyValue::*)(int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::LoadJoystickCalibrationData)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1803a3a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadJoystickCalibrationData", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.LoadJoystickData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::UserDataStore_KeyValue::*)(int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::LoadJoystickData)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1803a3b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadJoystickData", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.LoadControllerDataNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::UserDataStore_KeyValue::*)(int32_t, ::Rewired::ControllerType, int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::LoadControllerDataNow)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803a1aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadControllerDataNow", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.LoadControllerDataNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::ControllerType, int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::LoadControllerDataNow)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803a1a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadControllerDataNow", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.LoadControllerMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::UserDataStore_KeyValue::*)(int32_t, ::Rewired::ControllerType, int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::LoadControllerMaps)> {
  constexpr static std::size_t size = 0x930;
  constexpr static std::size_t addrs = 0x1803a2100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadControllerMaps", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.LoadControllerMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerMap* (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::Player*, ::Rewired::ControllerIdentifier, int32_t, int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::LoadControllerMap)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803a1e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadControllerMap", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.LoadControllerElementMapByRole
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::Player*, ::Rewired::Controller*, ::StringW, int32_t, int32_t, ::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap*>*)>(&::Rewired::Data::UserDataStore_KeyValue::LoadControllerElementMapByRole)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1803a1d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadControllerElementMapByRole", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.LoadInputBehaviors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::UserDataStore_KeyValue::*)(int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::LoadInputBehaviors)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1803a2cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadInputBehaviors", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.LoadInputBehaviorNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::UserDataStore_KeyValue::*)(int32_t, int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::LoadInputBehaviorNow)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803a2b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadInputBehaviorNow", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.LoadInputBehaviorNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::Player*, ::Rewired::InputBehavior*)>(&::Rewired::Data::UserDataStore_KeyValue::LoadInputBehaviorNow)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1803a2a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadInputBehaviorNow", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::InputBehavior*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.LoadControllerAssignmentsNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_KeyValue::*)()>(&::Rewired::Data::UserDataStore_KeyValue::LoadControllerAssignmentsNow)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803a1a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadControllerAssignmentsNow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.LoadKeyboardAndMouseAssignmentsNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo*)>(&::Rewired::Data::UserDataStore_KeyValue::LoadKeyboardAndMouseAssignmentsNow)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x1803a3d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadKeyboardAndMouseAssignmentsNow", {}, {::i2c::type_of<::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.LoadJoystickAssignmentsNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo*)>(&::Rewired::Data::UserDataStore_KeyValue::LoadJoystickAssignmentsNow)> {
  constexpr static std::size_t size = 0xa40;
  constexpr static std::size_t addrs = 0x1803a2fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadJoystickAssignmentsNow", {}, {::i2c::type_of<::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.LoadControllerAssignmentData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo* (::Rewired::Data::UserDataStore_KeyValue::*)()>(&::Rewired::Data::UserDataStore_KeyValue::LoadControllerAssignmentData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803a1980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadControllerAssignmentData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.LoadJoystickAssignmentsDeferred
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Rewired::Data::UserDataStore_KeyValue::*)()>(&::Rewired::Data::UserDataStore_KeyValue::LoadJoystickAssignmentsDeferred)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803a2f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadJoystickAssignmentsDeferred", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.SaveAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)()>(&::Rewired::Data::UserDataStore_KeyValue::SaveAll)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x1803a4a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SaveAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.SavePlayerDataNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::SavePlayerDataNow)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803a6740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SavePlayerDataNow", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.SavePlayerDataNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::Player*)>(&::Rewired::Data::UserDataStore_KeyValue::SavePlayerDataNow)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1803a67e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SavePlayerDataNow", {}, {::i2c::type_of<::Rewired::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.SaveAllJoystickCalibrationData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)()>(&::Rewired::Data::UserDataStore_KeyValue::SaveAllJoystickCalibrationData)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1803a4820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SaveAllJoystickCalibrationData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.SaveJoystickCalibrationData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::SaveJoystickCalibrationData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803a6400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SaveJoystickCalibrationData", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.SaveJoystickCalibrationData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::Joystick*)>(&::Rewired::Data::UserDataStore_KeyValue::SaveJoystickCalibrationData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803a6460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SaveJoystickCalibrationData", {}, {::i2c::type_of<::Rewired::Joystick*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.SaveJoystickData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::SaveJoystickData)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1803a6510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SaveJoystickData", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.SaveControllerDataNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(int32_t, ::Rewired::ControllerType, int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::SaveControllerDataNow)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803a50e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SaveControllerDataNow", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.SaveControllerDataNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::ControllerType, int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::SaveControllerDataNow)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803a5140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SaveControllerDataNow", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.SaveControllerMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::Player*, ::Rewired::PlayerSaveData)>(&::Rewired::Data::UserDataStore_KeyValue::SaveControllerMaps)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1803a5e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SaveControllerMaps", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::PlayerSaveData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.SaveControllerMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(int32_t, ::Rewired::ControllerType, int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::SaveControllerMaps)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1803a5ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SaveControllerMaps", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.SaveControllerMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::Player*, ::Rewired::ControllerMap*)>(&::Rewired::Data::UserDataStore_KeyValue::SaveControllerMap)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803a5c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SaveControllerMap", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.SaveControllerMapByController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::Player*, ::Rewired::ControllerMap*)>(&::Rewired::Data::UserDataStore_KeyValue::SaveControllerMapByController)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1803a5870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SaveControllerMapByController", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.SaveControllerMapByControllerElementRole
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::Player*, ::Rewired::Controller*, ::Rewired::ControllerMap*)>(&::Rewired::Data::UserDataStore_KeyValue::SaveControllerMapByControllerElementRole)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x1803a5340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SaveControllerMapByControllerElementRole", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<::Rewired::ControllerMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.AddControllerElementByRoleMapEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::Player*, ::Rewired::Controller*, ::Rewired::ActionElementMap*, ::by_ref<::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap*>*>)>(&::Rewired::Data::UserDataStore_KeyValue::AddControllerElementByRoleMapEntry)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18039ff80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"AddControllerElementByRoleMapEntry", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<::Rewired::ActionElementMap*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap*>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.SaveInputBehaviors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::Player*, ::Rewired::PlayerSaveData)>(&::Rewired::Data::UserDataStore_KeyValue::SaveInputBehaviors)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803a6310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SaveInputBehaviors", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::PlayerSaveData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.SaveInputBehaviorNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(int32_t, int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::SaveInputBehaviorNow)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1803a5fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SaveInputBehaviorNow", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.SaveInputBehaviorNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::Player*, ::Rewired::InputBehavior*)>(&::Rewired::Data::UserDataStore_KeyValue::SaveInputBehaviorNow)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803a60e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SaveInputBehaviorNow", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::InputBehavior*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.SaveControllerAssignments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_KeyValue::*)()>(&::Rewired::Data::UserDataStore_KeyValue::SaveControllerAssignments)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1803a4d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SaveControllerAssignments", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.AppendPlayerKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::Rewired::Player*)>(&::Rewired::Data::UserDataStore_KeyValue::AppendPlayerKey)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803a07d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"AppendPlayerKey", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Rewired::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.GetControllerMapKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::Player*, ::Rewired::ControllerIdentifier, int32_t, int32_t, int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::GetControllerMapKey)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1803a0aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"GetControllerMapKey", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.GetControllerMapKnownActionIdsKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::Player*, ::Rewired::ControllerIdentifier, int32_t, int32_t, int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::GetControllerMapKnownActionIdsKey)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1803a0bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"GetControllerMapKnownActionIdsKey", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.AppendControllerMapKeyCommonSuffix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::Rewired::Player*, ::Rewired::ControllerIdentifier, int32_t, int32_t, int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::AppendControllerMapKeyCommonSuffix)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1803a05f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"AppendControllerMapKeyCommonSuffix", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.AppendControllerElementByRoleMapKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::StringW, int32_t, int32_t, int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::AppendControllerElementByRoleMapKey)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803a0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"AppendControllerElementByRoleMapKey", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.GetJoystickCalibrationMapKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::Joystick*)>(&::Rewired::Data::UserDataStore_KeyValue::GetJoystickCalibrationMapKey)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1803a1430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"GetJoystickCalibrationMapKey", {}, {::i2c::type_of<::Rewired::Joystick*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.GetInputBehaviorKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::Player*, int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::GetInputBehaviorKey)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803a12e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"GetInputBehaviorKey", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.GetControllerMapJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::Player*, ::Rewired::ControllerIdentifier, int32_t, int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::GetControllerMapJson)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803a09b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"GetControllerMapJson", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.GetControllerMapKnownActionIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<int32_t>* (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::Player*, ::Rewired::ControllerIdentifier, int32_t, int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::GetControllerMapKnownActionIds)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803a0d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"GetControllerMapKnownActionIds", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.GetJoystickCalibrationMapJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::Joystick*)>(&::Rewired::Data::UserDataStore_KeyValue::GetJoystickCalibrationMapJson)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803a13d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"GetJoystickCalibrationMapJson", {}, {::i2c::type_of<::Rewired::Joystick*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.GetInputBehaviorJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::Player*, int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::GetInputBehaviorJson)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803a1280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"GetInputBehaviorJson", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.AddDefaultMappingsForNewActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::ControllerIdentifier, ::Rewired::ControllerMap*, ::System::Collections::Generic::List_1<int32_t>*)>(&::Rewired::Data::UserDataStore_KeyValue::AddDefaultMappingsForNewActions)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x1803a00d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"AddDefaultMappingsForNewActions", {}, {::i2c::type_of<::Rewired::ControllerIdentifier>(), ::i2c::type_of<::Rewired::ControllerMap*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.FindJoystickPrecise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Joystick* (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo*)>(&::Rewired::Data::UserDataStore_KeyValue::FindJoystickPrecise)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1803a0860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"FindJoystickPrecise", {}, {::i2c::type_of<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.TryFindJoysticksImprecise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo*, ::by_ref<::System::Collections::Generic::List_1<::Rewired::Joystick*>*>)>(&::Rewired::Data::UserDataStore_KeyValue::TryFindJoysticksImprecise)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1803a6c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"TryFindJoysticksImprecise", {}, {::i2c::type_of<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::Rewired::Joystick*>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.RefreshLayoutManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(int32_t)>(&::Rewired::Data::UserDataStore_KeyValue::RefreshLayoutManager)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803a47b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"RefreshLayoutManager", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.OnControllerMapsSaved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)(::Rewired::Player*)>(&::Rewired::Data::UserDataStore_KeyValue::OnControllerMapsSaved)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1803a4530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"OnControllerMapsSaved", {}, {::i2c::type_of<::Rewired::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.GetDuplicateIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Rewired::Player*, ::Rewired::ControllerIdentifier)>(&::Rewired::Data::UserDataStore_KeyValue::GetDuplicateIndex)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x1803a0eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"GetDuplicateIndex", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerIdentifier>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.TryGetString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::Data::UserDataStore_KeyValue_IDataStore*, ::StringW, ::by_ref<::StringW>)>(&::Rewired::Data::UserDataStore_KeyValue::TryGetString)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1803a6ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"TryGetString", {}, {::i2c::type_of<::Rewired::Data::UserDataStore_KeyValue_IDataStore*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue.SortOldestToNewest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Rewired::ControllerMapSaveData*, ::Rewired::ControllerMapSaveData*)>(&::Rewired::Data::UserDataStore_KeyValue::SortOldestToNewest)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1803a6bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SortOldestToNewest", {}, {::i2c::type_of<::Rewired::ControllerMapSaveData*>(), ::i2c::type_of<::Rewired::ControllerMapSaveData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_KeyValue._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_KeyValue::*)()>(&::Rewired::Data::UserDataStore_KeyValue::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803a70b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::Data::UserDataStore_KeyValue::__cordl_internal_get__isEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isEnabled;
}
constexpr bool const& Rewired::Data::UserDataStore_KeyValue::__cordl_internal_get__isEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isEnabled;
}
constexpr void Rewired::Data::UserDataStore_KeyValue::__cordl_internal_set__isEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isEnabled = value;
}
constexpr bool& Rewired::Data::UserDataStore_KeyValue::__cordl_internal_get__loadDataOnStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadDataOnStart;
}
constexpr bool const& Rewired::Data::UserDataStore_KeyValue::__cordl_internal_get__loadDataOnStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadDataOnStart;
}
constexpr void Rewired::Data::UserDataStore_KeyValue::__cordl_internal_set__loadDataOnStart(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loadDataOnStart = value;
}
constexpr bool& Rewired::Data::UserDataStore_KeyValue::__cordl_internal_get__loadJoystickAssignments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadJoystickAssignments;
}
constexpr bool const& Rewired::Data::UserDataStore_KeyValue::__cordl_internal_get__loadJoystickAssignments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadJoystickAssignments;
}
constexpr void Rewired::Data::UserDataStore_KeyValue::__cordl_internal_set__loadJoystickAssignments(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loadJoystickAssignments = value;
}
constexpr bool& Rewired::Data::UserDataStore_KeyValue::__cordl_internal_get__loadKeyboardAssignments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadKeyboardAssignments;
}
constexpr bool const& Rewired::Data::UserDataStore_KeyValue::__cordl_internal_get__loadKeyboardAssignments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadKeyboardAssignments;
}
constexpr void Rewired::Data::UserDataStore_KeyValue::__cordl_internal_set__loadKeyboardAssignments(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loadKeyboardAssignments = value;
}
constexpr bool& Rewired::Data::UserDataStore_KeyValue::__cordl_internal_get__loadMouseAssignments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadMouseAssignments;
}
constexpr bool const& Rewired::Data::UserDataStore_KeyValue::__cordl_internal_get__loadMouseAssignments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadMouseAssignments;
}
constexpr void Rewired::Data::UserDataStore_KeyValue::__cordl_internal_set__loadMouseAssignments(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loadMouseAssignments = value;
}
constexpr ::Rewired::Data::UserDataStore_KeyValue_ActionMappingSaveMode& Rewired::Data::UserDataStore_KeyValue::__cordl_internal_get__actionMappingSaveMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____actionMappingSaveMode;
}
constexpr ::Rewired::Data::UserDataStore_KeyValue_ActionMappingSaveMode const& Rewired::Data::UserDataStore_KeyValue::__cordl_internal_get__actionMappingSaveMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____actionMappingSaveMode;
}
constexpr void Rewired::Data::UserDataStore_KeyValue::__cordl_internal_set__actionMappingSaveMode(::Rewired::Data::UserDataStore_KeyValue_ActionMappingSaveMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____actionMappingSaveMode = value;
}
constexpr bool& Rewired::Data::UserDataStore_KeyValue::__cordl_internal_get__allowImpreciseJoystickAssignmentMatching()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowImpreciseJoystickAssignmentMatching;
}
constexpr bool const& Rewired::Data::UserDataStore_KeyValue::__cordl_internal_get__allowImpreciseJoystickAssignmentMatching() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowImpreciseJoystickAssignmentMatching;
}
constexpr void Rewired::Data::UserDataStore_KeyValue::__cordl_internal_set__allowImpreciseJoystickAssignmentMatching(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allowImpreciseJoystickAssignmentMatching = value;
}
constexpr bool& Rewired::Data::UserDataStore_KeyValue::__cordl_internal_get__deferredJoystickAssignmentLoadPending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deferredJoystickAssignmentLoadPending;
}
constexpr bool const& Rewired::Data::UserDataStore_KeyValue::__cordl_internal_get__deferredJoystickAssignmentLoadPending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deferredJoystickAssignmentLoadPending;
}
constexpr void Rewired::Data::UserDataStore_KeyValue::__cordl_internal_set__deferredJoystickAssignmentLoadPending(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deferredJoystickAssignmentLoadPending = value;
}
constexpr bool& Rewired::Data::UserDataStore_KeyValue::__cordl_internal_get__wasJoystickEverDetected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasJoystickEverDetected;
}
constexpr bool const& Rewired::Data::UserDataStore_KeyValue::__cordl_internal_get__wasJoystickEverDetected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasJoystickEverDetected;
}
constexpr void Rewired::Data::UserDataStore_KeyValue::__cordl_internal_set__wasJoystickEverDetected(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wasJoystickEverDetected = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& Rewired::Data::UserDataStore_KeyValue::__cordl_internal_get___allActionIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____allActionIds;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& Rewired::Data::UserDataStore_KeyValue::__cordl_internal_get___allActionIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____allActionIds;
}
constexpr void Rewired::Data::UserDataStore_KeyValue::__cordl_internal_set___allActionIds(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____allActionIds = value;
}
constexpr ::StringW& Rewired::Data::UserDataStore_KeyValue::__cordl_internal_get___allActionIdsString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____allActionIdsString;
}
constexpr ::StringW const& Rewired::Data::UserDataStore_KeyValue::__cordl_internal_get___allActionIdsString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____allActionIdsString;
}
constexpr void Rewired::Data::UserDataStore_KeyValue::__cordl_internal_set___allActionIdsString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____allActionIdsString = value;
}
constexpr ::System::Text::StringBuilder*& Rewired::Data::UserDataStore_KeyValue::__cordl_internal_get__sb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sb;
}
constexpr ::System::Text::StringBuilder* const& Rewired::Data::UserDataStore_KeyValue::__cordl_internal_get__sb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sb;
}
constexpr void Rewired::Data::UserDataStore_KeyValue::__cordl_internal_set__sb(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sb = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap*>*& Rewired::Data::UserDataStore_KeyValue::__cordl_internal_get__tempElementByRoleMaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempElementByRoleMaps;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap*>* const& Rewired::Data::UserDataStore_KeyValue::__cordl_internal_get__tempElementByRoleMaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempElementByRoleMaps;
}
constexpr void Rewired::Data::UserDataStore_KeyValue::__cordl_internal_set__tempElementByRoleMaps(::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tempElementByRoleMaps = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,bool>*& Rewired::Data::UserDataStore_KeyValue::__cordl_internal_get__tempElementByRoleMapsEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempElementByRoleMapsEnabled;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,bool>* const& Rewired::Data::UserDataStore_KeyValue::__cordl_internal_get__tempElementByRoleMapsEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempElementByRoleMapsEnabled;
}
constexpr void Rewired::Data::UserDataStore_KeyValue::__cordl_internal_set__tempElementByRoleMapsEnabled(::System::Collections::Generic::Dictionary_2<::StringW,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tempElementByRoleMapsEnabled = value;
}
inline void Rewired::Data::UserDataStore_KeyValue::setStaticF_thisScriptName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "thisScriptName", ::Rewired::Data::UserDataStore_KeyValue*>(std::forward<::StringW>(value));
}
inline ::StringW Rewired::Data::UserDataStore_KeyValue::getStaticF_thisScriptName()  {
return ::cordl_internals::getStaticField<::StringW, "thisScriptName", ::Rewired::Data::UserDataStore_KeyValue*>();
}
inline bool Rewired::Data::UserDataStore_KeyValue::get_isEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"get_isEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_KeyValue::set_isEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"set_isEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Data::UserDataStore_KeyValue::get_loadDataOnStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"get_loadDataOnStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_KeyValue::set_loadDataOnStart(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"set_loadDataOnStart", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Data::UserDataStore_KeyValue::get_loadJoystickAssignments()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"get_loadJoystickAssignments", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_KeyValue::set_loadJoystickAssignments(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"set_loadJoystickAssignments", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Data::UserDataStore_KeyValue::get_loadKeyboardAssignments()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"get_loadKeyboardAssignments", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_KeyValue::set_loadKeyboardAssignments(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"set_loadKeyboardAssignments", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Data::UserDataStore_KeyValue::get_loadMouseAssignments()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"get_loadMouseAssignments", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_KeyValue::set_loadMouseAssignments(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"set_loadMouseAssignments", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::Data::UserDataStore_KeyValue_ActionMappingSaveMode Rewired::Data::UserDataStore_KeyValue::get_actionMappingSaveMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"get_actionMappingSaveMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::UserDataStore_KeyValue_ActionMappingSaveMode>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_KeyValue::set_actionMappingSaveMode(::Rewired::Data::UserDataStore_KeyValue_ActionMappingSaveMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"set_actionMappingSaveMode", {}, {::i2c::type_of<::Rewired::Data::UserDataStore_KeyValue_ActionMappingSaveMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::Data::UserDataStore_KeyValue_IDataStore* Rewired::Data::UserDataStore_KeyValue::get_dataStore()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::UserDataStore_KeyValue_IDataStore*>(this, ___internal_method);
}
inline bool Rewired::Data::UserDataStore_KeyValue::get_loadControllerAssignments()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"get_loadControllerAssignments", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<int32_t>* Rewired::Data::UserDataStore_KeyValue::get_allActionIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"get_allActionIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*>(this, ___internal_method);
}
inline ::StringW Rewired::Data::UserDataStore_KeyValue::get_allActionIdsString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"get_allActionIdsString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_KeyValue::Save()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_KeyValue::SaveControllerData(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, controllerType, controllerId);
}
inline void Rewired::Data::UserDataStore_KeyValue::SaveControllerData(::Rewired::ControllerType  controllerType, int32_t  controllerId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerType, controllerId);
}
inline void Rewired::Data::UserDataStore_KeyValue::SavePlayerData(int32_t  playerId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId);
}
inline void Rewired::Data::UserDataStore_KeyValue::SaveInputBehavior(int32_t  playerId, int32_t  behaviorId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, behaviorId);
}
inline void Rewired::Data::UserDataStore_KeyValue::Load()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_KeyValue::LoadControllerData(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, controllerType, controllerId);
}
inline void Rewired::Data::UserDataStore_KeyValue::LoadControllerData(::Rewired::ControllerType  controllerType, int32_t  controllerId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerType, controllerId);
}
inline void Rewired::Data::UserDataStore_KeyValue::LoadPlayerData(int32_t  playerId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId);
}
inline void Rewired::Data::UserDataStore_KeyValue::LoadInputBehavior(int32_t  playerId, int32_t  behaviorId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, behaviorId);
}
inline void Rewired::Data::UserDataStore_KeyValue::OnInitialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_KeyValue::OnControllerConnected(::Rewired::ControllerStatusChangedEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void Rewired::Data::UserDataStore_KeyValue::OnControllerPreDisconnect(::Rewired::ControllerStatusChangedEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void Rewired::Data::UserDataStore_KeyValue::OnControllerDisconnected(::Rewired::ControllerStatusChangedEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void Rewired::Data::UserDataStore_KeyValue::SaveControllerMap(int32_t  playerId, ::Rewired::ControllerMap*  controllerMap)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, controllerMap);
}
inline ::Rewired::ControllerMap* Rewired::Data::UserDataStore_KeyValue::LoadControllerMap(int32_t  playerId, ::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  categoryId, int32_t  layoutId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerMap*>(this, ___internal_method, playerId, controllerIdentifier, categoryId, layoutId);
}
inline void Rewired::Data::UserDataStore_KeyValue::ClearSaveData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Rewired::Data::UserDataStore_KeyValue::LoadAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::Data::UserDataStore_KeyValue::LoadPlayerDataNow(int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadPlayerDataNow", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, playerId);
}
inline int32_t Rewired::Data::UserDataStore_KeyValue::LoadPlayerDataNow(::Rewired::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadPlayerDataNow", {}, {::i2c::type_of<::Rewired::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, player);
}
inline int32_t Rewired::Data::UserDataStore_KeyValue::LoadAllJoystickCalibrationData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadAllJoystickCalibrationData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::Data::UserDataStore_KeyValue::LoadJoystickCalibrationData(::Rewired::Joystick*  joystick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadJoystickCalibrationData", {}, {::i2c::type_of<::Rewired::Joystick*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, joystick);
}
inline int32_t Rewired::Data::UserDataStore_KeyValue::LoadJoystickCalibrationData(int32_t  joystickId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadJoystickCalibrationData", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, joystickId);
}
inline int32_t Rewired::Data::UserDataStore_KeyValue::LoadJoystickData(int32_t  joystickId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadJoystickData", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, joystickId);
}
inline int32_t Rewired::Data::UserDataStore_KeyValue::LoadControllerDataNow(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadControllerDataNow", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, playerId, controllerType, controllerId);
}
inline int32_t Rewired::Data::UserDataStore_KeyValue::LoadControllerDataNow(::Rewired::ControllerType  controllerType, int32_t  controllerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadControllerDataNow", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, controllerType, controllerId);
}
inline int32_t Rewired::Data::UserDataStore_KeyValue::LoadControllerMaps(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadControllerMaps", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, playerId, controllerType, controllerId);
}
inline ::Rewired::ControllerMap* Rewired::Data::UserDataStore_KeyValue::LoadControllerMap(::Rewired::Player*  player, ::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  categoryId, int32_t  layoutId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadControllerMap", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerMap*>(this, ___internal_method, player, controllerIdentifier, categoryId, layoutId);
}
inline bool Rewired::Data::UserDataStore_KeyValue::LoadControllerElementMapByRole(::Rewired::Player*  player, ::Rewired::Controller*  controller, ::StringW  role, int32_t  mapCategoryId, int32_t  layoutId, ::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap*>*  elementByRoleMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadControllerElementMapByRole", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player, controller, role, mapCategoryId, layoutId, elementByRoleMaps);
}
inline int32_t Rewired::Data::UserDataStore_KeyValue::LoadInputBehaviors(int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadInputBehaviors", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, playerId);
}
inline int32_t Rewired::Data::UserDataStore_KeyValue::LoadInputBehaviorNow(int32_t  playerId, int32_t  behaviorId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadInputBehaviorNow", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, playerId, behaviorId);
}
inline int32_t Rewired::Data::UserDataStore_KeyValue::LoadInputBehaviorNow(::Rewired::Player*  player, ::Rewired::InputBehavior*  inputBehavior)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadInputBehaviorNow", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::InputBehavior*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, player, inputBehavior);
}
inline bool Rewired::Data::UserDataStore_KeyValue::LoadControllerAssignmentsNow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadControllerAssignmentsNow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Data::UserDataStore_KeyValue::LoadKeyboardAndMouseAssignmentsNow(::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadKeyboardAndMouseAssignmentsNow", {}, {::i2c::type_of<::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data);
}
inline bool Rewired::Data::UserDataStore_KeyValue::LoadJoystickAssignmentsNow(::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadJoystickAssignmentsNow", {}, {::i2c::type_of<::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data);
}
inline ::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo* Rewired::Data::UserDataStore_KeyValue::LoadControllerAssignmentData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadControllerAssignmentData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::UserDataStore_KeyValue_ControllerAssignmentSaveInfo*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Rewired::Data::UserDataStore_KeyValue::LoadJoystickAssignmentsDeferred()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"LoadJoystickAssignmentsDeferred", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_KeyValue::SaveAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SaveAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_KeyValue::SavePlayerDataNow(int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SavePlayerDataNow", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId);
}
inline void Rewired::Data::UserDataStore_KeyValue::SavePlayerDataNow(::Rewired::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SavePlayerDataNow", {}, {::i2c::type_of<::Rewired::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void Rewired::Data::UserDataStore_KeyValue::SaveAllJoystickCalibrationData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SaveAllJoystickCalibrationData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_KeyValue::SaveJoystickCalibrationData(int32_t  joystickId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SaveJoystickCalibrationData", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, joystickId);
}
inline void Rewired::Data::UserDataStore_KeyValue::SaveJoystickCalibrationData(::Rewired::Joystick*  joystick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SaveJoystickCalibrationData", {}, {::i2c::type_of<::Rewired::Joystick*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, joystick);
}
inline void Rewired::Data::UserDataStore_KeyValue::SaveJoystickData(int32_t  joystickId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SaveJoystickData", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, joystickId);
}
inline void Rewired::Data::UserDataStore_KeyValue::SaveControllerDataNow(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SaveControllerDataNow", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, controllerType, controllerId);
}
inline void Rewired::Data::UserDataStore_KeyValue::SaveControllerDataNow(::Rewired::ControllerType  controllerType, int32_t  controllerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SaveControllerDataNow", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerType, controllerId);
}
inline void Rewired::Data::UserDataStore_KeyValue::SaveControllerMaps(::Rewired::Player*  player, ::Rewired::PlayerSaveData  playerSaveData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SaveControllerMaps", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::PlayerSaveData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, playerSaveData);
}
inline void Rewired::Data::UserDataStore_KeyValue::SaveControllerMaps(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SaveControllerMaps", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, controllerType, controllerId);
}
inline void Rewired::Data::UserDataStore_KeyValue::SaveControllerMap(::Rewired::Player*  player, ::Rewired::ControllerMap*  controllerMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SaveControllerMap", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, controllerMap);
}
inline void Rewired::Data::UserDataStore_KeyValue::SaveControllerMapByController(::Rewired::Player*  player, ::Rewired::ControllerMap*  controllerMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SaveControllerMapByController", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, controllerMap);
}
inline void Rewired::Data::UserDataStore_KeyValue::SaveControllerMapByControllerElementRole(::Rewired::Player*  player, ::Rewired::Controller*  controller, ::Rewired::ControllerMap*  controllerMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SaveControllerMapByControllerElementRole", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<::Rewired::ControllerMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, controller, controllerMap);
}
inline bool Rewired::Data::UserDataStore_KeyValue::AddControllerElementByRoleMapEntry(::Rewired::Player*  player, ::Rewired::Controller*  controller, ::Rewired::ActionElementMap*  elementMap, ::by_ref<::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap*>*>  maps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"AddControllerElementByRoleMapEntry", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<::Rewired::ActionElementMap*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Data::UserDataStore_KeyValue_ControllerElementByRoleMap*>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player, controller, elementMap, maps);
}
inline void Rewired::Data::UserDataStore_KeyValue::SaveInputBehaviors(::Rewired::Player*  player, ::Rewired::PlayerSaveData  playerSaveData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SaveInputBehaviors", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::PlayerSaveData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, playerSaveData);
}
inline void Rewired::Data::UserDataStore_KeyValue::SaveInputBehaviorNow(int32_t  playerId, int32_t  behaviorId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SaveInputBehaviorNow", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, behaviorId);
}
inline void Rewired::Data::UserDataStore_KeyValue::SaveInputBehaviorNow(::Rewired::Player*  player, ::Rewired::InputBehavior*  inputBehavior)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SaveInputBehaviorNow", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::InputBehavior*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, inputBehavior);
}
inline bool Rewired::Data::UserDataStore_KeyValue::SaveControllerAssignments()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SaveControllerAssignments", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_KeyValue::AppendPlayerKey(::System::Text::StringBuilder*  sb, ::Rewired::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"AppendPlayerKey", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Rewired::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, player);
}
inline ::StringW Rewired::Data::UserDataStore_KeyValue::GetControllerMapKey(::Rewired::Player*  player, ::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  categoryId, int32_t  layoutId, int32_t  ppKeyVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"GetControllerMapKey", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, player, controllerIdentifier, categoryId, layoutId, ppKeyVersion);
}
inline ::StringW Rewired::Data::UserDataStore_KeyValue::GetControllerMapKnownActionIdsKey(::Rewired::Player*  player, ::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  categoryId, int32_t  layoutId, int32_t  ppKeyVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"GetControllerMapKnownActionIdsKey", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, player, controllerIdentifier, categoryId, layoutId, ppKeyVersion);
}
inline void Rewired::Data::UserDataStore_KeyValue::AppendControllerMapKeyCommonSuffix(::System::Text::StringBuilder*  sb, ::Rewired::Player*  player, ::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  categoryId, int32_t  layoutId, int32_t  keyVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"AppendControllerMapKeyCommonSuffix", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, player, controllerIdentifier, categoryId, layoutId, keyVersion);
}
inline void Rewired::Data::UserDataStore_KeyValue::AppendControllerElementByRoleMapKey(::System::Text::StringBuilder*  sb, ::StringW  elementRole, int32_t  categoryId, int32_t  layoutId, int32_t  keyVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"AppendControllerElementByRoleMapKey", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, elementRole, categoryId, layoutId, keyVersion);
}
inline ::StringW Rewired::Data::UserDataStore_KeyValue::GetJoystickCalibrationMapKey(::Rewired::Joystick*  joystick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"GetJoystickCalibrationMapKey", {}, {::i2c::type_of<::Rewired::Joystick*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, joystick);
}
inline ::StringW Rewired::Data::UserDataStore_KeyValue::GetInputBehaviorKey(::Rewired::Player*  player, int32_t  inputBehaviorId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"GetInputBehaviorKey", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, player, inputBehaviorId);
}
inline ::StringW Rewired::Data::UserDataStore_KeyValue::GetControllerMapJson(::Rewired::Player*  player, ::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  categoryId, int32_t  layoutId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"GetControllerMapJson", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, player, controllerIdentifier, categoryId, layoutId);
}
inline ::System::Collections::Generic::List_1<int32_t>* Rewired::Data::UserDataStore_KeyValue::GetControllerMapKnownActionIds(::Rewired::Player*  player, ::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  categoryId, int32_t  layoutId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"GetControllerMapKnownActionIds", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*>(this, ___internal_method, player, controllerIdentifier, categoryId, layoutId);
}
inline ::StringW Rewired::Data::UserDataStore_KeyValue::GetJoystickCalibrationMapJson(::Rewired::Joystick*  joystick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"GetJoystickCalibrationMapJson", {}, {::i2c::type_of<::Rewired::Joystick*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, joystick);
}
inline ::StringW Rewired::Data::UserDataStore_KeyValue::GetInputBehaviorJson(::Rewired::Player*  player, int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"GetInputBehaviorJson", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, player, id);
}
inline void Rewired::Data::UserDataStore_KeyValue::AddDefaultMappingsForNewActions(::Rewired::ControllerIdentifier  controllerIdentifier, ::Rewired::ControllerMap*  controllerMap, ::System::Collections::Generic::List_1<int32_t>*  knownActionIds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"AddDefaultMappingsForNewActions", {}, {::i2c::type_of<::Rewired::ControllerIdentifier>(), ::i2c::type_of<::Rewired::ControllerMap*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerIdentifier, controllerMap, knownActionIds);
}
inline ::Rewired::Joystick* Rewired::Data::UserDataStore_KeyValue::FindJoystickPrecise(::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo*  joystickInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"FindJoystickPrecise", {}, {::i2c::type_of<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Joystick*>(this, ___internal_method, joystickInfo);
}
inline bool Rewired::Data::UserDataStore_KeyValue::TryFindJoysticksImprecise(::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo*  joystickInfo, ::by_ref<::System::Collections::Generic::List_1<::Rewired::Joystick*>*>  matches)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"TryFindJoysticksImprecise", {}, {::i2c::type_of<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_KeyValue_JoystickInfo*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::Rewired::Joystick*>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, joystickInfo, matches);
}
inline void Rewired::Data::UserDataStore_KeyValue::RefreshLayoutManager(int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"RefreshLayoutManager", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId);
}
inline void Rewired::Data::UserDataStore_KeyValue::OnControllerMapsSaved(::Rewired::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"OnControllerMapsSaved", {}, {::i2c::type_of<::Rewired::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline int32_t Rewired::Data::UserDataStore_KeyValue::GetDuplicateIndex(::Rewired::Player*  player, ::Rewired::ControllerIdentifier  controllerIdentifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"GetDuplicateIndex", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, player, controllerIdentifier);
}
inline bool Rewired::Data::UserDataStore_KeyValue::TryGetString(::Rewired::Data::UserDataStore_KeyValue_IDataStore*  store, ::StringW  key, ::by_ref<::StringW>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"TryGetString", {}, {::i2c::type_of<::Rewired::Data::UserDataStore_KeyValue_IDataStore*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, store, key, result);
}
inline int32_t Rewired::Data::UserDataStore_KeyValue::SortOldestToNewest(::Rewired::ControllerMapSaveData*  a, ::Rewired::ControllerMapSaveData*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {"SortOldestToNewest", {}, {::i2c::type_of<::Rewired::ControllerMapSaveData*>(), ::i2c::type_of<::Rewired::ControllerMapSaveData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b);
}
inline void Rewired::Data::UserDataStore_KeyValue::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_KeyValue*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::UserDataStore_KeyValue* Rewired::Data::UserDataStore_KeyValue::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::UserDataStore_KeyValue*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::UserDataStore_KeyValue::UserDataStore_KeyValue()   {
}

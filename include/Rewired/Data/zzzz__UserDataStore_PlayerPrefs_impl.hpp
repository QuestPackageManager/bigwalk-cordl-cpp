#pragma once
// IWYU pragma private; include "Rewired/Data/UserDataStore_PlayerPrefs.hpp"
#include "Rewired/Data/zzzz__UserDataStore_impl.hpp"
#include "Rewired/zzzz__AxisRange_impl.hpp"
#include "Rewired/zzzz__ControllerElementType_impl.hpp"
#include "Rewired/zzzz__Pole_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Data/zzzz__UserDataStore_PlayerPrefs_def.hpp"
#include "Rewired/Data/zzzz__UserDataStore_PlayerPrefs_def.hpp"
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
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo::*)()>(&::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Guid& Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo::__cordl_internal_get_instanceGuid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceGuid;
}
constexpr ::System::Guid const& Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo::__cordl_internal_get_instanceGuid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceGuid;
}
constexpr void Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo::__cordl_internal_set_instanceGuid(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instanceGuid = value;
}
constexpr ::StringW& Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo::__cordl_internal_get_hardwareIdentifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hardwareIdentifier;
}
constexpr ::StringW const& Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo::__cordl_internal_get_hardwareIdentifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hardwareIdentifier;
}
constexpr void Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo::__cordl_internal_set_hardwareIdentifier(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hardwareIdentifier = value;
}
constexpr int32_t& Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr int32_t const& Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo::__cordl_internal_set_id(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___id = value;
}
inline void Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo* Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo()   {
}
//  Writing Method size for method: ::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo.get_joystickCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo::*)()>(&::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo::get_joystickCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803aba50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo*>(),
                        {"get_joystickCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo.IndexOfJoystick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo::*)(int32_t)>(&::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo::IndexOfJoystick)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803ab9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo*>(),
                        {"IndexOfJoystick", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo.ContainsJoystick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo::*)(int32_t)>(&::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo::ContainsJoystick)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803ab990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo*>(),
                        {"ContainsJoystick", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo::*)()>(&::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr int32_t const& Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo::__cordl_internal_set_id(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___id = value;
}
constexpr bool& Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo::__cordl_internal_get_hasKeyboard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasKeyboard;
}
constexpr bool const& Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo::__cordl_internal_get_hasKeyboard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasKeyboard;
}
constexpr void Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo::__cordl_internal_set_hasKeyboard(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasKeyboard = value;
}
constexpr bool& Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo::__cordl_internal_get_hasMouse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasMouse;
}
constexpr bool const& Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo::__cordl_internal_get_hasMouse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasMouse;
}
constexpr void Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo::__cordl_internal_set_hasMouse(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasMouse = value;
}
constexpr ::ArrayW<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo*>& Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo::__cordl_internal_get_joysticks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joysticks;
}
constexpr ::ArrayW<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo*> const& Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo::__cordl_internal_get_joysticks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joysticks;
}
constexpr void Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo::__cordl_internal_set_joysticks(::ArrayW<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joysticks = value;
}
inline int32_t Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo::get_joystickCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo*>(),
                        {"get_joystickCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo::IndexOfJoystick(int32_t  joystickId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo*>(),
                        {"IndexOfJoystick", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, joystickId);
}
inline bool Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo::ContainsJoystick(int32_t  joystickId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo*>(),
                        {"ContainsJoystick", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, joystickId);
}
inline void Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo* Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo()   {
}
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo.get_playerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo::get_playerCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803a9050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo*>(),
                        {"get_playerCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo::*)(int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803a8fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo.IndexOfPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo::*)(int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo::IndexOfPlayer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803a8eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo*>(),
                        {"IndexOfPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo.ContainsPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo::*)(int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo::ContainsPlayer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803a8e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo*>(),
                        {"ContainsPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo*>& Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo::__cordl_internal_get_players()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___players;
}
constexpr ::ArrayW<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo*> const& Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo::__cordl_internal_get_players() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___players;
}
constexpr void Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo::__cordl_internal_set_players(::ArrayW<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_PlayerInfo*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___players = value;
}
inline int32_t Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo::get_playerCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo*>(),
                        {"get_playerCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo::_ctor(int32_t  playerCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCount);
}
inline int32_t Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo::IndexOfPlayer(int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo*>(),
                        {"IndexOfPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, playerId);
}
inline bool Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo::ContainsPlayer(int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo*>(),
                        {"ContainsPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerId);
}
inline ::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo* Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo*>());
}
inline ::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo* Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo::New_ctor(int32_t  playerCount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo*>(playerCount));
}
// Ctor Parameters []
constexpr ::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo()   {
}
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo::*)(::Rewired::Joystick*, int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803aacc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Joystick*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Joystick*& Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo::__cordl_internal_get_joystick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystick;
}
constexpr ::Rewired::Joystick* const& Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo::__cordl_internal_get_joystick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystick;
}
constexpr void Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo::__cordl_internal_set_joystick(::Rewired::Joystick*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joystick = value;
}
constexpr int32_t& Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo::__cordl_internal_get_oldJoystickId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oldJoystickId;
}
constexpr int32_t const& Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo::__cordl_internal_get_oldJoystickId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oldJoystickId;
}
constexpr void Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo::__cordl_internal_set_oldJoystickId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oldJoystickId = value;
}
inline void Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo::_ctor(::Rewired::Joystick*  joystick, int32_t  oldJoystickId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Joystick*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, joystick, oldJoystickId);
}
inline ::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo* Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo::New_ctor(::Rewired::Joystick*  joystick, int32_t  oldJoystickId)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo*>(joystick, oldJoystickId));
}
// Ctor Parameters []
constexpr ::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo()   {
}
//  Writing Method size for method: ::Rewired::Data::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry.TryGetElementAssignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry::*)(::Rewired::ControllerType, ::Rewired::Controller_Element*, ::by_ref<::Rewired::ElementAssignment>)>(&::Rewired::Data::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry::TryGetElementAssignment)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1803aa5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry>(),
                        {"TryGetElementAssignment", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<::Rewired::Controller_Element*>(), ::i2c::type_of<::by_ref<::Rewired::ElementAssignment>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry::*)()>(&::Rewired::Data::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry::ToString)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1803aa4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry>(),
                    {::i2c::class_of<::Rewired::Data::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry>(), 3}
                ));
    return ___internal_method;
  }
};
inline bool Rewired::Data::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry::TryGetElementAssignment(::Rewired::ControllerType  controllerType, ::Rewired::Controller_Element*  targetElement, ::by_ref<::Rewired::ElementAssignment>  assignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry>(),
                        {"TryGetElementAssignment", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<::Rewired::Controller_Element*>(), ::i2c::type_of<::by_ref<::Rewired::ElementAssignment>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, controllerType, targetElement, assignment);
}
inline ::StringW Rewired::Data::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "actionId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "elementType", ty: "::Rewired::ControllerElementType", modifiers: "", def_value: Some("{}") }, CppParam { name: "axisRange", ty: "::Rewired::AxisRange", modifiers: "", def_value: Some("{}") }, CppParam { name: "invert", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "axisContribution", ty: "::Rewired::Pole", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Data::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry(int32_t  actionId, ::Rewired::ControllerElementType  elementType, ::Rewired::AxisRange  axisRange, bool  invert, ::Rewired::Pole  axisContribution) noexcept  {
this->actionId = actionId;
this->elementType = elementType;
this->axisRange = axisRange;
this->invert = invert;
this->axisContribution = axisContribution;
}
// Ctor Parameters []
constexpr ::Rewired::Data::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry()   {
}
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803a9690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap::*)(::Rewired::ActionElementMap*)>(&::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap::Add)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1803a9190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap*>(),
                        {"Add", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap::ToString)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1803a9360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap::ToJson)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a9350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap*>(),
                        {"ToJson", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap.FromJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap* (*)(::StringW, ::StringW)>(&::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap::FromJson)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803a9300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap*>(),
                        {"FromJson", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap::__cordl_internal_get_role()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___role;
}
constexpr ::StringW const& Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap::__cordl_internal_get_role() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___role;
}
constexpr void Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap::__cordl_internal_set_role(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___role = value;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::Data::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry>*& Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::Data::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry>* const& Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap::__cordl_internal_set_data(::System::Collections::Generic::List_1<::Rewired::Data::ControllerElementByRoleMap_UserDataStore_PlayerPrefs_Entry>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
inline void Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap::Add(::Rewired::ActionElementMap*  elementMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap*>(),
                        {"Add", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elementMap);
}
inline ::StringW Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap::ToJson()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap*>(),
                        {"ToJson", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap* Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap::FromJson(::StringW  role, ::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap*>(),
                        {"FromJson", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap*>(nullptr, ___internal_method, role, json);
}
inline ::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap* Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap::UserDataStore_PlayerPrefs_ControllerElementByRoleMap()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Data::UserDataStore_PlayerPrefs_ActionMappingSaveMode::UserDataStore_PlayerPrefs_ActionMappingSaveMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Data::UserDataStore_PlayerPrefs_ActionMappingSaveMode::UserDataStore_PlayerPrefs_ActionMappingSaveMode()   {
}
constexpr ::Rewired::Data::UserDataStore_PlayerPrefs_ActionMappingSaveMode  Rewired::Data::UserDataStore_PlayerPrefs_ActionMappingSaveMode::ByController{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Data::UserDataStore_PlayerPrefs_ActionMappingSaveMode  Rewired::Data::UserDataStore_PlayerPrefs_ActionMappingSaveMode::ByControllerElementRole{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_0::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_0._LoadJoystickAssignmentsNow_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_0::*)(::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo*)>(&::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_0::_LoadJoystickAssignmentsNow_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803b5bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_0*>(),
                        {"<LoadJoystickAssignmentsNow>b__0", {}, {::i2c::type_of<::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Joystick*& Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_0::__cordl_internal_get_joystick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystick;
}
constexpr ::Rewired::Joystick* const& Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_0::__cordl_internal_get_joystick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystick;
}
constexpr void Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_0::__cordl_internal_set_joystick(::Rewired::Joystick*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joystick = value;
}
inline void Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_0::_LoadJoystickAssignmentsNow_b__0(::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_0*>(),
                        {"<LoadJoystickAssignmentsNow>b__0", {}, {::i2c::type_of<::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_0* Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_0*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_0::UserDataStore_PlayerPrefs___c__DisplayClass86_0()   {
}
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_1::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_1::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_1._LoadJoystickAssignmentsNow_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_1::*)(::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo*)>(&::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_1::_LoadJoystickAssignmentsNow_b__1)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803b5bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_1*>(),
                        {"<LoadJoystickAssignmentsNow>b__1", {}, {::i2c::type_of<::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo*& Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_1::__cordl_internal_get_joystickInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystickInfo;
}
constexpr ::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo* const& Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_1::__cordl_internal_get_joystickInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystickInfo;
}
constexpr void Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_1::__cordl_internal_set_joystickInfo(::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joystickInfo = value;
}
inline void Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_1::_LoadJoystickAssignmentsNow_b__1(::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_1*>(),
                        {"<LoadJoystickAssignmentsNow>b__1", {}, {::i2c::type_of<::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_1* Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_1*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_1::UserDataStore_PlayerPrefs___c__DisplayClass86_1()   {
}
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_2::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_2::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_2*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_2._LoadJoystickAssignmentsNow_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_2::*)(::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo*)>(&::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_2::_LoadJoystickAssignmentsNow_b__2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803b5bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_2*>(),
                        {"<LoadJoystickAssignmentsNow>b__2", {}, {::i2c::type_of<::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Joystick*& Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_2::__cordl_internal_get_match()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___match;
}
constexpr ::Rewired::Joystick* const& Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_2::__cordl_internal_get_match() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___match;
}
constexpr void Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_2::__cordl_internal_set_match(::Rewired::Joystick*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___match = value;
}
inline void Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_2*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_2::_LoadJoystickAssignmentsNow_b__2(::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_2*>(),
                        {"<LoadJoystickAssignmentsNow>b__2", {}, {::i2c::type_of<::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_2* Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_2::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_2*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass86_2::UserDataStore_PlayerPrefs___c__DisplayClass86_2()   {
}
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::*)(int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::MoveNext)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803b5540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Rewired::Data::UserDataStore_PlayerPrefs>& Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Rewired::Data::UserDataStore_PlayerPrefs> const& Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::__cordl_internal_set___4__this(::UnityW<::Rewired::Data::UserDataStore_PlayerPrefs>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88* Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Data::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88::UserDataStore_PlayerPrefs__LoadJoystickAssignmentsDeferred_d__88()   {
}
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.get_IsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_PlayerPrefs::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs::get_IsEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"get_IsEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.set_IsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(bool)>(&::Rewired::Data::UserDataStore_PlayerPrefs::set_IsEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"set_IsEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.get_LoadDataOnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_PlayerPrefs::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs::get_LoadDataOnStart)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"get_LoadDataOnStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.set_LoadDataOnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(bool)>(&::Rewired::Data::UserDataStore_PlayerPrefs::set_LoadDataOnStart)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"set_LoadDataOnStart", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.get_LoadJoystickAssignments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_PlayerPrefs::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs::get_LoadJoystickAssignments)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"get_LoadJoystickAssignments", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.set_LoadJoystickAssignments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(bool)>(&::Rewired::Data::UserDataStore_PlayerPrefs::set_LoadJoystickAssignments)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"set_LoadJoystickAssignments", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.get_LoadKeyboardAssignments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_PlayerPrefs::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs::get_LoadKeyboardAssignments)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"get_LoadKeyboardAssignments", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.set_LoadKeyboardAssignments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(bool)>(&::Rewired::Data::UserDataStore_PlayerPrefs::set_LoadKeyboardAssignments)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"set_LoadKeyboardAssignments", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.get_LoadMouseAssignments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_PlayerPrefs::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs::get_LoadMouseAssignments)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"get_LoadMouseAssignments", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.set_LoadMouseAssignments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(bool)>(&::Rewired::Data::UserDataStore_PlayerPrefs::set_LoadMouseAssignments)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"set_LoadMouseAssignments", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.get_actionMappingSaveMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::UserDataStore_PlayerPrefs_ActionMappingSaveMode (::Rewired::Data::UserDataStore_PlayerPrefs::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs::get_actionMappingSaveMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"get_actionMappingSaveMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.set_actionMappingSaveMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::Data::UserDataStore_PlayerPrefs_ActionMappingSaveMode)>(&::Rewired::Data::UserDataStore_PlayerPrefs::set_actionMappingSaveMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"set_actionMappingSaveMode", {}, {::i2c::type_of<::Rewired::Data::UserDataStore_PlayerPrefs_ActionMappingSaveMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.get_PlayerPrefsKeyPrefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::UserDataStore_PlayerPrefs::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs::get_PlayerPrefsKeyPrefix)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"get_PlayerPrefsKeyPrefix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.set_PlayerPrefsKeyPrefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::StringW)>(&::Rewired::Data::UserDataStore_PlayerPrefs::set_PlayerPrefsKeyPrefix)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"set_PlayerPrefsKeyPrefix", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.get_playerPrefsKey_controllerAssignments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::UserDataStore_PlayerPrefs::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs::get_playerPrefsKey_controllerAssignments)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803bcdd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"get_playerPrefsKey_controllerAssignments", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.get_loadControllerAssignments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_PlayerPrefs::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs::get_loadControllerAssignments)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803a7420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"get_loadControllerAssignments", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.get_allActionIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<int32_t>* (::Rewired::Data::UserDataStore_PlayerPrefs::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs::get_allActionIds)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1803bcbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"get_allActionIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.get_allActionIdsString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::UserDataStore_PlayerPrefs::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs::get_allActionIdsString)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1803bcad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"get_allActionIdsString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs::Save)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803bca30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.SaveControllerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(int32_t, ::Rewired::ControllerType, int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::SaveControllerData)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803bb590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.SaveControllerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::ControllerType, int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::SaveControllerData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803bb610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.SavePlayerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::SavePlayerData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803bc990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.SaveInputBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(int32_t, int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::SaveInputBehavior)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1803bc1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs::Load)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803ba940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.LoadControllerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(int32_t, ::Rewired::ControllerType, int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::LoadControllerData)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1803b7f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.LoadControllerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::ControllerType, int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::LoadControllerData)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803b7f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.LoadPlayerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::LoadPlayerData)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803ba8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.LoadInputBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(int32_t, int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::LoadInputBehavior)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1803b8fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.OnInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs::OnInitialize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803bac20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.OnControllerConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::ControllerStatusChangedEventArgs*)>(&::Rewired::Data::UserDataStore_PlayerPrefs::OnControllerConnected)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803ba960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.OnControllerPreDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::ControllerStatusChangedEventArgs*)>(&::Rewired::Data::UserDataStore_PlayerPrefs::OnControllerPreDisconnect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803babf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.OnControllerDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::ControllerStatusChangedEventArgs*)>(&::Rewired::Data::UserDataStore_PlayerPrefs::OnControllerDisconnected)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803baa10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.SaveControllerMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(int32_t, ::Rewired::ControllerMap*)>(&::Rewired::Data::UserDataStore_PlayerPrefs::SaveControllerMap)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1803bbce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.LoadControllerMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerMap* (::Rewired::Data::UserDataStore_PlayerPrefs::*)(int32_t, ::Rewired::ControllerIdentifier, int32_t, int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::LoadControllerMap)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803b8150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.LoadAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::UserDataStore_PlayerPrefs::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs::LoadAll)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1803b7b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.LoadPlayerDataNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::UserDataStore_PlayerPrefs::*)(int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::LoadPlayerDataNow)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803ba860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadPlayerDataNow", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.LoadPlayerDataNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::Player*)>(&::Rewired::Data::UserDataStore_PlayerPrefs::LoadPlayerDataNow)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1803ba5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadPlayerDataNow", {}, {::i2c::type_of<::Rewired::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.LoadAllJoystickCalibrationData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::UserDataStore_PlayerPrefs::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs::LoadAllJoystickCalibrationData)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1803b7970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadAllJoystickCalibrationData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.LoadJoystickCalibrationData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::Joystick*)>(&::Rewired::Data::UserDataStore_PlayerPrefs::LoadJoystickCalibrationData)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803b9fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadJoystickCalibrationData", {}, {::i2c::type_of<::Rewired::Joystick*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.LoadJoystickCalibrationData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::UserDataStore_PlayerPrefs::*)(int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::LoadJoystickCalibrationData)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803b9f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadJoystickCalibrationData", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.LoadJoystickData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::UserDataStore_PlayerPrefs::*)(int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::LoadJoystickData)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1803ba060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadJoystickData", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.LoadControllerDataNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::UserDataStore_PlayerPrefs::*)(int32_t, ::Rewired::ControllerType, int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::LoadControllerDataNow)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803b7e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadControllerDataNow", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.LoadControllerDataNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::ControllerType, int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::LoadControllerDataNow)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803b7f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadControllerDataNow", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.LoadControllerMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::UserDataStore_PlayerPrefs::*)(int32_t, ::Rewired::ControllerType, int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::LoadControllerMaps)> {
  constexpr static std::size_t size = 0x930;
  constexpr static std::size_t addrs = 0x1803b84a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadControllerMaps", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.LoadControllerMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerMap* (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::Player*, ::Rewired::ControllerIdentifier, int32_t, int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::LoadControllerMap)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1803b8210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadControllerMap", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.LoadControllerElementMapByRole
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::Player*, ::Rewired::Controller*, ::StringW, int32_t, int32_t, ::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap*>*)>(&::Rewired::Data::UserDataStore_PlayerPrefs::LoadControllerElementMapByRole)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1803b8050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadControllerElementMapByRole", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.LoadInputBehaviors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::UserDataStore_PlayerPrefs::*)(int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::LoadInputBehaviors)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1803b90f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadInputBehaviors", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.LoadInputBehaviorNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::UserDataStore_PlayerPrefs::*)(int32_t, int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::LoadInputBehaviorNow)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1803b8dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadInputBehaviorNow", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.LoadInputBehaviorNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::Player*, ::Rewired::InputBehavior*)>(&::Rewired::Data::UserDataStore_PlayerPrefs::LoadInputBehaviorNow)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803b8f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadInputBehaviorNow", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::InputBehavior*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.LoadControllerAssignmentsNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_PlayerPrefs::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs::LoadControllerAssignmentsNow)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803b7e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadControllerAssignmentsNow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.LoadKeyboardAndMouseAssignmentsNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo*)>(&::Rewired::Data::UserDataStore_PlayerPrefs::LoadKeyboardAndMouseAssignmentsNow)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x1803ba280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadKeyboardAndMouseAssignmentsNow", {}, {::i2c::type_of<::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.LoadJoystickAssignmentsNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo*)>(&::Rewired::Data::UserDataStore_PlayerPrefs::LoadJoystickAssignmentsNow)> {
  constexpr static std::size_t size = 0xb50;
  constexpr static std::size_t addrs = 0x1803b93d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadJoystickAssignmentsNow", {}, {::i2c::type_of<::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.LoadControllerAssignmentData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo* (::Rewired::Data::UserDataStore_PlayerPrefs::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs::LoadControllerAssignmentData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803b7d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadControllerAssignmentData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.LoadJoystickAssignmentsDeferred
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Rewired::Data::UserDataStore_PlayerPrefs::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs::LoadJoystickAssignmentsDeferred)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803b9380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadJoystickAssignmentsDeferred", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.SaveAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs::SaveAll)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x1803baea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SaveAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.SavePlayerDataNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::SavePlayerDataNow)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803bc910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SavePlayerDataNow", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.SavePlayerDataNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::Player*)>(&::Rewired::Data::UserDataStore_PlayerPrefs::SavePlayerDataNow)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1803bc6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SavePlayerDataNow", {}, {::i2c::type_of<::Rewired::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.SaveAllJoystickCalibrationData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs::SaveAllJoystickCalibrationData)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1803bacb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SaveAllJoystickCalibrationData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.SaveJoystickCalibrationData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::SaveJoystickCalibrationData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803bc3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SaveJoystickCalibrationData", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.SaveJoystickCalibrationData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::Joystick*)>(&::Rewired::Data::UserDataStore_PlayerPrefs::SaveJoystickCalibrationData)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803bc450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SaveJoystickCalibrationData", {}, {::i2c::type_of<::Rewired::Joystick*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.SaveJoystickData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::SaveJoystickData)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1803bc4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SaveJoystickData", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.SaveControllerDataNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(int32_t, ::Rewired::ControllerType, int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::SaveControllerDataNow)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803bb500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SaveControllerDataNow", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.SaveControllerDataNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::ControllerType, int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::SaveControllerDataNow)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803bb560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SaveControllerDataNow", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.SaveControllerMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::Player*, ::Rewired::PlayerSaveData)>(&::Rewired::Data::UserDataStore_PlayerPrefs::SaveControllerMaps)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1803bbf80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SaveControllerMaps", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::PlayerSaveData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.SaveControllerMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(int32_t, ::Rewired::ControllerType, int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::SaveControllerMaps)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1803bbdb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SaveControllerMaps", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.SaveControllerMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::Player*, ::Rewired::ControllerMap*)>(&::Rewired::Data::UserDataStore_PlayerPrefs::SaveControllerMap)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803bbc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SaveControllerMap", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.SaveControllerMapByController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::Player*, ::Rewired::ControllerMap*)>(&::Rewired::Data::UserDataStore_PlayerPrefs::SaveControllerMapByController)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1803bb9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SaveControllerMapByController", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.SaveControllerMapByControllerElementRole
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::Player*, ::Rewired::Controller*, ::Rewired::ControllerMap*)>(&::Rewired::Data::UserDataStore_PlayerPrefs::SaveControllerMapByControllerElementRole)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x1803bb650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SaveControllerMapByControllerElementRole", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<::Rewired::ControllerMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.AddControllerElementByRoleMapEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::Player*, ::Rewired::Controller*, ::Rewired::ActionElementMap*, ::by_ref<::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap*>*>)>(&::Rewired::Data::UserDataStore_PlayerPrefs::AddControllerElementByRoleMapEntry)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1803b6230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"AddControllerElementByRoleMapEntry", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<::Rewired::ActionElementMap*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap*>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.SaveInputBehaviors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::Player*, ::Rewired::PlayerSaveData)>(&::Rewired::Data::UserDataStore_PlayerPrefs::SaveInputBehaviors)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803bc2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SaveInputBehaviors", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::PlayerSaveData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.SaveInputBehaviorNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(int32_t, int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::SaveInputBehaviorNow)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1803bc120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SaveInputBehaviorNow", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.SaveInputBehaviorNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::Player*, ::Rewired::InputBehavior*)>(&::Rewired::Data::UserDataStore_PlayerPrefs::SaveInputBehaviorNow)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803bc0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SaveInputBehaviorNow", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::InputBehavior*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.SaveControllerAssignments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_PlayerPrefs::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs::SaveControllerAssignments)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1803bb170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SaveControllerAssignments", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.ControllerAssignmentSaveDataExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_PlayerPrefs::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs::ControllerAssignmentSaveDataExists)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803b6ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"ControllerAssignmentSaveDataExists", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.GetControllerMapPlayerPrefsKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::Player*, ::Rewired::ControllerIdentifier, int32_t, int32_t, int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::GetControllerMapPlayerPrefsKey)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1803b73b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"GetControllerMapPlayerPrefsKey", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.GetControllerElementByRoleMapPlayerPrefsKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::Player*, ::StringW, int32_t, int32_t, int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::GetControllerElementByRoleMapPlayerPrefsKey)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1803b6f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"GetControllerElementByRoleMapPlayerPrefsKey", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.GetJoystickCalibrationMapPlayerPrefsKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::Joystick*)>(&::Rewired::Data::UserDataStore_PlayerPrefs::GetJoystickCalibrationMapPlayerPrefsKey)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1803b77b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"GetJoystickCalibrationMapPlayerPrefsKey", {}, {::i2c::type_of<::Rewired::Joystick*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.GetControllerMapKnownActionIdsPlayerPrefsKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::Player*, ::Rewired::ControllerIdentifier, int32_t, int32_t, int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::GetControllerMapKnownActionIdsPlayerPrefsKey)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1803b70f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"GetControllerMapKnownActionIdsPlayerPrefsKey", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.GetInputBehaviorPlayerPrefsKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::Player*, int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::GetInputBehaviorPlayerPrefsKey)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1803b7660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"GetInputBehaviorPlayerPrefsKey", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.AppendBaseKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::StringW)>(&::Rewired::Data::UserDataStore_PlayerPrefs::AppendBaseKey)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803b68e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"AppendBaseKey", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.AppendPlayerKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::Rewired::Player*)>(&::Rewired::Data::UserDataStore_PlayerPrefs::AppendPlayerKey)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803b6e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"AppendPlayerKey", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Rewired::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.AppendControllerMapKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::Rewired::Player*, ::Rewired::ControllerIdentifier, int32_t, int32_t, int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::AppendControllerMapKey)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803b6be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"AppendControllerMapKey", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.AppendControllerMapKnownActionIdsKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::Rewired::Player*, ::Rewired::ControllerIdentifier, int32_t, int32_t, int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::AppendControllerMapKnownActionIdsKey)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803b6c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"AppendControllerMapKnownActionIdsKey", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.AppendControllerMapKeyCommonSuffix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::Rewired::Player*, ::Rewired::ControllerIdentifier, int32_t, int32_t, int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::AppendControllerMapKeyCommonSuffix)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x1803b6900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"AppendControllerMapKeyCommonSuffix", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.AppendControllerElementByRoleMapKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::StringW, int32_t, int32_t, int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::AppendControllerElementByRoleMapKey)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803a0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"AppendControllerElementByRoleMapKey", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.AppendJoystickCalibrationMapKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::Rewired::Joystick*)>(&::Rewired::Data::UserDataStore_PlayerPrefs::AppendJoystickCalibrationMapKey)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803b6d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"AppendJoystickCalibrationMapKey", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Rewired::Joystick*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.AppendInputBehaviorKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::AppendInputBehaviorKey)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803b6d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"AppendInputBehaviorKey", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.GetControllerMapXml
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::Player*, ::Rewired::ControllerIdentifier, int32_t, int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::GetControllerMapXml)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803b75a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"GetControllerMapXml", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.GetControllerMapKnownActionIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<int32_t>* (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::Player*, ::Rewired::ControllerIdentifier, int32_t, int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::GetControllerMapKnownActionIds)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1803b7230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"GetControllerMapKnownActionIds", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.GetJoystickCalibrationMapXml
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::Joystick*)>(&::Rewired::Data::UserDataStore_PlayerPrefs::GetJoystickCalibrationMapXml)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803b7920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"GetJoystickCalibrationMapXml", {}, {::i2c::type_of<::Rewired::Joystick*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.GetInputBehaviorXml
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::Player*, int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::GetInputBehaviorXml)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803b7760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"GetInputBehaviorXml", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.AddDefaultMappingsForNewActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::ControllerIdentifier, ::Rewired::ControllerMap*, ::System::Collections::Generic::List_1<int32_t>*)>(&::Rewired::Data::UserDataStore_PlayerPrefs::AddDefaultMappingsForNewActions)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x1803b6460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"AddDefaultMappingsForNewActions", {}, {::i2c::type_of<::Rewired::ControllerIdentifier>(), ::i2c::type_of<::Rewired::ControllerMap*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.FindJoystickPrecise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Joystick* (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo*)>(&::Rewired::Data::UserDataStore_PlayerPrefs::FindJoystickPrecise)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1803a0860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"FindJoystickPrecise", {}, {::i2c::type_of<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.TryFindJoysticksImprecise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo*, ::by_ref<::System::Collections::Generic::List_1<::Rewired::Joystick*>*>)>(&::Rewired::Data::UserDataStore_PlayerPrefs::TryFindJoysticksImprecise)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1803a6c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"TryFindJoysticksImprecise", {}, {::i2c::type_of<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::Rewired::Joystick*>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.GetDuplicateIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Rewired::Player*, ::Rewired::ControllerIdentifier)>(&::Rewired::Data::UserDataStore_PlayerPrefs::GetDuplicateIndex)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x1803a0eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"GetDuplicateIndex", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerIdentifier>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.RefreshLayoutManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(int32_t)>(&::Rewired::Data::UserDataStore_PlayerPrefs::RefreshLayoutManager)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803a47b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"RefreshLayoutManager", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.OnControllerMapsSaved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)(::Rewired::Player*)>(&::Rewired::Data::UserDataStore_PlayerPrefs::OnControllerMapsSaved)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1803baa30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"OnControllerMapsSaved", {}, {::i2c::type_of<::Rewired::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.GetControllerMapType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::Rewired::ControllerType)>(&::Rewired::Data::UserDataStore_PlayerPrefs::GetControllerMapType)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803b74f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"GetControllerMapType", {}, {::i2c::type_of<::Rewired::ControllerType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs.SortOldestToNewest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Rewired::ControllerMapSaveData*, ::Rewired::ControllerMapSaveData*)>(&::Rewired::Data::UserDataStore_PlayerPrefs::SortOldestToNewest)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1803a6bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SortOldestToNewest", {}, {::i2c::type_of<::Rewired::ControllerMapSaveData*>(), ::i2c::type_of<::Rewired::ControllerMapSaveData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_PlayerPrefs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_PlayerPrefs::*)()>(&::Rewired::Data::UserDataStore_PlayerPrefs::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803bca50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_get_isEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isEnabled;
}
constexpr bool const& Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_get_isEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isEnabled;
}
constexpr void Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_set_isEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isEnabled = value;
}
constexpr bool& Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_get_loadDataOnStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadDataOnStart;
}
constexpr bool const& Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_get_loadDataOnStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadDataOnStart;
}
constexpr void Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_set_loadDataOnStart(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadDataOnStart = value;
}
constexpr bool& Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_get_loadJoystickAssignments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadJoystickAssignments;
}
constexpr bool const& Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_get_loadJoystickAssignments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadJoystickAssignments;
}
constexpr void Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_set_loadJoystickAssignments(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadJoystickAssignments = value;
}
constexpr bool& Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_get_loadKeyboardAssignments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadKeyboardAssignments;
}
constexpr bool const& Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_get_loadKeyboardAssignments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadKeyboardAssignments;
}
constexpr void Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_set_loadKeyboardAssignments(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadKeyboardAssignments = value;
}
constexpr bool& Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_get_loadMouseAssignments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadMouseAssignments;
}
constexpr bool const& Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_get_loadMouseAssignments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadMouseAssignments;
}
constexpr void Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_set_loadMouseAssignments(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadMouseAssignments = value;
}
constexpr ::Rewired::Data::UserDataStore_PlayerPrefs_ActionMappingSaveMode& Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_get__actionMappingSaveMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____actionMappingSaveMode;
}
constexpr ::Rewired::Data::UserDataStore_PlayerPrefs_ActionMappingSaveMode const& Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_get__actionMappingSaveMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____actionMappingSaveMode;
}
constexpr void Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_set__actionMappingSaveMode(::Rewired::Data::UserDataStore_PlayerPrefs_ActionMappingSaveMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____actionMappingSaveMode = value;
}
constexpr ::StringW& Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_get_playerPrefsKeyPrefix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerPrefsKeyPrefix;
}
constexpr ::StringW const& Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_get_playerPrefsKeyPrefix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerPrefsKeyPrefix;
}
constexpr void Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_set_playerPrefsKeyPrefix(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerPrefsKeyPrefix = value;
}
constexpr bool& Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_get_allowImpreciseJoystickAssignmentMatching()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowImpreciseJoystickAssignmentMatching;
}
constexpr bool const& Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_get_allowImpreciseJoystickAssignmentMatching() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowImpreciseJoystickAssignmentMatching;
}
constexpr void Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_set_allowImpreciseJoystickAssignmentMatching(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowImpreciseJoystickAssignmentMatching = value;
}
constexpr bool& Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_get_deferredJoystickAssignmentLoadPending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deferredJoystickAssignmentLoadPending;
}
constexpr bool const& Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_get_deferredJoystickAssignmentLoadPending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deferredJoystickAssignmentLoadPending;
}
constexpr void Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_set_deferredJoystickAssignmentLoadPending(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deferredJoystickAssignmentLoadPending = value;
}
constexpr bool& Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_get_wasJoystickEverDetected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasJoystickEverDetected;
}
constexpr bool const& Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_get_wasJoystickEverDetected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasJoystickEverDetected;
}
constexpr void Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_set_wasJoystickEverDetected(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasJoystickEverDetected = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_get___allActionIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____allActionIds;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_get___allActionIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____allActionIds;
}
constexpr void Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_set___allActionIds(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____allActionIds = value;
}
constexpr ::StringW& Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_get___allActionIdsString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____allActionIdsString;
}
constexpr ::StringW const& Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_get___allActionIdsString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____allActionIdsString;
}
constexpr void Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_set___allActionIdsString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____allActionIdsString = value;
}
constexpr ::System::Text::StringBuilder*& Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_get__sb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sb;
}
constexpr ::System::Text::StringBuilder* const& Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_get__sb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sb;
}
constexpr void Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_set__sb(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sb = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap*>*& Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_get__tempElementByRoleMaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempElementByRoleMaps;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap*>* const& Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_get__tempElementByRoleMaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempElementByRoleMaps;
}
constexpr void Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_set__tempElementByRoleMaps(::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tempElementByRoleMaps = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,bool>*& Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_get__tempElementByRoleMapsEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempElementByRoleMapsEnabled;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,bool>* const& Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_get__tempElementByRoleMapsEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempElementByRoleMapsEnabled;
}
constexpr void Rewired::Data::UserDataStore_PlayerPrefs::__cordl_internal_set__tempElementByRoleMapsEnabled(::System::Collections::Generic::Dictionary_2<::StringW,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tempElementByRoleMapsEnabled = value;
}
inline bool Rewired::Data::UserDataStore_PlayerPrefs::get_IsEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"get_IsEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::set_IsEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"set_IsEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Data::UserDataStore_PlayerPrefs::get_LoadDataOnStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"get_LoadDataOnStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::set_LoadDataOnStart(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"set_LoadDataOnStart", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Data::UserDataStore_PlayerPrefs::get_LoadJoystickAssignments()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"get_LoadJoystickAssignments", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::set_LoadJoystickAssignments(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"set_LoadJoystickAssignments", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Data::UserDataStore_PlayerPrefs::get_LoadKeyboardAssignments()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"get_LoadKeyboardAssignments", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::set_LoadKeyboardAssignments(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"set_LoadKeyboardAssignments", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Data::UserDataStore_PlayerPrefs::get_LoadMouseAssignments()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"get_LoadMouseAssignments", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::set_LoadMouseAssignments(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"set_LoadMouseAssignments", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::Data::UserDataStore_PlayerPrefs_ActionMappingSaveMode Rewired::Data::UserDataStore_PlayerPrefs::get_actionMappingSaveMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"get_actionMappingSaveMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::UserDataStore_PlayerPrefs_ActionMappingSaveMode>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::set_actionMappingSaveMode(::Rewired::Data::UserDataStore_PlayerPrefs_ActionMappingSaveMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"set_actionMappingSaveMode", {}, {::i2c::type_of<::Rewired::Data::UserDataStore_PlayerPrefs_ActionMappingSaveMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::Data::UserDataStore_PlayerPrefs::get_PlayerPrefsKeyPrefix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"get_PlayerPrefsKeyPrefix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::set_PlayerPrefsKeyPrefix(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"set_PlayerPrefsKeyPrefix", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::Data::UserDataStore_PlayerPrefs::get_playerPrefsKey_controllerAssignments()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"get_playerPrefsKey_controllerAssignments", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Rewired::Data::UserDataStore_PlayerPrefs::get_loadControllerAssignments()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"get_loadControllerAssignments", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<int32_t>* Rewired::Data::UserDataStore_PlayerPrefs::get_allActionIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"get_allActionIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*>(this, ___internal_method);
}
inline ::StringW Rewired::Data::UserDataStore_PlayerPrefs::get_allActionIdsString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"get_allActionIdsString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::Save()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::SaveControllerData(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, controllerType, controllerId);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::SaveControllerData(::Rewired::ControllerType  controllerType, int32_t  controllerId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerType, controllerId);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::SavePlayerData(int32_t  playerId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::SaveInputBehavior(int32_t  playerId, int32_t  behaviorId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, behaviorId);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::Load()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::LoadControllerData(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, controllerType, controllerId);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::LoadControllerData(::Rewired::ControllerType  controllerType, int32_t  controllerId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerType, controllerId);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::LoadPlayerData(int32_t  playerId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::LoadInputBehavior(int32_t  playerId, int32_t  behaviorId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, behaviorId);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::OnInitialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::OnControllerConnected(::Rewired::ControllerStatusChangedEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::OnControllerPreDisconnect(::Rewired::ControllerStatusChangedEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::OnControllerDisconnected(::Rewired::ControllerStatusChangedEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::SaveControllerMap(int32_t  playerId, ::Rewired::ControllerMap*  controllerMap)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, controllerMap);
}
inline ::Rewired::ControllerMap* Rewired::Data::UserDataStore_PlayerPrefs::LoadControllerMap(int32_t  playerId, ::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  categoryId, int32_t  layoutId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerMap*>(this, ___internal_method, playerId, controllerIdentifier, categoryId, layoutId);
}
inline int32_t Rewired::Data::UserDataStore_PlayerPrefs::LoadAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::Data::UserDataStore_PlayerPrefs::LoadPlayerDataNow(int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadPlayerDataNow", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, playerId);
}
inline int32_t Rewired::Data::UserDataStore_PlayerPrefs::LoadPlayerDataNow(::Rewired::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadPlayerDataNow", {}, {::i2c::type_of<::Rewired::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, player);
}
inline int32_t Rewired::Data::UserDataStore_PlayerPrefs::LoadAllJoystickCalibrationData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadAllJoystickCalibrationData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::Data::UserDataStore_PlayerPrefs::LoadJoystickCalibrationData(::Rewired::Joystick*  joystick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadJoystickCalibrationData", {}, {::i2c::type_of<::Rewired::Joystick*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, joystick);
}
inline int32_t Rewired::Data::UserDataStore_PlayerPrefs::LoadJoystickCalibrationData(int32_t  joystickId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadJoystickCalibrationData", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, joystickId);
}
inline int32_t Rewired::Data::UserDataStore_PlayerPrefs::LoadJoystickData(int32_t  joystickId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadJoystickData", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, joystickId);
}
inline int32_t Rewired::Data::UserDataStore_PlayerPrefs::LoadControllerDataNow(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadControllerDataNow", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, playerId, controllerType, controllerId);
}
inline int32_t Rewired::Data::UserDataStore_PlayerPrefs::LoadControllerDataNow(::Rewired::ControllerType  controllerType, int32_t  controllerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadControllerDataNow", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, controllerType, controllerId);
}
inline int32_t Rewired::Data::UserDataStore_PlayerPrefs::LoadControllerMaps(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadControllerMaps", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, playerId, controllerType, controllerId);
}
inline ::Rewired::ControllerMap* Rewired::Data::UserDataStore_PlayerPrefs::LoadControllerMap(::Rewired::Player*  player, ::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  categoryId, int32_t  layoutId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadControllerMap", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerMap*>(this, ___internal_method, player, controllerIdentifier, categoryId, layoutId);
}
inline bool Rewired::Data::UserDataStore_PlayerPrefs::LoadControllerElementMapByRole(::Rewired::Player*  player, ::Rewired::Controller*  controller, ::StringW  role, int32_t  mapCategoryId, int32_t  layoutId, ::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap*>*  elementByRoleMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadControllerElementMapByRole", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player, controller, role, mapCategoryId, layoutId, elementByRoleMaps);
}
inline int32_t Rewired::Data::UserDataStore_PlayerPrefs::LoadInputBehaviors(int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadInputBehaviors", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, playerId);
}
inline int32_t Rewired::Data::UserDataStore_PlayerPrefs::LoadInputBehaviorNow(int32_t  playerId, int32_t  behaviorId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadInputBehaviorNow", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, playerId, behaviorId);
}
inline int32_t Rewired::Data::UserDataStore_PlayerPrefs::LoadInputBehaviorNow(::Rewired::Player*  player, ::Rewired::InputBehavior*  inputBehavior)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadInputBehaviorNow", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::InputBehavior*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, player, inputBehavior);
}
inline bool Rewired::Data::UserDataStore_PlayerPrefs::LoadControllerAssignmentsNow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadControllerAssignmentsNow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Data::UserDataStore_PlayerPrefs::LoadKeyboardAndMouseAssignmentsNow(::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadKeyboardAndMouseAssignmentsNow", {}, {::i2c::type_of<::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data);
}
inline bool Rewired::Data::UserDataStore_PlayerPrefs::LoadJoystickAssignmentsNow(::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadJoystickAssignmentsNow", {}, {::i2c::type_of<::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data);
}
inline ::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo* Rewired::Data::UserDataStore_PlayerPrefs::LoadControllerAssignmentData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadControllerAssignmentData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Rewired::Data::UserDataStore_PlayerPrefs::LoadJoystickAssignmentsDeferred()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"LoadJoystickAssignmentsDeferred", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::SaveAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SaveAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::SavePlayerDataNow(int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SavePlayerDataNow", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::SavePlayerDataNow(::Rewired::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SavePlayerDataNow", {}, {::i2c::type_of<::Rewired::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::SaveAllJoystickCalibrationData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SaveAllJoystickCalibrationData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::SaveJoystickCalibrationData(int32_t  joystickId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SaveJoystickCalibrationData", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, joystickId);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::SaveJoystickCalibrationData(::Rewired::Joystick*  joystick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SaveJoystickCalibrationData", {}, {::i2c::type_of<::Rewired::Joystick*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, joystick);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::SaveJoystickData(int32_t  joystickId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SaveJoystickData", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, joystickId);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::SaveControllerDataNow(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SaveControllerDataNow", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, controllerType, controllerId);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::SaveControllerDataNow(::Rewired::ControllerType  controllerType, int32_t  controllerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SaveControllerDataNow", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerType, controllerId);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::SaveControllerMaps(::Rewired::Player*  player, ::Rewired::PlayerSaveData  playerSaveData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SaveControllerMaps", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::PlayerSaveData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, playerSaveData);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::SaveControllerMaps(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SaveControllerMaps", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, controllerType, controllerId);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::SaveControllerMap(::Rewired::Player*  player, ::Rewired::ControllerMap*  controllerMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SaveControllerMap", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, controllerMap);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::SaveControllerMapByController(::Rewired::Player*  player, ::Rewired::ControllerMap*  controllerMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SaveControllerMapByController", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, controllerMap);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::SaveControllerMapByControllerElementRole(::Rewired::Player*  player, ::Rewired::Controller*  controller, ::Rewired::ControllerMap*  controllerMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SaveControllerMapByControllerElementRole", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<::Rewired::ControllerMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, controller, controllerMap);
}
inline bool Rewired::Data::UserDataStore_PlayerPrefs::AddControllerElementByRoleMapEntry(::Rewired::Player*  player, ::Rewired::Controller*  controller, ::Rewired::ActionElementMap*  elementMap, ::by_ref<::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap*>*>  maps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"AddControllerElementByRoleMapEntry", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<::Rewired::ActionElementMap*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Data::UserDataStore_PlayerPrefs_ControllerElementByRoleMap*>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player, controller, elementMap, maps);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::SaveInputBehaviors(::Rewired::Player*  player, ::Rewired::PlayerSaveData  playerSaveData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SaveInputBehaviors", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::PlayerSaveData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, playerSaveData);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::SaveInputBehaviorNow(int32_t  playerId, int32_t  behaviorId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SaveInputBehaviorNow", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, behaviorId);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::SaveInputBehaviorNow(::Rewired::Player*  player, ::Rewired::InputBehavior*  inputBehavior)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SaveInputBehaviorNow", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::InputBehavior*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, inputBehavior);
}
inline bool Rewired::Data::UserDataStore_PlayerPrefs::SaveControllerAssignments()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SaveControllerAssignments", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Data::UserDataStore_PlayerPrefs::ControllerAssignmentSaveDataExists()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"ControllerAssignmentSaveDataExists", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Rewired::Data::UserDataStore_PlayerPrefs::GetControllerMapPlayerPrefsKey(::Rewired::Player*  player, ::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  categoryId, int32_t  layoutId, int32_t  ppKeyVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"GetControllerMapPlayerPrefsKey", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, player, controllerIdentifier, categoryId, layoutId, ppKeyVersion);
}
inline ::StringW Rewired::Data::UserDataStore_PlayerPrefs::GetControllerElementByRoleMapPlayerPrefsKey(::Rewired::Player*  player, ::StringW  elementRole, int32_t  categoryId, int32_t  layoutId, int32_t  ppKeyVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"GetControllerElementByRoleMapPlayerPrefsKey", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, player, elementRole, categoryId, layoutId, ppKeyVersion);
}
inline ::StringW Rewired::Data::UserDataStore_PlayerPrefs::GetJoystickCalibrationMapPlayerPrefsKey(::Rewired::Joystick*  joystick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"GetJoystickCalibrationMapPlayerPrefsKey", {}, {::i2c::type_of<::Rewired::Joystick*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, joystick);
}
inline ::StringW Rewired::Data::UserDataStore_PlayerPrefs::GetControllerMapKnownActionIdsPlayerPrefsKey(::Rewired::Player*  player, ::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  categoryId, int32_t  layoutId, int32_t  ppKeyVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"GetControllerMapKnownActionIdsPlayerPrefsKey", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, player, controllerIdentifier, categoryId, layoutId, ppKeyVersion);
}
inline ::StringW Rewired::Data::UserDataStore_PlayerPrefs::GetInputBehaviorPlayerPrefsKey(::Rewired::Player*  player, int32_t  inputBehaviorId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"GetInputBehaviorPlayerPrefsKey", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, player, inputBehaviorId);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::AppendBaseKey(::System::Text::StringBuilder*  sb, ::StringW  playerPrefsKeyPrefix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"AppendBaseKey", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, playerPrefsKeyPrefix);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::AppendPlayerKey(::System::Text::StringBuilder*  sb, ::Rewired::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"AppendPlayerKey", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Rewired::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, player);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::AppendControllerMapKey(::System::Text::StringBuilder*  sb, ::Rewired::Player*  player, ::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  categoryId, int32_t  layoutId, int32_t  ppKeyVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"AppendControllerMapKey", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, player, controllerIdentifier, categoryId, layoutId, ppKeyVersion);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::AppendControllerMapKnownActionIdsKey(::System::Text::StringBuilder*  sb, ::Rewired::Player*  player, ::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  categoryId, int32_t  layoutId, int32_t  ppKeyVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"AppendControllerMapKnownActionIdsKey", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, player, controllerIdentifier, categoryId, layoutId, ppKeyVersion);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::AppendControllerMapKeyCommonSuffix(::System::Text::StringBuilder*  sb, ::Rewired::Player*  player, ::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  categoryId, int32_t  layoutId, int32_t  ppKeyVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"AppendControllerMapKeyCommonSuffix", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, player, controllerIdentifier, categoryId, layoutId, ppKeyVersion);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::AppendControllerElementByRoleMapKey(::System::Text::StringBuilder*  sb, ::StringW  elementRole, int32_t  categoryId, int32_t  layoutId, int32_t  ppKeyVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"AppendControllerElementByRoleMapKey", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, elementRole, categoryId, layoutId, ppKeyVersion);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::AppendJoystickCalibrationMapKey(::System::Text::StringBuilder*  sb, ::Rewired::Joystick*  joystick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"AppendJoystickCalibrationMapKey", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Rewired::Joystick*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, joystick);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::AppendInputBehaviorKey(::System::Text::StringBuilder*  sb, int32_t  inputBehaviorId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"AppendInputBehaviorKey", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, inputBehaviorId);
}
inline ::StringW Rewired::Data::UserDataStore_PlayerPrefs::GetControllerMapXml(::Rewired::Player*  player, ::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  categoryId, int32_t  layoutId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"GetControllerMapXml", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, player, controllerIdentifier, categoryId, layoutId);
}
inline ::System::Collections::Generic::List_1<int32_t>* Rewired::Data::UserDataStore_PlayerPrefs::GetControllerMapKnownActionIds(::Rewired::Player*  player, ::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  categoryId, int32_t  layoutId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"GetControllerMapKnownActionIds", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*>(this, ___internal_method, player, controllerIdentifier, categoryId, layoutId);
}
inline ::StringW Rewired::Data::UserDataStore_PlayerPrefs::GetJoystickCalibrationMapXml(::Rewired::Joystick*  joystick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"GetJoystickCalibrationMapXml", {}, {::i2c::type_of<::Rewired::Joystick*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, joystick);
}
inline ::StringW Rewired::Data::UserDataStore_PlayerPrefs::GetInputBehaviorXml(::Rewired::Player*  player, int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"GetInputBehaviorXml", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, player, id);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::AddDefaultMappingsForNewActions(::Rewired::ControllerIdentifier  controllerIdentifier, ::Rewired::ControllerMap*  controllerMap, ::System::Collections::Generic::List_1<int32_t>*  knownActionIds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"AddDefaultMappingsForNewActions", {}, {::i2c::type_of<::Rewired::ControllerIdentifier>(), ::i2c::type_of<::Rewired::ControllerMap*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerIdentifier, controllerMap, knownActionIds);
}
inline ::Rewired::Joystick* Rewired::Data::UserDataStore_PlayerPrefs::FindJoystickPrecise(::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo*  joystickInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"FindJoystickPrecise", {}, {::i2c::type_of<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Joystick*>(this, ___internal_method, joystickInfo);
}
inline bool Rewired::Data::UserDataStore_PlayerPrefs::TryFindJoysticksImprecise(::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo*  joystickInfo, ::by_ref<::System::Collections::Generic::List_1<::Rewired::Joystick*>*>  matches)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"TryFindJoysticksImprecise", {}, {::i2c::type_of<::Rewired::Data::ControllerAssignmentSaveInfo_UserDataStore_PlayerPrefs_JoystickInfo*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::Rewired::Joystick*>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, joystickInfo, matches);
}
inline int32_t Rewired::Data::UserDataStore_PlayerPrefs::GetDuplicateIndex(::Rewired::Player*  player, ::Rewired::ControllerIdentifier  controllerIdentifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"GetDuplicateIndex", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::ControllerIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, player, controllerIdentifier);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::RefreshLayoutManager(int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"RefreshLayoutManager", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::OnControllerMapsSaved(::Rewired::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"OnControllerMapsSaved", {}, {::i2c::type_of<::Rewired::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline ::System::Type* Rewired::Data::UserDataStore_PlayerPrefs::GetControllerMapType(::Rewired::ControllerType  controllerType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"GetControllerMapType", {}, {::i2c::type_of<::Rewired::ControllerType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, controllerType);
}
inline int32_t Rewired::Data::UserDataStore_PlayerPrefs::SortOldestToNewest(::Rewired::ControllerMapSaveData*  a, ::Rewired::ControllerMapSaveData*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {"SortOldestToNewest", {}, {::i2c::type_of<::Rewired::ControllerMapSaveData*>(), ::i2c::type_of<::Rewired::ControllerMapSaveData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b);
}
inline void Rewired::Data::UserDataStore_PlayerPrefs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_PlayerPrefs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::UserDataStore_PlayerPrefs* Rewired::Data::UserDataStore_PlayerPrefs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::UserDataStore_PlayerPrefs*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::UserDataStore_PlayerPrefs::UserDataStore_PlayerPrefs()   {
}

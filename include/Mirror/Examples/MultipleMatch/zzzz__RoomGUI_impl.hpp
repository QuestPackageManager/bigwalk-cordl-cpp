#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleMatch/RoomGUI.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__RoomGUI_def.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__PlayerInfo_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::RoomGUI.RefreshRoomPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::RoomGUI::*)(::ArrayW<::Mirror::Examples::MultipleMatch::PlayerInfo>)>(&::Mirror::Examples::MultipleMatch::RoomGUI::RefreshRoomPlayers)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x181563220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::RoomGUI*>(),
                        {"RefreshRoomPlayers", {}, {::i2c::type_of<::ArrayW<::Mirror::Examples::MultipleMatch::PlayerInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::RoomGUI.SetOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::RoomGUI::*)(bool)>(&::Mirror::Examples::MultipleMatch::RoomGUI::SetOwner)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1815636c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::RoomGUI*>(),
                        {"SetOwner", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::RoomGUI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::RoomGUI::*)()>(&::Mirror::Examples::MultipleMatch::RoomGUI::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::RoomGUI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Mirror::Examples::MultipleMatch::RoomGUI::__cordl_internal_get_playerList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerList;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Mirror::Examples::MultipleMatch::RoomGUI::__cordl_internal_get_playerList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerList;
}
constexpr void Mirror::Examples::MultipleMatch::RoomGUI::__cordl_internal_set_playerList(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerList = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Mirror::Examples::MultipleMatch::RoomGUI::__cordl_internal_get_playerPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Mirror::Examples::MultipleMatch::RoomGUI::__cordl_internal_get_playerPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerPrefab;
}
constexpr void Mirror::Examples::MultipleMatch::RoomGUI::__cordl_internal_set_playerPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Mirror::Examples::MultipleMatch::RoomGUI::__cordl_internal_get_cancelButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancelButton;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Mirror::Examples::MultipleMatch::RoomGUI::__cordl_internal_get_cancelButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancelButton;
}
constexpr void Mirror::Examples::MultipleMatch::RoomGUI::__cordl_internal_set_cancelButton(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancelButton = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Mirror::Examples::MultipleMatch::RoomGUI::__cordl_internal_get_leaveButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leaveButton;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Mirror::Examples::MultipleMatch::RoomGUI::__cordl_internal_get_leaveButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leaveButton;
}
constexpr void Mirror::Examples::MultipleMatch::RoomGUI::__cordl_internal_set_leaveButton(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leaveButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& Mirror::Examples::MultipleMatch::RoomGUI::__cordl_internal_get_startButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& Mirror::Examples::MultipleMatch::RoomGUI::__cordl_internal_get_startButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startButton;
}
constexpr void Mirror::Examples::MultipleMatch::RoomGUI::__cordl_internal_set_startButton(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startButton = value;
}
constexpr bool& Mirror::Examples::MultipleMatch::RoomGUI::__cordl_internal_get_owner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___owner;
}
constexpr bool const& Mirror::Examples::MultipleMatch::RoomGUI::__cordl_internal_get_owner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___owner;
}
constexpr void Mirror::Examples::MultipleMatch::RoomGUI::__cordl_internal_set_owner(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___owner = value;
}
inline void Mirror::Examples::MultipleMatch::RoomGUI::RefreshRoomPlayers(::ArrayW<::Mirror::Examples::MultipleMatch::PlayerInfo>  playerInfos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::RoomGUI*>(),
                        {"RefreshRoomPlayers", {}, {::i2c::type_of<::ArrayW<::Mirror::Examples::MultipleMatch::PlayerInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerInfos);
}
inline void Mirror::Examples::MultipleMatch::RoomGUI::SetOwner(bool  owner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::RoomGUI*>(),
                        {"SetOwner", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner);
}
inline void Mirror::Examples::MultipleMatch::RoomGUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::RoomGUI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Examples::MultipleMatch::RoomGUI* Mirror::Examples::MultipleMatch::RoomGUI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::MultipleMatch::RoomGUI*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::MultipleMatch::RoomGUI::RoomGUI()   {
}

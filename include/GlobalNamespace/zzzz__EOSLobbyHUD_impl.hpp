#pragma once
// IWYU pragma private; include "GlobalNamespace/EOSLobbyHUD.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EOSLobbyHUD_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__Attribute_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyDetails_def.hpp"
#include "GlobalNamespace/zzzz__EOSLobbyHUD_def.hpp"
#include "GlobalNamespace/zzzz__EOSLobby_def.hpp"
#include "Mirror/zzzz__NetworkManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyHUD___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyHUD___c::*)()>(&::GlobalNamespace::EOSLobbyHUD___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyHUD___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyHUD___c._OnJoinLobbySuccess_b__12_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EOSLobbyHUD___c::*)(::Epic::OnlineServices::Lobby::Attribute)>(&::GlobalNamespace::EOSLobbyHUD___c::_OnJoinLobbySuccess_b__12_0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18157cfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyHUD___c*>(),
                        {"<OnJoinLobbySuccess>b__12_0", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::Attribute>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyHUD___c._DrawLobbyMenu_b__18_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EOSLobbyHUD___c::*)(::Epic::OnlineServices::Lobby::Attribute)>(&::GlobalNamespace::EOSLobbyHUD___c::_DrawLobbyMenu_b__18_0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18157cd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyHUD___c*>(),
                        {"<DrawLobbyMenu>b__18_0", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::Attribute>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSLobbyHUD___c::setStaticF___9(::GlobalNamespace::EOSLobbyHUD___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::EOSLobbyHUD___c*, "<>9", ::GlobalNamespace::EOSLobbyHUD___c*>(std::forward<::GlobalNamespace::EOSLobbyHUD___c*>(value));
}
inline ::GlobalNamespace::EOSLobbyHUD___c* GlobalNamespace::EOSLobbyHUD___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::EOSLobbyHUD___c*, "<>9", ::GlobalNamespace::EOSLobbyHUD___c*>();
}
inline void GlobalNamespace::EOSLobbyHUD___c::setStaticF___9__12_0(::System::Predicate_1<::Epic::OnlineServices::Lobby::Attribute>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::Epic::OnlineServices::Lobby::Attribute>*, "<>9__12_0", ::GlobalNamespace::EOSLobbyHUD___c*>(std::forward<::System::Predicate_1<::Epic::OnlineServices::Lobby::Attribute>*>(value));
}
inline ::System::Predicate_1<::Epic::OnlineServices::Lobby::Attribute>* GlobalNamespace::EOSLobbyHUD___c::getStaticF___9__12_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::Epic::OnlineServices::Lobby::Attribute>*, "<>9__12_0", ::GlobalNamespace::EOSLobbyHUD___c*>();
}
inline void GlobalNamespace::EOSLobbyHUD___c::setStaticF___9__18_0(::System::Predicate_1<::Epic::OnlineServices::Lobby::Attribute>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::Epic::OnlineServices::Lobby::Attribute>*, "<>9__18_0", ::GlobalNamespace::EOSLobbyHUD___c*>(std::forward<::System::Predicate_1<::Epic::OnlineServices::Lobby::Attribute>*>(value));
}
inline ::System::Predicate_1<::Epic::OnlineServices::Lobby::Attribute>* GlobalNamespace::EOSLobbyHUD___c::getStaticF___9__18_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::Epic::OnlineServices::Lobby::Attribute>*, "<>9__18_0", ::GlobalNamespace::EOSLobbyHUD___c*>();
}
inline void GlobalNamespace::EOSLobbyHUD___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyHUD___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::EOSLobbyHUD___c::_OnJoinLobbySuccess_b__12_0(::Epic::OnlineServices::Lobby::Attribute  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyHUD___c*>(),
                        {"<OnJoinLobbySuccess>b__12_0", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::Attribute>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline bool GlobalNamespace::EOSLobbyHUD___c::_DrawLobbyMenu_b__18_0(::Epic::OnlineServices::Lobby::Attribute  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyHUD___c*>(),
                        {"<DrawLobbyMenu>b__18_0", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::Attribute>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::GlobalNamespace::EOSLobbyHUD___c* GlobalNamespace::EOSLobbyHUD___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSLobbyHUD___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobbyHUD___c::EOSLobbyHUD___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyHUD.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyHUD::*)()>(&::GlobalNamespace::EOSLobbyHUD::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18156cb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyHUD*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyHUD.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyHUD::*)()>(&::GlobalNamespace::EOSLobbyHUD::OnEnable)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x18156dc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyHUD*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyHUD.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyHUD::*)()>(&::GlobalNamespace::EOSLobbyHUD::OnDisable)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x18156d9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyHUD*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyHUD.OnCreateLobbySuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyHUD::*)(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*)>(&::GlobalNamespace::EOSLobbyHUD::OnCreateLobbySuccess)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18156d970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyHUD*>(),
                        {"OnCreateLobbySuccess", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyHUD.OnJoinLobbySuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyHUD::*)(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*)>(&::GlobalNamespace::EOSLobbyHUD::OnJoinLobbySuccess)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18156e0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyHUD*>(),
                        {"OnJoinLobbySuccess", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyHUD.OnFindLobbiesSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyHUD::*)(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::LobbyDetails*>*)>(&::GlobalNamespace::EOSLobbyHUD::OnFindLobbiesSuccess)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18156df30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyHUD*>(),
                        {"OnFindLobbiesSuccess", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::LobbyDetails*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyHUD.OnLeaveLobbySuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyHUD::*)()>(&::GlobalNamespace::EOSLobbyHUD::OnLeaveLobbySuccess)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18156e2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyHUD*>(),
                        {"OnLeaveLobbySuccess", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyHUD.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyHUD::*)()>(&::GlobalNamespace::EOSLobbyHUD::OnGUI)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18156df60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyHUD*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyHUD.DrawMenuButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyHUD::*)()>(&::GlobalNamespace::EOSLobbyHUD::DrawMenuButtons)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x18156d510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyHUD*>(),
                        {"DrawMenuButtons", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyHUD.DrawLobbyList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyHUD::*)()>(&::GlobalNamespace::EOSLobbyHUD::DrawLobbyList)> {
  constexpr static std::size_t size = 0x6a0;
  constexpr static std::size_t addrs = 0x18156cb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyHUD*>(),
                        {"DrawLobbyList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyHUD.DrawLobbyMenu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyHUD::*)()>(&::GlobalNamespace::EOSLobbyHUD::DrawLobbyMenu)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x18156d200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyHUD*>(),
                        {"DrawLobbyMenu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyHUD._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyHUD::*)()>(&::GlobalNamespace::EOSLobbyHUD::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18156e2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyHUD*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::EOSLobby>& GlobalNamespace::EOSLobbyHUD::__cordl_internal_get__eosLobby()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eosLobby;
}
constexpr ::UnityW<::GlobalNamespace::EOSLobby> const& GlobalNamespace::EOSLobbyHUD::__cordl_internal_get__eosLobby() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eosLobby;
}
constexpr void GlobalNamespace::EOSLobbyHUD::__cordl_internal_set__eosLobby(::UnityW<::GlobalNamespace::EOSLobby>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eosLobby = value;
}
constexpr ::UnityW<::Mirror::NetworkManager>& GlobalNamespace::EOSLobbyHUD::__cordl_internal_get_manager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manager;
}
constexpr ::UnityW<::Mirror::NetworkManager> const& GlobalNamespace::EOSLobbyHUD::__cordl_internal_get_manager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manager;
}
constexpr void GlobalNamespace::EOSLobbyHUD::__cordl_internal_set_manager(::UnityW<::Mirror::NetworkManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___manager = value;
}
constexpr ::StringW& GlobalNamespace::EOSLobbyHUD::__cordl_internal_get_lobbyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyName;
}
constexpr ::StringW const& GlobalNamespace::EOSLobbyHUD::__cordl_internal_get_lobbyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyName;
}
constexpr void GlobalNamespace::EOSLobbyHUD::__cordl_internal_set_lobbyName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lobbyName = value;
}
constexpr bool& GlobalNamespace::EOSLobbyHUD::__cordl_internal_get__showLobbyList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showLobbyList;
}
constexpr bool const& GlobalNamespace::EOSLobbyHUD::__cordl_internal_get__showLobbyList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showLobbyList;
}
constexpr void GlobalNamespace::EOSLobbyHUD::__cordl_internal_set__showLobbyList(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____showLobbyList = value;
}
constexpr bool& GlobalNamespace::EOSLobbyHUD::__cordl_internal_get__showPlayerList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showPlayerList;
}
constexpr bool const& GlobalNamespace::EOSLobbyHUD::__cordl_internal_get__showPlayerList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showPlayerList;
}
constexpr void GlobalNamespace::EOSLobbyHUD::__cordl_internal_set__showPlayerList(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____showPlayerList = value;
}
constexpr ::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::LobbyDetails*>*& GlobalNamespace::EOSLobbyHUD::__cordl_internal_get__foundLobbies()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____foundLobbies;
}
constexpr ::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::LobbyDetails*>* const& GlobalNamespace::EOSLobbyHUD::__cordl_internal_get__foundLobbies() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____foundLobbies;
}
constexpr void GlobalNamespace::EOSLobbyHUD::__cordl_internal_set__foundLobbies(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::LobbyDetails*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____foundLobbies = value;
}
constexpr ::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*& GlobalNamespace::EOSLobbyHUD::__cordl_internal_get__lobbyData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lobbyData;
}
constexpr ::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>* const& GlobalNamespace::EOSLobbyHUD::__cordl_internal_get__lobbyData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lobbyData;
}
constexpr void GlobalNamespace::EOSLobbyHUD::__cordl_internal_set__lobbyData(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lobbyData = value;
}
inline void GlobalNamespace::EOSLobbyHUD::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyHUD*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyHUD::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyHUD*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyHUD::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyHUD*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyHUD::OnCreateLobbySuccess(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyHUD*>(),
                        {"OnCreateLobbySuccess", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributes);
}
inline void GlobalNamespace::EOSLobbyHUD::OnJoinLobbySuccess(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyHUD*>(),
                        {"OnJoinLobbySuccess", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributes);
}
inline void GlobalNamespace::EOSLobbyHUD::OnFindLobbiesSuccess(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::LobbyDetails*>*  lobbiesFound)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyHUD*>(),
                        {"OnFindLobbiesSuccess", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::LobbyDetails*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lobbiesFound);
}
inline void GlobalNamespace::EOSLobbyHUD::OnLeaveLobbySuccess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyHUD*>(),
                        {"OnLeaveLobbySuccess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyHUD::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyHUD*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyHUD::DrawMenuButtons()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyHUD*>(),
                        {"DrawMenuButtons", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyHUD::DrawLobbyList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyHUD*>(),
                        {"DrawLobbyList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyHUD::DrawLobbyMenu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyHUD*>(),
                        {"DrawLobbyMenu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyHUD::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyHUD*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EOSLobbyHUD* GlobalNamespace::EOSLobbyHUD::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSLobbyHUD*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobbyHUD::EOSLobbyHUD()   {
}

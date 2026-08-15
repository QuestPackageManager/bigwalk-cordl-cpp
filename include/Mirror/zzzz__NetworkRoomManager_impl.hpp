#pragma once
// IWYU pragma private; include "Mirror/NetworkRoomManager.hpp"
#include "Mirror/zzzz__NetworkManager_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/zzzz__NetworkRoomManager_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkRoomManager_def.hpp"
#include "Mirror/zzzz__NetworkRoomPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "conn", ty: "::Mirror::NetworkConnectionToClient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "roomPlayer", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::NetworkRoomManager_PendingPlayer::NetworkRoomManager_PendingPlayer(::Mirror::NetworkConnectionToClient*  conn, ::UnityW<::UnityEngine::GameObject>  roomPlayer) noexcept  {
this->conn = conn;
this->roomPlayer = roomPlayer;
}
// Ctor Parameters []
constexpr ::Mirror::NetworkRoomManager_PendingPlayer::NetworkRoomManager_PendingPlayer()   {
}
//  Writing Method size for method: ::Mirror::NetworkRoomManager___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager___c::*)()>(&::Mirror::NetworkRoomManager___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomManager___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager___c._CheckReadyToBegin_b__16_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkRoomManager___c::*)(::System::Collections::Generic::KeyValuePair_2<int32_t,::Mirror::NetworkConnectionToClient*>)>(&::Mirror::NetworkRoomManager___c::_CheckReadyToBegin_b__16_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18152ff50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomManager___c*>(),
                        {"<CheckReadyToBegin>b__16_0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<int32_t,::Mirror::NetworkConnectionToClient*>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::NetworkRoomManager___c::setStaticF___9(::Mirror::NetworkRoomManager___c*  value)  {
::cordl_internals::setStaticField<::Mirror::NetworkRoomManager___c*, "<>9", ::Mirror::NetworkRoomManager___c*>(std::forward<::Mirror::NetworkRoomManager___c*>(value));
}
inline ::Mirror::NetworkRoomManager___c* Mirror::NetworkRoomManager___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Mirror::NetworkRoomManager___c*, "<>9", ::Mirror::NetworkRoomManager___c*>();
}
inline void Mirror::NetworkRoomManager___c::setStaticF___9__16_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::Mirror::NetworkConnectionToClient*>,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::Mirror::NetworkConnectionToClient*>,bool>*, "<>9__16_0", ::Mirror::NetworkRoomManager___c*>(std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::Mirror::NetworkConnectionToClient*>,bool>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::Mirror::NetworkConnectionToClient*>,bool>* Mirror::NetworkRoomManager___c::getStaticF___9__16_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::Mirror::NetworkConnectionToClient*>,bool>*, "<>9__16_0", ::Mirror::NetworkRoomManager___c*>();
}
inline void Mirror::NetworkRoomManager___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomManager___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::NetworkRoomManager___c::_CheckReadyToBegin_b__16_0(::System::Collections::Generic::KeyValuePair_2<int32_t,::Mirror::NetworkConnectionToClient*>  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomManager___c*>(),
                        {"<CheckReadyToBegin>b__16_0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<int32_t,::Mirror::NetworkConnectionToClient*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, conn);
}
inline ::Mirror::NetworkRoomManager___c* Mirror::NetworkRoomManager___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkRoomManager___c*>());
}
// Ctor Parameters []
constexpr ::Mirror::NetworkRoomManager___c::NetworkRoomManager___c()   {
}
//  Writing Method size for method: ::Mirror::NetworkRoomManager.get_allPlayersReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkRoomManager::*)()>(&::Mirror::NetworkRoomManager::get_allPlayersReady)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18030d8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                        {"get_allPlayersReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.set_allPlayersReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)(bool)>(&::Mirror::NetworkRoomManager::set_allPlayersReady)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181524e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                        {"set_allPlayersReady", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)()>(&::Mirror::NetworkRoomManager::OnValidate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181524570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.SceneLoadedForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)(::Mirror::NetworkConnectionToClient*, ::UnityEngine::GameObject*)>(&::Mirror::NetworkRoomManager::SceneLoadedForPlayer)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x181524a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                        {"SceneLoadedForPlayer", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.CallOnClientEnterRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)()>(&::Mirror::NetworkRoomManager::CallOnClientEnterRoom)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1815237f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                        {"CallOnClientEnterRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.CallOnClientExitRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)()>(&::Mirror::NetworkRoomManager::CallOnClientExitRoom)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1815238b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                        {"CallOnClientExitRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.CheckReadyToBegin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)()>(&::Mirror::NetworkRoomManager::CheckReadyToBegin)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181523970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                        {"CheckReadyToBegin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnServerConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkRoomManager::OnServerConnect)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181523e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnServerDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkRoomManager::OnServerDisconnect)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x181523f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnServerReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkRoomManager::OnServerReady)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181524160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnServerAddPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkRoomManager::OnServerAddPlayer)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181523d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.RecalculateRoomPlayerIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)()>(&::Mirror::NetworkRoomManager::RecalculateRoomPlayerIndices)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x181524840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                        {"RecalculateRoomPlayerIndices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.ServerChangeScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)(::StringW)>(&::Mirror::NetworkRoomManager::ServerChangeScene)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181524ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnServerSceneChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)(::StringW)>(&::Mirror::NetworkRoomManager::OnServerSceneChanged)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181524230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnStartServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)()>(&::Mirror::NetworkRoomManager::OnStartServer)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181524410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnStartHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)()>(&::Mirror::NetworkRoomManager::OnStartHost)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1815243f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnStopServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)()>(&::Mirror::NetworkRoomManager::OnStopServer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181524510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnStopHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)()>(&::Mirror::NetworkRoomManager::OnStopHost)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1815244f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnStartClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)()>(&::Mirror::NetworkRoomManager::OnStartClient)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181524330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnClientConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)()>(&::Mirror::NetworkRoomManager::OnClientConnect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181523b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnClientDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)()>(&::Mirror::NetworkRoomManager::OnClientDisconnect)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181523b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnStopClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)()>(&::Mirror::NetworkRoomManager::OnStopClient)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181524480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnClientSceneChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)()>(&::Mirror::NetworkRoomManager::OnClientSceneChanged)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181523b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnRoomStartHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)()>(&::Mirror::NetworkRoomManager::OnRoomStartHost)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnRoomStopHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)()>(&::Mirror::NetworkRoomManager::OnRoomStopHost)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnRoomStartServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)()>(&::Mirror::NetworkRoomManager::OnRoomStartServer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnRoomStopServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)()>(&::Mirror::NetworkRoomManager::OnRoomStopServer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnRoomServerConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkRoomManager::OnRoomServerConnect)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnRoomServerDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkRoomManager::OnRoomServerDisconnect)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnRoomServerSceneChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)(::StringW)>(&::Mirror::NetworkRoomManager::OnRoomServerSceneChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnRoomServerCreateRoomPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Mirror::NetworkRoomManager::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkRoomManager::OnRoomServerCreateRoomPlayer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnRoomServerCreateGamePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Mirror::NetworkRoomManager::*)(::Mirror::NetworkConnectionToClient*, ::UnityEngine::GameObject*)>(&::Mirror::NetworkRoomManager::OnRoomServerCreateGamePlayer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnRoomServerAddPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkRoomManager::OnRoomServerAddPlayer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181523d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnRoomServerSceneLoadedForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkRoomManager::*)(::Mirror::NetworkConnectionToClient*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*)>(&::Mirror::NetworkRoomManager::OnRoomServerSceneLoadedForPlayer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.ReadyStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)()>(&::Mirror::NetworkRoomManager::ReadyStatusChanged)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x181524610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnRoomServerPlayersReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)()>(&::Mirror::NetworkRoomManager::OnRoomServerPlayersReady)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181523d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnRoomServerPlayersNotReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)()>(&::Mirror::NetworkRoomManager::OnRoomServerPlayersNotReady)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnRoomClientEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)()>(&::Mirror::NetworkRoomManager::OnRoomClientEnter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnRoomClientExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)()>(&::Mirror::NetworkRoomManager::OnRoomClientExit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnRoomClientConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)()>(&::Mirror::NetworkRoomManager::OnRoomClientConnect)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnRoomClientDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)()>(&::Mirror::NetworkRoomManager::OnRoomClientDisconnect)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnRoomStartClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)()>(&::Mirror::NetworkRoomManager::OnRoomStartClient)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnRoomStopClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)()>(&::Mirror::NetworkRoomManager::OnRoomStopClient)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnRoomClientSceneChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)()>(&::Mirror::NetworkRoomManager::OnRoomClientSceneChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)()>(&::Mirror::NetworkRoomManager::OnGUI)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181523bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                    {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkRoomManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkRoomManager::*)()>(&::Mirror::NetworkRoomManager::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18151ddc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Mirror::NetworkRoomManager::__cordl_internal_get_showRoomGUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showRoomGUI;
}
constexpr bool const& Mirror::NetworkRoomManager::__cordl_internal_get_showRoomGUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showRoomGUI;
}
constexpr void Mirror::NetworkRoomManager::__cordl_internal_set_showRoomGUI(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showRoomGUI = value;
}
constexpr int32_t& Mirror::NetworkRoomManager::__cordl_internal_get_minPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minPlayers;
}
constexpr int32_t const& Mirror::NetworkRoomManager::__cordl_internal_get_minPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minPlayers;
}
constexpr void Mirror::NetworkRoomManager::__cordl_internal_set_minPlayers(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minPlayers = value;
}
constexpr ::UnityW<::Mirror::NetworkRoomPlayer>& Mirror::NetworkRoomManager::__cordl_internal_get_roomPlayerPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomPlayerPrefab;
}
constexpr ::UnityW<::Mirror::NetworkRoomPlayer> const& Mirror::NetworkRoomManager::__cordl_internal_get_roomPlayerPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomPlayerPrefab;
}
constexpr void Mirror::NetworkRoomManager::__cordl_internal_set_roomPlayerPrefab(::UnityW<::Mirror::NetworkRoomPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roomPlayerPrefab = value;
}
constexpr ::StringW& Mirror::NetworkRoomManager::__cordl_internal_get_RoomScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomScene;
}
constexpr ::StringW const& Mirror::NetworkRoomManager::__cordl_internal_get_RoomScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomScene;
}
constexpr void Mirror::NetworkRoomManager::__cordl_internal_set_RoomScene(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoomScene = value;
}
constexpr ::StringW& Mirror::NetworkRoomManager::__cordl_internal_get_GameplayScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameplayScene;
}
constexpr ::StringW const& Mirror::NetworkRoomManager::__cordl_internal_get_GameplayScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameplayScene;
}
constexpr void Mirror::NetworkRoomManager::__cordl_internal_set_GameplayScene(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GameplayScene = value;
}
constexpr ::System::Collections::Generic::List_1<::Mirror::NetworkRoomManager_PendingPlayer>*& Mirror::NetworkRoomManager::__cordl_internal_get_pendingPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingPlayers;
}
constexpr ::System::Collections::Generic::List_1<::Mirror::NetworkRoomManager_PendingPlayer>* const& Mirror::NetworkRoomManager::__cordl_internal_get_pendingPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingPlayers;
}
constexpr void Mirror::NetworkRoomManager::__cordl_internal_set_pendingPlayers(::System::Collections::Generic::List_1<::Mirror::NetworkRoomManager_PendingPlayer>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pendingPlayers = value;
}
constexpr bool& Mirror::NetworkRoomManager::__cordl_internal_get__allPlayersReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allPlayersReady;
}
constexpr bool const& Mirror::NetworkRoomManager::__cordl_internal_get__allPlayersReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allPlayersReady;
}
constexpr void Mirror::NetworkRoomManager::__cordl_internal_set__allPlayersReady(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allPlayersReady = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Mirror::NetworkRoomPlayer>>*& Mirror::NetworkRoomManager::__cordl_internal_get_roomSlots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomSlots;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Mirror::NetworkRoomPlayer>>* const& Mirror::NetworkRoomManager::__cordl_internal_get_roomSlots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomSlots;
}
constexpr void Mirror::NetworkRoomManager::__cordl_internal_set_roomSlots(::System::Collections::Generic::List_1<::UnityW<::Mirror::NetworkRoomPlayer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roomSlots = value;
}
constexpr int32_t& Mirror::NetworkRoomManager::__cordl_internal_get_clientIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientIndex;
}
constexpr int32_t const& Mirror::NetworkRoomManager::__cordl_internal_get_clientIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientIndex;
}
constexpr void Mirror::NetworkRoomManager::__cordl_internal_set_clientIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientIndex = value;
}
inline bool Mirror::NetworkRoomManager::get_allPlayersReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                        {"get_allPlayersReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::NetworkRoomManager::set_allPlayersReady(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                        {"set_allPlayersReady", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::NetworkRoomManager::OnValidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomManager::SceneLoadedForPlayer(::Mirror::NetworkConnectionToClient*  conn, ::UnityEngine::GameObject*  roomPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                        {"SceneLoadedForPlayer", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn, roomPlayer);
}
inline void Mirror::NetworkRoomManager::CallOnClientEnterRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                        {"CallOnClientEnterRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomManager::CallOnClientExitRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                        {"CallOnClientExitRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomManager::CheckReadyToBegin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                        {"CheckReadyToBegin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomManager::OnServerConnect(::Mirror::NetworkConnectionToClient*  conn)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline void Mirror::NetworkRoomManager::OnServerDisconnect(::Mirror::NetworkConnectionToClient*  conn)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline void Mirror::NetworkRoomManager::OnServerReady(::Mirror::NetworkConnectionToClient*  conn)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline void Mirror::NetworkRoomManager::OnServerAddPlayer(::Mirror::NetworkConnectionToClient*  conn)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline void Mirror::NetworkRoomManager::RecalculateRoomPlayerIndices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                        {"RecalculateRoomPlayerIndices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomManager::ServerChangeScene(::StringW  newSceneName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSceneName);
}
inline void Mirror::NetworkRoomManager::OnServerSceneChanged(::StringW  sceneName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneName);
}
inline void Mirror::NetworkRoomManager::OnStartServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomManager::OnStartHost()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomManager::OnStopServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomManager::OnStopHost()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomManager::OnStartClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomManager::OnClientConnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomManager::OnClientDisconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomManager::OnStopClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomManager::OnClientSceneChanged()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomManager::OnRoomStartHost()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomManager::OnRoomStopHost()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomManager::OnRoomStartServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomManager::OnRoomStopServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomManager::OnRoomServerConnect(::Mirror::NetworkConnectionToClient*  conn)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline void Mirror::NetworkRoomManager::OnRoomServerDisconnect(::Mirror::NetworkConnectionToClient*  conn)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline void Mirror::NetworkRoomManager::OnRoomServerSceneChanged(::StringW  sceneName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneName);
}
inline ::UnityW<::UnityEngine::GameObject> Mirror::NetworkRoomManager::OnRoomServerCreateRoomPlayer(::Mirror::NetworkConnectionToClient*  conn)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, conn);
}
inline ::UnityW<::UnityEngine::GameObject> Mirror::NetworkRoomManager::OnRoomServerCreateGamePlayer(::Mirror::NetworkConnectionToClient*  conn, ::UnityEngine::GameObject*  roomPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, conn, roomPlayer);
}
inline void Mirror::NetworkRoomManager::OnRoomServerAddPlayer(::Mirror::NetworkConnectionToClient*  conn)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline bool Mirror::NetworkRoomManager::OnRoomServerSceneLoadedForPlayer(::Mirror::NetworkConnectionToClient*  conn, ::UnityEngine::GameObject*  roomPlayer, ::UnityEngine::GameObject*  gamePlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, conn, roomPlayer, gamePlayer);
}
inline void Mirror::NetworkRoomManager::ReadyStatusChanged()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomManager::OnRoomServerPlayersReady()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomManager::OnRoomServerPlayersNotReady()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomManager::OnRoomClientEnter()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomManager::OnRoomClientExit()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomManager::OnRoomClientConnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomManager::OnRoomClientDisconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomManager::OnRoomStartClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomManager::OnRoomStopClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomManager::OnRoomClientSceneChanged()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomManager::OnGUI()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkRoomManager*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkRoomManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkRoomManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::NetworkRoomManager* Mirror::NetworkRoomManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkRoomManager*>());
}
// Ctor Parameters []
constexpr ::Mirror::NetworkRoomManager::NetworkRoomManager()   {
}

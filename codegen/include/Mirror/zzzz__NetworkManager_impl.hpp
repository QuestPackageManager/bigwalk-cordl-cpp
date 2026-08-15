#pragma once
// IWYU pragma private; include "Mirror/NetworkManager.hpp"
#include "Mirror/zzzz__NetworkManagerMode_impl.hpp"
#include "Mirror/zzzz__PlayerSpawnMethod_impl.hpp"
#include "Mirror/zzzz__SceneOperation_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Mirror/zzzz__NetworkManager_def.hpp"
#include "Mirror/zzzz__AddPlayerMessage_def.hpp"
#include "Mirror/zzzz__NetworkAuthenticator_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkConnection_def.hpp"
#include "Mirror/zzzz__NetworkManagerMode_def.hpp"
#include "Mirror/zzzz__NetworkManager_def.hpp"
#include "Mirror/zzzz__NotReadyMessage_def.hpp"
#include "Mirror/zzzz__ReadyMessage_def.hpp"
#include "Mirror/zzzz__SceneMessage_def.hpp"
#include "Mirror/zzzz__SceneOperation_def.hpp"
#include "Mirror/zzzz__SnapshotInterpolationSettings_def.hpp"
#include "Mirror/zzzz__TransportError_def.hpp"
#include "Mirror/zzzz__Transport_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Mirror::NetworkManager___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager___c::*)()>(&::Mirror::NetworkManager___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager___c._get_numPlayers_b__28_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkManager___c::*)(::System::Collections::Generic::KeyValuePair_2<int32_t,::Mirror::NetworkConnectionToClient*>)>(&::Mirror::NetworkManager___c::_get_numPlayers_b__28_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815525d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager___c*>(),
                        {"<get_numPlayers>b__28_0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<int32_t,::Mirror::NetworkConnectionToClient*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager___c._RegisterClientMessages_b__61_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkManager___c::*)(::UnityEngine::GameObject*)>(&::Mirror::NetworkManager___c::_RegisterClientMessages_b__61_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181552510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager___c*>(),
                        {"<RegisterClientMessages>b__61_0", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager___c._RegisterStartPosition_b__78_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mirror::NetworkManager___c::*)(::UnityEngine::Transform*)>(&::Mirror::NetworkManager___c::_RegisterStartPosition_b__78_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181552520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager___c*>(),
                        {"<RegisterStartPosition>b__78_0", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager___c._GetStartPosition_b__80_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkManager___c::*)(::UnityEngine::Transform*)>(&::Mirror::NetworkManager___c::_GetStartPosition_b__80_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18143d030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager___c*>(),
                        {"<GetStartPosition>b__80_0", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::NetworkManager___c::setStaticF___9(::Mirror::NetworkManager___c*  value)  {
::cordl_internals::setStaticField<::Mirror::NetworkManager___c*, "<>9", ::Mirror::NetworkManager___c*>(std::forward<::Mirror::NetworkManager___c*>(value));
}
inline ::Mirror::NetworkManager___c* Mirror::NetworkManager___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Mirror::NetworkManager___c*, "<>9", ::Mirror::NetworkManager___c*>();
}
inline void Mirror::NetworkManager___c::setStaticF___9__28_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::Mirror::NetworkConnectionToClient*>,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::Mirror::NetworkConnectionToClient*>,bool>*, "<>9__28_0", ::Mirror::NetworkManager___c*>(std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::Mirror::NetworkConnectionToClient*>,bool>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::Mirror::NetworkConnectionToClient*>,bool>* Mirror::NetworkManager___c::getStaticF___9__28_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::Mirror::NetworkConnectionToClient*>,bool>*, "<>9__28_0", ::Mirror::NetworkManager___c*>();
}
inline void Mirror::NetworkManager___c::setStaticF___9__61_0(::System::Func_2<::UnityW<::UnityEngine::GameObject>,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::GameObject>,bool>*, "<>9__61_0", ::Mirror::NetworkManager___c*>(std::forward<::System::Func_2<::UnityW<::UnityEngine::GameObject>,bool>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::GameObject>,bool>* Mirror::NetworkManager___c::getStaticF___9__61_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::GameObject>,bool>*, "<>9__61_0", ::Mirror::NetworkManager___c*>();
}
inline void Mirror::NetworkManager___c::setStaticF___9__78_0(::System::Func_2<::UnityW<::UnityEngine::Transform>,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::Transform>,int32_t>*, "<>9__78_0", ::Mirror::NetworkManager___c*>(std::forward<::System::Func_2<::UnityW<::UnityEngine::Transform>,int32_t>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::Transform>,int32_t>* Mirror::NetworkManager___c::getStaticF___9__78_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::Transform>,int32_t>*, "<>9__78_0", ::Mirror::NetworkManager___c*>();
}
inline void Mirror::NetworkManager___c::setStaticF___9__80_0(::System::Predicate_1<::UnityW<::UnityEngine::Transform>>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Transform>>*, "<>9__80_0", ::Mirror::NetworkManager___c*>(std::forward<::System::Predicate_1<::UnityW<::UnityEngine::Transform>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::UnityEngine::Transform>>* Mirror::NetworkManager___c::getStaticF___9__80_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Transform>>*, "<>9__80_0", ::Mirror::NetworkManager___c*>();
}
inline void Mirror::NetworkManager___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::NetworkManager___c::_get_numPlayers_b__28_0(::System::Collections::Generic::KeyValuePair_2<int32_t,::Mirror::NetworkConnectionToClient*>  kv)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager___c*>(),
                        {"<get_numPlayers>b__28_0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<int32_t,::Mirror::NetworkConnectionToClient*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, kv);
}
inline bool Mirror::NetworkManager___c::_RegisterClientMessages_b__61_0(::UnityEngine::GameObject*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager___c*>(),
                        {"<RegisterClientMessages>b__61_0", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
inline int32_t Mirror::NetworkManager___c::_RegisterStartPosition_b__78_0(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager___c*>(),
                        {"<RegisterStartPosition>b__78_0", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, transform);
}
inline bool Mirror::NetworkManager___c::_GetStartPosition_b__80_0(::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager___c*>(),
                        {"<GetStartPosition>b__80_0", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
inline ::Mirror::NetworkManager___c* Mirror::NetworkManager___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkManager___c*>());
}
// Ctor Parameters []
constexpr ::Mirror::NetworkManager___c::NetworkManager___c()   {
}
//  Writing Method size for method: ::Mirror::NetworkManager.get_serverTickRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::get_serverTickRate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"get_serverTickRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.get_serverTickInterval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::get_serverTickInterval)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18154a130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"get_serverTickInterval", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.get_singleton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Mirror::NetworkManager> (*)()>(&::Mirror::NetworkManager::get_singleton)> {
  constexpr static std::size_t size = 0x8a0;
  constexpr static std::size_t addrs = 0x180379040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"get_singleton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.set_singleton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkManager*)>(&::Mirror::NetworkManager::set_singleton)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18154a1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"set_singleton", {}, {::i2c::type_of<::Mirror::NetworkManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.get_numPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::get_numPlayers)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18154a050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"get_numPlayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.get_isNetworkActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::get_isNetworkActive)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181549fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"get_isNetworkActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.get_mode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::NetworkManagerMode (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::get_mode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"get_mode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.set_mode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)(::Mirror::NetworkManagerMode)>(&::Mirror::NetworkManager::set_mode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18154a190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"set_mode", {}, {::i2c::type_of<::Mirror::NetworkManagerMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::OnValidate)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1815481b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkManager*>(),
                    {::i2c::class_of<::Mirror::NetworkManager*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::Reset)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181548b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkManager*>(),
                    {::i2c::class_of<::Mirror::NetworkManager*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::Awake)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181546640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkManager*>(),
                    {::i2c::class_of<::Mirror::NetworkManager*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::Start)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkManager*>(),
                    {::i2c::class_of<::Mirror::NetworkManager*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::Update)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181549e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkManager*>(),
                    {::i2c::class_of<::Mirror::NetworkManager*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::LateUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181547420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkManager*>(),
                    {::i2c::class_of<::Mirror::NetworkManager*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.IsServerOnlineSceneChangeNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::IsServerOnlineSceneChangeNeeded)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1815473d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"IsServerOnlineSceneChangeNeeded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.IsSceneActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Mirror::NetworkManager::IsSceneActive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815473c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"IsSceneActive", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.ApplyConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::ApplyConfiguration)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1815465a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"ApplyConfiguration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.SetupServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::SetupServer)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x181549090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"SetupServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.StartServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::StartServer)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1815498b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"StartServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.SetupClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::SetupClient)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181548fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"SetupClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.StartClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::StartClient)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181549480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"StartClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.StartClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)(::System::Uri*)>(&::Mirror::NetworkManager::StartClient)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181549620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"StartClient", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.StartHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::StartHost)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1815497b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"StartHost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.FinishStartHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::FinishStartHost)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181546e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"FinishStartHost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.StopHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::StopHost)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181549a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"StopHost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.StopServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::StopServer)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x181549ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"StopServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.StopClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::StopClient)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181549980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"StopClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.OnApplicationQuit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::OnApplicationQuit)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181547430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkManager*>(),
                    {::i2c::class_of<::Mirror::NetworkManager*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.ConfigureHeadlessFrameRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::ConfigureHeadlessFrameRate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkManager*>(),
                    {::i2c::class_of<::Mirror::NetworkManager*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.InitializeSingleton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::InitializeSingleton)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x181547160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"InitializeSingleton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.RegisterServerMessages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::RegisterServerMessages)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181548650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"RegisterServerMessages", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.RegisterClientMessages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::RegisterClientMessages)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x181548290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"RegisterClientMessages", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.ResetStatics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkManager::ResetStatics)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x181548970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"ResetStatics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::OnDestroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkManager*>(),
                    {::i2c::class_of<::Mirror::NetworkManager*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.get_networkSceneName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Mirror::NetworkManager::get_networkSceneName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18154a010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"get_networkSceneName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.set_networkSceneName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Mirror::NetworkManager::set_networkSceneName)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181535880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"set_networkSceneName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.ServerChangeScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)(::StringW)>(&::Mirror::NetworkManager::ServerChangeScene)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x181548c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkManager*>(),
                    {::i2c::class_of<::Mirror::NetworkManager*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.ClientChangeScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)(::StringW, ::Mirror::SceneOperation, bool)>(&::Mirror::NetworkManager::ClientChangeScene)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x1815466f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"ClientChangeScene", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Mirror::SceneOperation>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.OnSceneLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode)>(&::Mirror::NetworkManager::OnSceneLoaded)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181547bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"OnSceneLoaded", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.UpdateScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::UpdateScene)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181549d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"UpdateScene", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.FinishLoadScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::FinishLoadScene)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x181546bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"FinishLoadScene", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.FinishLoadSceneHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::FinishLoadSceneHost)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181546a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"FinishLoadSceneHost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.FinishLoadSceneServerOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::FinishLoadSceneServerOnly)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181546b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"FinishLoadSceneServerOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.FinishLoadSceneClientOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::FinishLoadSceneClientOnly)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181546960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"FinishLoadSceneClientOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.RegisterStartPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*)>(&::Mirror::NetworkManager::RegisterStartPosition)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1815487f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"RegisterStartPosition", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.UnRegisterStartPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*)>(&::Mirror::NetworkManager::UnRegisterStartPosition)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181549d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"UnRegisterStartPosition", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.GetStartPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::GetStartPosition)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181546ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkManager*>(),
                    {::i2c::class_of<::Mirror::NetworkManager*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.OnServerConnectInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkManager::OnServerConnectInternal)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181547fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"OnServerConnectInternal", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.OnServerAuthenticated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkManager::OnServerAuthenticated)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181547eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"OnServerAuthenticated", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.OnServerReadyMessageInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)(::Mirror::NetworkConnectionToClient*, ::Mirror::ReadyMessage)>(&::Mirror::NetworkManager::OnServerReadyMessageInternal)> {
  constexpr static std::size_t size = 0x8520;
  constexpr static std::size_t addrs = 0x1810f80a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"OnServerReadyMessageInternal", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::ReadyMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.OnServerAddPlayerInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)(::Mirror::NetworkConnectionToClient*, ::Mirror::AddPlayerMessage)>(&::Mirror::NetworkManager::OnServerAddPlayerInternal)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181547c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"OnServerAddPlayerInternal", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::AddPlayerMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.OnClientConnectInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::OnClientConnectInternal)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1815475e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"OnClientConnectInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.OnClientAuthenticated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::OnClientAuthenticated)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1815474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"OnClientAuthenticated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.OnClientDisconnectInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::OnClientDisconnectInternal)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1815477a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"OnClientDisconnectInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.OnClientNotReadyMessageInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)(::Mirror::NotReadyMessage)>(&::Mirror::NetworkManager::OnClientNotReadyMessageInternal)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181547a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"OnClientNotReadyMessageInternal", {}, {::i2c::type_of<::Mirror::NotReadyMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.OnClientSceneInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)(::Mirror::SceneMessage)>(&::Mirror::NetworkManager::OnClientSceneInternal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181547b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"OnClientSceneInternal", {}, {::i2c::type_of<::Mirror::SceneMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.OnServerConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkManager::OnServerConnect)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkManager*>(),
                    {::i2c::class_of<::Mirror::NetworkManager*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.OnServerDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkManager::OnServerDisconnect)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181548150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkManager*>(),
                    {::i2c::class_of<::Mirror::NetworkManager*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.OnServerReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkManager::OnServerReady)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181548160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkManager*>(),
                    {::i2c::class_of<::Mirror::NetworkManager*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.OnServerAddPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkManager::OnServerAddPlayer)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181547d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkManager*>(),
                    {::i2c::class_of<::Mirror::NetworkManager*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.OnServerError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)(::Mirror::NetworkConnectionToClient*, ::Mirror::TransportError, ::StringW)>(&::Mirror::NetworkManager::OnServerError)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkManager*>(),
                    {::i2c::class_of<::Mirror::NetworkManager*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.OnServerChangeScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)(::StringW)>(&::Mirror::NetworkManager::OnServerChangeScene)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkManager*>(),
                    {::i2c::class_of<::Mirror::NetworkManager*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.OnServerSceneChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)(::StringW)>(&::Mirror::NetworkManager::OnServerSceneChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkManager*>(),
                    {::i2c::class_of<::Mirror::NetworkManager*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.OnClientConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::OnClientConnect)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181547740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkManager*>(),
                    {::i2c::class_of<::Mirror::NetworkManager*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.OnClientDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::OnClientDisconnect)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkManager*>(),
                    {::i2c::class_of<::Mirror::NetworkManager*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.OnClientError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)(::Mirror::TransportError, ::StringW)>(&::Mirror::NetworkManager::OnClientError)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkManager*>(),
                    {::i2c::class_of<::Mirror::NetworkManager*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.OnClientNotReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::OnClientNotReady)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkManager*>(),
                    {::i2c::class_of<::Mirror::NetworkManager*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.OnClientChangeScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)(::StringW, ::Mirror::SceneOperation, bool)>(&::Mirror::NetworkManager::OnClientChangeScene)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkManager*>(),
                    {::i2c::class_of<::Mirror::NetworkManager*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.OnClientSceneChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::OnClientSceneChanged)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181547a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkManager*>(),
                    {::i2c::class_of<::Mirror::NetworkManager*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.OnStartHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::OnStartHost)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkManager*>(),
                    {::i2c::class_of<::Mirror::NetworkManager*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.OnStartServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::OnStartServer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkManager*>(),
                    {::i2c::class_of<::Mirror::NetworkManager*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.OnStartClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::OnStartClient)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkManager*>(),
                    {::i2c::class_of<::Mirror::NetworkManager*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.OnStopServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::OnStopServer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkManager*>(),
                    {::i2c::class_of<::Mirror::NetworkManager*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.OnStopClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::OnStopClient)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkManager*>(),
                    {::i2c::class_of<::Mirror::NetworkManager*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.OnStopHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::OnStopHost)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkManager*>(),
                    {::i2c::class_of<::Mirror::NetworkManager*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::OnGUI)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181547be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManager::*)()>(&::Mirror::NetworkManager::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181549eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Mirror::NetworkManager::__cordl_internal_get_dontDestroyOnLoad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dontDestroyOnLoad;
}
constexpr bool const& Mirror::NetworkManager::__cordl_internal_get_dontDestroyOnLoad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dontDestroyOnLoad;
}
constexpr void Mirror::NetworkManager::__cordl_internal_set_dontDestroyOnLoad(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dontDestroyOnLoad = value;
}
constexpr bool& Mirror::NetworkManager::__cordl_internal_get_runInBackground()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runInBackground;
}
constexpr bool const& Mirror::NetworkManager::__cordl_internal_get_runInBackground() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runInBackground;
}
constexpr void Mirror::NetworkManager::__cordl_internal_set_runInBackground(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___runInBackground = value;
}
constexpr bool& Mirror::NetworkManager::__cordl_internal_get_autoStartServerBuild()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoStartServerBuild;
}
constexpr bool const& Mirror::NetworkManager::__cordl_internal_get_autoStartServerBuild() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoStartServerBuild;
}
constexpr void Mirror::NetworkManager::__cordl_internal_set_autoStartServerBuild(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoStartServerBuild = value;
}
constexpr bool& Mirror::NetworkManager::__cordl_internal_get_autoConnectClientBuild()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoConnectClientBuild;
}
constexpr bool const& Mirror::NetworkManager::__cordl_internal_get_autoConnectClientBuild() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoConnectClientBuild;
}
constexpr void Mirror::NetworkManager::__cordl_internal_set_autoConnectClientBuild(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoConnectClientBuild = value;
}
constexpr int32_t& Mirror::NetworkManager::__cordl_internal_get_sendRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendRate;
}
constexpr int32_t const& Mirror::NetworkManager::__cordl_internal_get_sendRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendRate;
}
constexpr void Mirror::NetworkManager::__cordl_internal_set_sendRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendRate = value;
}
constexpr ::StringW& Mirror::NetworkManager::__cordl_internal_get_offlineScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offlineScene;
}
constexpr ::StringW const& Mirror::NetworkManager::__cordl_internal_get_offlineScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offlineScene;
}
constexpr void Mirror::NetworkManager::__cordl_internal_set_offlineScene(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offlineScene = value;
}
constexpr ::StringW& Mirror::NetworkManager::__cordl_internal_get_onlineScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlineScene;
}
constexpr ::StringW const& Mirror::NetworkManager::__cordl_internal_get_onlineScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlineScene;
}
constexpr void Mirror::NetworkManager::__cordl_internal_set_onlineScene(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onlineScene = value;
}
constexpr ::UnityW<::Mirror::Transport>& Mirror::NetworkManager::__cordl_internal_get_transport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transport;
}
constexpr ::UnityW<::Mirror::Transport> const& Mirror::NetworkManager::__cordl_internal_get_transport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transport;
}
constexpr void Mirror::NetworkManager::__cordl_internal_set_transport(::UnityW<::Mirror::Transport>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transport = value;
}
constexpr ::StringW& Mirror::NetworkManager::__cordl_internal_get_networkAddress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkAddress;
}
constexpr ::StringW const& Mirror::NetworkManager::__cordl_internal_get_networkAddress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkAddress;
}
constexpr void Mirror::NetworkManager::__cordl_internal_set_networkAddress(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkAddress = value;
}
constexpr int32_t& Mirror::NetworkManager::__cordl_internal_get_maxConnections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxConnections;
}
constexpr int32_t const& Mirror::NetworkManager::__cordl_internal_get_maxConnections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxConnections;
}
constexpr void Mirror::NetworkManager::__cordl_internal_set_maxConnections(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxConnections = value;
}
constexpr ::UnityW<::Mirror::NetworkAuthenticator>& Mirror::NetworkManager::__cordl_internal_get_authenticator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authenticator;
}
constexpr ::UnityW<::Mirror::NetworkAuthenticator> const& Mirror::NetworkManager::__cordl_internal_get_authenticator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authenticator;
}
constexpr void Mirror::NetworkManager::__cordl_internal_set_authenticator(::UnityW<::Mirror::NetworkAuthenticator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___authenticator = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Mirror::NetworkManager::__cordl_internal_get_playerPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Mirror::NetworkManager::__cordl_internal_get_playerPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerPrefab;
}
constexpr void Mirror::NetworkManager::__cordl_internal_set_playerPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerPrefab = value;
}
constexpr bool& Mirror::NetworkManager::__cordl_internal_get_autoCreatePlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoCreatePlayer;
}
constexpr bool const& Mirror::NetworkManager::__cordl_internal_get_autoCreatePlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoCreatePlayer;
}
constexpr void Mirror::NetworkManager::__cordl_internal_set_autoCreatePlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoCreatePlayer = value;
}
constexpr ::Mirror::PlayerSpawnMethod& Mirror::NetworkManager::__cordl_internal_get_playerSpawnMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerSpawnMethod;
}
constexpr ::Mirror::PlayerSpawnMethod const& Mirror::NetworkManager::__cordl_internal_get_playerSpawnMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerSpawnMethod;
}
constexpr void Mirror::NetworkManager::__cordl_internal_set_playerSpawnMethod(::Mirror::PlayerSpawnMethod  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerSpawnMethod = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& Mirror::NetworkManager::__cordl_internal_get_spawnPrefabs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPrefabs;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& Mirror::NetworkManager::__cordl_internal_get_spawnPrefabs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPrefabs;
}
constexpr void Mirror::NetworkManager::__cordl_internal_set_spawnPrefabs(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnPrefabs = value;
}
constexpr ::Mirror::SnapshotInterpolationSettings*& Mirror::NetworkManager::__cordl_internal_get_snapshotSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapshotSettings;
}
constexpr ::Mirror::SnapshotInterpolationSettings* const& Mirror::NetworkManager::__cordl_internal_get_snapshotSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapshotSettings;
}
constexpr void Mirror::NetworkManager::__cordl_internal_set_snapshotSettings(::Mirror::SnapshotInterpolationSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapshotSettings = value;
}
constexpr bool& Mirror::NetworkManager::__cordl_internal_get_timeInterpolationGui()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeInterpolationGui;
}
constexpr bool const& Mirror::NetworkManager::__cordl_internal_get_timeInterpolationGui() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeInterpolationGui;
}
constexpr void Mirror::NetworkManager::__cordl_internal_set_timeInterpolationGui(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeInterpolationGui = value;
}
constexpr bool& Mirror::NetworkManager::__cordl_internal_get_clientLoadedScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientLoadedScene;
}
constexpr bool const& Mirror::NetworkManager::__cordl_internal_get_clientLoadedScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientLoadedScene;
}
constexpr void Mirror::NetworkManager::__cordl_internal_set_clientLoadedScene(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientLoadedScene = value;
}
constexpr ::Mirror::NetworkManagerMode& Mirror::NetworkManager::__cordl_internal_get__mode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mode_k__BackingField;
}
constexpr ::Mirror::NetworkManagerMode const& Mirror::NetworkManager::__cordl_internal_get__mode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mode_k__BackingField;
}
constexpr void Mirror::NetworkManager::__cordl_internal_set__mode_k__BackingField(::Mirror::NetworkManagerMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mode_k__BackingField = value;
}
constexpr bool& Mirror::NetworkManager::__cordl_internal_get_finishStartHostPending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finishStartHostPending;
}
constexpr bool const& Mirror::NetworkManager::__cordl_internal_get_finishStartHostPending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finishStartHostPending;
}
constexpr void Mirror::NetworkManager::__cordl_internal_set_finishStartHostPending(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___finishStartHostPending = value;
}
constexpr ::Mirror::SceneOperation& Mirror::NetworkManager::__cordl_internal_get_clientSceneOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientSceneOperation;
}
constexpr ::Mirror::SceneOperation const& Mirror::NetworkManager::__cordl_internal_get_clientSceneOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientSceneOperation;
}
constexpr void Mirror::NetworkManager::__cordl_internal_set_clientSceneOperation(::Mirror::SceneOperation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientSceneOperation = value;
}
inline void Mirror::NetworkManager::setStaticF_startPositions(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*, "startPositions", ::Mirror::NetworkManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* Mirror::NetworkManager::getStaticF_startPositions()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*, "startPositions", ::Mirror::NetworkManager*>();
}
inline void Mirror::NetworkManager::setStaticF_startPositionIndex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "startPositionIndex", ::Mirror::NetworkManager*>(std::forward<int32_t>(value));
}
inline int32_t Mirror::NetworkManager::getStaticF_startPositionIndex()  {
return ::cordl_internals::getStaticField<int32_t, "startPositionIndex", ::Mirror::NetworkManager*>();
}
inline void Mirror::NetworkManager::setStaticF__singleton_k__BackingField(::UnityW<::Mirror::NetworkManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::Mirror::NetworkManager>, "<singleton>k__BackingField", ::Mirror::NetworkManager*>(std::forward<::UnityW<::Mirror::NetworkManager>>(value));
}
inline ::UnityW<::Mirror::NetworkManager> Mirror::NetworkManager::getStaticF__singleton_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::Mirror::NetworkManager>, "<singleton>k__BackingField", ::Mirror::NetworkManager*>();
}
inline void Mirror::NetworkManager::setStaticF_clientReadyConnection(::Mirror::NetworkConnection*  value)  {
::cordl_internals::setStaticField<::Mirror::NetworkConnection*, "clientReadyConnection", ::Mirror::NetworkManager*>(std::forward<::Mirror::NetworkConnection*>(value));
}
inline ::Mirror::NetworkConnection* Mirror::NetworkManager::getStaticF_clientReadyConnection()  {
return ::cordl_internals::getStaticField<::Mirror::NetworkConnection*, "clientReadyConnection", ::Mirror::NetworkManager*>();
}
inline void Mirror::NetworkManager::setStaticF__networkSceneName_k__BackingField(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "<networkSceneName>k__BackingField", ::Mirror::NetworkManager*>(std::forward<::StringW>(value));
}
inline ::StringW Mirror::NetworkManager::getStaticF__networkSceneName_k__BackingField()  {
return ::cordl_internals::getStaticField<::StringW, "<networkSceneName>k__BackingField", ::Mirror::NetworkManager*>();
}
inline void Mirror::NetworkManager::setStaticF_loadingSceneAsync(::UnityEngine::AsyncOperation*  value)  {
::cordl_internals::setStaticField<::UnityEngine::AsyncOperation*, "loadingSceneAsync", ::Mirror::NetworkManager*>(std::forward<::UnityEngine::AsyncOperation*>(value));
}
inline ::UnityEngine::AsyncOperation* Mirror::NetworkManager::getStaticF_loadingSceneAsync()  {
return ::cordl_internals::getStaticField<::UnityEngine::AsyncOperation*, "loadingSceneAsync", ::Mirror::NetworkManager*>();
}
inline int32_t Mirror::NetworkManager::get_serverTickRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"get_serverTickRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t Mirror::NetworkManager::get_serverTickInterval()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"get_serverTickInterval", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityW<::Mirror::NetworkManager> Mirror::NetworkManager::get_singleton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"get_singleton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Mirror::NetworkManager>>(nullptr, ___internal_method);
}
inline void Mirror::NetworkManager::set_singleton(::Mirror::NetworkManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"set_singleton", {}, {::i2c::type_of<::Mirror::NetworkManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t Mirror::NetworkManager::get_numPlayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"get_numPlayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Mirror::NetworkManager::get_isNetworkActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"get_isNetworkActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Mirror::NetworkManagerMode Mirror::NetworkManager::get_mode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"get_mode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::NetworkManagerMode>(this, ___internal_method);
}
inline void Mirror::NetworkManager::set_mode(::Mirror::NetworkManagerMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"set_mode", {}, {::i2c::type_of<::Mirror::NetworkManagerMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::NetworkManager::OnValidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkManager*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkManager*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkManager*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkManager*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkManager*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::LateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkManager*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::NetworkManager::IsServerOnlineSceneChangeNeeded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"IsServerOnlineSceneChangeNeeded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Mirror::NetworkManager::IsSceneActive(::StringW  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"IsSceneActive", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, scene);
}
inline void Mirror::NetworkManager::ApplyConfiguration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"ApplyConfiguration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::SetupServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"SetupServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::StartServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"StartServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::SetupClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"SetupClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::StartClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"StartClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::StartClient(::System::Uri*  uri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"StartClient", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri);
}
inline void Mirror::NetworkManager::StartHost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"StartHost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::FinishStartHost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"FinishStartHost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::StopHost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"StopHost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::StopServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"StopServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::StopClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"StopClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::OnApplicationQuit()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkManager*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::ConfigureHeadlessFrameRate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkManager*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::NetworkManager::InitializeSingleton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"InitializeSingleton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::NetworkManager::RegisterServerMessages()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"RegisterServerMessages", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::RegisterClientMessages()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"RegisterClientMessages", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::ResetStatics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"ResetStatics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::NetworkManager::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkManager*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Mirror::NetworkManager::get_networkSceneName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"get_networkSceneName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void Mirror::NetworkManager::set_networkSceneName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"set_networkSceneName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Mirror::NetworkManager::ServerChangeScene(::StringW  newSceneName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkManager*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSceneName);
}
inline void Mirror::NetworkManager::ClientChangeScene(::StringW  newSceneName, ::Mirror::SceneOperation  sceneOperation, bool  customHandling)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"ClientChangeScene", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Mirror::SceneOperation>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSceneName, sceneOperation, customHandling);
}
inline void Mirror::NetworkManager::OnSceneLoaded(::UnityEngine::SceneManagement::Scene  scene, ::UnityEngine::SceneManagement::LoadSceneMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"OnSceneLoaded", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scene, mode);
}
inline void Mirror::NetworkManager::UpdateScene()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"UpdateScene", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::FinishLoadScene()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"FinishLoadScene", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::FinishLoadSceneHost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"FinishLoadSceneHost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::FinishLoadSceneServerOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"FinishLoadSceneServerOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::FinishLoadSceneClientOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"FinishLoadSceneClientOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::RegisterStartPosition(::UnityEngine::Transform*  start)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"RegisterStartPosition", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, start);
}
inline void Mirror::NetworkManager::UnRegisterStartPosition(::UnityEngine::Transform*  start)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"UnRegisterStartPosition", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, start);
}
inline ::UnityW<::UnityEngine::Transform> Mirror::NetworkManager::GetStartPosition()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkManager*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Mirror::NetworkManager::OnServerConnectInternal(::Mirror::NetworkConnectionToClient*  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"OnServerConnectInternal", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline void Mirror::NetworkManager::OnServerAuthenticated(::Mirror::NetworkConnectionToClient*  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"OnServerAuthenticated", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline void Mirror::NetworkManager::OnServerReadyMessageInternal(::Mirror::NetworkConnectionToClient*  conn, ::Mirror::ReadyMessage  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"OnServerReadyMessageInternal", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::ReadyMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn, msg);
}
inline void Mirror::NetworkManager::OnServerAddPlayerInternal(::Mirror::NetworkConnectionToClient*  conn, ::Mirror::AddPlayerMessage  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"OnServerAddPlayerInternal", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::AddPlayerMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn, msg);
}
inline void Mirror::NetworkManager::OnClientConnectInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"OnClientConnectInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::OnClientAuthenticated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"OnClientAuthenticated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::OnClientDisconnectInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"OnClientDisconnectInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::OnClientNotReadyMessageInternal(::Mirror::NotReadyMessage  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"OnClientNotReadyMessageInternal", {}, {::i2c::type_of<::Mirror::NotReadyMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void Mirror::NetworkManager::OnClientSceneInternal(::Mirror::SceneMessage  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"OnClientSceneInternal", {}, {::i2c::type_of<::Mirror::SceneMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void Mirror::NetworkManager::OnServerConnect(::Mirror::NetworkConnectionToClient*  conn)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkManager*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline void Mirror::NetworkManager::OnServerDisconnect(::Mirror::NetworkConnectionToClient*  conn)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkManager*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline void Mirror::NetworkManager::OnServerReady(::Mirror::NetworkConnectionToClient*  conn)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkManager*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline void Mirror::NetworkManager::OnServerAddPlayer(::Mirror::NetworkConnectionToClient*  conn)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkManager*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline void Mirror::NetworkManager::OnServerError(::Mirror::NetworkConnectionToClient*  conn, ::Mirror::TransportError  error, ::StringW  reason)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkManager*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn, error, reason);
}
inline void Mirror::NetworkManager::OnServerChangeScene(::StringW  newSceneName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkManager*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSceneName);
}
inline void Mirror::NetworkManager::OnServerSceneChanged(::StringW  sceneName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkManager*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneName);
}
inline void Mirror::NetworkManager::OnClientConnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkManager*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::OnClientDisconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkManager*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::OnClientError(::Mirror::TransportError  error, ::StringW  reason)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkManager*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, reason);
}
inline void Mirror::NetworkManager::OnClientNotReady()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkManager*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::OnClientChangeScene(::StringW  newSceneName, ::Mirror::SceneOperation  sceneOperation, bool  customHandling)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkManager*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSceneName, sceneOperation, customHandling);
}
inline void Mirror::NetworkManager::OnClientSceneChanged()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkManager*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::OnStartHost()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkManager*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::OnStartServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkManager*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::OnStartClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkManager*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::OnStopServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkManager*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::OnStopClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkManager*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::OnStopHost()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkManager*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::NetworkManager* Mirror::NetworkManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkManager*>());
}
// Ctor Parameters []
constexpr ::Mirror::NetworkManager::NetworkManager()   {
}

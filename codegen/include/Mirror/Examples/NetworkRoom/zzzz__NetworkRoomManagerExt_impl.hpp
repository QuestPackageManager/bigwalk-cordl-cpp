#pragma once
// IWYU pragma private; include "Mirror/Examples/NetworkRoom/NetworkRoomManagerExt.hpp"
#include "Mirror/zzzz__NetworkRoomManager_impl.hpp"
#include "Mirror/Examples/NetworkRoom/zzzz__NetworkRoomManagerExt_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt.get_singleton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt> (*)()>(&::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::get_singleton)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18155e560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*>(),
                        {"get_singleton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt.set_singleton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*)>(&::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::set_singleton)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18155e580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*>(),
                        {"set_singleton", {}, {::i2c::type_of<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::*)()>(&::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::Awake)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18155e340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*>(),
                    {::i2c::class_of<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt.OnRoomServerSceneChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::*)(::StringW)>(&::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::OnRoomServerSceneChanged)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18155e420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*>(),
                    {::i2c::class_of<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt.OnRoomServerSceneLoadedForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::*)(::Mirror::NetworkConnectionToClient*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*)>(&::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::OnRoomServerSceneLoadedForPlayer)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18155e490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*>(),
                    {::i2c::class_of<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt.OnRoomStopClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::*)()>(&::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::OnRoomStopClient)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*>(),
                    {::i2c::class_of<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt.OnRoomStopServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::*)()>(&::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::OnRoomStopServer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*>(),
                    {::i2c::class_of<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt.OnRoomServerPlayersReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::*)()>(&::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::OnRoomServerPlayersReady)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18155e410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*>(),
                    {::i2c::class_of<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::*)()>(&::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::OnGUI)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18155e380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*>(),
                    {::i2c::class_of<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::*)()>(&::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18155e550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::__cordl_internal_get_rewardPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rewardPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::__cordl_internal_get_rewardPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rewardPrefab;
}
constexpr void Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::__cordl_internal_set_rewardPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rewardPrefab = value;
}
constexpr bool& Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::__cordl_internal_get_showStartButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showStartButton;
}
constexpr bool const& Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::__cordl_internal_get_showStartButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showStartButton;
}
constexpr void Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::__cordl_internal_set_showStartButton(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showStartButton = value;
}
inline void Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::setStaticF__singleton_k__BackingField(::UnityW<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt>  value)  {
::cordl_internals::setStaticField<::UnityW<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt>, "<singleton>k__BackingField", ::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*>(std::forward<::UnityW<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt>>(value));
}
inline ::UnityW<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt> Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::getStaticF__singleton_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt>, "<singleton>k__BackingField", ::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*>();
}
inline ::UnityW<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt> Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::get_singleton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*>(),
                        {"get_singleton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt>>(nullptr, ___internal_method);
}
inline void Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::set_singleton(::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*>(),
                        {"set_singleton", {}, {::i2c::type_of<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::OnRoomServerSceneChanged(::StringW  sceneName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneName);
}
inline bool Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::OnRoomServerSceneLoadedForPlayer(::Mirror::NetworkConnectionToClient*  conn, ::UnityEngine::GameObject*  roomPlayer, ::UnityEngine::GameObject*  gamePlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, conn, roomPlayer, gamePlayer);
}
inline void Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::OnRoomStopClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::OnRoomStopServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::OnRoomServerPlayersReady()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::OnGUI()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt* Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt::NetworkRoomManagerExt()   {
}

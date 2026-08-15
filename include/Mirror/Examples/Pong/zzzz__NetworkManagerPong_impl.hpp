#pragma once
// IWYU pragma private; include "Mirror/Examples/Pong/NetworkManagerPong.hpp"
#include "Mirror/zzzz__NetworkManager_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/Examples/Pong/zzzz__NetworkManagerPong_def.hpp"
#include "Mirror/Examples/Pong/zzzz__NetworkManagerPong_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::Pong::NetworkManagerPong___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Pong::NetworkManagerPong___c::*)()>(&::Mirror::Examples::Pong::NetworkManagerPong___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Pong::NetworkManagerPong___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Pong::NetworkManagerPong___c._OnServerAddPlayer_b__3_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::Examples::Pong::NetworkManagerPong___c::*)(::UnityEngine::GameObject*)>(&::Mirror::Examples::Pong::NetworkManagerPong___c::_OnServerAddPlayer_b__3_0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1815667b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Pong::NetworkManagerPong___c*>(),
                        {"<OnServerAddPlayer>b__3_0", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::Examples::Pong::NetworkManagerPong___c::setStaticF___9(::Mirror::Examples::Pong::NetworkManagerPong___c*  value)  {
::cordl_internals::setStaticField<::Mirror::Examples::Pong::NetworkManagerPong___c*, "<>9", ::Mirror::Examples::Pong::NetworkManagerPong___c*>(std::forward<::Mirror::Examples::Pong::NetworkManagerPong___c*>(value));
}
inline ::Mirror::Examples::Pong::NetworkManagerPong___c* Mirror::Examples::Pong::NetworkManagerPong___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Mirror::Examples::Pong::NetworkManagerPong___c*, "<>9", ::Mirror::Examples::Pong::NetworkManagerPong___c*>();
}
inline void Mirror::Examples::Pong::NetworkManagerPong___c::setStaticF___9__3_0(::System::Predicate_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::UnityEngine::GameObject>>*, "<>9__3_0", ::Mirror::Examples::Pong::NetworkManagerPong___c*>(std::forward<::System::Predicate_1<::UnityW<::UnityEngine::GameObject>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::UnityEngine::GameObject>>* Mirror::Examples::Pong::NetworkManagerPong___c::getStaticF___9__3_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::UnityEngine::GameObject>>*, "<>9__3_0", ::Mirror::Examples::Pong::NetworkManagerPong___c*>();
}
inline void Mirror::Examples::Pong::NetworkManagerPong___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Pong::NetworkManagerPong___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::Examples::Pong::NetworkManagerPong___c::_OnServerAddPlayer_b__3_0(::UnityEngine::GameObject*  prefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Pong::NetworkManagerPong___c*>(),
                        {"<OnServerAddPlayer>b__3_0", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, prefab);
}
inline ::Mirror::Examples::Pong::NetworkManagerPong___c* Mirror::Examples::Pong::NetworkManagerPong___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::Pong::NetworkManagerPong___c*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::Pong::NetworkManagerPong___c::NetworkManagerPong___c()   {
}
//  Writing Method size for method: ::Mirror::Examples::Pong::NetworkManagerPong.OnServerAddPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Pong::NetworkManagerPong::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::Examples::Pong::NetworkManagerPong::OnServerAddPlayer)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x18155e140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::Pong::NetworkManagerPong*>(),
                    {::i2c::class_of<::Mirror::Examples::Pong::NetworkManagerPong*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Pong::NetworkManagerPong.OnServerDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Pong::NetworkManagerPong::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::Examples::Pong::NetworkManagerPong::OnServerDisconnect)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18155e2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::Pong::NetworkManagerPong*>(),
                    {::i2c::class_of<::Mirror::Examples::Pong::NetworkManagerPong*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Pong::NetworkManagerPong._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Pong::NetworkManagerPong::*)()>(&::Mirror::Examples::Pong::NetworkManagerPong::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804226f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Pong::NetworkManagerPong*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Mirror::Examples::Pong::NetworkManagerPong::__cordl_internal_get_leftRacketSpawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftRacketSpawn;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Mirror::Examples::Pong::NetworkManagerPong::__cordl_internal_get_leftRacketSpawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftRacketSpawn;
}
constexpr void Mirror::Examples::Pong::NetworkManagerPong::__cordl_internal_set_leftRacketSpawn(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftRacketSpawn = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Mirror::Examples::Pong::NetworkManagerPong::__cordl_internal_get_rightRacketSpawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightRacketSpawn;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Mirror::Examples::Pong::NetworkManagerPong::__cordl_internal_get_rightRacketSpawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightRacketSpawn;
}
constexpr void Mirror::Examples::Pong::NetworkManagerPong::__cordl_internal_set_rightRacketSpawn(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightRacketSpawn = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Mirror::Examples::Pong::NetworkManagerPong::__cordl_internal_get_ball()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ball;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Mirror::Examples::Pong::NetworkManagerPong::__cordl_internal_get_ball() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ball;
}
constexpr void Mirror::Examples::Pong::NetworkManagerPong::__cordl_internal_set_ball(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ball = value;
}
inline void Mirror::Examples::Pong::NetworkManagerPong::OnServerAddPlayer(::Mirror::NetworkConnectionToClient*  conn)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::Pong::NetworkManagerPong*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline void Mirror::Examples::Pong::NetworkManagerPong::OnServerDisconnect(::Mirror::NetworkConnectionToClient*  conn)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::Pong::NetworkManagerPong*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline void Mirror::Examples::Pong::NetworkManagerPong::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Pong::NetworkManagerPong*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Examples::Pong::NetworkManagerPong* Mirror::Examples::Pong::NetworkManagerPong::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::Pong::NetworkManagerPong*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::Pong::NetworkManagerPong::NetworkManagerPong()   {
}

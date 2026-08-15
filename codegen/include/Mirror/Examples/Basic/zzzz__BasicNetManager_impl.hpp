#pragma once
// IWYU pragma private; include "Mirror/Examples/Basic/BasicNetManager.hpp"
#include "Mirror/zzzz__NetworkManager_impl.hpp"
#include "Mirror/Examples/Basic/zzzz__BasicNetManager_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::Basic::BasicNetManager.get_singleton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Mirror::Examples::Basic::BasicNetManager> (*)()>(&::Mirror::Examples::Basic::BasicNetManager::get_singleton)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181553930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::BasicNetManager*>(),
                        {"get_singleton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::BasicNetManager.set_singleton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::Examples::Basic::BasicNetManager*)>(&::Mirror::Examples::Basic::BasicNetManager::set_singleton)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181553950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::BasicNetManager*>(),
                        {"set_singleton", {}, {::i2c::type_of<::Mirror::Examples::Basic::BasicNetManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::BasicNetManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::BasicNetManager::*)()>(&::Mirror::Examples::Basic::BasicNetManager::Awake)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1815538b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::Basic::BasicNetManager*>(),
                    {::i2c::class_of<::Mirror::Examples::Basic::BasicNetManager*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::BasicNetManager.OnServerAddPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::BasicNetManager::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::Examples::Basic::BasicNetManager::OnServerAddPlayer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1815538f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::Basic::BasicNetManager*>(),
                    {::i2c::class_of<::Mirror::Examples::Basic::BasicNetManager*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::BasicNetManager.OnServerDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::BasicNetManager::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::Examples::Basic::BasicNetManager::OnServerDisconnect)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181553910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::Basic::BasicNetManager*>(),
                    {::i2c::class_of<::Mirror::Examples::Basic::BasicNetManager*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::BasicNetManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::BasicNetManager::*)()>(&::Mirror::Examples::Basic::BasicNetManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804226f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::BasicNetManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::Examples::Basic::BasicNetManager::setStaticF__singleton_k__BackingField(::UnityW<::Mirror::Examples::Basic::BasicNetManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::Mirror::Examples::Basic::BasicNetManager>, "<singleton>k__BackingField", ::Mirror::Examples::Basic::BasicNetManager*>(std::forward<::UnityW<::Mirror::Examples::Basic::BasicNetManager>>(value));
}
inline ::UnityW<::Mirror::Examples::Basic::BasicNetManager> Mirror::Examples::Basic::BasicNetManager::getStaticF__singleton_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::Mirror::Examples::Basic::BasicNetManager>, "<singleton>k__BackingField", ::Mirror::Examples::Basic::BasicNetManager*>();
}
inline ::UnityW<::Mirror::Examples::Basic::BasicNetManager> Mirror::Examples::Basic::BasicNetManager::get_singleton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::BasicNetManager*>(),
                        {"get_singleton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Mirror::Examples::Basic::BasicNetManager>>(nullptr, ___internal_method);
}
inline void Mirror::Examples::Basic::BasicNetManager::set_singleton(::Mirror::Examples::Basic::BasicNetManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::BasicNetManager*>(),
                        {"set_singleton", {}, {::i2c::type_of<::Mirror::Examples::Basic::BasicNetManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Mirror::Examples::Basic::BasicNetManager::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::Basic::BasicNetManager*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Basic::BasicNetManager::OnServerAddPlayer(::Mirror::NetworkConnectionToClient*  conn)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::Basic::BasicNetManager*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline void Mirror::Examples::Basic::BasicNetManager::OnServerDisconnect(::Mirror::NetworkConnectionToClient*  conn)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::Basic::BasicNetManager*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline void Mirror::Examples::Basic::BasicNetManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::BasicNetManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Examples::Basic::BasicNetManager* Mirror::Examples::Basic::BasicNetManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::Basic::BasicNetManager*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::Basic::BasicNetManager::BasicNetManager()   {
}

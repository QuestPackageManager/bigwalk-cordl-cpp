#pragma once
// IWYU pragma private; include "Mirror/Examples/Chat/ChatNetworkManager.hpp"
#include "Mirror/zzzz__NetworkManager_impl.hpp"
#include "Mirror/Examples/Chat/zzzz__ChatNetworkManager_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::Chat::ChatNetworkManager.get_singleton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Mirror::Examples::Chat::ChatNetworkManager> (*)()>(&::Mirror::Examples::Chat::ChatNetworkManager::get_singleton)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1815584e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::ChatNetworkManager*>(),
                        {"get_singleton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Chat::ChatNetworkManager.set_singleton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::Examples::Chat::ChatNetworkManager*)>(&::Mirror::Examples::Chat::ChatNetworkManager::set_singleton)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181558500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::ChatNetworkManager*>(),
                        {"set_singleton", {}, {::i2c::type_of<::Mirror::Examples::Chat::ChatNetworkManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Chat::ChatNetworkManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Chat::ChatNetworkManager::*)()>(&::Mirror::Examples::Chat::ChatNetworkManager::Awake)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181558320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::Chat::ChatNetworkManager*>(),
                    {::i2c::class_of<::Mirror::Examples::Chat::ChatNetworkManager*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Chat::ChatNetworkManager.SetHostname
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Chat::ChatNetworkManager::*)(::StringW)>(&::Mirror::Examples::Chat::ChatNetworkManager::SetHostname)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::ChatNetworkManager*>(),
                        {"SetHostname", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Chat::ChatNetworkManager.OnServerDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Chat::ChatNetworkManager::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::Examples::Chat::ChatNetworkManager::OnServerDisconnect)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181558400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::Chat::ChatNetworkManager*>(),
                    {::i2c::class_of<::Mirror::Examples::Chat::ChatNetworkManager*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Chat::ChatNetworkManager.OnClientDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Chat::ChatNetworkManager::*)()>(&::Mirror::Examples::Chat::ChatNetworkManager::OnClientDisconnect)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181558360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::Chat::ChatNetworkManager*>(),
                    {::i2c::class_of<::Mirror::Examples::Chat::ChatNetworkManager*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Chat::ChatNetworkManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Chat::ChatNetworkManager::*)()>(&::Mirror::Examples::Chat::ChatNetworkManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804226f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::ChatNetworkManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::Examples::Chat::ChatNetworkManager::setStaticF__singleton_k__BackingField(::UnityW<::Mirror::Examples::Chat::ChatNetworkManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::Mirror::Examples::Chat::ChatNetworkManager>, "<singleton>k__BackingField", ::Mirror::Examples::Chat::ChatNetworkManager*>(std::forward<::UnityW<::Mirror::Examples::Chat::ChatNetworkManager>>(value));
}
inline ::UnityW<::Mirror::Examples::Chat::ChatNetworkManager> Mirror::Examples::Chat::ChatNetworkManager::getStaticF__singleton_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::Mirror::Examples::Chat::ChatNetworkManager>, "<singleton>k__BackingField", ::Mirror::Examples::Chat::ChatNetworkManager*>();
}
inline ::UnityW<::Mirror::Examples::Chat::ChatNetworkManager> Mirror::Examples::Chat::ChatNetworkManager::get_singleton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::ChatNetworkManager*>(),
                        {"get_singleton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Mirror::Examples::Chat::ChatNetworkManager>>(nullptr, ___internal_method);
}
inline void Mirror::Examples::Chat::ChatNetworkManager::set_singleton(::Mirror::Examples::Chat::ChatNetworkManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::ChatNetworkManager*>(),
                        {"set_singleton", {}, {::i2c::type_of<::Mirror::Examples::Chat::ChatNetworkManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Mirror::Examples::Chat::ChatNetworkManager::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::Chat::ChatNetworkManager*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Chat::ChatNetworkManager::SetHostname(::StringW  hostname)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::ChatNetworkManager*>(),
                        {"SetHostname", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hostname);
}
inline void Mirror::Examples::Chat::ChatNetworkManager::OnServerDisconnect(::Mirror::NetworkConnectionToClient*  conn)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::Chat::ChatNetworkManager*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline void Mirror::Examples::Chat::ChatNetworkManager::OnClientDisconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::Chat::ChatNetworkManager*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Chat::ChatNetworkManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::ChatNetworkManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Examples::Chat::ChatNetworkManager* Mirror::Examples::Chat::ChatNetworkManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::Chat::ChatNetworkManager*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::Chat::ChatNetworkManager::ChatNetworkManager()   {
}

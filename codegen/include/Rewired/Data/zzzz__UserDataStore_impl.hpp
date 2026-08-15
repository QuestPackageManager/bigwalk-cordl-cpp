#pragma once
// IWYU pragma private; include "Rewired/Data/UserDataStore.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Rewired/Data/zzzz__UserDataStore_def.hpp"
#include "Rewired/Interfaces/zzzz__IControllerMapStore_def.hpp"
#include "Rewired/Interfaces/zzzz__IUserDataStore_def.hpp"
#include "Rewired/zzzz__ControllerIdentifier_def.hpp"
#include "Rewired/zzzz__ControllerMap_def.hpp"
#include "Rewired/zzzz__ControllerStatusChangedEventArgs_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
//  Writing Method size for method: ::Rewired::Data::UserDataStore.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore::*)()>(&::Rewired::Data::UserDataStore::OnDestroy)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1818abda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore::*)()>(&::Rewired::Data::UserDataStore::Initialize)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1818abc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore::*)()>(&::Rewired::Data::UserDataStore::Load)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore.LoadControllerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore::*)(int32_t, ::Rewired::ControllerType, int32_t)>(&::Rewired::Data::UserDataStore::LoadControllerData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore.LoadControllerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore::*)(::Rewired::ControllerType, int32_t)>(&::Rewired::Data::UserDataStore::LoadControllerData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore.LoadPlayerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore::*)(int32_t)>(&::Rewired::Data::UserDataStore::LoadPlayerData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore.LoadInputBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore::*)(int32_t, int32_t)>(&::Rewired::Data::UserDataStore::LoadInputBehavior)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore::*)()>(&::Rewired::Data::UserDataStore::Save)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore.SaveControllerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore::*)(int32_t, ::Rewired::ControllerType, int32_t)>(&::Rewired::Data::UserDataStore::SaveControllerData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore.SaveControllerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore::*)(::Rewired::ControllerType, int32_t)>(&::Rewired::Data::UserDataStore::SaveControllerData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore.SavePlayerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore::*)(int32_t)>(&::Rewired::Data::UserDataStore::SavePlayerData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore.SaveInputBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore::*)(int32_t, int32_t)>(&::Rewired::Data::UserDataStore::SaveInputBehavior)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore.SaveControllerMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore::*)(int32_t, ::Rewired::ControllerMap*)>(&::Rewired::Data::UserDataStore::SaveControllerMap)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore.LoadControllerMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerMap* (::Rewired::Data::UserDataStore::*)(int32_t, ::Rewired::ControllerIdentifier, int32_t, int32_t)>(&::Rewired::Data::UserDataStore::LoadControllerMap)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore.OnInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore::*)()>(&::Rewired::Data::UserDataStore::OnInitialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore.OnControllerConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore::*)(::Rewired::ControllerStatusChangedEventArgs*)>(&::Rewired::Data::UserDataStore::OnControllerConnected)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore.OnControllerDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore::*)(::Rewired::ControllerStatusChangedEventArgs*)>(&::Rewired::Data::UserDataStore::OnControllerDisconnected)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore.OnControllerPreDiscconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore::*)(::Rewired::ControllerStatusChangedEventArgs*)>(&::Rewired::Data::UserDataStore::OnControllerPreDiscconnect)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore.OnControllerPreDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore::*)(::Rewired::ControllerStatusChangedEventArgs*)>(&::Rewired::Data::UserDataStore::OnControllerPreDisconnect)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818abd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore::*)()>(&::Rewired::Data::UserDataStore::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::Data::UserDataStore::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore::Load()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore::LoadControllerData(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, controllerType, controllerId);
}
inline void Rewired::Data::UserDataStore::LoadControllerData(::Rewired::ControllerType  controllerType, int32_t  controllerId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerType, controllerId);
}
inline void Rewired::Data::UserDataStore::LoadPlayerData(int32_t  playerId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId);
}
inline void Rewired::Data::UserDataStore::LoadInputBehavior(int32_t  playerId, int32_t  behaviorId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, behaviorId);
}
inline void Rewired::Data::UserDataStore::Save()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore::SaveControllerData(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, controllerType, controllerId);
}
inline void Rewired::Data::UserDataStore::SaveControllerData(::Rewired::ControllerType  controllerType, int32_t  controllerId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerType, controllerId);
}
inline void Rewired::Data::UserDataStore::SavePlayerData(int32_t  playerId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId);
}
inline void Rewired::Data::UserDataStore::SaveInputBehavior(int32_t  playerId, int32_t  behaviorId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, behaviorId);
}
inline void Rewired::Data::UserDataStore::SaveControllerMap(int32_t  playerId, ::Rewired::ControllerMap*  controllerMap)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, controllerMap);
}
inline ::Rewired::ControllerMap* Rewired::Data::UserDataStore::LoadControllerMap(int32_t  playerId, ::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  categoryId, int32_t  layoutId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerMap*>(this, ___internal_method, playerId, controllerIdentifier, categoryId, layoutId);
}
inline void Rewired::Data::UserDataStore::OnInitialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore::OnControllerConnected(::Rewired::ControllerStatusChangedEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void Rewired::Data::UserDataStore::OnControllerDisconnected(::Rewired::ControllerStatusChangedEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void Rewired::Data::UserDataStore::OnControllerPreDiscconnect(::Rewired::ControllerStatusChangedEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void Rewired::Data::UserDataStore::OnControllerPreDisconnect(::Rewired::ControllerStatusChangedEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void Rewired::Data::UserDataStore::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::UserDataStore* Rewired::Data::UserDataStore::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::UserDataStore*>());
}
/// @brief Convert operator to "::Rewired::Interfaces::IUserDataStore"
constexpr  Rewired::Data::UserDataStore::operator ::Rewired::Interfaces::IUserDataStore*() noexcept {
return static_cast<::Rewired::Interfaces::IUserDataStore*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Interfaces::IUserDataStore"
constexpr ::Rewired::Interfaces::IUserDataStore* Rewired::Data::UserDataStore::i___Rewired__Interfaces__IUserDataStore() noexcept {
return static_cast<::Rewired::Interfaces::IUserDataStore*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::Interfaces::IControllerMapStore"
constexpr  Rewired::Data::UserDataStore::operator ::Rewired::Interfaces::IControllerMapStore*() noexcept {
return static_cast<::Rewired::Interfaces::IControllerMapStore*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Interfaces::IControllerMapStore"
constexpr ::Rewired::Interfaces::IControllerMapStore* Rewired::Data::UserDataStore::i___Rewired__Interfaces__IControllerMapStore() noexcept {
return static_cast<::Rewired::Interfaces::IControllerMapStore*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Data::UserDataStore::UserDataStore()   {
}

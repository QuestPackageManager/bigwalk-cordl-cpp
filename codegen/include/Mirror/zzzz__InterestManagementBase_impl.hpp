#pragma once
// IWYU pragma private; include "Mirror/InterestManagementBase.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Mirror/zzzz__InterestManagementBase_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkIdentity_def.hpp"
//  Writing Method size for method: ::Mirror::InterestManagementBase.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::InterestManagementBase::*)()>(&::Mirror::InterestManagementBase::OnEnable)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1815365a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::InterestManagementBase*>(),
                    {::i2c::class_of<::Mirror::InterestManagementBase*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::InterestManagementBase.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::InterestManagementBase::*)()>(&::Mirror::InterestManagementBase::Reset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181536580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::InterestManagementBase*>(),
                    {::i2c::class_of<::Mirror::InterestManagementBase*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::InterestManagementBase.OnCheckObserver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::InterestManagementBase::*)(::Mirror::NetworkIdentity*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::InterestManagementBase::OnCheckObserver)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::InterestManagementBase*>(),
                    {::i2c::class_of<::Mirror::InterestManagementBase*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::InterestManagementBase.SetHostVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::InterestManagementBase::*)(::Mirror::NetworkIdentity*, bool)>(&::Mirror::InterestManagementBase::SetHostVisibility)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181536760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::InterestManagementBase*>(),
                    {::i2c::class_of<::Mirror::InterestManagementBase*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::InterestManagementBase.OnSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::InterestManagementBase::*)(::Mirror::NetworkIdentity*)>(&::Mirror::InterestManagementBase::OnSpawned)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181536580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::InterestManagementBase*>(),
                    {::i2c::class_of<::Mirror::InterestManagementBase*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::InterestManagementBase.OnDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::InterestManagementBase::*)(::Mirror::NetworkIdentity*)>(&::Mirror::InterestManagementBase::OnDestroyed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181536580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::InterestManagementBase*>(),
                    {::i2c::class_of<::Mirror::InterestManagementBase*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::InterestManagementBase.Rebuild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::InterestManagementBase::*)(::Mirror::NetworkIdentity*, bool)>(&::Mirror::InterestManagementBase::Rebuild)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::InterestManagementBase*>(),
                    {::i2c::class_of<::Mirror::InterestManagementBase*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::InterestManagementBase.AddObserver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::InterestManagementBase::*)(::Mirror::NetworkConnectionToClient*, ::Mirror::NetworkIdentity*)>(&::Mirror::InterestManagementBase::AddObserver)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181536500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::InterestManagementBase*>(),
                        {"AddObserver", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::InterestManagementBase.RemoveObserver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::InterestManagementBase::*)(::Mirror::NetworkConnectionToClient*, ::Mirror::NetworkIdentity*)>(&::Mirror::InterestManagementBase::RemoveObserver)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1815366f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::InterestManagementBase*>(),
                        {"RemoveObserver", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::InterestManagementBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::InterestManagementBase::*)()>(&::Mirror::InterestManagementBase::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::InterestManagementBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::InterestManagementBase::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::InterestManagementBase*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::InterestManagementBase::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::InterestManagementBase*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::InterestManagementBase::OnCheckObserver(::Mirror::NetworkIdentity*  identity, ::Mirror::NetworkConnectionToClient*  newObserver)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::InterestManagementBase*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, identity, newObserver);
}
inline void Mirror::InterestManagementBase::SetHostVisibility(::Mirror::NetworkIdentity*  identity, bool  visible)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::InterestManagementBase*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identity, visible);
}
inline void Mirror::InterestManagementBase::OnSpawned(::Mirror::NetworkIdentity*  identity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::InterestManagementBase*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identity);
}
inline void Mirror::InterestManagementBase::OnDestroyed(::Mirror::NetworkIdentity*  identity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::InterestManagementBase*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identity);
}
inline void Mirror::InterestManagementBase::Rebuild(::Mirror::NetworkIdentity*  identity, bool  initialize)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::InterestManagementBase*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identity, initialize);
}
inline void Mirror::InterestManagementBase::AddObserver(::Mirror::NetworkConnectionToClient*  connection, ::Mirror::NetworkIdentity*  identity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::InterestManagementBase*>(),
                        {"AddObserver", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, identity);
}
inline void Mirror::InterestManagementBase::RemoveObserver(::Mirror::NetworkConnectionToClient*  connection, ::Mirror::NetworkIdentity*  identity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::InterestManagementBase*>(),
                        {"RemoveObserver", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, identity);
}
inline void Mirror::InterestManagementBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::InterestManagementBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::InterestManagementBase* Mirror::InterestManagementBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::InterestManagementBase*>());
}
// Ctor Parameters []
constexpr ::Mirror::InterestManagementBase::InterestManagementBase()   {
}

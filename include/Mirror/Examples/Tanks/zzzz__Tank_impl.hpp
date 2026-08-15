#pragma once
// IWYU pragma private; include "Mirror/Examples/Tanks/Tank.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "UnityEngine/zzzz__KeyCode_impl.hpp"
#include "Mirror/Examples/Tanks/zzzz__Tank_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshAgent_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__TextMesh_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::Tanks::Tank.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Tanks::Tank::*)()>(&::Mirror::Examples::Tanks::Tank::Update)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x1815648e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Tank*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Tanks::Tank.CmdFire
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Tanks::Tank::*)()>(&::Mirror::Examples::Tanks::Tank::CmdFire)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1815641b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Tank*>(),
                        {"CmdFire", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Tanks::Tank.RpcOnFire
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Tanks::Tank::*)()>(&::Mirror::Examples::Tanks::Tank::RpcOnFire)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1815647e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Tank*>(),
                        {"RpcOnFire", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Tanks::Tank.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Tanks::Tank::*)(::UnityEngine::Collider*)>(&::Mirror::Examples::Tanks::Tank::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181564520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Tank*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Tanks::Tank.RotateTurret
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Tanks::Tank::*)()>(&::Mirror::Examples::Tanks::Tank::RotateTurret)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181564630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Tank*>(),
                        {"RotateTurret", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Tanks::Tank._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Tanks::Tank::*)()>(&::Mirror::Examples::Tanks::Tank::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181564f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Tank*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Tanks::Tank.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Tanks::Tank::*)()>(&::Mirror::Examples::Tanks::Tank::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Tank*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Tanks::Tank.get_Networkhealth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mirror::Examples::Tanks::Tank::*)()>(&::Mirror::Examples::Tanks::Tank::get_Networkhealth)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180408b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Tank*>(),
                        {"get_Networkhealth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Tanks::Tank.set_Networkhealth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Tanks::Tank::*)(::ByRefConst<int32_t>)>(&::Mirror::Examples::Tanks::Tank::set_Networkhealth)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181564f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Tank*>(),
                        {"set_Networkhealth", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Tanks::Tank.UserCode_CmdFire
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Tanks::Tank::*)()>(&::Mirror::Examples::Tanks::Tank::UserCode_CmdFire)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181564d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Tank*>(),
                        {"UserCode_CmdFire", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Tanks::Tank.InvokeUserCode_CmdFire
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::Examples::Tanks::Tank::InvokeUserCode_CmdFire)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1815642c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Tank*>(),
                        {"InvokeUserCode_CmdFire", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Tanks::Tank.UserCode_RpcOnFire
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Tanks::Tank::*)()>(&::Mirror::Examples::Tanks::Tank::UserCode_RpcOnFire)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181564e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Tank*>(),
                        {"UserCode_RpcOnFire", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Tanks::Tank.InvokeUserCode_RpcOnFire
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::Examples::Tanks::Tank::InvokeUserCode_RpcOnFire)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181564490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Tank*>(),
                        {"InvokeUserCode_RpcOnFire", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Tanks::Tank.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Tanks::Tank::*)(::Mirror::NetworkWriter*, bool)>(&::Mirror::Examples::Tanks::Tank::SerializeSyncVars)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181564890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::Tanks::Tank*>(),
                    {::i2c::class_of<::Mirror::Examples::Tanks::Tank*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Tanks::Tank.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Tanks::Tank::*)(::Mirror::NetworkReader*, bool)>(&::Mirror::Examples::Tanks::Tank::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181564260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::Tanks::Tank*>(),
                    {::i2c::class_of<::Mirror::Examples::Tanks::Tank*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent>& Mirror::Examples::Tanks::Tank::__cordl_internal_get_agent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agent;
}
constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent> const& Mirror::Examples::Tanks::Tank::__cordl_internal_get_agent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agent;
}
constexpr void Mirror::Examples::Tanks::Tank::__cordl_internal_set_agent(::UnityW<::UnityEngine::AI::NavMeshAgent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___agent = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& Mirror::Examples::Tanks::Tank::__cordl_internal_get_animator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& Mirror::Examples::Tanks::Tank::__cordl_internal_get_animator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr void Mirror::Examples::Tanks::Tank::__cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animator = value;
}
constexpr ::UnityW<::UnityEngine::TextMesh>& Mirror::Examples::Tanks::Tank::__cordl_internal_get_healthBar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___healthBar;
}
constexpr ::UnityW<::UnityEngine::TextMesh> const& Mirror::Examples::Tanks::Tank::__cordl_internal_get_healthBar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___healthBar;
}
constexpr void Mirror::Examples::Tanks::Tank::__cordl_internal_set_healthBar(::UnityW<::UnityEngine::TextMesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___healthBar = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Mirror::Examples::Tanks::Tank::__cordl_internal_get_turret()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turret;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Mirror::Examples::Tanks::Tank::__cordl_internal_get_turret() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turret;
}
constexpr void Mirror::Examples::Tanks::Tank::__cordl_internal_set_turret(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turret = value;
}
constexpr float_t& Mirror::Examples::Tanks::Tank::__cordl_internal_get_rotationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationSpeed;
}
constexpr float_t const& Mirror::Examples::Tanks::Tank::__cordl_internal_get_rotationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationSpeed;
}
constexpr void Mirror::Examples::Tanks::Tank::__cordl_internal_set_rotationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationSpeed = value;
}
constexpr ::UnityEngine::KeyCode& Mirror::Examples::Tanks::Tank::__cordl_internal_get_shootKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shootKey;
}
constexpr ::UnityEngine::KeyCode const& Mirror::Examples::Tanks::Tank::__cordl_internal_get_shootKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shootKey;
}
constexpr void Mirror::Examples::Tanks::Tank::__cordl_internal_set_shootKey(::UnityEngine::KeyCode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shootKey = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Mirror::Examples::Tanks::Tank::__cordl_internal_get_projectilePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectilePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Mirror::Examples::Tanks::Tank::__cordl_internal_get_projectilePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectilePrefab;
}
constexpr void Mirror::Examples::Tanks::Tank::__cordl_internal_set_projectilePrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectilePrefab = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Mirror::Examples::Tanks::Tank::__cordl_internal_get_projectileMount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileMount;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Mirror::Examples::Tanks::Tank::__cordl_internal_get_projectileMount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileMount;
}
constexpr void Mirror::Examples::Tanks::Tank::__cordl_internal_set_projectileMount(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileMount = value;
}
constexpr int32_t& Mirror::Examples::Tanks::Tank::__cordl_internal_get_health()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___health;
}
constexpr int32_t const& Mirror::Examples::Tanks::Tank::__cordl_internal_get_health() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___health;
}
constexpr void Mirror::Examples::Tanks::Tank::__cordl_internal_set_health(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___health = value;
}
inline void Mirror::Examples::Tanks::Tank::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Tank*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Tanks::Tank::CmdFire()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Tank*>(),
                        {"CmdFire", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Tanks::Tank::RpcOnFire()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Tank*>(),
                        {"RpcOnFire", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Tanks::Tank::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Tank*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Mirror::Examples::Tanks::Tank::RotateTurret()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Tank*>(),
                        {"RotateTurret", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Tanks::Tank::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Tank*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Tanks::Tank::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Tank*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Mirror::Examples::Tanks::Tank::get_Networkhealth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Tank*>(),
                        {"get_Networkhealth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Mirror::Examples::Tanks::Tank::set_Networkhealth(::ByRefConst<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Tank*>(),
                        {"set_Networkhealth", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::Examples::Tanks::Tank::UserCode_CmdFire()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Tank*>(),
                        {"UserCode_CmdFire", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Tanks::Tank::InvokeUserCode_CmdFire(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Tank*>(),
                        {"InvokeUserCode_CmdFire", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void Mirror::Examples::Tanks::Tank::UserCode_RpcOnFire()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Tank*>(),
                        {"UserCode_RpcOnFire", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Tanks::Tank::InvokeUserCode_RpcOnFire(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Tank*>(),
                        {"InvokeUserCode_RpcOnFire", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void Mirror::Examples::Tanks::Tank::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::Tanks::Tank*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void Mirror::Examples::Tanks::Tank::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::Tanks::Tank*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::Mirror::Examples::Tanks::Tank* Mirror::Examples::Tanks::Tank::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::Tanks::Tank*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::Tanks::Tank::Tank()   {
}

#pragma once
// IWYU pragma private; include "Mirror/Experimental/NetworkLerpRigidbody.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Mirror/Experimental/zzzz__NetworkLerpRigidbody_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Mirror::Experimental::NetworkLerpRigidbody.get_IgnoreSync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::Experimental::NetworkLerpRigidbody::*)()>(&::Mirror::Experimental::NetworkLerpRigidbody::get_IgnoreSync)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18151dc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(),
                        {"get_IgnoreSync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkLerpRigidbody.get_ClientWithAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::Experimental::NetworkLerpRigidbody::*)()>(&::Mirror::Experimental::NetworkLerpRigidbody::get_ClientWithAuthority)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18151dbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(),
                        {"get_ClientWithAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkLerpRigidbody.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkLerpRigidbody::*)()>(&::Mirror::Experimental::NetworkLerpRigidbody::OnValidate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18151d300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(),
                    {::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkLerpRigidbody.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkLerpRigidbody::*)()>(&::Mirror::Experimental::NetworkLerpRigidbody::Update)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x18151d700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkLerpRigidbody.SyncToClients
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkLerpRigidbody::*)()>(&::Mirror::Experimental::NetworkLerpRigidbody::SyncToClients)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18151d590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(),
                        {"SyncToClients", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkLerpRigidbody.SendToServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkLerpRigidbody::*)()>(&::Mirror::Experimental::NetworkLerpRigidbody::SendToServer)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18151d350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(),
                        {"SendToServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkLerpRigidbody.CmdSendState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkLerpRigidbody::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Mirror::Experimental::NetworkLerpRigidbody::CmdSendState)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18151cc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(),
                        {"CmdSendState", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkLerpRigidbody.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkLerpRigidbody::*)()>(&::Mirror::Experimental::NetworkLerpRigidbody::FixedUpdate)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x18151ce30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkLerpRigidbody._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkLerpRigidbody::*)()>(&::Mirror::Experimental::NetworkLerpRigidbody::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18151dbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkLerpRigidbody.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkLerpRigidbody::*)()>(&::Mirror::Experimental::NetworkLerpRigidbody::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkLerpRigidbody.get_NetworktargetVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Mirror::Experimental::NetworkLerpRigidbody::*)()>(&::Mirror::Experimental::NetworkLerpRigidbody::get_NetworktargetVelocity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(),
                        {"get_NetworktargetVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkLerpRigidbody.set_NetworktargetVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkLerpRigidbody::*)(::ByRefConst<::UnityEngine::Vector3>)>(&::Mirror::Experimental::NetworkLerpRigidbody::set_NetworktargetVelocity)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18151dd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(),
                        {"set_NetworktargetVelocity", {}, {::i2c::type_of<::ByRefConst<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkLerpRigidbody.get_NetworktargetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Mirror::Experimental::NetworkLerpRigidbody::*)()>(&::Mirror::Experimental::NetworkLerpRigidbody::get_NetworktargetPosition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18151dc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(),
                        {"get_NetworktargetPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkLerpRigidbody.set_NetworktargetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkLerpRigidbody::*)(::ByRefConst<::UnityEngine::Vector3>)>(&::Mirror::Experimental::NetworkLerpRigidbody::set_NetworktargetPosition)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18151dc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(),
                        {"set_NetworktargetPosition", {}, {::i2c::type_of<::ByRefConst<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkLerpRigidbody.UserCode_CmdSendState__Vector3__Vector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkLerpRigidbody::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Mirror::Experimental::NetworkLerpRigidbody::UserCode_CmdSendState__Vector3__Vector3)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18151d9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(),
                        {"UserCode_CmdSendState__Vector3__Vector3", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkLerpRigidbody.InvokeUserCode_CmdSendState__Vector3__Vector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::Experimental::NetworkLerpRigidbody::InvokeUserCode_CmdSendState__Vector3__Vector3)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x18151d0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(),
                        {"InvokeUserCode_CmdSendState__Vector3__Vector3", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkLerpRigidbody.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkLerpRigidbody::*)(::Mirror::NetworkWriter*, bool)>(&::Mirror::Experimental::NetworkLerpRigidbody::SerializeSyncVars)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18151d4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(),
                    {::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkLerpRigidbody.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkLerpRigidbody::*)(::Mirror::NetworkReader*, bool)>(&::Mirror::Experimental::NetworkLerpRigidbody::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18151cd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(),
                    {::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& Mirror::Experimental::NetworkLerpRigidbody::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Mirror::Experimental::NetworkLerpRigidbody::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void Mirror::Experimental::NetworkLerpRigidbody::__cordl_internal_set_target(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr float_t& Mirror::Experimental::NetworkLerpRigidbody::__cordl_internal_get_lerpVelocityAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpVelocityAmount;
}
constexpr float_t const& Mirror::Experimental::NetworkLerpRigidbody::__cordl_internal_get_lerpVelocityAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpVelocityAmount;
}
constexpr void Mirror::Experimental::NetworkLerpRigidbody::__cordl_internal_set_lerpVelocityAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lerpVelocityAmount = value;
}
constexpr float_t& Mirror::Experimental::NetworkLerpRigidbody::__cordl_internal_get_lerpPositionAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpPositionAmount;
}
constexpr float_t const& Mirror::Experimental::NetworkLerpRigidbody::__cordl_internal_get_lerpPositionAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpPositionAmount;
}
constexpr void Mirror::Experimental::NetworkLerpRigidbody::__cordl_internal_set_lerpPositionAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lerpPositionAmount = value;
}
constexpr bool& Mirror::Experimental::NetworkLerpRigidbody::__cordl_internal_get_clientAuthority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientAuthority;
}
constexpr bool const& Mirror::Experimental::NetworkLerpRigidbody::__cordl_internal_get_clientAuthority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientAuthority;
}
constexpr void Mirror::Experimental::NetworkLerpRigidbody::__cordl_internal_set_clientAuthority(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientAuthority = value;
}
constexpr double_t& Mirror::Experimental::NetworkLerpRigidbody::__cordl_internal_get_nextSyncTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSyncTime;
}
constexpr double_t const& Mirror::Experimental::NetworkLerpRigidbody::__cordl_internal_get_nextSyncTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSyncTime;
}
constexpr void Mirror::Experimental::NetworkLerpRigidbody::__cordl_internal_set_nextSyncTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextSyncTime = value;
}
constexpr ::UnityEngine::Vector3& Mirror::Experimental::NetworkLerpRigidbody::__cordl_internal_get_targetVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetVelocity;
}
constexpr ::UnityEngine::Vector3 const& Mirror::Experimental::NetworkLerpRigidbody::__cordl_internal_get_targetVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetVelocity;
}
constexpr void Mirror::Experimental::NetworkLerpRigidbody::__cordl_internal_set_targetVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetVelocity = value;
}
constexpr ::UnityEngine::Vector3& Mirror::Experimental::NetworkLerpRigidbody::__cordl_internal_get_targetPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPosition;
}
constexpr ::UnityEngine::Vector3 const& Mirror::Experimental::NetworkLerpRigidbody::__cordl_internal_get_targetPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPosition;
}
constexpr void Mirror::Experimental::NetworkLerpRigidbody::__cordl_internal_set_targetPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetPosition = value;
}
inline bool Mirror::Experimental::NetworkLerpRigidbody::get_IgnoreSync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(),
                        {"get_IgnoreSync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Mirror::Experimental::NetworkLerpRigidbody::get_ClientWithAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(),
                        {"get_ClientWithAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkLerpRigidbody::OnValidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkLerpRigidbody::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkLerpRigidbody::SyncToClients()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(),
                        {"SyncToClients", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkLerpRigidbody::SendToServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(),
                        {"SendToServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkLerpRigidbody::CmdSendState(::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(),
                        {"CmdSendState", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocity, position);
}
inline void Mirror::Experimental::NetworkLerpRigidbody::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkLerpRigidbody::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkLerpRigidbody::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Mirror::Experimental::NetworkLerpRigidbody::get_NetworktargetVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(),
                        {"get_NetworktargetVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkLerpRigidbody::set_NetworktargetVelocity(::ByRefConst<::UnityEngine::Vector3>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(),
                        {"set_NetworktargetVelocity", {}, {::i2c::type_of<::ByRefConst<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Mirror::Experimental::NetworkLerpRigidbody::get_NetworktargetPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(),
                        {"get_NetworktargetPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkLerpRigidbody::set_NetworktargetPosition(::ByRefConst<::UnityEngine::Vector3>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(),
                        {"set_NetworktargetPosition", {}, {::i2c::type_of<::ByRefConst<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::Experimental::NetworkLerpRigidbody::UserCode_CmdSendState__Vector3__Vector3(::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(),
                        {"UserCode_CmdSendState__Vector3__Vector3", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocity, position);
}
inline void Mirror::Experimental::NetworkLerpRigidbody::InvokeUserCode_CmdSendState__Vector3__Vector3(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(),
                        {"InvokeUserCode_CmdSendState__Vector3__Vector3", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void Mirror::Experimental::NetworkLerpRigidbody::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void Mirror::Experimental::NetworkLerpRigidbody::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Experimental::NetworkLerpRigidbody*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::Mirror::Experimental::NetworkLerpRigidbody* Mirror::Experimental::NetworkLerpRigidbody::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Experimental::NetworkLerpRigidbody*>());
}
// Ctor Parameters []
constexpr ::Mirror::Experimental::NetworkLerpRigidbody::NetworkLerpRigidbody()   {
}

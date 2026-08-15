#pragma once
// IWYU pragma private; include "Mirror/Experimental/NetworkRigidbody.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Mirror/Experimental/zzzz__NetworkRigidbody_def.hpp"
#include "Mirror/Experimental/zzzz__NetworkRigidbody_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody_ClientSyncState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody_ClientSyncState::*)()>(&::Mirror::Experimental::NetworkRigidbody_ClientSyncState::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody_ClientSyncState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr double_t& Mirror::Experimental::NetworkRigidbody_ClientSyncState::__cordl_internal_get_nextSyncTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSyncTime;
}
constexpr double_t const& Mirror::Experimental::NetworkRigidbody_ClientSyncState::__cordl_internal_get_nextSyncTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSyncTime;
}
constexpr void Mirror::Experimental::NetworkRigidbody_ClientSyncState::__cordl_internal_set_nextSyncTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextSyncTime = value;
}
constexpr ::UnityEngine::Vector3& Mirror::Experimental::NetworkRigidbody_ClientSyncState::__cordl_internal_get_velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr ::UnityEngine::Vector3 const& Mirror::Experimental::NetworkRigidbody_ClientSyncState::__cordl_internal_get_velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr void Mirror::Experimental::NetworkRigidbody_ClientSyncState::__cordl_internal_set_velocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocity = value;
}
constexpr ::UnityEngine::Vector3& Mirror::Experimental::NetworkRigidbody_ClientSyncState::__cordl_internal_get_angularVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angularVelocity;
}
constexpr ::UnityEngine::Vector3 const& Mirror::Experimental::NetworkRigidbody_ClientSyncState::__cordl_internal_get_angularVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angularVelocity;
}
constexpr void Mirror::Experimental::NetworkRigidbody_ClientSyncState::__cordl_internal_set_angularVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angularVelocity = value;
}
constexpr bool& Mirror::Experimental::NetworkRigidbody_ClientSyncState::__cordl_internal_get_isKinematic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isKinematic;
}
constexpr bool const& Mirror::Experimental::NetworkRigidbody_ClientSyncState::__cordl_internal_get_isKinematic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isKinematic;
}
constexpr void Mirror::Experimental::NetworkRigidbody_ClientSyncState::__cordl_internal_set_isKinematic(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isKinematic = value;
}
constexpr bool& Mirror::Experimental::NetworkRigidbody_ClientSyncState::__cordl_internal_get_useGravity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useGravity;
}
constexpr bool const& Mirror::Experimental::NetworkRigidbody_ClientSyncState::__cordl_internal_get_useGravity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useGravity;
}
constexpr void Mirror::Experimental::NetworkRigidbody_ClientSyncState::__cordl_internal_set_useGravity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useGravity = value;
}
constexpr float_t& Mirror::Experimental::NetworkRigidbody_ClientSyncState::__cordl_internal_get_drag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drag;
}
constexpr float_t const& Mirror::Experimental::NetworkRigidbody_ClientSyncState::__cordl_internal_get_drag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drag;
}
constexpr void Mirror::Experimental::NetworkRigidbody_ClientSyncState::__cordl_internal_set_drag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drag = value;
}
constexpr float_t& Mirror::Experimental::NetworkRigidbody_ClientSyncState::__cordl_internal_get_angularDrag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angularDrag;
}
constexpr float_t const& Mirror::Experimental::NetworkRigidbody_ClientSyncState::__cordl_internal_get_angularDrag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angularDrag;
}
constexpr void Mirror::Experimental::NetworkRigidbody_ClientSyncState::__cordl_internal_set_angularDrag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angularDrag = value;
}
inline void Mirror::Experimental::NetworkRigidbody_ClientSyncState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody_ClientSyncState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Experimental::NetworkRigidbody_ClientSyncState* Mirror::Experimental::NetworkRigidbody_ClientSyncState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Experimental::NetworkRigidbody_ClientSyncState*>());
}
// Ctor Parameters []
constexpr ::Mirror::Experimental::NetworkRigidbody_ClientSyncState::NetworkRigidbody_ClientSyncState()   {
}
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)()>(&::Mirror::Experimental::NetworkRigidbody::OnValidate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18151d300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                    {::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.get_IgnoreSync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::Experimental::NetworkRigidbody::*)()>(&::Mirror::Experimental::NetworkRigidbody::get_IgnoreSync)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181520600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"get_IgnoreSync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.get_ClientWithAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::Experimental::NetworkRigidbody::*)()>(&::Mirror::Experimental::NetworkRigidbody::get_ClientWithAuthority)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815205f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"get_ClientWithAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.OnVelocityChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Mirror::Experimental::NetworkRigidbody::OnVelocityChanged)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181521fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"OnVelocityChanged", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.OnAngularVelocityChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Mirror::Experimental::NetworkRigidbody::OnAngularVelocityChanged)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181521e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"OnAngularVelocityChanged", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.OnIsKinematicChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)(bool, bool)>(&::Mirror::Experimental::NetworkRigidbody::OnIsKinematicChanged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181521ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"OnIsKinematicChanged", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.OnUseGravityChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)(bool, bool)>(&::Mirror::Experimental::NetworkRigidbody::OnUseGravityChanged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181521f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"OnUseGravityChanged", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.OnuDragChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)(float_t, float_t)>(&::Mirror::Experimental::NetworkRigidbody::OnuDragChanged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181522020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"OnuDragChanged", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.OnAngularDragChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)(float_t, float_t)>(&::Mirror::Experimental::NetworkRigidbody::OnAngularDragChanged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181521e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"OnAngularDragChanged", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)()>(&::Mirror::Experimental::NetworkRigidbody::Update)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181522e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)()>(&::Mirror::Experimental::NetworkRigidbody::FixedUpdate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181521670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.SyncToClients
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)()>(&::Mirror::Experimental::NetworkRigidbody::SyncToClients)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x181522b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"SyncToClients", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.SendToServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)()>(&::Mirror::Experimental::NetworkRigidbody::SendToServer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181522500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"SendToServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.SendVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)()>(&::Mirror::Experimental::NetworkRigidbody::SendVelocity)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x181522560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"SendVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.SendRigidBodySettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)()>(&::Mirror::Experimental::NetworkRigidbody::SendRigidBodySettings)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x181522080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"SendRigidBodySettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.CmdSendVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)(::UnityEngine::Vector3)>(&::Mirror::Experimental::NetworkRigidbody::CmdSendVelocity)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181520e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"CmdSendVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.CmdSendVelocityAndAngular
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Mirror::Experimental::NetworkRigidbody::CmdSendVelocityAndAngular)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181520d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"CmdSendVelocityAndAngular", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.CmdSendIsKinematic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)(bool)>(&::Mirror::Experimental::NetworkRigidbody::CmdSendIsKinematic)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181520ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"CmdSendIsKinematic", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.CmdSendUseGravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)(bool)>(&::Mirror::Experimental::NetworkRigidbody::CmdSendUseGravity)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181520c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"CmdSendUseGravity", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.CmdSendDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)(float_t)>(&::Mirror::Experimental::NetworkRigidbody::CmdSendDrag)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181520ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"CmdSendDrag", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.CmdSendAngularDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)(float_t)>(&::Mirror::Experimental::NetworkRigidbody::CmdSendAngularDrag)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181520a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"CmdSendAngularDrag", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)()>(&::Mirror::Experimental::NetworkRigidbody::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181523460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)()>(&::Mirror::Experimental::NetworkRigidbody::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.get_Networkvelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Mirror::Experimental::NetworkRigidbody::*)()>(&::Mirror::Experimental::NetworkRigidbody::get_Networkvelocity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"get_Networkvelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.set_Networkvelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)(::ByRefConst<::UnityEngine::Vector3>)>(&::Mirror::Experimental::NetworkRigidbody::set_Networkvelocity)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181523760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"set_Networkvelocity", {}, {::i2c::type_of<::ByRefConst<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.get_NetworkangularVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Mirror::Experimental::NetworkRigidbody::*)()>(&::Mirror::Experimental::NetworkRigidbody::get_NetworkangularVelocity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18151dc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"get_NetworkangularVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.set_NetworkangularVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)(::ByRefConst<::UnityEngine::Vector3>)>(&::Mirror::Experimental::NetworkRigidbody::set_NetworkangularVelocity)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181523550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"set_NetworkangularVelocity", {}, {::i2c::type_of<::ByRefConst<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.get_NetworkisKinematic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::Experimental::NetworkRigidbody::*)()>(&::Mirror::Experimental::NetworkRigidbody::get_NetworkisKinematic)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805fa960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"get_NetworkisKinematic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.set_NetworkisKinematic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)(::ByRefConst<bool>)>(&::Mirror::Experimental::NetworkRigidbody::set_NetworkisKinematic)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181523660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"set_NetworkisKinematic", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.get_NetworkuseGravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::Experimental::NetworkRigidbody::*)()>(&::Mirror::Experimental::NetworkRigidbody::get_NetworkuseGravity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815234c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"get_NetworkuseGravity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.set_NetworkuseGravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)(::ByRefConst<bool>)>(&::Mirror::Experimental::NetworkRigidbody::set_NetworkuseGravity)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1815236e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"set_NetworkuseGravity", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.get_Networkdrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Mirror::Experimental::NetworkRigidbody::*)()>(&::Mirror::Experimental::NetworkRigidbody::get_Networkdrag)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815234b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"get_Networkdrag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.set_Networkdrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)(::ByRefConst<float_t>)>(&::Mirror::Experimental::NetworkRigidbody::set_Networkdrag)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1815235e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"set_Networkdrag", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.get_NetworkangularDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Mirror::Experimental::NetworkRigidbody::*)()>(&::Mirror::Experimental::NetworkRigidbody::get_NetworkangularDrag)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803054e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"get_NetworkangularDrag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.set_NetworkangularDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)(::ByRefConst<float_t>)>(&::Mirror::Experimental::NetworkRigidbody::set_NetworkangularDrag)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1815234d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"set_NetworkangularDrag", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.UserCode_CmdSendVelocity__Vector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)(::UnityEngine::Vector3)>(&::Mirror::Experimental::NetworkRigidbody::UserCode_CmdSendVelocity__Vector3)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1815231a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"UserCode_CmdSendVelocity__Vector3", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.InvokeUserCode_CmdSendVelocity__Vector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::Experimental::NetworkRigidbody::InvokeUserCode_CmdSendVelocity__Vector3)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181521cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"InvokeUserCode_CmdSendVelocity__Vector3", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.UserCode_CmdSendVelocityAndAngular__Vector3__Vector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Mirror::Experimental::NetworkRigidbody::UserCode_CmdSendVelocityAndAngular__Vector3__Vector3)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181523040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"UserCode_CmdSendVelocityAndAngular__Vector3__Vector3", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.InvokeUserCode_CmdSendVelocityAndAngular__Vector3__Vector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::Experimental::NetworkRigidbody::InvokeUserCode_CmdSendVelocityAndAngular__Vector3__Vector3)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x181521a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"InvokeUserCode_CmdSendVelocityAndAngular__Vector3__Vector3", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.UserCode_CmdSendIsKinematic__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)(bool)>(&::Mirror::Experimental::NetworkRigidbody::UserCode_CmdSendIsKinematic__Boolean)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181522fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"UserCode_CmdSendIsKinematic__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.InvokeUserCode_CmdSendIsKinematic__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::Experimental::NetworkRigidbody::InvokeUserCode_CmdSendIsKinematic__Boolean)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1815218c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"InvokeUserCode_CmdSendIsKinematic__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.UserCode_CmdSendUseGravity__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)(bool)>(&::Mirror::Experimental::NetworkRigidbody::UserCode_CmdSendUseGravity__Boolean)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181522ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"UserCode_CmdSendUseGravity__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.InvokeUserCode_CmdSendUseGravity__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::Experimental::NetworkRigidbody::InvokeUserCode_CmdSendUseGravity__Boolean)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1815219a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"InvokeUserCode_CmdSendUseGravity__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.UserCode_CmdSendDrag__Single
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)(float_t)>(&::Mirror::Experimental::NetworkRigidbody::UserCode_CmdSendDrag__Single)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181522f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"UserCode_CmdSendDrag__Single", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.InvokeUserCode_CmdSendDrag__Single
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::Experimental::NetworkRigidbody::InvokeUserCode_CmdSendDrag__Single)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1815217e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"InvokeUserCode_CmdSendDrag__Single", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.UserCode_CmdSendAngularDrag__Single
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)(float_t)>(&::Mirror::Experimental::NetworkRigidbody::UserCode_CmdSendAngularDrag__Single)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181522f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"UserCode_CmdSendAngularDrag__Single", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.InvokeUserCode_CmdSendAngularDrag__Single
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::Experimental::NetworkRigidbody::InvokeUserCode_CmdSendAngularDrag__Single)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181521700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"InvokeUserCode_CmdSendAngularDrag__Single", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)(::Mirror::NetworkWriter*, bool)>(&::Mirror::Experimental::NetworkRigidbody::SerializeSyncVars)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181522980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                    {::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody::*)(::Mirror::NetworkReader*, bool)>(&::Mirror::Experimental::NetworkRigidbody::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0x770;
  constexpr static std::size_t addrs = 0x181520f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                    {::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& Mirror::Experimental::NetworkRigidbody::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Mirror::Experimental::NetworkRigidbody::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void Mirror::Experimental::NetworkRigidbody::__cordl_internal_set_target(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr bool& Mirror::Experimental::NetworkRigidbody::__cordl_internal_get_clientAuthority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientAuthority;
}
constexpr bool const& Mirror::Experimental::NetworkRigidbody::__cordl_internal_get_clientAuthority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientAuthority;
}
constexpr void Mirror::Experimental::NetworkRigidbody::__cordl_internal_set_clientAuthority(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientAuthority = value;
}
constexpr bool& Mirror::Experimental::NetworkRigidbody::__cordl_internal_get_syncVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncVelocity;
}
constexpr bool const& Mirror::Experimental::NetworkRigidbody::__cordl_internal_get_syncVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncVelocity;
}
constexpr void Mirror::Experimental::NetworkRigidbody::__cordl_internal_set_syncVelocity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncVelocity = value;
}
constexpr bool& Mirror::Experimental::NetworkRigidbody::__cordl_internal_get_clearVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearVelocity;
}
constexpr bool const& Mirror::Experimental::NetworkRigidbody::__cordl_internal_get_clearVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearVelocity;
}
constexpr void Mirror::Experimental::NetworkRigidbody::__cordl_internal_set_clearVelocity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clearVelocity = value;
}
constexpr float_t& Mirror::Experimental::NetworkRigidbody::__cordl_internal_get_velocitySensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocitySensitivity;
}
constexpr float_t const& Mirror::Experimental::NetworkRigidbody::__cordl_internal_get_velocitySensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocitySensitivity;
}
constexpr void Mirror::Experimental::NetworkRigidbody::__cordl_internal_set_velocitySensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocitySensitivity = value;
}
constexpr bool& Mirror::Experimental::NetworkRigidbody::__cordl_internal_get_syncAngularVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncAngularVelocity;
}
constexpr bool const& Mirror::Experimental::NetworkRigidbody::__cordl_internal_get_syncAngularVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncAngularVelocity;
}
constexpr void Mirror::Experimental::NetworkRigidbody::__cordl_internal_set_syncAngularVelocity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncAngularVelocity = value;
}
constexpr bool& Mirror::Experimental::NetworkRigidbody::__cordl_internal_get_clearAngularVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearAngularVelocity;
}
constexpr bool const& Mirror::Experimental::NetworkRigidbody::__cordl_internal_get_clearAngularVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearAngularVelocity;
}
constexpr void Mirror::Experimental::NetworkRigidbody::__cordl_internal_set_clearAngularVelocity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clearAngularVelocity = value;
}
constexpr float_t& Mirror::Experimental::NetworkRigidbody::__cordl_internal_get_angularVelocitySensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angularVelocitySensitivity;
}
constexpr float_t const& Mirror::Experimental::NetworkRigidbody::__cordl_internal_get_angularVelocitySensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angularVelocitySensitivity;
}
constexpr void Mirror::Experimental::NetworkRigidbody::__cordl_internal_set_angularVelocitySensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angularVelocitySensitivity = value;
}
constexpr ::Mirror::Experimental::NetworkRigidbody_ClientSyncState*& Mirror::Experimental::NetworkRigidbody::__cordl_internal_get_previousValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousValue;
}
constexpr ::Mirror::Experimental::NetworkRigidbody_ClientSyncState* const& Mirror::Experimental::NetworkRigidbody::__cordl_internal_get_previousValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousValue;
}
constexpr void Mirror::Experimental::NetworkRigidbody::__cordl_internal_set_previousValue(::Mirror::Experimental::NetworkRigidbody_ClientSyncState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousValue = value;
}
constexpr ::UnityEngine::Vector3& Mirror::Experimental::NetworkRigidbody::__cordl_internal_get_velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr ::UnityEngine::Vector3 const& Mirror::Experimental::NetworkRigidbody::__cordl_internal_get_velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr void Mirror::Experimental::NetworkRigidbody::__cordl_internal_set_velocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocity = value;
}
constexpr ::UnityEngine::Vector3& Mirror::Experimental::NetworkRigidbody::__cordl_internal_get_angularVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angularVelocity;
}
constexpr ::UnityEngine::Vector3 const& Mirror::Experimental::NetworkRigidbody::__cordl_internal_get_angularVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angularVelocity;
}
constexpr void Mirror::Experimental::NetworkRigidbody::__cordl_internal_set_angularVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angularVelocity = value;
}
constexpr bool& Mirror::Experimental::NetworkRigidbody::__cordl_internal_get_isKinematic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isKinematic;
}
constexpr bool const& Mirror::Experimental::NetworkRigidbody::__cordl_internal_get_isKinematic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isKinematic;
}
constexpr void Mirror::Experimental::NetworkRigidbody::__cordl_internal_set_isKinematic(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isKinematic = value;
}
constexpr bool& Mirror::Experimental::NetworkRigidbody::__cordl_internal_get_useGravity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useGravity;
}
constexpr bool const& Mirror::Experimental::NetworkRigidbody::__cordl_internal_get_useGravity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useGravity;
}
constexpr void Mirror::Experimental::NetworkRigidbody::__cordl_internal_set_useGravity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useGravity = value;
}
constexpr float_t& Mirror::Experimental::NetworkRigidbody::__cordl_internal_get_drag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drag;
}
constexpr float_t const& Mirror::Experimental::NetworkRigidbody::__cordl_internal_get_drag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drag;
}
constexpr void Mirror::Experimental::NetworkRigidbody::__cordl_internal_set_drag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drag = value;
}
constexpr float_t& Mirror::Experimental::NetworkRigidbody::__cordl_internal_get_angularDrag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angularDrag;
}
constexpr float_t const& Mirror::Experimental::NetworkRigidbody::__cordl_internal_get_angularDrag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angularDrag;
}
constexpr void Mirror::Experimental::NetworkRigidbody::__cordl_internal_set_angularDrag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angularDrag = value;
}
inline void Mirror::Experimental::NetworkRigidbody::OnValidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::Experimental::NetworkRigidbody::get_IgnoreSync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"get_IgnoreSync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Mirror::Experimental::NetworkRigidbody::get_ClientWithAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"get_ClientWithAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkRigidbody::OnVelocityChanged(::UnityEngine::Vector3  _, ::UnityEngine::Vector3  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"OnVelocityChanged", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, newValue);
}
inline void Mirror::Experimental::NetworkRigidbody::OnAngularVelocityChanged(::UnityEngine::Vector3  _, ::UnityEngine::Vector3  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"OnAngularVelocityChanged", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, newValue);
}
inline void Mirror::Experimental::NetworkRigidbody::OnIsKinematicChanged(bool  _, bool  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"OnIsKinematicChanged", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, newValue);
}
inline void Mirror::Experimental::NetworkRigidbody::OnUseGravityChanged(bool  _, bool  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"OnUseGravityChanged", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, newValue);
}
inline void Mirror::Experimental::NetworkRigidbody::OnuDragChanged(float_t  _, float_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"OnuDragChanged", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, newValue);
}
inline void Mirror::Experimental::NetworkRigidbody::OnAngularDragChanged(float_t  _, float_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"OnAngularDragChanged", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, newValue);
}
inline void Mirror::Experimental::NetworkRigidbody::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkRigidbody::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkRigidbody::SyncToClients()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"SyncToClients", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkRigidbody::SendToServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"SendToServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkRigidbody::SendVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"SendVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkRigidbody::SendRigidBodySettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"SendRigidBodySettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkRigidbody::CmdSendVelocity(::UnityEngine::Vector3  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"CmdSendVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocity);
}
inline void Mirror::Experimental::NetworkRigidbody::CmdSendVelocityAndAngular(::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angularVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"CmdSendVelocityAndAngular", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocity, angularVelocity);
}
inline void Mirror::Experimental::NetworkRigidbody::CmdSendIsKinematic(bool  isKinematic)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"CmdSendIsKinematic", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isKinematic);
}
inline void Mirror::Experimental::NetworkRigidbody::CmdSendUseGravity(bool  useGravity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"CmdSendUseGravity", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, useGravity);
}
inline void Mirror::Experimental::NetworkRigidbody::CmdSendDrag(float_t  drag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"CmdSendDrag", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, drag);
}
inline void Mirror::Experimental::NetworkRigidbody::CmdSendAngularDrag(float_t  angularDrag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"CmdSendAngularDrag", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, angularDrag);
}
inline void Mirror::Experimental::NetworkRigidbody::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkRigidbody::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Mirror::Experimental::NetworkRigidbody::get_Networkvelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"get_Networkvelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkRigidbody::set_Networkvelocity(::ByRefConst<::UnityEngine::Vector3>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"set_Networkvelocity", {}, {::i2c::type_of<::ByRefConst<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Mirror::Experimental::NetworkRigidbody::get_NetworkangularVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"get_NetworkangularVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkRigidbody::set_NetworkangularVelocity(::ByRefConst<::UnityEngine::Vector3>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"set_NetworkangularVelocity", {}, {::i2c::type_of<::ByRefConst<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Mirror::Experimental::NetworkRigidbody::get_NetworkisKinematic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"get_NetworkisKinematic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkRigidbody::set_NetworkisKinematic(::ByRefConst<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"set_NetworkisKinematic", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Mirror::Experimental::NetworkRigidbody::get_NetworkuseGravity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"get_NetworkuseGravity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkRigidbody::set_NetworkuseGravity(::ByRefConst<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"set_NetworkuseGravity", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Mirror::Experimental::NetworkRigidbody::get_Networkdrag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"get_Networkdrag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkRigidbody::set_Networkdrag(::ByRefConst<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"set_Networkdrag", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Mirror::Experimental::NetworkRigidbody::get_NetworkangularDrag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"get_NetworkangularDrag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkRigidbody::set_NetworkangularDrag(::ByRefConst<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"set_NetworkangularDrag", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::Experimental::NetworkRigidbody::UserCode_CmdSendVelocity__Vector3(::UnityEngine::Vector3  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"UserCode_CmdSendVelocity__Vector3", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocity);
}
inline void Mirror::Experimental::NetworkRigidbody::InvokeUserCode_CmdSendVelocity__Vector3(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"InvokeUserCode_CmdSendVelocity__Vector3", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void Mirror::Experimental::NetworkRigidbody::UserCode_CmdSendVelocityAndAngular__Vector3__Vector3(::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angularVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"UserCode_CmdSendVelocityAndAngular__Vector3__Vector3", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocity, angularVelocity);
}
inline void Mirror::Experimental::NetworkRigidbody::InvokeUserCode_CmdSendVelocityAndAngular__Vector3__Vector3(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"InvokeUserCode_CmdSendVelocityAndAngular__Vector3__Vector3", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void Mirror::Experimental::NetworkRigidbody::UserCode_CmdSendIsKinematic__Boolean(bool  isKinematic)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"UserCode_CmdSendIsKinematic__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isKinematic);
}
inline void Mirror::Experimental::NetworkRigidbody::InvokeUserCode_CmdSendIsKinematic__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"InvokeUserCode_CmdSendIsKinematic__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void Mirror::Experimental::NetworkRigidbody::UserCode_CmdSendUseGravity__Boolean(bool  useGravity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"UserCode_CmdSendUseGravity__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, useGravity);
}
inline void Mirror::Experimental::NetworkRigidbody::InvokeUserCode_CmdSendUseGravity__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"InvokeUserCode_CmdSendUseGravity__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void Mirror::Experimental::NetworkRigidbody::UserCode_CmdSendDrag__Single(float_t  drag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"UserCode_CmdSendDrag__Single", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, drag);
}
inline void Mirror::Experimental::NetworkRigidbody::InvokeUserCode_CmdSendDrag__Single(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"InvokeUserCode_CmdSendDrag__Single", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void Mirror::Experimental::NetworkRigidbody::UserCode_CmdSendAngularDrag__Single(float_t  angularDrag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"UserCode_CmdSendAngularDrag__Single", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, angularDrag);
}
inline void Mirror::Experimental::NetworkRigidbody::InvokeUserCode_CmdSendAngularDrag__Single(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(),
                        {"InvokeUserCode_CmdSendAngularDrag__Single", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void Mirror::Experimental::NetworkRigidbody::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void Mirror::Experimental::NetworkRigidbody::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Experimental::NetworkRigidbody*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::Mirror::Experimental::NetworkRigidbody* Mirror::Experimental::NetworkRigidbody::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Experimental::NetworkRigidbody*>());
}
// Ctor Parameters []
constexpr ::Mirror::Experimental::NetworkRigidbody::NetworkRigidbody()   {
}

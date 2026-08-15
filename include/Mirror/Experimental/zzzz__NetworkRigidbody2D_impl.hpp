#pragma once
// IWYU pragma private; include "Mirror/Experimental/NetworkRigidbody2D.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Mirror/Experimental/zzzz__NetworkRigidbody2D_def.hpp"
#include "Mirror/Experimental/zzzz__NetworkRigidbody2D_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "UnityEngine/zzzz__Rigidbody2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D_ClientSyncState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D_ClientSyncState::*)()>(&::Mirror::Experimental::NetworkRigidbody2D_ClientSyncState::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D_ClientSyncState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Mirror::Experimental::NetworkRigidbody2D_ClientSyncState::__cordl_internal_get_nextSyncTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSyncTime;
}
constexpr float_t const& Mirror::Experimental::NetworkRigidbody2D_ClientSyncState::__cordl_internal_get_nextSyncTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSyncTime;
}
constexpr void Mirror::Experimental::NetworkRigidbody2D_ClientSyncState::__cordl_internal_set_nextSyncTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextSyncTime = value;
}
constexpr ::UnityEngine::Vector2& Mirror::Experimental::NetworkRigidbody2D_ClientSyncState::__cordl_internal_get_velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr ::UnityEngine::Vector2 const& Mirror::Experimental::NetworkRigidbody2D_ClientSyncState::__cordl_internal_get_velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr void Mirror::Experimental::NetworkRigidbody2D_ClientSyncState::__cordl_internal_set_velocity(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocity = value;
}
constexpr float_t& Mirror::Experimental::NetworkRigidbody2D_ClientSyncState::__cordl_internal_get_angularVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angularVelocity;
}
constexpr float_t const& Mirror::Experimental::NetworkRigidbody2D_ClientSyncState::__cordl_internal_get_angularVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angularVelocity;
}
constexpr void Mirror::Experimental::NetworkRigidbody2D_ClientSyncState::__cordl_internal_set_angularVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angularVelocity = value;
}
constexpr bool& Mirror::Experimental::NetworkRigidbody2D_ClientSyncState::__cordl_internal_get_isKinematic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isKinematic;
}
constexpr bool const& Mirror::Experimental::NetworkRigidbody2D_ClientSyncState::__cordl_internal_get_isKinematic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isKinematic;
}
constexpr void Mirror::Experimental::NetworkRigidbody2D_ClientSyncState::__cordl_internal_set_isKinematic(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isKinematic = value;
}
constexpr float_t& Mirror::Experimental::NetworkRigidbody2D_ClientSyncState::__cordl_internal_get_gravityScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityScale;
}
constexpr float_t const& Mirror::Experimental::NetworkRigidbody2D_ClientSyncState::__cordl_internal_get_gravityScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityScale;
}
constexpr void Mirror::Experimental::NetworkRigidbody2D_ClientSyncState::__cordl_internal_set_gravityScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravityScale = value;
}
constexpr float_t& Mirror::Experimental::NetworkRigidbody2D_ClientSyncState::__cordl_internal_get_drag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drag;
}
constexpr float_t const& Mirror::Experimental::NetworkRigidbody2D_ClientSyncState::__cordl_internal_get_drag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drag;
}
constexpr void Mirror::Experimental::NetworkRigidbody2D_ClientSyncState::__cordl_internal_set_drag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drag = value;
}
constexpr float_t& Mirror::Experimental::NetworkRigidbody2D_ClientSyncState::__cordl_internal_get_angularDrag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angularDrag;
}
constexpr float_t const& Mirror::Experimental::NetworkRigidbody2D_ClientSyncState::__cordl_internal_get_angularDrag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angularDrag;
}
constexpr void Mirror::Experimental::NetworkRigidbody2D_ClientSyncState::__cordl_internal_set_angularDrag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angularDrag = value;
}
inline void Mirror::Experimental::NetworkRigidbody2D_ClientSyncState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D_ClientSyncState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Experimental::NetworkRigidbody2D_ClientSyncState* Mirror::Experimental::NetworkRigidbody2D_ClientSyncState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Experimental::NetworkRigidbody2D_ClientSyncState*>());
}
// Ctor Parameters []
constexpr ::Mirror::Experimental::NetworkRigidbody2D_ClientSyncState::NetworkRigidbody2D_ClientSyncState()   {
}
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)()>(&::Mirror::Experimental::NetworkRigidbody2D::OnValidate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18151f3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                    {::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.get_IgnoreSync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::Experimental::NetworkRigidbody2D::*)()>(&::Mirror::Experimental::NetworkRigidbody2D::get_IgnoreSync)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181520600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"get_IgnoreSync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.get_ClientWithAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::Experimental::NetworkRigidbody2D::*)()>(&::Mirror::Experimental::NetworkRigidbody2D::get_ClientWithAuthority)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815205f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"get_ClientWithAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.OnVelocityChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::Mirror::Experimental::NetworkRigidbody2D::OnVelocityChanged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18151f400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"OnVelocityChanged", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.OnAngularVelocityChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)(float_t, float_t)>(&::Mirror::Experimental::NetworkRigidbody2D::OnAngularVelocityChanged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18151f290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"OnAngularVelocityChanged", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.OnIsKinematicChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)(bool, bool)>(&::Mirror::Experimental::NetworkRigidbody2D::OnIsKinematicChanged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18151f350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"OnIsKinematicChanged", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.OnGravityScaleChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)(float_t, float_t)>(&::Mirror::Experimental::NetworkRigidbody2D::OnGravityScaleChanged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18151f2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"OnGravityScaleChanged", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.OnuDragChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)(float_t, float_t)>(&::Mirror::Experimental::NetworkRigidbody2D::OnuDragChanged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18151f460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"OnuDragChanged", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.OnAngularDragChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)(float_t, float_t)>(&::Mirror::Experimental::NetworkRigidbody2D::OnAngularDragChanged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18151f230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"OnAngularDragChanged", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)()>(&::Mirror::Experimental::NetworkRigidbody2D::Update)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1815200f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)()>(&::Mirror::Experimental::NetworkRigidbody2D::FixedUpdate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18151ec30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.SyncToClients
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)()>(&::Mirror::Experimental::NetworkRigidbody2D::SyncToClients)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x18151fea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"SyncToClients", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.SendToServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)()>(&::Mirror::Experimental::NetworkRigidbody2D::SendToServer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18151f950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"SendToServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.SendVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)()>(&::Mirror::Experimental::NetworkRigidbody2D::SendVelocity)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x18151f9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"SendVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.SendRigidBodySettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)()>(&::Mirror::Experimental::NetworkRigidbody2D::SendRigidBodySettings)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x18151f4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"SendRigidBodySettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.CmdSendVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)(::UnityEngine::Vector2)>(&::Mirror::Experimental::NetworkRigidbody2D::CmdSendVelocity)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18151e470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"CmdSendVelocity", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.CmdSendVelocityAndAngular
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)(::UnityEngine::Vector2, float_t)>(&::Mirror::Experimental::NetworkRigidbody2D::CmdSendVelocityAndAngular)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18151e390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"CmdSendVelocityAndAngular", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.CmdSendIsKinematic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)(bool)>(&::Mirror::Experimental::NetworkRigidbody2D::CmdSendIsKinematic)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18151e2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"CmdSendIsKinematic", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.CmdChangeGravityScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)(float_t)>(&::Mirror::Experimental::NetworkRigidbody2D::CmdChangeGravityScale)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18151e090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"CmdChangeGravityScale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.CmdSendDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)(float_t)>(&::Mirror::Experimental::NetworkRigidbody2D::CmdSendDrag)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18151e210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"CmdSendDrag", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.CmdSendAngularDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)(float_t)>(&::Mirror::Experimental::NetworkRigidbody2D::CmdSendAngularDrag)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18151e150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"CmdSendAngularDrag", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)()>(&::Mirror::Experimental::NetworkRigidbody2D::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1815205a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)()>(&::Mirror::Experimental::NetworkRigidbody2D::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.get_Networkvelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Mirror::Experimental::NetworkRigidbody2D::*)()>(&::Mirror::Experimental::NetworkRigidbody2D::get_Networkvelocity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"get_Networkvelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.set_Networkvelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)(::ByRefConst<::UnityEngine::Vector2>)>(&::Mirror::Experimental::NetworkRigidbody2D::set_Networkvelocity)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1815208d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"set_Networkvelocity", {}, {::i2c::type_of<::ByRefConst<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.get_NetworkangularVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Mirror::Experimental::NetworkRigidbody2D::*)()>(&::Mirror::Experimental::NetworkRigidbody2D::get_NetworkangularVelocity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813ec940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"get_NetworkangularVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.set_NetworkangularVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)(::ByRefConst<float_t>)>(&::Mirror::Experimental::NetworkRigidbody2D::set_NetworkangularVelocity)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1815206d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"set_NetworkangularVelocity", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.get_NetworkisKinematic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::Experimental::NetworkRigidbody2D::*)()>(&::Mirror::Experimental::NetworkRigidbody2D::get_NetworkisKinematic)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180430b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"get_NetworkisKinematic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.set_NetworkisKinematic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)(::ByRefConst<bool>)>(&::Mirror::Experimental::NetworkRigidbody2D::set_NetworkisKinematic)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181520850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"set_NetworkisKinematic", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.get_NetworkgravityScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Mirror::Experimental::NetworkRigidbody2D::*)()>(&::Mirror::Experimental::NetworkRigidbody2D::get_NetworkgravityScale)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180487750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"get_NetworkgravityScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.set_NetworkgravityScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)(::ByRefConst<float_t>)>(&::Mirror::Experimental::NetworkRigidbody2D::set_NetworkgravityScale)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1815207d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"set_NetworkgravityScale", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.get_Networkdrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Mirror::Experimental::NetworkRigidbody2D::*)()>(&::Mirror::Experimental::NetworkRigidbody2D::get_Networkdrag)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181520640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"get_Networkdrag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.set_Networkdrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)(::ByRefConst<float_t>)>(&::Mirror::Experimental::NetworkRigidbody2D::set_Networkdrag)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181520750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"set_Networkdrag", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.get_NetworkangularDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Mirror::Experimental::NetworkRigidbody2D::*)()>(&::Mirror::Experimental::NetworkRigidbody2D::get_NetworkangularDrag)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804a5780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"get_NetworkangularDrag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.set_NetworkangularDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)(::ByRefConst<float_t>)>(&::Mirror::Experimental::NetworkRigidbody2D::set_NetworkangularDrag)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181520650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"set_NetworkangularDrag", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.UserCode_CmdSendVelocity__Vector2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)(::UnityEngine::Vector2)>(&::Mirror::Experimental::NetworkRigidbody2D::UserCode_CmdSendVelocity__Vector2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181520350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"UserCode_CmdSendVelocity__Vector2", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.InvokeUserCode_CmdSendVelocity__Vector2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::Experimental::NetworkRigidbody2D::InvokeUserCode_CmdSendVelocity__Vector2)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18151f150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"InvokeUserCode_CmdSendVelocity__Vector2", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.UserCode_CmdSendVelocityAndAngular__Vector2__Single
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)(::UnityEngine::Vector2, float_t)>(&::Mirror::Experimental::NetworkRigidbody2D::UserCode_CmdSendVelocityAndAngular__Vector2__Single)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1815202c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"UserCode_CmdSendVelocityAndAngular__Vector2__Single", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.InvokeUserCode_CmdSendVelocityAndAngular__Vector2__Single
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::Experimental::NetworkRigidbody2D::InvokeUserCode_CmdSendVelocityAndAngular__Vector2__Single)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18151f020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"InvokeUserCode_CmdSendVelocityAndAngular__Vector2__Single", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.UserCode_CmdSendIsKinematic__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)(bool)>(&::Mirror::Experimental::NetworkRigidbody2D::UserCode_CmdSendIsKinematic__Boolean)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181520270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"UserCode_CmdSendIsKinematic__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.InvokeUserCode_CmdSendIsKinematic__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::Experimental::NetworkRigidbody2D::InvokeUserCode_CmdSendIsKinematic__Boolean)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18151ef40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"InvokeUserCode_CmdSendIsKinematic__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.UserCode_CmdChangeGravityScale__Single
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)(float_t)>(&::Mirror::Experimental::NetworkRigidbody2D::UserCode_CmdChangeGravityScale__Single)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181520180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"UserCode_CmdChangeGravityScale__Single", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.InvokeUserCode_CmdChangeGravityScale__Single
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::Experimental::NetworkRigidbody2D::InvokeUserCode_CmdChangeGravityScale__Single)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18151eca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"InvokeUserCode_CmdChangeGravityScale__Single", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.UserCode_CmdSendDrag__Single
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)(float_t)>(&::Mirror::Experimental::NetworkRigidbody2D::UserCode_CmdSendDrag__Single)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181520220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"UserCode_CmdSendDrag__Single", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.InvokeUserCode_CmdSendDrag__Single
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::Experimental::NetworkRigidbody2D::InvokeUserCode_CmdSendDrag__Single)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18151ee60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"InvokeUserCode_CmdSendDrag__Single", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.UserCode_CmdSendAngularDrag__Single
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)(float_t)>(&::Mirror::Experimental::NetworkRigidbody2D::UserCode_CmdSendAngularDrag__Single)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1815201d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"UserCode_CmdSendAngularDrag__Single", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.InvokeUserCode_CmdSendAngularDrag__Single
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::Experimental::NetworkRigidbody2D::InvokeUserCode_CmdSendAngularDrag__Single)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18151ed80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"InvokeUserCode_CmdSendAngularDrag__Single", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)(::Mirror::NetworkWriter*, bool)>(&::Mirror::Experimental::NetworkRigidbody2D::SerializeSyncVars)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18151fd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                    {::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Experimental::NetworkRigidbody2D.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Experimental::NetworkRigidbody2D::*)(::Mirror::NetworkReader*, bool)>(&::Mirror::Experimental::NetworkRigidbody2D::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0x6f0;
  constexpr static std::size_t addrs = 0x18151e540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                    {::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody2D>& Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Rigidbody2D> const& Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_set_target(::UnityW<::UnityEngine::Rigidbody2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr bool& Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_get_clientAuthority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientAuthority;
}
constexpr bool const& Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_get_clientAuthority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientAuthority;
}
constexpr void Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_set_clientAuthority(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientAuthority = value;
}
constexpr bool& Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_get_syncVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncVelocity;
}
constexpr bool const& Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_get_syncVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncVelocity;
}
constexpr void Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_set_syncVelocity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncVelocity = value;
}
constexpr bool& Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_get_clearVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearVelocity;
}
constexpr bool const& Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_get_clearVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearVelocity;
}
constexpr void Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_set_clearVelocity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clearVelocity = value;
}
constexpr float_t& Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_get_velocitySensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocitySensitivity;
}
constexpr float_t const& Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_get_velocitySensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocitySensitivity;
}
constexpr void Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_set_velocitySensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocitySensitivity = value;
}
constexpr bool& Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_get_syncAngularVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncAngularVelocity;
}
constexpr bool const& Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_get_syncAngularVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncAngularVelocity;
}
constexpr void Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_set_syncAngularVelocity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncAngularVelocity = value;
}
constexpr bool& Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_get_clearAngularVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearAngularVelocity;
}
constexpr bool const& Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_get_clearAngularVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearAngularVelocity;
}
constexpr void Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_set_clearAngularVelocity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clearAngularVelocity = value;
}
constexpr float_t& Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_get_angularVelocitySensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angularVelocitySensitivity;
}
constexpr float_t const& Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_get_angularVelocitySensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angularVelocitySensitivity;
}
constexpr void Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_set_angularVelocitySensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angularVelocitySensitivity = value;
}
constexpr ::Mirror::Experimental::NetworkRigidbody2D_ClientSyncState*& Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_get_previousValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousValue;
}
constexpr ::Mirror::Experimental::NetworkRigidbody2D_ClientSyncState* const& Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_get_previousValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousValue;
}
constexpr void Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_set_previousValue(::Mirror::Experimental::NetworkRigidbody2D_ClientSyncState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousValue = value;
}
constexpr ::UnityEngine::Vector2& Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_get_velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr ::UnityEngine::Vector2 const& Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_get_velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr void Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_set_velocity(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocity = value;
}
constexpr float_t& Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_get_angularVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angularVelocity;
}
constexpr float_t const& Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_get_angularVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angularVelocity;
}
constexpr void Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_set_angularVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angularVelocity = value;
}
constexpr bool& Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_get_isKinematic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isKinematic;
}
constexpr bool const& Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_get_isKinematic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isKinematic;
}
constexpr void Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_set_isKinematic(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isKinematic = value;
}
constexpr float_t& Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_get_gravityScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityScale;
}
constexpr float_t const& Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_get_gravityScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityScale;
}
constexpr void Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_set_gravityScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravityScale = value;
}
constexpr float_t& Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_get_drag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drag;
}
constexpr float_t const& Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_get_drag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drag;
}
constexpr void Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_set_drag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drag = value;
}
constexpr float_t& Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_get_angularDrag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angularDrag;
}
constexpr float_t const& Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_get_angularDrag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angularDrag;
}
constexpr void Mirror::Experimental::NetworkRigidbody2D::__cordl_internal_set_angularDrag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angularDrag = value;
}
inline void Mirror::Experimental::NetworkRigidbody2D::OnValidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::Experimental::NetworkRigidbody2D::get_IgnoreSync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"get_IgnoreSync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Mirror::Experimental::NetworkRigidbody2D::get_ClientWithAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"get_ClientWithAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkRigidbody2D::OnVelocityChanged(::UnityEngine::Vector2  _, ::UnityEngine::Vector2  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"OnVelocityChanged", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, newValue);
}
inline void Mirror::Experimental::NetworkRigidbody2D::OnAngularVelocityChanged(float_t  _, float_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"OnAngularVelocityChanged", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, newValue);
}
inline void Mirror::Experimental::NetworkRigidbody2D::OnIsKinematicChanged(bool  _, bool  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"OnIsKinematicChanged", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, newValue);
}
inline void Mirror::Experimental::NetworkRigidbody2D::OnGravityScaleChanged(float_t  _, float_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"OnGravityScaleChanged", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, newValue);
}
inline void Mirror::Experimental::NetworkRigidbody2D::OnuDragChanged(float_t  _, float_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"OnuDragChanged", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, newValue);
}
inline void Mirror::Experimental::NetworkRigidbody2D::OnAngularDragChanged(float_t  _, float_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"OnAngularDragChanged", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, newValue);
}
inline void Mirror::Experimental::NetworkRigidbody2D::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkRigidbody2D::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkRigidbody2D::SyncToClients()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"SyncToClients", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkRigidbody2D::SendToServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"SendToServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkRigidbody2D::SendVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"SendVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkRigidbody2D::SendRigidBodySettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"SendRigidBodySettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkRigidbody2D::CmdSendVelocity(::UnityEngine::Vector2  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"CmdSendVelocity", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocity);
}
inline void Mirror::Experimental::NetworkRigidbody2D::CmdSendVelocityAndAngular(::UnityEngine::Vector2  velocity, float_t  angularVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"CmdSendVelocityAndAngular", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocity, angularVelocity);
}
inline void Mirror::Experimental::NetworkRigidbody2D::CmdSendIsKinematic(bool  isKinematic)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"CmdSendIsKinematic", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isKinematic);
}
inline void Mirror::Experimental::NetworkRigidbody2D::CmdChangeGravityScale(float_t  gravityScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"CmdChangeGravityScale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gravityScale);
}
inline void Mirror::Experimental::NetworkRigidbody2D::CmdSendDrag(float_t  drag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"CmdSendDrag", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, drag);
}
inline void Mirror::Experimental::NetworkRigidbody2D::CmdSendAngularDrag(float_t  angularDrag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"CmdSendAngularDrag", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, angularDrag);
}
inline void Mirror::Experimental::NetworkRigidbody2D::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkRigidbody2D::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Mirror::Experimental::NetworkRigidbody2D::get_Networkvelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"get_Networkvelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkRigidbody2D::set_Networkvelocity(::ByRefConst<::UnityEngine::Vector2>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"set_Networkvelocity", {}, {::i2c::type_of<::ByRefConst<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Mirror::Experimental::NetworkRigidbody2D::get_NetworkangularVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"get_NetworkangularVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkRigidbody2D::set_NetworkangularVelocity(::ByRefConst<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"set_NetworkangularVelocity", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Mirror::Experimental::NetworkRigidbody2D::get_NetworkisKinematic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"get_NetworkisKinematic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkRigidbody2D::set_NetworkisKinematic(::ByRefConst<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"set_NetworkisKinematic", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Mirror::Experimental::NetworkRigidbody2D::get_NetworkgravityScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"get_NetworkgravityScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkRigidbody2D::set_NetworkgravityScale(::ByRefConst<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"set_NetworkgravityScale", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Mirror::Experimental::NetworkRigidbody2D::get_Networkdrag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"get_Networkdrag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkRigidbody2D::set_Networkdrag(::ByRefConst<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"set_Networkdrag", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Mirror::Experimental::NetworkRigidbody2D::get_NetworkangularDrag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"get_NetworkangularDrag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Mirror::Experimental::NetworkRigidbody2D::set_NetworkangularDrag(::ByRefConst<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"set_NetworkangularDrag", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::Experimental::NetworkRigidbody2D::UserCode_CmdSendVelocity__Vector2(::UnityEngine::Vector2  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"UserCode_CmdSendVelocity__Vector2", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocity);
}
inline void Mirror::Experimental::NetworkRigidbody2D::InvokeUserCode_CmdSendVelocity__Vector2(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"InvokeUserCode_CmdSendVelocity__Vector2", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void Mirror::Experimental::NetworkRigidbody2D::UserCode_CmdSendVelocityAndAngular__Vector2__Single(::UnityEngine::Vector2  velocity, float_t  angularVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"UserCode_CmdSendVelocityAndAngular__Vector2__Single", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocity, angularVelocity);
}
inline void Mirror::Experimental::NetworkRigidbody2D::InvokeUserCode_CmdSendVelocityAndAngular__Vector2__Single(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"InvokeUserCode_CmdSendVelocityAndAngular__Vector2__Single", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void Mirror::Experimental::NetworkRigidbody2D::UserCode_CmdSendIsKinematic__Boolean(bool  isKinematic)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"UserCode_CmdSendIsKinematic__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isKinematic);
}
inline void Mirror::Experimental::NetworkRigidbody2D::InvokeUserCode_CmdSendIsKinematic__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"InvokeUserCode_CmdSendIsKinematic__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void Mirror::Experimental::NetworkRigidbody2D::UserCode_CmdChangeGravityScale__Single(float_t  gravityScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"UserCode_CmdChangeGravityScale__Single", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gravityScale);
}
inline void Mirror::Experimental::NetworkRigidbody2D::InvokeUserCode_CmdChangeGravityScale__Single(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"InvokeUserCode_CmdChangeGravityScale__Single", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void Mirror::Experimental::NetworkRigidbody2D::UserCode_CmdSendDrag__Single(float_t  drag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"UserCode_CmdSendDrag__Single", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, drag);
}
inline void Mirror::Experimental::NetworkRigidbody2D::InvokeUserCode_CmdSendDrag__Single(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"InvokeUserCode_CmdSendDrag__Single", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void Mirror::Experimental::NetworkRigidbody2D::UserCode_CmdSendAngularDrag__Single(float_t  angularDrag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"UserCode_CmdSendAngularDrag__Single", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, angularDrag);
}
inline void Mirror::Experimental::NetworkRigidbody2D::InvokeUserCode_CmdSendAngularDrag__Single(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(),
                        {"InvokeUserCode_CmdSendAngularDrag__Single", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void Mirror::Experimental::NetworkRigidbody2D::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void Mirror::Experimental::NetworkRigidbody2D::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Experimental::NetworkRigidbody2D*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::Mirror::Experimental::NetworkRigidbody2D* Mirror::Experimental::NetworkRigidbody2D::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Experimental::NetworkRigidbody2D*>());
}
// Ctor Parameters []
constexpr ::Mirror::Experimental::NetworkRigidbody2D::NetworkRigidbody2D()   {
}

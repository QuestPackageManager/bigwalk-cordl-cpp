#pragma once
// IWYU pragma private; include "UnityEngine/ModifiableContactPair.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__ModifiableContactPair_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__ModifiableContactPatch_def.hpp"
#include "UnityEngine/zzzz__ModifiableContact_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.ResolveShapeToInstanceID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::ModifiableContactPair::ResolveShapeToInstanceID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822fce00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                        {"ResolveShapeToInstanceID", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.ResolveActorToInstanceID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::ModifiableContactPair::ResolveActorToInstanceID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822fcdf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                        {"ResolveActorToInstanceID", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.get_colliderInstanceID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ModifiableContactPair::*)()>(&::UnityEngine::ModifiableContactPair::get_colliderInstanceID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822fd070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                        {"get_colliderInstanceID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.get_otherColliderInstanceID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ModifiableContactPair::*)()>(&::UnityEngine::ModifiableContactPair::get_otherColliderInstanceID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822fd0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                        {"get_otherColliderInstanceID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.get_bodyInstanceID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ModifiableContactPair::*)()>(&::UnityEngine::ModifiableContactPair::get_bodyInstanceID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822fd050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                        {"get_bodyInstanceID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.get_otherBodyInstanceID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ModifiableContactPair::*)()>(&::UnityEngine::ModifiableContactPair::get_otherBodyInstanceID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822fd090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                        {"get_otherBodyInstanceID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.get_contactCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ModifiableContactPair::*)()>(&::UnityEngine::ModifiableContactPair::get_contactCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                        {"get_contactCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.GetPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ModifiableContactPair::*)(int32_t)>(&::UnityEngine::ModifiableContactPair::GetPoint)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1822fcd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                        {"GetPoint", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.GetNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ModifiableContactPair::*)(int32_t)>(&::UnityEngine::ModifiableContactPair::GetNormal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1822fccd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                        {"GetNormal", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.SetTargetVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ModifiableContactPair::*)(int32_t, ::UnityEngine::Vector3)>(&::UnityEngine::ModifiableContactPair::SetTargetVelocity)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1822fcf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                        {"SetTargetVelocity", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.SetStaticFriction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ModifiableContactPair::*)(int32_t, float_t)>(&::UnityEngine::ModifiableContactPair::SetStaticFriction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1822fcec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                        {"SetStaticFriction", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.SetDynamicFriction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ModifiableContactPair::*)(int32_t, float_t)>(&::UnityEngine::ModifiableContactPair::SetDynamicFriction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1822fce10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                        {"SetDynamicFriction", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.GetContact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ModifiableContact* (::UnityEngine::ModifiableContactPair::*)(int32_t)>(&::UnityEngine::ModifiableContactPair::GetContact)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822fcc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                        {"GetContact", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.GetContactPatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ModifiableContactPatch* (::UnityEngine::ModifiableContactPair::*)()>(&::UnityEngine::ModifiableContactPair::GetContactPatch)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822fcc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                        {"GetContactPatch", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::ModifiableContactPair::ResolveShapeToInstanceID(::System::IntPtr  shapePtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                        {"ResolveShapeToInstanceID", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, shapePtr);
}
inline int32_t UnityEngine::ModifiableContactPair::ResolveActorToInstanceID(::System::IntPtr  actorPtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                        {"ResolveActorToInstanceID", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, actorPtr);
}
inline int32_t UnityEngine::ModifiableContactPair::get_colliderInstanceID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                        {"get_colliderInstanceID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::ModifiableContactPair::get_otherColliderInstanceID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                        {"get_otherColliderInstanceID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::ModifiableContactPair::get_bodyInstanceID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                        {"get_bodyInstanceID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::ModifiableContactPair::get_otherBodyInstanceID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                        {"get_otherBodyInstanceID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::ModifiableContactPair::get_contactCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                        {"get_contactCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::ModifiableContactPair::GetPoint(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                        {"GetPoint", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method, i);
}
inline ::UnityEngine::Vector3 UnityEngine::ModifiableContactPair::GetNormal(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                        {"GetNormal", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method, i);
}
inline void UnityEngine::ModifiableContactPair::SetTargetVelocity(int32_t  i, ::UnityEngine::Vector3  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                        {"SetTargetVelocity", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i, velocity);
}
inline void UnityEngine::ModifiableContactPair::SetStaticFriction(int32_t  i, float_t  staticFriction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                        {"SetStaticFriction", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i, staticFriction);
}
inline void UnityEngine::ModifiableContactPair::SetDynamicFriction(int32_t  i, float_t  dynamicFriction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                        {"SetDynamicFriction", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i, dynamicFriction);
}
inline ::UnityEngine::ModifiableContact* UnityEngine::ModifiableContactPair::GetContact(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                        {"GetContact", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ModifiableContact*>(*this, ___internal_method, index);
}
inline ::UnityEngine::ModifiableContactPatch* UnityEngine::ModifiableContactPair::GetContactPatch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                        {"GetContactPatch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ModifiableContactPatch*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "actor", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "otherActor", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "shape", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "otherShape", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "otherRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "otherPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "numContacts", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "contacts", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ModifiableContactPair::ModifiableContactPair(::System::IntPtr  actor, ::System::IntPtr  otherActor, ::System::IntPtr  shape, ::System::IntPtr  otherShape, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  otherRotation, ::UnityEngine::Vector3  otherPosition, int32_t  numContacts, ::System::IntPtr  contacts) noexcept  {
this->actor = actor;
this->otherActor = otherActor;
this->shape = shape;
this->otherShape = otherShape;
this->rotation = rotation;
this->position = position;
this->otherRotation = otherRotation;
this->otherPosition = otherPosition;
this->numContacts = numContacts;
this->contacts = contacts;
}
// Ctor Parameters []
constexpr ::UnityEngine::ModifiableContactPair::ModifiableContactPair()   {
}

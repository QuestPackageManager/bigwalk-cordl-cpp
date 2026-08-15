#pragma once
// IWYU pragma private; include "UnityEngine/RaycastHit.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::RaycastHit.get_collider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (::UnityEngine::RaycastHit::*)()>(&::UnityEngine::RaycastHit::get_collider)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182302c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"get_collider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RaycastHit.get_colliderEntityId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EntityId (::UnityEngine::RaycastHit::*)()>(&::UnityEngine::RaycastHit::get_colliderEntityId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"get_colliderEntityId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RaycastHit.get_point
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::RaycastHit::*)()>(&::UnityEngine::RaycastHit::get_point)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802d5330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"get_point", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RaycastHit.get_normal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::RaycastHit::*)()>(&::UnityEngine::RaycastHit::get_normal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802d5350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"get_normal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RaycastHit.get_distance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::RaycastHit::*)()>(&::UnityEngine::RaycastHit::get_distance)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f80a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"get_distance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RaycastHit.get_transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::RaycastHit::*)()>(&::UnityEngine::RaycastHit::get_transform)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x182302dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"get_transform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RaycastHit.get_rigidbody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rigidbody> (::UnityEngine::RaycastHit::*)()>(&::UnityEngine::RaycastHit::get_rigidbody)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x182302cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"get_rigidbody", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Collider> UnityEngine::RaycastHit::get_collider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"get_collider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(*this, ___internal_method);
}
inline ::UnityEngine::EntityId UnityEngine::RaycastHit::get_colliderEntityId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"get_colliderEntityId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EntityId>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::RaycastHit::get_point()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"get_point", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::RaycastHit::get_normal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"get_normal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline float_t UnityEngine::RaycastHit::get_distance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"get_distance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::RaycastHit::get_transform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"get_transform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rigidbody> UnityEngine::RaycastHit::get_rigidbody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"get_rigidbody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rigidbody>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Point", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FaceID", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Distance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UV", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Collider", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::RaycastHit::RaycastHit(::UnityEngine::Vector3  m_Point, ::UnityEngine::Vector3  m_Normal, uint32_t  m_FaceID, float_t  m_Distance, ::UnityEngine::Vector2  m_UV, ::UnityEngine::EntityId  m_Collider) noexcept  {
this->m_Point = m_Point;
this->m_Normal = m_Normal;
this->m_FaceID = m_FaceID;
this->m_Distance = m_Distance;
this->m_UV = m_UV;
this->m_Collider = m_Collider;
}
// Ctor Parameters []
constexpr ::UnityEngine::RaycastHit::RaycastHit()   {
}

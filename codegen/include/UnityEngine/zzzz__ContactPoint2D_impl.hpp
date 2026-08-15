#pragma once
// IWYU pragma private; include "UnityEngine/ContactPoint2D.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__ContactPoint2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::ContactPoint2D.get_normal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::ContactPoint2D::*)()>(&::UnityEngine::ContactPoint2D::get_normal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ContactPoint2D>(),
                        {"get_normal", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector2 UnityEngine::ContactPoint2D::get_normal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ContactPoint2D>(),
                        {"get_normal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Point", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Normal", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RelativeVelocity", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Friction", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Bounciness", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Separation", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NormalImpulse", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TangentImpulse", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Collider", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OtherCollider", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Rigidbody", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OtherRigidbody", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Enabled", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ContactPoint2D::ContactPoint2D(::UnityEngine::Vector2  m_Point, ::UnityEngine::Vector2  m_Normal, ::UnityEngine::Vector2  m_RelativeVelocity, float_t  m_Friction, float_t  m_Bounciness, float_t  m_Separation, float_t  m_NormalImpulse, float_t  m_TangentImpulse, ::UnityEngine::EntityId  m_Collider, ::UnityEngine::EntityId  m_OtherCollider, ::UnityEngine::EntityId  m_Rigidbody, ::UnityEngine::EntityId  m_OtherRigidbody, int32_t  m_Enabled) noexcept  {
this->m_Point = m_Point;
this->m_Normal = m_Normal;
this->m_RelativeVelocity = m_RelativeVelocity;
this->m_Friction = m_Friction;
this->m_Bounciness = m_Bounciness;
this->m_Separation = m_Separation;
this->m_NormalImpulse = m_NormalImpulse;
this->m_TangentImpulse = m_TangentImpulse;
this->m_Collider = m_Collider;
this->m_OtherCollider = m_OtherCollider;
this->m_Rigidbody = m_Rigidbody;
this->m_OtherRigidbody = m_OtherRigidbody;
this->m_Enabled = m_Enabled;
}
// Ctor Parameters []
constexpr ::UnityEngine::ContactPoint2D::ContactPoint2D()   {
}

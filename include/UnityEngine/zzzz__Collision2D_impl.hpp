#pragma once
// IWYU pragma private; include "UnityEngine/Collision2D.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ContactPoint2D_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Collision2D_def.hpp"
#include "UnityEngine/zzzz__Collider2D_def.hpp"
#include "UnityEngine/zzzz__Rigidbody2D_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Collision2D.get_collider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider2D> (::UnityEngine::Collision2D::*)()>(&::UnityEngine::Collision2D::get_collider)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1822f0b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Collision2D*>(),
                        {"get_collider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision2D.get_rigidbody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rigidbody2D> (::UnityEngine::Collision2D::*)()>(&::UnityEngine::Collision2D::get_rigidbody)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1822f0bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Collision2D*>(),
                        {"get_rigidbody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision2D.get_transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::Collision2D::*)()>(&::UnityEngine::Collision2D::get_transform)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x1822f0c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Collision2D*>(),
                        {"get_transform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision2D.get_relativeVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Collision2D::*)()>(&::UnityEngine::Collision2D::get_relativeVelocity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Collision2D*>(),
                        {"get_relativeVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Collision2D::__cordl_internal_get_m_Collider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Collider;
}
constexpr int32_t const& UnityEngine::Collision2D::__cordl_internal_get_m_Collider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Collider;
}
constexpr void UnityEngine::Collision2D::__cordl_internal_set_m_Collider(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Collider = value;
}
constexpr int32_t& UnityEngine::Collision2D::__cordl_internal_get_m_OtherCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OtherCollider;
}
constexpr int32_t const& UnityEngine::Collision2D::__cordl_internal_get_m_OtherCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OtherCollider;
}
constexpr void UnityEngine::Collision2D::__cordl_internal_set_m_OtherCollider(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OtherCollider = value;
}
constexpr int32_t& UnityEngine::Collision2D::__cordl_internal_get_m_Rigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Rigidbody;
}
constexpr int32_t const& UnityEngine::Collision2D::__cordl_internal_get_m_Rigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Rigidbody;
}
constexpr void UnityEngine::Collision2D::__cordl_internal_set_m_Rigidbody(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Rigidbody = value;
}
constexpr int32_t& UnityEngine::Collision2D::__cordl_internal_get_m_OtherRigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OtherRigidbody;
}
constexpr int32_t const& UnityEngine::Collision2D::__cordl_internal_get_m_OtherRigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OtherRigidbody;
}
constexpr void UnityEngine::Collision2D::__cordl_internal_set_m_OtherRigidbody(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OtherRigidbody = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::Collision2D::__cordl_internal_get_m_RelativeVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RelativeVelocity;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::Collision2D::__cordl_internal_get_m_RelativeVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RelativeVelocity;
}
constexpr void UnityEngine::Collision2D::__cordl_internal_set_m_RelativeVelocity(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RelativeVelocity = value;
}
constexpr int32_t& UnityEngine::Collision2D::__cordl_internal_get_m_Enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Enabled;
}
constexpr int32_t const& UnityEngine::Collision2D::__cordl_internal_get_m_Enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Enabled;
}
constexpr void UnityEngine::Collision2D::__cordl_internal_set_m_Enabled(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Enabled = value;
}
constexpr int32_t& UnityEngine::Collision2D::__cordl_internal_get_m_ContactCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ContactCount;
}
constexpr int32_t const& UnityEngine::Collision2D::__cordl_internal_get_m_ContactCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ContactCount;
}
constexpr void UnityEngine::Collision2D::__cordl_internal_set_m_ContactCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ContactCount = value;
}
constexpr ::ArrayW<::UnityEngine::ContactPoint2D>& UnityEngine::Collision2D::__cordl_internal_get_m_ReusedContacts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReusedContacts;
}
constexpr ::ArrayW<::UnityEngine::ContactPoint2D> const& UnityEngine::Collision2D::__cordl_internal_get_m_ReusedContacts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReusedContacts;
}
constexpr void UnityEngine::Collision2D::__cordl_internal_set_m_ReusedContacts(::ArrayW<::UnityEngine::ContactPoint2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ReusedContacts = value;
}
constexpr ::ArrayW<::UnityEngine::ContactPoint2D>& UnityEngine::Collision2D::__cordl_internal_get_m_LegacyContacts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyContacts;
}
constexpr ::ArrayW<::UnityEngine::ContactPoint2D> const& UnityEngine::Collision2D::__cordl_internal_get_m_LegacyContacts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyContacts;
}
constexpr void UnityEngine::Collision2D::__cordl_internal_set_m_LegacyContacts(::ArrayW<::UnityEngine::ContactPoint2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LegacyContacts = value;
}
inline ::UnityW<::UnityEngine::Collider2D> UnityEngine::Collision2D::get_collider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Collision2D*>(),
                        {"get_collider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider2D>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rigidbody2D> UnityEngine::Collision2D::get_rigidbody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Collision2D*>(),
                        {"get_rigidbody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rigidbody2D>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::Collision2D::get_transform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Collision2D*>(),
                        {"get_transform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::Collision2D::get_relativeVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Collision2D*>(),
                        {"get_relativeVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Collision2D::Collision2D()   {
}

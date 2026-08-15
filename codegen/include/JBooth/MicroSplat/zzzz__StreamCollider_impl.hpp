#pragma once
// IWYU pragma private; include "JBooth/MicroSplat/StreamCollider.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "JBooth/MicroSplat/zzzz__StreamCollider_def.hpp"
#include "JBooth/MicroSplat/zzzz__StreamCollider_def.hpp"
#include "JBooth/MicroSplat/zzzz__StreamManager_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroSplat::StreamCollider_ColliderType::StreamCollider_ColliderType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroSplat::StreamCollider_ColliderType::StreamCollider_ColliderType()   {
}
constexpr ::JBooth::MicroSplat::StreamCollider_ColliderType  JBooth::MicroSplat::StreamCollider_ColliderType::Water{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroSplat::StreamCollider_ColliderType  JBooth::MicroSplat::StreamCollider_ColliderType::Lava{static_cast<int32_t>(0x1)};
constexpr ::JBooth::MicroSplat::StreamCollider_ColliderType  JBooth::MicroSplat::StreamCollider_ColliderType::Both{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::JBooth::MicroSplat::StreamCollider.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::StreamCollider::*)()>(&::JBooth::MicroSplat::StreamCollider::OnDrawGizmos)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181402fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::StreamCollider*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::StreamCollider.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::StreamCollider::*)()>(&::JBooth::MicroSplat::StreamCollider::OnEnable)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x181403050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::StreamCollider*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::StreamCollider.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::StreamCollider::*)()>(&::JBooth::MicroSplat::StreamCollider::OnDisable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181402f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::StreamCollider*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::StreamCollider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::StreamCollider::*)()>(&::JBooth::MicroSplat::StreamCollider::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181403290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::StreamCollider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::JBooth::MicroSplat::StreamManager>& JBooth::MicroSplat::StreamCollider::__cordl_internal_get_streamMgr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___streamMgr;
}
constexpr ::UnityW<::JBooth::MicroSplat::StreamManager> const& JBooth::MicroSplat::StreamCollider::__cordl_internal_get_streamMgr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___streamMgr;
}
constexpr void JBooth::MicroSplat::StreamCollider::__cordl_internal_set_streamMgr(::UnityW<::JBooth::MicroSplat::StreamManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___streamMgr = value;
}
constexpr ::JBooth::MicroSplat::StreamCollider_ColliderType& JBooth::MicroSplat::StreamCollider::__cordl_internal_get_colliderType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderType;
}
constexpr ::JBooth::MicroSplat::StreamCollider_ColliderType const& JBooth::MicroSplat::StreamCollider::__cordl_internal_get_colliderType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderType;
}
constexpr void JBooth::MicroSplat::StreamCollider::__cordl_internal_set_colliderType(::JBooth::MicroSplat::StreamCollider_ColliderType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliderType = value;
}
inline void JBooth::MicroSplat::StreamCollider::OnDrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::StreamCollider*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroSplat::StreamCollider::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::StreamCollider*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroSplat::StreamCollider::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::StreamCollider*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroSplat::StreamCollider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::StreamCollider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroSplat::StreamCollider* JBooth::MicroSplat::StreamCollider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroSplat::StreamCollider*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroSplat::StreamCollider::StreamCollider()   {
}

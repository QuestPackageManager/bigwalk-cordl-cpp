#pragma once
// IWYU pragma private; include "Rowlan/UnityStandardAssets/Cameras/AbstractTargetFollower.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Rowlan/UnityStandardAssets/Cameras/zzzz__AbstractTargetFollower_def.hpp"
#include "Rowlan/UnityStandardAssets/Cameras/zzzz__AbstractTargetFollower_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower_UpdateType::AbstractTargetFollower_UpdateType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower_UpdateType::AbstractTargetFollower_UpdateType()   {
}
constexpr ::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower_UpdateType  Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower_UpdateType::FixedUpdate{static_cast<int32_t>(0x0)};
constexpr ::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower_UpdateType  Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower_UpdateType::LateUpdate{static_cast<int32_t>(0x1)};
constexpr ::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower_UpdateType  Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower_UpdateType::ManualUpdate{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::*)()>(&::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::Start)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181abd050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower*>(),
                    {::i2c::class_of<::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::*)()>(&::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::FixedUpdate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181abcea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::*)()>(&::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::LateUpdate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181abcf30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower.ManualUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::*)()>(&::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::ManualUpdate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181abcfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower*>(),
                        {"ManualUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower.FollowTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::*)(float_t)>(&::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::FollowTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower*>(),
                    {::i2c::class_of<::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower.FindAndTargetPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::*)()>(&::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::FindAndTargetPlayer)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181abce30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower*>(),
                        {"FindAndTargetPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower.SetTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::*)(::UnityEngine::Transform*)>(&::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::SetTarget)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower*>(),
                    {::i2c::class_of<::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower.get_Target
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::*)()>(&::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::get_Target)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower*>(),
                        {"get_Target", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::*)()>(&::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18195f2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::__cordl_internal_get_m_Target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::__cordl_internal_get_m_Target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Target;
}
constexpr void Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::__cordl_internal_set_m_Target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Target = value;
}
constexpr bool& Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::__cordl_internal_get_m_AutoTargetPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutoTargetPlayer;
}
constexpr bool const& Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::__cordl_internal_get_m_AutoTargetPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutoTargetPlayer;
}
constexpr void Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::__cordl_internal_set_m_AutoTargetPlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AutoTargetPlayer = value;
}
constexpr ::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower_UpdateType& Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::__cordl_internal_get_m_UpdateType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdateType;
}
constexpr ::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower_UpdateType const& Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::__cordl_internal_get_m_UpdateType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdateType;
}
constexpr void Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::__cordl_internal_set_m_UpdateType(::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower_UpdateType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UpdateType = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::__cordl_internal_get_targetRigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::__cordl_internal_get_targetRigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRigidbody;
}
constexpr void Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::__cordl_internal_set_targetRigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetRigidbody = value;
}
inline void Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::ManualUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower*>(),
                        {"ManualUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::FollowTarget(float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::FindAndTargetPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower*>(),
                        {"FindAndTargetPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::SetTarget(::UnityEngine::Transform*  newTransform)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newTransform);
}
inline ::UnityW<::UnityEngine::Transform> Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::get_Target()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower*>(),
                        {"get_Target", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower* Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower*>());
}
// Ctor Parameters []
constexpr ::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower::AbstractTargetFollower()   {
}

#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleAdditiveScenes/Reward.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "Mirror/Examples/MultipleAdditiveScenes/zzzz__Reward_def.hpp"
#include "Mirror/Examples/MultipleAdditiveScenes/zzzz__RandomColor_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::MultipleAdditiveScenes::Reward.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleAdditiveScenes::Reward::*)()>(&::Mirror::Examples::MultipleAdditiveScenes::Reward::OnValidate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1815631d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::Reward*>(),
                    {::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::Reward*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleAdditiveScenes::Reward.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleAdditiveScenes::Reward::*)(::UnityEngine::Collider*)>(&::Mirror::Examples::MultipleAdditiveScenes::Reward::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181562e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::Reward*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleAdditiveScenes::Reward.ClaimPrize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleAdditiveScenes::Reward::*)(::UnityEngine::GameObject*)>(&::Mirror::Examples::MultipleAdditiveScenes::Reward::ClaimPrize)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181562cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::Reward*>(),
                        {"ClaimPrize", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleAdditiveScenes::Reward._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleAdditiveScenes::Reward::*)()>(&::Mirror::Examples::MultipleAdditiveScenes::Reward::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181525bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::Reward*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleAdditiveScenes::Reward.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleAdditiveScenes::Reward::*)()>(&::Mirror::Examples::MultipleAdditiveScenes::Reward::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::Reward*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Mirror::Examples::MultipleAdditiveScenes::Reward::__cordl_internal_get_available()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___available;
}
constexpr bool const& Mirror::Examples::MultipleAdditiveScenes::Reward::__cordl_internal_get_available() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___available;
}
constexpr void Mirror::Examples::MultipleAdditiveScenes::Reward::__cordl_internal_set_available(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___available = value;
}
constexpr ::UnityW<::Mirror::Examples::MultipleAdditiveScenes::RandomColor>& Mirror::Examples::MultipleAdditiveScenes::Reward::__cordl_internal_get_randomColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomColor;
}
constexpr ::UnityW<::Mirror::Examples::MultipleAdditiveScenes::RandomColor> const& Mirror::Examples::MultipleAdditiveScenes::Reward::__cordl_internal_get_randomColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomColor;
}
constexpr void Mirror::Examples::MultipleAdditiveScenes::Reward::__cordl_internal_set_randomColor(::UnityW<::Mirror::Examples::MultipleAdditiveScenes::RandomColor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomColor = value;
}
inline void Mirror::Examples::MultipleAdditiveScenes::Reward::OnValidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::Reward*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleAdditiveScenes::Reward::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::Reward*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Mirror::Examples::MultipleAdditiveScenes::Reward::ClaimPrize(::UnityEngine::GameObject*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::Reward*>(),
                        {"ClaimPrize", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void Mirror::Examples::MultipleAdditiveScenes::Reward::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::Reward*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleAdditiveScenes::Reward::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::Reward*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Examples::MultipleAdditiveScenes::Reward* Mirror::Examples::MultipleAdditiveScenes::Reward::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::MultipleAdditiveScenes::Reward*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::MultipleAdditiveScenes::Reward::Reward()   {
}

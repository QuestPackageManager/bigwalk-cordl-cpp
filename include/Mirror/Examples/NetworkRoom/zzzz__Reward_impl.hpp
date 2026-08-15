#pragma once
// IWYU pragma private; include "Mirror/Examples/NetworkRoom/Reward.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "Mirror/Examples/NetworkRoom/zzzz__Reward_def.hpp"
#include "Mirror/Examples/NetworkRoom/zzzz__RandomColor_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::NetworkRoom::Reward.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::NetworkRoom::Reward::*)()>(&::Mirror::Examples::NetworkRoom::Reward::OnValidate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181563180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::NetworkRoom::Reward*>(),
                    {::i2c::class_of<::Mirror::Examples::NetworkRoom::Reward*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::NetworkRoom::Reward.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::NetworkRoom::Reward::*)(::UnityEngine::Collider*)>(&::Mirror::Examples::NetworkRoom::Reward::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181562fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::Reward*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::NetworkRoom::Reward.ClaimPrize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::NetworkRoom::Reward::*)(::UnityEngine::GameObject*)>(&::Mirror::Examples::NetworkRoom::Reward::ClaimPrize)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181562b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::Reward*>(),
                        {"ClaimPrize", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::NetworkRoom::Reward._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::NetworkRoom::Reward::*)()>(&::Mirror::Examples::NetworkRoom::Reward::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181525bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::Reward*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::NetworkRoom::Reward.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::NetworkRoom::Reward::*)()>(&::Mirror::Examples::NetworkRoom::Reward::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::Reward*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Mirror::Examples::NetworkRoom::Reward::__cordl_internal_get_available()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___available;
}
constexpr bool const& Mirror::Examples::NetworkRoom::Reward::__cordl_internal_get_available() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___available;
}
constexpr void Mirror::Examples::NetworkRoom::Reward::__cordl_internal_set_available(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___available = value;
}
constexpr ::UnityW<::Mirror::Examples::NetworkRoom::RandomColor>& Mirror::Examples::NetworkRoom::Reward::__cordl_internal_get_randomColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomColor;
}
constexpr ::UnityW<::Mirror::Examples::NetworkRoom::RandomColor> const& Mirror::Examples::NetworkRoom::Reward::__cordl_internal_get_randomColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomColor;
}
constexpr void Mirror::Examples::NetworkRoom::Reward::__cordl_internal_set_randomColor(::UnityW<::Mirror::Examples::NetworkRoom::RandomColor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomColor = value;
}
inline void Mirror::Examples::NetworkRoom::Reward::OnValidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::NetworkRoom::Reward*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::NetworkRoom::Reward::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::Reward*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Mirror::Examples::NetworkRoom::Reward::ClaimPrize(::UnityEngine::GameObject*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::Reward*>(),
                        {"ClaimPrize", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void Mirror::Examples::NetworkRoom::Reward::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::Reward*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::NetworkRoom::Reward::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::Reward*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Examples::NetworkRoom::Reward* Mirror::Examples::NetworkRoom::Reward::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::NetworkRoom::Reward*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::NetworkRoom::Reward::Reward()   {
}

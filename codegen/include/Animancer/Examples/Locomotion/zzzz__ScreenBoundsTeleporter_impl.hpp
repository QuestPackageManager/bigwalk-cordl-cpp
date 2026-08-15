#pragma once
// IWYU pragma private; include "Animancer/Examples/Locomotion/ScreenBoundsTeleporter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/Locomotion/zzzz__ScreenBoundsTeleporter_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::Locomotion::ScreenBoundsTeleporter.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Locomotion::ScreenBoundsTeleporter::*)()>(&::Animancer::Examples::Locomotion::ScreenBoundsTeleporter::Update)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180301130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::ScreenBoundsTeleporter*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Locomotion::ScreenBoundsTeleporter.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Locomotion::ScreenBoundsTeleporter::*)(::UnityEngine::Collider*)>(&::Animancer::Examples::Locomotion::ScreenBoundsTeleporter::OnTriggerExit)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180301060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::ScreenBoundsTeleporter*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Locomotion::ScreenBoundsTeleporter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Locomotion::ScreenBoundsTeleporter::*)()>(&::Animancer::Examples::Locomotion::ScreenBoundsTeleporter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::ScreenBoundsTeleporter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::BoxCollider>& Animancer::Examples::Locomotion::ScreenBoundsTeleporter::__cordl_internal_get__Collider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Collider;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& Animancer::Examples::Locomotion::ScreenBoundsTeleporter::__cordl_internal_get__Collider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Collider;
}
constexpr void Animancer::Examples::Locomotion::ScreenBoundsTeleporter::__cordl_internal_set__Collider(::UnityW<::UnityEngine::BoxCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Collider = value;
}
inline void Animancer::Examples::Locomotion::ScreenBoundsTeleporter::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::ScreenBoundsTeleporter*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Locomotion::ScreenBoundsTeleporter::OnTriggerExit(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::ScreenBoundsTeleporter*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void Animancer::Examples::Locomotion::ScreenBoundsTeleporter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::ScreenBoundsTeleporter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::Locomotion::ScreenBoundsTeleporter* Animancer::Examples::Locomotion::ScreenBoundsTeleporter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::Locomotion::ScreenBoundsTeleporter*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::Locomotion::ScreenBoundsTeleporter::ScreenBoundsTeleporter()   {
}

#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ManagedGameObject.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__ManagedGameObject_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::ManagedGameObject.get_Owner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::WaveHarmonic::Crest::ManagedGameObject::*)()>(&::WaveHarmonic::Crest::ManagedGameObject::get_Owner)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ManagedGameObject*>(),
                        {"get_Owner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ManagedGameObject.set_Owner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ManagedGameObject::*)(::UnityEngine::Component*)>(&::WaveHarmonic::Crest::ManagedGameObject::set_Owner)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ManagedGameObject*>(),
                        {"set_Owner", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ManagedGameObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ManagedGameObject::*)()>(&::WaveHarmonic::Crest::ManagedGameObject::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ManagedGameObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Component>& WaveHarmonic::Crest::ManagedGameObject::__cordl_internal_get__Owner_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Owner_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Component> const& WaveHarmonic::Crest::ManagedGameObject::__cordl_internal_get__Owner_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Owner_k__BackingField;
}
constexpr void WaveHarmonic::Crest::ManagedGameObject::__cordl_internal_set__Owner_k__BackingField(::UnityW<::UnityEngine::Component>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Owner_k__BackingField = value;
}
inline ::UnityW<::UnityEngine::Component> WaveHarmonic::Crest::ManagedGameObject::get_Owner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ManagedGameObject*>(),
                        {"get_Owner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ManagedGameObject::set_Owner(::UnityEngine::Component*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ManagedGameObject*>(),
                        {"set_Owner", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WaveHarmonic::Crest::ManagedGameObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ManagedGameObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::ManagedGameObject* WaveHarmonic::Crest::ManagedGameObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::ManagedGameObject*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::ManagedGameObject::ManagedGameObject()   {
}

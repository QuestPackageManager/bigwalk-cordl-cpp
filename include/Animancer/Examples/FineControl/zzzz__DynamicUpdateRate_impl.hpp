#pragma once
// IWYU pragma private; include "Animancer/Examples/FineControl/DynamicUpdateRate.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/FineControl/zzzz__DynamicUpdateRate_def.hpp"
#include "Animancer/Examples/FineControl/zzzz__LowUpdateRate_def.hpp"
#include "UnityEngine/zzzz__TextMesh_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::FineControl::DynamicUpdateRate.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::FineControl::DynamicUpdateRate::*)()>(&::Animancer::Examples::FineControl::DynamicUpdateRate::Awake)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802faa50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::DynamicUpdateRate*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::FineControl::DynamicUpdateRate.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::FineControl::DynamicUpdateRate::*)()>(&::Animancer::Examples::FineControl::DynamicUpdateRate::Update)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1802faa90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::DynamicUpdateRate*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::FineControl::DynamicUpdateRate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::FineControl::DynamicUpdateRate::*)()>(&::Animancer::Examples::FineControl::DynamicUpdateRate::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802fabf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::DynamicUpdateRate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::Examples::FineControl::LowUpdateRate>& Animancer::Examples::FineControl::DynamicUpdateRate::__cordl_internal_get__LowUpdateRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LowUpdateRate;
}
constexpr ::UnityW<::Animancer::Examples::FineControl::LowUpdateRate> const& Animancer::Examples::FineControl::DynamicUpdateRate::__cordl_internal_get__LowUpdateRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LowUpdateRate;
}
constexpr void Animancer::Examples::FineControl::DynamicUpdateRate::__cordl_internal_set__LowUpdateRate(::UnityW<::Animancer::Examples::FineControl::LowUpdateRate>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LowUpdateRate = value;
}
constexpr ::UnityW<::UnityEngine::TextMesh>& Animancer::Examples::FineControl::DynamicUpdateRate::__cordl_internal_get__TextMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TextMesh;
}
constexpr ::UnityW<::UnityEngine::TextMesh> const& Animancer::Examples::FineControl::DynamicUpdateRate::__cordl_internal_get__TextMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TextMesh;
}
constexpr void Animancer::Examples::FineControl::DynamicUpdateRate::__cordl_internal_set__TextMesh(::UnityW<::UnityEngine::TextMesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TextMesh = value;
}
constexpr float_t& Animancer::Examples::FineControl::DynamicUpdateRate::__cordl_internal_get__SlowUpdateDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SlowUpdateDistance;
}
constexpr float_t const& Animancer::Examples::FineControl::DynamicUpdateRate::__cordl_internal_get__SlowUpdateDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SlowUpdateDistance;
}
constexpr void Animancer::Examples::FineControl::DynamicUpdateRate::__cordl_internal_set__SlowUpdateDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SlowUpdateDistance = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Animancer::Examples::FineControl::DynamicUpdateRate::__cordl_internal_get__Camera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Camera;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Animancer::Examples::FineControl::DynamicUpdateRate::__cordl_internal_get__Camera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Camera;
}
constexpr void Animancer::Examples::FineControl::DynamicUpdateRate::__cordl_internal_set__Camera(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Camera = value;
}
inline void Animancer::Examples::FineControl::DynamicUpdateRate::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::DynamicUpdateRate*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::FineControl::DynamicUpdateRate::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::DynamicUpdateRate*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::FineControl::DynamicUpdateRate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::DynamicUpdateRate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::FineControl::DynamicUpdateRate* Animancer::Examples::FineControl::DynamicUpdateRate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::FineControl::DynamicUpdateRate*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::FineControl::DynamicUpdateRate::DynamicUpdateRate()   {
}

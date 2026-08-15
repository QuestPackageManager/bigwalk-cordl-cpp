#pragma once
// IWYU pragma private; include "Animancer/Examples/FineControl/LowUpdateRate.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/FineControl/zzzz__LowUpdateRate_def.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::FineControl::LowUpdateRate.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::FineControl::LowUpdateRate::*)()>(&::Animancer::Examples::FineControl::LowUpdateRate::OnEnable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802fe960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::LowUpdateRate*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::FineControl::LowUpdateRate.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::FineControl::LowUpdateRate::*)()>(&::Animancer::Examples::FineControl::LowUpdateRate::OnDisable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802fe900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::LowUpdateRate*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::FineControl::LowUpdateRate.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::FineControl::LowUpdateRate::*)()>(&::Animancer::Examples::FineControl::LowUpdateRate::Update)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802fe9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::LowUpdateRate*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::FineControl::LowUpdateRate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::FineControl::LowUpdateRate::*)()>(&::Animancer::Examples::FineControl::LowUpdateRate::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802fea00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::LowUpdateRate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::AnimancerComponent>& Animancer::Examples::FineControl::LowUpdateRate::__cordl_internal_get__Animancer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr ::UnityW<::Animancer::AnimancerComponent> const& Animancer::Examples::FineControl::LowUpdateRate::__cordl_internal_get__Animancer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr void Animancer::Examples::FineControl::LowUpdateRate::__cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animancer = value;
}
constexpr float_t& Animancer::Examples::FineControl::LowUpdateRate::__cordl_internal_get__UpdatesPerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpdatesPerSecond;
}
constexpr float_t const& Animancer::Examples::FineControl::LowUpdateRate::__cordl_internal_get__UpdatesPerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpdatesPerSecond;
}
constexpr void Animancer::Examples::FineControl::LowUpdateRate::__cordl_internal_set__UpdatesPerSecond(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UpdatesPerSecond = value;
}
constexpr float_t& Animancer::Examples::FineControl::LowUpdateRate::__cordl_internal_get__LastUpdateTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastUpdateTime;
}
constexpr float_t const& Animancer::Examples::FineControl::LowUpdateRate::__cordl_internal_get__LastUpdateTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastUpdateTime;
}
constexpr void Animancer::Examples::FineControl::LowUpdateRate::__cordl_internal_set__LastUpdateTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastUpdateTime = value;
}
inline void Animancer::Examples::FineControl::LowUpdateRate::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::LowUpdateRate*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::FineControl::LowUpdateRate::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::LowUpdateRate*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::FineControl::LowUpdateRate::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::LowUpdateRate*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::FineControl::LowUpdateRate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::LowUpdateRate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::FineControl::LowUpdateRate* Animancer::Examples::FineControl::LowUpdateRate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::FineControl::LowUpdateRate*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::FineControl::LowUpdateRate::LowUpdateRate()   {
}

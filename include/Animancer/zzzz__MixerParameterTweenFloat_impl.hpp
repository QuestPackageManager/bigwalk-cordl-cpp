#pragma once
// IWYU pragma private; include "Animancer/MixerParameterTweenFloat.hpp"
#include "Animancer/zzzz__MixerParameterTween_1_impl.hpp"
#include "Animancer/zzzz__MixerParameterTweenFloat_def.hpp"
#include "Animancer/zzzz__MixerState_1_def.hpp"
//  Writing Method size for method: ::Animancer::MixerParameterTweenFloat._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::MixerParameterTweenFloat::*)()>(&::Animancer::MixerParameterTweenFloat::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180311b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerParameterTweenFloat*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::MixerParameterTweenFloat._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::MixerParameterTweenFloat::*)(::Animancer::MixerState_1<float_t>*)>(&::Animancer::MixerParameterTweenFloat::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180311b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerParameterTweenFloat*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::MixerState_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::MixerParameterTweenFloat.CalculateCurrentValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::MixerParameterTweenFloat::*)()>(&::Animancer::MixerParameterTweenFloat::CalculateCurrentValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180311ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::MixerParameterTweenFloat*>(),
                    {::i2c::class_of<::Animancer::MixerParameterTweenFloat*>(), 6}
                ));
    return ___internal_method;
  }
};
inline void Animancer::MixerParameterTweenFloat::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerParameterTweenFloat*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::MixerParameterTweenFloat::_ctor(::Animancer::MixerState_1<float_t>*  mixer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerParameterTweenFloat*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::MixerState_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mixer);
}
inline float_t Animancer::MixerParameterTweenFloat::CalculateCurrentValue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::MixerParameterTweenFloat*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Animancer::MixerParameterTweenFloat* Animancer::MixerParameterTweenFloat::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::MixerParameterTweenFloat*>());
}
inline ::Animancer::MixerParameterTweenFloat* Animancer::MixerParameterTweenFloat::New_ctor(::Animancer::MixerState_1<float_t>*  mixer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::MixerParameterTweenFloat*>(mixer));
}
// Ctor Parameters []
constexpr ::Animancer::MixerParameterTweenFloat::MixerParameterTweenFloat()   {
}

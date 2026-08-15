#pragma once
// IWYU pragma private; include "Animancer/MixerParameterTweenVector2.hpp"
#include "Animancer/zzzz__MixerParameterTween_1_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Animancer/zzzz__MixerParameterTweenVector2_def.hpp"
#include "Animancer/zzzz__MixerState_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Animancer::MixerParameterTweenVector2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::MixerParameterTweenVector2::*)()>(&::Animancer::MixerParameterTweenVector2::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180311b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerParameterTweenVector2*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::MixerParameterTweenVector2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::MixerParameterTweenVector2::*)(::Animancer::MixerState_1<::UnityEngine::Vector2>*)>(&::Animancer::MixerParameterTweenVector2::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180311b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerParameterTweenVector2*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::MixerState_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::MixerParameterTweenVector2.CalculateCurrentValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Animancer::MixerParameterTweenVector2::*)()>(&::Animancer::MixerParameterTweenVector2::CalculateCurrentValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180311b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::MixerParameterTweenVector2*>(),
                    {::i2c::class_of<::Animancer::MixerParameterTweenVector2*>(), 6}
                ));
    return ___internal_method;
  }
};
inline void Animancer::MixerParameterTweenVector2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerParameterTweenVector2*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::MixerParameterTweenVector2::_ctor(::Animancer::MixerState_1<::UnityEngine::Vector2>*  mixer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerParameterTweenVector2*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::MixerState_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mixer);
}
inline ::UnityEngine::Vector2 Animancer::MixerParameterTweenVector2::CalculateCurrentValue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::MixerParameterTweenVector2*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::Animancer::MixerParameterTweenVector2* Animancer::MixerParameterTweenVector2::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::MixerParameterTweenVector2*>());
}
inline ::Animancer::MixerParameterTweenVector2* Animancer::MixerParameterTweenVector2::New_ctor(::Animancer::MixerState_1<::UnityEngine::Vector2>*  mixer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::MixerParameterTweenVector2*>(mixer));
}
// Ctor Parameters []
constexpr ::Animancer::MixerParameterTweenVector2::MixerParameterTweenVector2()   {
}

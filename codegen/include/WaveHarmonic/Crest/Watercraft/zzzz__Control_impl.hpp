#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Watercraft/Control.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__CustomBehaviour_impl.hpp"
#include "WaveHarmonic/Crest/Watercraft/zzzz__Control_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::Watercraft::Control.get_Input
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::WaveHarmonic::Crest::Watercraft::Control::*)()>(&::WaveHarmonic::Crest::Watercraft::Control::get_Input)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Control*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Control*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Watercraft::Control._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Watercraft::Control::*)()>(&::WaveHarmonic::Crest::Watercraft::Control::_ctor)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x180ba5300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Control*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 WaveHarmonic::Crest::Watercraft::Control::get_Input()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Control*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Watercraft::Control::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Control*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::Watercraft::Control* WaveHarmonic::Crest::Watercraft::Control::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Watercraft::Control*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Watercraft::Control::Control()   {
}

#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/IntParameter.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ParameterOverride_1_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__IntParameter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::IntParameter.Interp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::IntParameter::*)(int32_t, int32_t, float_t)>(&::UnityEngine::Rendering::PostProcessing::IntParameter::Interp)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fc04e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::IntParameter*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::IntParameter*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::IntParameter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::IntParameter::*)()>(&::UnityEngine::Rendering::PostProcessing::IntParameter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fb04b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::IntParameter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::PostProcessing::IntParameter::Interp(int32_t  from, int32_t  to, float_t  t)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::IntParameter*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to, t);
}
inline void UnityEngine::Rendering::PostProcessing::IntParameter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::IntParameter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::IntParameter* UnityEngine::Rendering::PostProcessing::IntParameter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::IntParameter*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::IntParameter::IntParameter()   {
}

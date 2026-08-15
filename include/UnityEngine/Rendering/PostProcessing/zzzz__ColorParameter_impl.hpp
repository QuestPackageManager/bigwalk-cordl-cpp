#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/ColorParameter.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ParameterOverride_1_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ColorParameter_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ColorParameter.Interp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ColorParameter::*)(::UnityEngine::Color, ::UnityEngine::Color, float_t)>(&::UnityEngine::Rendering::PostProcessing::ColorParameter::Interp)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181fbf140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorParameter*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorParameter*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ColorParameter.op_Implicit___UnityEngine__Vector4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Rendering::PostProcessing::ColorParameter*)>(&::UnityEngine::Rendering::PostProcessing::ColorParameter::op_Implicit___UnityEngine__Vector4)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fbf1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorParameter*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::ColorParameter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ColorParameter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ColorParameter::*)()>(&::UnityEngine::Rendering::PostProcessing::ColorParameter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fbf1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorParameter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::PostProcessing::ColorParameter::Interp(::UnityEngine::Color  from, ::UnityEngine::Color  to, float_t  t)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorParameter*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to, t);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::PostProcessing::ColorParameter::op_Implicit___UnityEngine__Vector4(::UnityEngine::Rendering::PostProcessing::ColorParameter*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorParameter*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::ColorParameter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, prop);
}
inline void UnityEngine::Rendering::PostProcessing::ColorParameter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorParameter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::ColorParameter* UnityEngine::Rendering::PostProcessing::ColorParameter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::ColorParameter*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::ColorParameter::ColorParameter()   {
}

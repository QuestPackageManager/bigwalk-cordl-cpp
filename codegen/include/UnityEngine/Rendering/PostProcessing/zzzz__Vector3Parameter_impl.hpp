#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/Vector3Parameter.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ParameterOverride_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__Vector3Parameter_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::Vector3Parameter.Interp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::Vector3Parameter::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::UnityEngine::Rendering::PostProcessing::Vector3Parameter::Interp)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181fd0950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Vector3Parameter*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Vector3Parameter*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::Vector3Parameter.op_Implicit___UnityEngine__Vector2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Rendering::PostProcessing::Vector3Parameter*)>(&::UnityEngine::Rendering::PostProcessing::Vector3Parameter::op_Implicit___UnityEngine__Vector2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181fd09f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Vector3Parameter*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::Vector3Parameter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::Vector3Parameter.op_Implicit___UnityEngine__Vector4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Rendering::PostProcessing::Vector3Parameter*)>(&::UnityEngine::Rendering::PostProcessing::Vector3Parameter::op_Implicit___UnityEngine__Vector4)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181fd09b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Vector3Parameter*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::Vector3Parameter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::Vector3Parameter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::Vector3Parameter::*)()>(&::UnityEngine::Rendering::PostProcessing::Vector3Parameter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fd09a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Vector3Parameter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::PostProcessing::Vector3Parameter::Interp(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, float_t  t)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Vector3Parameter*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to, t);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::PostProcessing::Vector3Parameter::op_Implicit___UnityEngine__Vector2(::UnityEngine::Rendering::PostProcessing::Vector3Parameter*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Vector3Parameter*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::Vector3Parameter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, prop);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::PostProcessing::Vector3Parameter::op_Implicit___UnityEngine__Vector4(::UnityEngine::Rendering::PostProcessing::Vector3Parameter*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Vector3Parameter*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::Vector3Parameter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, prop);
}
inline void UnityEngine::Rendering::PostProcessing::Vector3Parameter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Vector3Parameter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::Vector3Parameter* UnityEngine::Rendering::PostProcessing::Vector3Parameter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::Vector3Parameter*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::Vector3Parameter::Vector3Parameter()   {
}

#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/Vector4Parameter.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ParameterOverride_1_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__Vector4Parameter_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::Vector4Parameter.Interp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::Vector4Parameter::*)(::UnityEngine::Vector4, ::UnityEngine::Vector4, float_t)>(&::UnityEngine::Rendering::PostProcessing::Vector4Parameter::Interp)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181fbf140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Vector4Parameter*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Vector4Parameter*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::Vector4Parameter.op_Implicit___UnityEngine__Vector2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Rendering::PostProcessing::Vector4Parameter*)>(&::UnityEngine::Rendering::PostProcessing::Vector4Parameter::op_Implicit___UnityEngine__Vector2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181fd0a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Vector4Parameter*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::Vector4Parameter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::Vector4Parameter.op_Implicit___UnityEngine__Vector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Rendering::PostProcessing::Vector4Parameter*)>(&::UnityEngine::Rendering::PostProcessing::Vector4Parameter::op_Implicit___UnityEngine__Vector3)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fd0a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Vector4Parameter*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::Vector4Parameter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::Vector4Parameter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::Vector4Parameter::*)()>(&::UnityEngine::Rendering::PostProcessing::Vector4Parameter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fbf1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Vector4Parameter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::PostProcessing::Vector4Parameter::Interp(::UnityEngine::Vector4  from, ::UnityEngine::Vector4  to, float_t  t)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Vector4Parameter*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to, t);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::PostProcessing::Vector4Parameter::op_Implicit___UnityEngine__Vector2(::UnityEngine::Rendering::PostProcessing::Vector4Parameter*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Vector4Parameter*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::Vector4Parameter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, prop);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::PostProcessing::Vector4Parameter::op_Implicit___UnityEngine__Vector3(::UnityEngine::Rendering::PostProcessing::Vector4Parameter*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Vector4Parameter*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::Vector4Parameter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, prop);
}
inline void UnityEngine::Rendering::PostProcessing::Vector4Parameter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Vector4Parameter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::Vector4Parameter* UnityEngine::Rendering::PostProcessing::Vector4Parameter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::Vector4Parameter*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::Vector4Parameter::Vector4Parameter()   {
}

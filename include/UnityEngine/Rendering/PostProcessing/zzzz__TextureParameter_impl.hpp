#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/TextureParameter.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ParameterOverride_1_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__TextureParameterDefault_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__TextureParameter_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TextureParameter.Interp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::TextureParameter::*)(::UnityEngine::Texture*, ::UnityEngine::Texture*, float_t)>(&::UnityEngine::Rendering::PostProcessing::TextureParameter::Interp)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x181fd0100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TextureParameter*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TextureParameter*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TextureParameter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::TextureParameter::*)()>(&::UnityEngine::Rendering::PostProcessing::TextureParameter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fd0400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TextureParameter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::PostProcessing::TextureParameterDefault& UnityEngine::Rendering::PostProcessing::TextureParameter::__cordl_internal_get_defaultState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultState;
}
constexpr ::UnityEngine::Rendering::PostProcessing::TextureParameterDefault const& UnityEngine::Rendering::PostProcessing::TextureParameter::__cordl_internal_get_defaultState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultState;
}
constexpr void UnityEngine::Rendering::PostProcessing::TextureParameter::__cordl_internal_set_defaultState(::UnityEngine::Rendering::PostProcessing::TextureParameterDefault  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultState = value;
}
inline void UnityEngine::Rendering::PostProcessing::TextureParameter::Interp(::UnityEngine::Texture*  from, ::UnityEngine::Texture*  to, float_t  t)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TextureParameter*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to, t);
}
inline void UnityEngine::Rendering::PostProcessing::TextureParameter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TextureParameter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::TextureParameter* UnityEngine::Rendering::PostProcessing::TextureParameter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::TextureParameter*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::TextureParameter::TextureParameter()   {
}

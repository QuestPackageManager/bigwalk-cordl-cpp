#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/TrackballAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__TrackballAttribute_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__TrackballAttribute_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode::TrackballAttribute_Mode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode::TrackballAttribute_Mode()   {
}
constexpr ::UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode  UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode  UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode::Lift{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode  UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode::Gamma{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode  UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode::Gain{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TrackballAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::TrackballAttribute::*)(::UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode)>(&::UnityEngine::Rendering::PostProcessing::TrackballAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TrackballAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode& UnityEngine::Rendering::PostProcessing::TrackballAttribute::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode const& UnityEngine::Rendering::PostProcessing::TrackballAttribute::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void UnityEngine::Rendering::PostProcessing::TrackballAttribute::__cordl_internal_set_mode(::UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
inline void UnityEngine::Rendering::PostProcessing::TrackballAttribute::_ctor(::UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TrackballAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode);
}
inline ::UnityEngine::Rendering::PostProcessing::TrackballAttribute* UnityEngine::Rendering::PostProcessing::TrackballAttribute::New_ctor(::UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode  mode)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::TrackballAttribute*>(mode));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::TrackballAttribute::TrackballAttribute()   {
}

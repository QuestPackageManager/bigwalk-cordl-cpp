#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Cascade.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__Cascade_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::Cascade.get_Packed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::WaveHarmonic::Crest::Cascade::*)()>(&::WaveHarmonic::Crest::Cascade::get_Packed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18227bb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Cascade>(),
                        {"get_Packed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Cascade._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Cascade::*)(::UnityEngine::Vector2, float_t, int32_t)>(&::WaveHarmonic::Crest::Cascade::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182552750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Cascade>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Cascade.get_TexelRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::WaveHarmonic::Crest::Cascade::*)()>(&::WaveHarmonic::Crest::Cascade::get_TexelRect)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1825527a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Cascade>(),
                        {"get_TexelRect", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector4 WaveHarmonic::Crest::Cascade::get_Packed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Cascade>(),
                        {"get_Packed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(*this, ___internal_method);
}
inline void WaveHarmonic::Crest::Cascade::_ctor(::UnityEngine::Vector2  snapped, float_t  texel, int32_t  resolution)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Cascade>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, snapped, texel, resolution);
}
inline ::UnityEngine::Rect WaveHarmonic::Crest::Cascade::get_TexelRect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Cascade>(),
                        {"get_TexelRect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_SnappedPosition", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Texel", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Resolution", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::Cascade::Cascade(::UnityEngine::Vector2  _SnappedPosition, float_t  _Texel, int32_t  _Resolution) noexcept  {
this->_SnappedPosition = _SnappedPosition;
this->_Texel = _Texel;
this->_Resolution = _Resolution;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Cascade::Cascade()   {
}

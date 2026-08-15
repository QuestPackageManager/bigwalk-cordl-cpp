#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEGlobalPaintData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "TheVisualEngine/zzzz__TVEGlobalPaintData_def.hpp"
//  Writing Method size for method: ::TheVisualEngine::TVEGlobalPaintData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEGlobalPaintData::*)()>(&::TheVisualEngine::TVEGlobalPaintData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804b9700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEGlobalPaintData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& TheVisualEngine::TVEGlobalPaintData::__cordl_internal_get_tintingIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tintingIntensity;
}
constexpr float_t const& TheVisualEngine::TVEGlobalPaintData::__cordl_internal_get_tintingIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tintingIntensity;
}
constexpr void TheVisualEngine::TVEGlobalPaintData::__cordl_internal_set_tintingIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tintingIntensity = value;
}
constexpr ::UnityEngine::Color& TheVisualEngine::TVEGlobalPaintData::__cordl_internal_get_tintingColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tintingColor;
}
constexpr ::UnityEngine::Color const& TheVisualEngine::TVEGlobalPaintData::__cordl_internal_get_tintingColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tintingColor;
}
constexpr void TheVisualEngine::TVEGlobalPaintData::__cordl_internal_set_tintingColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tintingColor = value;
}
constexpr float_t& TheVisualEngine::TVEGlobalPaintData::__cordl_internal_get_cutoutIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cutoutIntensity;
}
constexpr float_t const& TheVisualEngine::TVEGlobalPaintData::__cordl_internal_get_cutoutIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cutoutIntensity;
}
constexpr void TheVisualEngine::TVEGlobalPaintData::__cordl_internal_set_cutoutIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cutoutIntensity = value;
}
inline void TheVisualEngine::TVEGlobalPaintData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEGlobalPaintData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TheVisualEngine::TVEGlobalPaintData* TheVisualEngine::TVEGlobalPaintData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TheVisualEngine::TVEGlobalPaintData*>());
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVEGlobalPaintData::TVEGlobalPaintData()   {
}

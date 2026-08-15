#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEGlobalFormData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TheVisualEngine/zzzz__TVEGlobalFormData_def.hpp"
//  Writing Method size for method: ::TheVisualEngine::TVEGlobalFormData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEGlobalFormData::*)()>(&::TheVisualEngine::TVEGlobalFormData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804b96d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEGlobalFormData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& TheVisualEngine::TVEGlobalFormData::__cordl_internal_get_confromHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___confromHeight;
}
constexpr float_t const& TheVisualEngine::TVEGlobalFormData::__cordl_internal_get_confromHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___confromHeight;
}
constexpr void TheVisualEngine::TVEGlobalFormData::__cordl_internal_set_confromHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___confromHeight = value;
}
constexpr float_t& TheVisualEngine::TVEGlobalFormData::__cordl_internal_get_sizeFadeValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizeFadeValue;
}
constexpr float_t const& TheVisualEngine::TVEGlobalFormData::__cordl_internal_get_sizeFadeValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizeFadeValue;
}
constexpr void TheVisualEngine::TVEGlobalFormData::__cordl_internal_set_sizeFadeValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sizeFadeValue = value;
}
inline void TheVisualEngine::TVEGlobalFormData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEGlobalFormData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TheVisualEngine::TVEGlobalFormData* TheVisualEngine::TVEGlobalFormData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TheVisualEngine::TVEGlobalFormData*>());
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVEGlobalFormData::TVEGlobalFormData()   {
}

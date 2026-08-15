#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEGlobalCoatData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TheVisualEngine/zzzz__TVEGlobalCoatData_def.hpp"
//  Writing Method size for method: ::TheVisualEngine::TVEGlobalCoatData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEGlobalCoatData::*)()>(&::TheVisualEngine::TVEGlobalCoatData::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804b96b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEGlobalCoatData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& TheVisualEngine::TVEGlobalCoatData::__cordl_internal_get_layerIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerIntensity;
}
constexpr float_t const& TheVisualEngine::TVEGlobalCoatData::__cordl_internal_get_layerIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerIntensity;
}
constexpr void TheVisualEngine::TVEGlobalCoatData::__cordl_internal_set_layerIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerIntensity = value;
}
constexpr float_t& TheVisualEngine::TVEGlobalCoatData::__cordl_internal_get_detailIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailIntensity;
}
constexpr float_t const& TheVisualEngine::TVEGlobalCoatData::__cordl_internal_get_detailIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailIntensity;
}
constexpr void TheVisualEngine::TVEGlobalCoatData::__cordl_internal_set_detailIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detailIntensity = value;
}
constexpr float_t& TheVisualEngine::TVEGlobalCoatData::__cordl_internal_get_stackIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stackIntensity;
}
constexpr float_t const& TheVisualEngine::TVEGlobalCoatData::__cordl_internal_get_stackIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stackIntensity;
}
constexpr void TheVisualEngine::TVEGlobalCoatData::__cordl_internal_set_stackIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stackIntensity = value;
}
inline void TheVisualEngine::TVEGlobalCoatData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEGlobalCoatData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TheVisualEngine::TVEGlobalCoatData* TheVisualEngine::TVEGlobalCoatData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TheVisualEngine::TVEGlobalCoatData*>());
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVEGlobalCoatData::TVEGlobalCoatData()   {
}

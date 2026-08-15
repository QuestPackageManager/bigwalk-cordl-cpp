#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEGlobalGlowData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "TheVisualEngine/zzzz__TVEGlobalGlowData_def.hpp"
//  Writing Method size for method: ::TheVisualEngine::TVEGlobalGlowData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEGlobalGlowData::*)()>(&::TheVisualEngine::TVEGlobalGlowData::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804b96e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEGlobalGlowData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& TheVisualEngine::TVEGlobalGlowData::__cordl_internal_get_emissiveIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emissiveIntensity;
}
constexpr float_t const& TheVisualEngine::TVEGlobalGlowData::__cordl_internal_get_emissiveIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emissiveIntensity;
}
constexpr void TheVisualEngine::TVEGlobalGlowData::__cordl_internal_set_emissiveIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emissiveIntensity = value;
}
constexpr ::UnityEngine::Color& TheVisualEngine::TVEGlobalGlowData::__cordl_internal_get_emissiveColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emissiveColor;
}
constexpr ::UnityEngine::Color const& TheVisualEngine::TVEGlobalGlowData::__cordl_internal_get_emissiveColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emissiveColor;
}
constexpr void TheVisualEngine::TVEGlobalGlowData::__cordl_internal_set_emissiveColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emissiveColor = value;
}
constexpr float_t& TheVisualEngine::TVEGlobalGlowData::__cordl_internal_get_subsurfaceIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subsurfaceIntensity;
}
constexpr float_t const& TheVisualEngine::TVEGlobalGlowData::__cordl_internal_get_subsurfaceIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subsurfaceIntensity;
}
constexpr void TheVisualEngine::TVEGlobalGlowData::__cordl_internal_set_subsurfaceIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subsurfaceIntensity = value;
}
inline void TheVisualEngine::TVEGlobalGlowData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEGlobalGlowData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TheVisualEngine::TVEGlobalGlowData* TheVisualEngine::TVEGlobalGlowData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TheVisualEngine::TVEGlobalGlowData*>());
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVEGlobalGlowData::TVEGlobalGlowData()   {
}

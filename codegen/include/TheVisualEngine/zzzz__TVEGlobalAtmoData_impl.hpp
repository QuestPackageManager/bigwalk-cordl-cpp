#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEGlobalAtmoData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TheVisualEngine/zzzz__TVEGlobalAtmoData_def.hpp"
//  Writing Method size for method: ::TheVisualEngine::TVEGlobalAtmoData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEGlobalAtmoData::*)()>(&::TheVisualEngine::TVEGlobalAtmoData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEGlobalAtmoData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& TheVisualEngine::TVEGlobalAtmoData::__cordl_internal_get_drynessIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drynessIntensity;
}
constexpr float_t const& TheVisualEngine::TVEGlobalAtmoData::__cordl_internal_get_drynessIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drynessIntensity;
}
constexpr void TheVisualEngine::TVEGlobalAtmoData::__cordl_internal_set_drynessIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drynessIntensity = value;
}
constexpr float_t& TheVisualEngine::TVEGlobalAtmoData::__cordl_internal_get_overlayIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlayIntensity;
}
constexpr float_t const& TheVisualEngine::TVEGlobalAtmoData::__cordl_internal_get_overlayIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlayIntensity;
}
constexpr void TheVisualEngine::TVEGlobalAtmoData::__cordl_internal_set_overlayIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlayIntensity = value;
}
constexpr float_t& TheVisualEngine::TVEGlobalAtmoData::__cordl_internal_get_wetnessIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wetnessIntensity;
}
constexpr float_t const& TheVisualEngine::TVEGlobalAtmoData::__cordl_internal_get_wetnessIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wetnessIntensity;
}
constexpr void TheVisualEngine::TVEGlobalAtmoData::__cordl_internal_set_wetnessIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wetnessIntensity = value;
}
constexpr float_t& TheVisualEngine::TVEGlobalAtmoData::__cordl_internal_get_raindropsIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raindropsIntensity;
}
constexpr float_t const& TheVisualEngine::TVEGlobalAtmoData::__cordl_internal_get_raindropsIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raindropsIntensity;
}
constexpr void TheVisualEngine::TVEGlobalAtmoData::__cordl_internal_set_raindropsIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raindropsIntensity = value;
}
inline void TheVisualEngine::TVEGlobalAtmoData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEGlobalAtmoData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TheVisualEngine::TVEGlobalAtmoData* TheVisualEngine::TVEGlobalAtmoData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TheVisualEngine::TVEGlobalAtmoData*>());
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVEGlobalAtmoData::TVEGlobalAtmoData()   {
}

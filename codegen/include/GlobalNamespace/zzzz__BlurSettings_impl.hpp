#pragma once
// IWYU pragma private; include "GlobalNamespace/BlurSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BlurSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BlurSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BlurSettings::*)()>(&::GlobalNamespace::BlurSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BlurSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::BlurSettings::__cordl_internal_get_horizontalBlur()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontalBlur;
}
constexpr float_t const& GlobalNamespace::BlurSettings::__cordl_internal_get_horizontalBlur() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontalBlur;
}
constexpr void GlobalNamespace::BlurSettings::__cordl_internal_set_horizontalBlur(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___horizontalBlur = value;
}
constexpr float_t& GlobalNamespace::BlurSettings::__cordl_internal_get_verticalBlur()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalBlur;
}
constexpr float_t const& GlobalNamespace::BlurSettings::__cordl_internal_get_verticalBlur() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalBlur;
}
constexpr void GlobalNamespace::BlurSettings::__cordl_internal_set_verticalBlur(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verticalBlur = value;
}
inline void GlobalNamespace::BlurSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BlurSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BlurSettings* GlobalNamespace::BlurSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BlurSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BlurSettings::BlurSettings()   {
}

#pragma once
// IWYU pragma private; include "Boxophobic/StyledGUI/StyledRangeOptions.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Boxophobic/StyledGUI/zzzz__StyledRangeOptions_def.hpp"
//  Writing Method size for method: ::Boxophobic::StyledGUI::StyledRangeOptions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::StyledGUI::StyledRangeOptions::*)(::StringW, float_t, float_t, ::ArrayW<::StringW>)>(&::Boxophobic::StyledGUI::StyledRangeOptions::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804bd630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledRangeOptions*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Boxophobic::StyledGUI::StyledRangeOptions::__cordl_internal_get_display()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___display;
}
constexpr ::StringW const& Boxophobic::StyledGUI::StyledRangeOptions::__cordl_internal_get_display() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___display;
}
constexpr void Boxophobic::StyledGUI::StyledRangeOptions::__cordl_internal_set_display(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___display = value;
}
constexpr float_t& Boxophobic::StyledGUI::StyledRangeOptions::__cordl_internal_get_min()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___min;
}
constexpr float_t const& Boxophobic::StyledGUI::StyledRangeOptions::__cordl_internal_get_min() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___min;
}
constexpr void Boxophobic::StyledGUI::StyledRangeOptions::__cordl_internal_set_min(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___min = value;
}
constexpr float_t& Boxophobic::StyledGUI::StyledRangeOptions::__cordl_internal_get_max()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max;
}
constexpr float_t const& Boxophobic::StyledGUI::StyledRangeOptions::__cordl_internal_get_max() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max;
}
constexpr void Boxophobic::StyledGUI::StyledRangeOptions::__cordl_internal_set_max(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___max = value;
}
constexpr ::ArrayW<::StringW>& Boxophobic::StyledGUI::StyledRangeOptions::__cordl_internal_get_options()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___options;
}
constexpr ::ArrayW<::StringW> const& Boxophobic::StyledGUI::StyledRangeOptions::__cordl_internal_get_options() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___options;
}
constexpr void Boxophobic::StyledGUI::StyledRangeOptions::__cordl_internal_set_options(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___options = value;
}
inline void Boxophobic::StyledGUI::StyledRangeOptions::_ctor(::StringW  display, float_t  min, float_t  max, ::ArrayW<::StringW>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledRangeOptions*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, display, min, max, options);
}
inline ::Boxophobic::StyledGUI::StyledRangeOptions* Boxophobic::StyledGUI::StyledRangeOptions::New_ctor(::StringW  display, float_t  min, float_t  max, ::ArrayW<::StringW>  options)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Boxophobic::StyledGUI::StyledRangeOptions*>(display, min, max, options));
}
// Ctor Parameters []
constexpr ::Boxophobic::StyledGUI::StyledRangeOptions::StyledRangeOptions()   {
}

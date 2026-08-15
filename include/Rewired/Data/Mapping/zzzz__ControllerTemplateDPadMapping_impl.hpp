#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/ControllerTemplateDPadMapping.hpp"
#include "Rewired/Data/Mapping/zzzz__ControllerTemplateSpecialElementMapping_impl.hpp"
#include "Rewired/Data/Mapping/zzzz__ControllerTemplateDPadMapping_def.hpp"
//  Writing Method size for method: ::Rewired::Data::Mapping::ControllerTemplateDPadMapping._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::ControllerTemplateDPadMapping::*)()>(&::Rewired::Data::Mapping::ControllerTemplateDPadMapping::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818a2070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::ControllerTemplateDPadMapping*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::Data::Mapping::ControllerTemplateDPadMapping::__cordl_internal_get_eid_up()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_up;
}
constexpr int32_t const& Rewired::Data::Mapping::ControllerTemplateDPadMapping::__cordl_internal_get_eid_up() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_up;
}
constexpr void Rewired::Data::Mapping::ControllerTemplateDPadMapping::__cordl_internal_set_eid_up(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eid_up = value;
}
constexpr int32_t& Rewired::Data::Mapping::ControllerTemplateDPadMapping::__cordl_internal_get_eid_right()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_right;
}
constexpr int32_t const& Rewired::Data::Mapping::ControllerTemplateDPadMapping::__cordl_internal_get_eid_right() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_right;
}
constexpr void Rewired::Data::Mapping::ControllerTemplateDPadMapping::__cordl_internal_set_eid_right(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eid_right = value;
}
constexpr int32_t& Rewired::Data::Mapping::ControllerTemplateDPadMapping::__cordl_internal_get_eid_down()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_down;
}
constexpr int32_t const& Rewired::Data::Mapping::ControllerTemplateDPadMapping::__cordl_internal_get_eid_down() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_down;
}
constexpr void Rewired::Data::Mapping::ControllerTemplateDPadMapping::__cordl_internal_set_eid_down(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eid_down = value;
}
constexpr int32_t& Rewired::Data::Mapping::ControllerTemplateDPadMapping::__cordl_internal_get_eid_left()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_left;
}
constexpr int32_t const& Rewired::Data::Mapping::ControllerTemplateDPadMapping::__cordl_internal_get_eid_left() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_left;
}
constexpr void Rewired::Data::Mapping::ControllerTemplateDPadMapping::__cordl_internal_set_eid_left(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eid_left = value;
}
constexpr int32_t& Rewired::Data::Mapping::ControllerTemplateDPadMapping::__cordl_internal_get_eid_press()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_press;
}
constexpr int32_t const& Rewired::Data::Mapping::ControllerTemplateDPadMapping::__cordl_internal_get_eid_press() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_press;
}
constexpr void Rewired::Data::Mapping::ControllerTemplateDPadMapping::__cordl_internal_set_eid_press(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eid_press = value;
}
inline void Rewired::Data::Mapping::ControllerTemplateDPadMapping::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::ControllerTemplateDPadMapping*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::Mapping::ControllerTemplateDPadMapping* Rewired::Data::Mapping::ControllerTemplateDPadMapping::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::Mapping::ControllerTemplateDPadMapping*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::Mapping::ControllerTemplateDPadMapping::ControllerTemplateDPadMapping()   {
}

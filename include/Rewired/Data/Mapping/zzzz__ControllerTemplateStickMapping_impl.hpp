#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/ControllerTemplateStickMapping.hpp"
#include "Rewired/Data/Mapping/zzzz__ControllerTemplateSpecialElementMapping_impl.hpp"
#include "Rewired/Data/Mapping/zzzz__ControllerTemplateStickMapping_def.hpp"
//  Writing Method size for method: ::Rewired::Data::Mapping::ControllerTemplateStickMapping._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::ControllerTemplateStickMapping::*)()>(&::Rewired::Data::Mapping::ControllerTemplateStickMapping::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818a2230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::ControllerTemplateStickMapping*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::Data::Mapping::ControllerTemplateStickMapping::__cordl_internal_get_eid_axisX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_axisX;
}
constexpr int32_t const& Rewired::Data::Mapping::ControllerTemplateStickMapping::__cordl_internal_get_eid_axisX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_axisX;
}
constexpr void Rewired::Data::Mapping::ControllerTemplateStickMapping::__cordl_internal_set_eid_axisX(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eid_axisX = value;
}
constexpr int32_t& Rewired::Data::Mapping::ControllerTemplateStickMapping::__cordl_internal_get_eid_axisY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_axisY;
}
constexpr int32_t const& Rewired::Data::Mapping::ControllerTemplateStickMapping::__cordl_internal_get_eid_axisY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_axisY;
}
constexpr void Rewired::Data::Mapping::ControllerTemplateStickMapping::__cordl_internal_set_eid_axisY(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eid_axisY = value;
}
constexpr int32_t& Rewired::Data::Mapping::ControllerTemplateStickMapping::__cordl_internal_get_eid_axisZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_axisZ;
}
constexpr int32_t const& Rewired::Data::Mapping::ControllerTemplateStickMapping::__cordl_internal_get_eid_axisZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_axisZ;
}
constexpr void Rewired::Data::Mapping::ControllerTemplateStickMapping::__cordl_internal_set_eid_axisZ(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eid_axisZ = value;
}
inline void Rewired::Data::Mapping::ControllerTemplateStickMapping::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::ControllerTemplateStickMapping*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::Mapping::ControllerTemplateStickMapping* Rewired::Data::Mapping::ControllerTemplateStickMapping::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::Mapping::ControllerTemplateStickMapping*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::Mapping::ControllerTemplateStickMapping::ControllerTemplateStickMapping()   {
}

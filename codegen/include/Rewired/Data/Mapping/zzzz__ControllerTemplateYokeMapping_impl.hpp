#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/ControllerTemplateYokeMapping.hpp"
#include "Rewired/Data/Mapping/zzzz__ControllerTemplateSpecialElementMapping_impl.hpp"
#include "Rewired/Data/Mapping/zzzz__ControllerTemplateYokeMapping_def.hpp"
//  Writing Method size for method: ::Rewired::Data::Mapping::ControllerTemplateYokeMapping._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::ControllerTemplateYokeMapping::*)()>(&::Rewired::Data::Mapping::ControllerTemplateYokeMapping::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814551b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::ControllerTemplateYokeMapping*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::Data::Mapping::ControllerTemplateYokeMapping::__cordl_internal_get_eid_axisX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_axisX;
}
constexpr int32_t const& Rewired::Data::Mapping::ControllerTemplateYokeMapping::__cordl_internal_get_eid_axisX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_axisX;
}
constexpr void Rewired::Data::Mapping::ControllerTemplateYokeMapping::__cordl_internal_set_eid_axisX(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eid_axisX = value;
}
constexpr int32_t& Rewired::Data::Mapping::ControllerTemplateYokeMapping::__cordl_internal_get_eid_axisZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_axisZ;
}
constexpr int32_t const& Rewired::Data::Mapping::ControllerTemplateYokeMapping::__cordl_internal_get_eid_axisZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_axisZ;
}
constexpr void Rewired::Data::Mapping::ControllerTemplateYokeMapping::__cordl_internal_set_eid_axisZ(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eid_axisZ = value;
}
inline void Rewired::Data::Mapping::ControllerTemplateYokeMapping::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::ControllerTemplateYokeMapping*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::Mapping::ControllerTemplateYokeMapping* Rewired::Data::Mapping::ControllerTemplateYokeMapping::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::Mapping::ControllerTemplateYokeMapping*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::Mapping::ControllerTemplateYokeMapping::ControllerTemplateYokeMapping()   {
}

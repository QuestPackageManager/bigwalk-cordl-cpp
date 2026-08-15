#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/ControllerTemplateStick6DMapping.hpp"
#include "Rewired/Data/Mapping/zzzz__ControllerTemplateSpecialElementMapping_impl.hpp"
#include "Rewired/Data/Mapping/zzzz__ControllerTemplateStick6DMapping_def.hpp"
//  Writing Method size for method: ::Rewired::Data::Mapping::ControllerTemplateStick6DMapping._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::ControllerTemplateStick6DMapping::*)()>(&::Rewired::Data::Mapping::ControllerTemplateStick6DMapping::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818a2210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::ControllerTemplateStick6DMapping*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::Data::Mapping::ControllerTemplateStick6DMapping::__cordl_internal_get_eid_positionX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_positionX;
}
constexpr int32_t const& Rewired::Data::Mapping::ControllerTemplateStick6DMapping::__cordl_internal_get_eid_positionX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_positionX;
}
constexpr void Rewired::Data::Mapping::ControllerTemplateStick6DMapping::__cordl_internal_set_eid_positionX(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eid_positionX = value;
}
constexpr int32_t& Rewired::Data::Mapping::ControllerTemplateStick6DMapping::__cordl_internal_get_eid_positionY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_positionY;
}
constexpr int32_t const& Rewired::Data::Mapping::ControllerTemplateStick6DMapping::__cordl_internal_get_eid_positionY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_positionY;
}
constexpr void Rewired::Data::Mapping::ControllerTemplateStick6DMapping::__cordl_internal_set_eid_positionY(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eid_positionY = value;
}
constexpr int32_t& Rewired::Data::Mapping::ControllerTemplateStick6DMapping::__cordl_internal_get_eid_positionZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_positionZ;
}
constexpr int32_t const& Rewired::Data::Mapping::ControllerTemplateStick6DMapping::__cordl_internal_get_eid_positionZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_positionZ;
}
constexpr void Rewired::Data::Mapping::ControllerTemplateStick6DMapping::__cordl_internal_set_eid_positionZ(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eid_positionZ = value;
}
constexpr int32_t& Rewired::Data::Mapping::ControllerTemplateStick6DMapping::__cordl_internal_get_eid_rotationX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_rotationX;
}
constexpr int32_t const& Rewired::Data::Mapping::ControllerTemplateStick6DMapping::__cordl_internal_get_eid_rotationX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_rotationX;
}
constexpr void Rewired::Data::Mapping::ControllerTemplateStick6DMapping::__cordl_internal_set_eid_rotationX(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eid_rotationX = value;
}
constexpr int32_t& Rewired::Data::Mapping::ControllerTemplateStick6DMapping::__cordl_internal_get_eid_rotationY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_rotationY;
}
constexpr int32_t const& Rewired::Data::Mapping::ControllerTemplateStick6DMapping::__cordl_internal_get_eid_rotationY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_rotationY;
}
constexpr void Rewired::Data::Mapping::ControllerTemplateStick6DMapping::__cordl_internal_set_eid_rotationY(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eid_rotationY = value;
}
constexpr int32_t& Rewired::Data::Mapping::ControllerTemplateStick6DMapping::__cordl_internal_get_eid_rotationZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_rotationZ;
}
constexpr int32_t const& Rewired::Data::Mapping::ControllerTemplateStick6DMapping::__cordl_internal_get_eid_rotationZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_rotationZ;
}
constexpr void Rewired::Data::Mapping::ControllerTemplateStick6DMapping::__cordl_internal_set_eid_rotationZ(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eid_rotationZ = value;
}
inline void Rewired::Data::Mapping::ControllerTemplateStick6DMapping::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::ControllerTemplateStick6DMapping*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::Mapping::ControllerTemplateStick6DMapping* Rewired::Data::Mapping::ControllerTemplateStick6DMapping::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::Mapping::ControllerTemplateStick6DMapping*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::Mapping::ControllerTemplateStick6DMapping::ControllerTemplateStick6DMapping()   {
}

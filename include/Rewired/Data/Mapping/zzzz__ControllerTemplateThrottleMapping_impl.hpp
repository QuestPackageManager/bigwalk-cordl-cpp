#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/ControllerTemplateThrottleMapping.hpp"
#include "Rewired/Data/Mapping/zzzz__ControllerTemplateSpecialElementMapping_impl.hpp"
#include "Rewired/Data/Mapping/zzzz__ControllerTemplateThrottleMapping_def.hpp"
//  Writing Method size for method: ::Rewired::Data::Mapping::ControllerTemplateThrottleMapping._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::ControllerTemplateThrottleMapping::*)()>(&::Rewired::Data::Mapping::ControllerTemplateThrottleMapping::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814551b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::ControllerTemplateThrottleMapping*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::Data::Mapping::ControllerTemplateThrottleMapping::__cordl_internal_get_eid_axis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_axis;
}
constexpr int32_t const& Rewired::Data::Mapping::ControllerTemplateThrottleMapping::__cordl_internal_get_eid_axis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_axis;
}
constexpr void Rewired::Data::Mapping::ControllerTemplateThrottleMapping::__cordl_internal_set_eid_axis(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eid_axis = value;
}
constexpr int32_t& Rewired::Data::Mapping::ControllerTemplateThrottleMapping::__cordl_internal_get_eid_minDetent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_minDetent;
}
constexpr int32_t const& Rewired::Data::Mapping::ControllerTemplateThrottleMapping::__cordl_internal_get_eid_minDetent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eid_minDetent;
}
constexpr void Rewired::Data::Mapping::ControllerTemplateThrottleMapping::__cordl_internal_set_eid_minDetent(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eid_minDetent = value;
}
inline void Rewired::Data::Mapping::ControllerTemplateThrottleMapping::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::ControllerTemplateThrottleMapping*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::Mapping::ControllerTemplateThrottleMapping* Rewired::Data::Mapping::ControllerTemplateThrottleMapping::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::Mapping::ControllerTemplateThrottleMapping*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::Mapping::ControllerTemplateThrottleMapping::ControllerTemplateThrottleMapping()   {
}

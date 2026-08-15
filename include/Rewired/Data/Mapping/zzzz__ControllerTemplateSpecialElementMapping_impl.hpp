#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/ControllerTemplateSpecialElementMapping.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Data/Mapping/zzzz__ControllerTemplateSpecialElementMapping_def.hpp"
//  Writing Method size for method: ::Rewired::Data::Mapping::ControllerTemplateSpecialElementMapping._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::ControllerTemplateSpecialElementMapping::*)()>(&::Rewired::Data::Mapping::ControllerTemplateSpecialElementMapping::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::ControllerTemplateSpecialElementMapping*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::Data::Mapping::ControllerTemplateSpecialElementMapping::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::ControllerTemplateSpecialElementMapping*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::Mapping::ControllerTemplateSpecialElementMapping* Rewired::Data::Mapping::ControllerTemplateSpecialElementMapping::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::Mapping::ControllerTemplateSpecialElementMapping*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::Mapping::ControllerTemplateSpecialElementMapping::ControllerTemplateSpecialElementMapping()   {
}

#pragma once
// IWYU pragma private; include "Rewired/IControllerTemplateElementSource.hpp"
#include "Rewired/zzzz__IControllerTemplateElementSource_def.hpp"
#include "Rewired/zzzz__ControllerTemplateElementSourceType_def.hpp"
//  Writing Method size for method: ::Rewired::IControllerTemplateElementSource.get_type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerTemplateElementSourceType (::Rewired::IControllerTemplateElementSource::*)()>(&::Rewired::IControllerTemplateElementSource::get_type)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateElementSource*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateElementSource*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::Rewired::ControllerTemplateElementSourceType Rewired::IControllerTemplateElementSource::get_type()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateElementSource*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerTemplateElementSourceType>(this, ___internal_method);
}

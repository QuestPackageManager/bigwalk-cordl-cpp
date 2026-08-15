#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/IControllerTemplateMapSpecialElement_Internal.hpp"
#include "Rewired/Data/Mapping/zzzz__IControllerTemplateMapSpecialElement_Internal_def.hpp"
template<typename T>
inline T Rewired::Data::Mapping::IControllerTemplateMapSpecialElement_Internal::GetMapping()  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::Rewired::Data::Mapping::IControllerTemplateMapSpecialElement_Internal*>(), 0}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<T>()}
                            ));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}

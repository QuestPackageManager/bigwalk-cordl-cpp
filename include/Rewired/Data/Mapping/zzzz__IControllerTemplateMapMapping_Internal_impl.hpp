#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/IControllerTemplateMapMapping_Internal.hpp"
#include "Rewired/Data/Mapping/zzzz__IControllerTemplateMapMapping_Internal_def.hpp"
#include "Rewired/zzzz__IControllerElementTarget_def.hpp"
//  Writing Method size for method: ::Rewired::Data::Mapping::IControllerTemplateMapMapping_Internal.GetTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Rewired::IControllerElementTarget*> (::Rewired::Data::Mapping::IControllerTemplateMapMapping_Internal::*)()>(&::Rewired::Data::Mapping::IControllerTemplateMapMapping_Internal::GetTargets)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::Mapping::IControllerTemplateMapMapping_Internal*>(),
                    {::i2c::class_of<::Rewired::Data::Mapping::IControllerTemplateMapMapping_Internal*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::ArrayW<::Rewired::IControllerElementTarget*> Rewired::Data::Mapping::IControllerTemplateMapMapping_Internal::GetTargets()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::Mapping::IControllerTemplateMapMapping_Internal*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Rewired::IControllerElementTarget*>>(this, ___internal_method);
}

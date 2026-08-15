#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/CustomCalculation.hpp"
#include "Rewired/Utils/Classes/zzzz__SerializedMethod_impl.hpp"
#include "Rewired/Data/Mapping/zzzz__CustomCalculation_def.hpp"
//  Writing Method size for method: ::Rewired::Data::Mapping::CustomCalculation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::CustomCalculation::*)()>(&::Rewired::Data::Mapping::CustomCalculation::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180445be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::Data::Mapping::CustomCalculation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::Mapping::CustomCalculation* Rewired::Data::Mapping::CustomCalculation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::Mapping::CustomCalculation*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::Mapping::CustomCalculation::CustomCalculation()   {
}

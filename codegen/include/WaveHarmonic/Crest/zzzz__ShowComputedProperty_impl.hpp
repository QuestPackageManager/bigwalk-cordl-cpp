#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ShowComputedProperty.hpp"
#include "WaveHarmonic/Crest/zzzz__Decorator_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__ShowComputedProperty_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::ShowComputedProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShowComputedProperty::*)(::StringW)>(&::WaveHarmonic::Crest::ShowComputedProperty::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180303f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShowComputedProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::ShowComputedProperty::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShowComputedProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::WaveHarmonic::Crest::ShowComputedProperty* WaveHarmonic::Crest::ShowComputedProperty::New_ctor(::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::ShowComputedProperty*>(name));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::ShowComputedProperty::ShowComputedProperty()   {
}

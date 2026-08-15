#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/FilterEnum.hpp"
#include "WaveHarmonic/Crest/zzzz__Decorator_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__FilterEnum_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Filtered_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::FilterEnum._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FilterEnum::*)(::StringW, ::WaveHarmonic::Crest::Filtered_Mode, ::ArrayW<int32_t>)>(&::WaveHarmonic::Crest::FilterEnum::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180303f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FilterEnum*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::WaveHarmonic::Crest::Filtered_Mode>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::FilterEnum::_ctor(::StringW  property, ::WaveHarmonic::Crest::Filtered_Mode  mode, ::ArrayW<int32_t>  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FilterEnum*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::WaveHarmonic::Crest::Filtered_Mode>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property, mode, values);
}
inline ::WaveHarmonic::Crest::FilterEnum* WaveHarmonic::Crest::FilterEnum::New_ctor(::StringW  property, ::WaveHarmonic::Crest::Filtered_Mode  mode, ::ArrayW<int32_t>  values)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::FilterEnum*>(property, mode, values));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::FilterEnum::FilterEnum()   {
}

#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/MaterialField.hpp"
#include "WaveHarmonic/Crest/zzzz__Decorator_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__MaterialField_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::MaterialField._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaterialField::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::WaveHarmonic::Crest::MaterialField::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180303f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaterialField*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::MaterialField::_ctor(::StringW  shader, ::StringW  title, ::StringW  name, ::StringW  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaterialField*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shader, title, name, parent);
}
inline ::WaveHarmonic::Crest::MaterialField* WaveHarmonic::Crest::MaterialField::New_ctor(::StringW  shader, ::StringW  title, ::StringW  name, ::StringW  parent)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::MaterialField*>(shader, title, name, parent));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::MaterialField::MaterialField()   {
}

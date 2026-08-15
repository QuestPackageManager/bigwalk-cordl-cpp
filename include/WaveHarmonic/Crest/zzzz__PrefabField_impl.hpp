#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/PrefabField.hpp"
#include "WaveHarmonic/Crest/zzzz__Decorator_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__PrefabField_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::PrefabField._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PrefabField::*)(::StringW, ::StringW)>(&::WaveHarmonic::Crest::PrefabField::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180303f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PrefabField*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::PrefabField::_ctor(::StringW  title, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PrefabField*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, title, name);
}
inline ::WaveHarmonic::Crest::PrefabField* WaveHarmonic::Crest::PrefabField::New_ctor(::StringW  title, ::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::PrefabField*>(title, name));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::PrefabField::PrefabField()   {
}

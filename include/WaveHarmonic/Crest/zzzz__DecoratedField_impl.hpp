#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/DecoratedField.hpp"
#include "WaveHarmonic/Crest/zzzz__Decorator_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__DecoratedField_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::DecoratedField._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DecoratedField::*)(bool)>(&::WaveHarmonic::Crest::DecoratedField::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180303f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DecoratedField*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::DecoratedField::_ctor(bool  isCustomFoldout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DecoratedField*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isCustomFoldout);
}
inline ::WaveHarmonic::Crest::DecoratedField* WaveHarmonic::Crest::DecoratedField::New_ctor(bool  isCustomFoldout)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::DecoratedField*>(isCustomFoldout));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::DecoratedField::DecoratedField()   {
}

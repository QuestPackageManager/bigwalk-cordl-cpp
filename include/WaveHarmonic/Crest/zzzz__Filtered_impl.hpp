#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Filtered.hpp"
#include "WaveHarmonic/Crest/zzzz__Decorator_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__Filtered_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Filtered_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::Filtered_Mode::Filtered_Mode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Filtered_Mode::Filtered_Mode()   {
}
constexpr ::WaveHarmonic::Crest::Filtered_Mode  WaveHarmonic::Crest::Filtered_Mode::Include{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::Filtered_Mode  WaveHarmonic::Crest::Filtered_Mode::Exclude{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::WaveHarmonic::Crest::Filtered._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Filtered::*)(int32_t)>(&::WaveHarmonic::Crest::Filtered::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180303f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Filtered*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::Filtered::_ctor(int32_t  unset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Filtered*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unset);
}
inline ::WaveHarmonic::Crest::Filtered* WaveHarmonic::Crest::Filtered::New_ctor(int32_t  unset)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Filtered*>(unset));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Filtered::Filtered()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioRTPCY.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_impl.hpp"
#include "GlobalNamespace/zzzz__AudioRTPCY_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCY._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRTPCY::*)(::GlobalNamespace::AudioRTPC_YAxisType, float_t)>(&::GlobalNamespace::AudioRTPCY::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18048c7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCY>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AudioRTPCY::_ctor(::GlobalNamespace::AudioRTPC_YAxisType  type, float_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCY>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type, val);
}
// Ctor Parameters [CppParam { name: "Type", ty: "::GlobalNamespace::AudioRTPC_YAxisType", modifiers: "", def_value: Some("{}") }, CppParam { name: "Value", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AudioRTPCY::AudioRTPCY(::GlobalNamespace::AudioRTPC_YAxisType  Type, float_t  Value) noexcept  {
this->Type = Type;
this->Value = Value;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioRTPCY::AudioRTPCY()   {
}

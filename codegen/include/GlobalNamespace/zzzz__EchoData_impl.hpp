#pragma once
// IWYU pragma private; include "GlobalNamespace/EchoData.hpp"
#include "GlobalNamespace/zzzz__EchoData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EchoData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EchoData::*)(float_t, float_t, float_t)>(&::GlobalNamespace::EchoData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d5770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EchoData>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EchoData::_ctor(float_t  amount, float_t  delay, float_t  decay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EchoData>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, amount, delay, decay);
}
// Ctor Parameters [CppParam { name: "Amount", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Delay", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Decay", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EchoData::EchoData(float_t  Amount, float_t  Delay, float_t  Decay) noexcept  {
this->Amount = Amount;
this->Delay = Delay;
this->Decay = Decay;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EchoData::EchoData()   {
}

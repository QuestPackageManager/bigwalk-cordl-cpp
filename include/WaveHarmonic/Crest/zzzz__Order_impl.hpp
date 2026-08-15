#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Order.hpp"
#include "WaveHarmonic/Crest/zzzz__Decorator_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__Order_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Order_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::Order_Placement::Order_Placement(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Order_Placement::Order_Placement()   {
}
constexpr ::WaveHarmonic::Crest::Order_Placement  WaveHarmonic::Crest::Order_Placement::Heading{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::Order_Placement  WaveHarmonic::Crest::Order_Placement::Below{static_cast<int32_t>(0x1)};
constexpr ::WaveHarmonic::Crest::Order_Placement  WaveHarmonic::Crest::Order_Placement::Above{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::WaveHarmonic::Crest::Order._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Order::*)(::StringW, ::WaveHarmonic::Crest::Order_Placement)>(&::WaveHarmonic::Crest::Order::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180303f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Order*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::WaveHarmonic::Crest::Order_Placement>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::Order::_ctor(::StringW  target, ::WaveHarmonic::Crest::Order_Placement  placement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Order*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::WaveHarmonic::Crest::Order_Placement>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, placement);
}
inline ::WaveHarmonic::Crest::Order* WaveHarmonic::Crest::Order::New_ctor(::StringW  target, ::WaveHarmonic::Crest::Order_Placement  placement)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Order*>(target, placement));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Order::Order()   {
}

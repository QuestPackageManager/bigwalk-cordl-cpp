#pragma once
// IWYU pragma private; include "Dissonance/ILossEstimator.hpp"
#include "Dissonance/zzzz__ILossEstimator_def.hpp"
//  Writing Method size for method: ::Dissonance::ILossEstimator.get_PacketLoss
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::ILossEstimator::*)()>(&::Dissonance::ILossEstimator::get_PacketLoss)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::ILossEstimator*>(),
                    {::i2c::class_of<::Dissonance::ILossEstimator*>(), 0}
                ));
    return ___internal_method;
  }
};
inline float_t Dissonance::ILossEstimator::get_PacketLoss()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::ILossEstimator*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}

#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Splines/IReceiveSplineChangeMessages.hpp"
#include "WaveHarmonic/Crest/Splines/zzzz__IReceiveSplineChangeMessages_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::IReceiveSplineChangeMessages.OnSplineChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::IReceiveSplineChangeMessages::*)()>(&::WaveHarmonic::Crest::Splines::IReceiveSplineChangeMessages::OnSplineChange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Splines::IReceiveSplineChangeMessages*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Splines::IReceiveSplineChangeMessages*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::Splines::IReceiveSplineChangeMessages::OnSplineChange()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Splines::IReceiveSplineChangeMessages*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}

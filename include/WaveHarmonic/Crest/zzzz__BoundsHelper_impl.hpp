#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/BoundsHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__BoundsHelper_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::BoundsHelper.DebugDraw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Bounds)>(&::WaveHarmonic::Crest::BoundsHelper::DebugDraw)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x18259dc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::BoundsHelper*>(),
                        {"DebugDraw", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::BoundsHelper::DebugDraw(::UnityEngine::Bounds  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::BoundsHelper*>(),
                        {"DebugDraw", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, b);
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::BoundsHelper::BoundsHelper()   {
}

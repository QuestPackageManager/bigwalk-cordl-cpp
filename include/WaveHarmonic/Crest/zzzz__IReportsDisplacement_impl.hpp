#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/IReportsDisplacement.hpp"
#include "WaveHarmonic/Crest/zzzz__IReportsDisplacement_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::IReportsDisplacement.ReportDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::IReportsDisplacement::*)(::WaveHarmonic::Crest::WaterRenderer*, ::by_ref<::UnityEngine::Rect>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::WaveHarmonic::Crest::IReportsDisplacement::ReportDisplacement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::IReportsDisplacement*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::IReportsDisplacement*>(), 0}
                ));
    return ___internal_method;
  }
};
inline bool WaveHarmonic::Crest::IReportsDisplacement::ReportDisplacement(::WaveHarmonic::Crest::WaterRenderer*  water, ::by_ref<::UnityEngine::Rect>  bounds, ::by_ref<float_t>  horizontal, ::by_ref<float_t>  vertical)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::IReportsDisplacement*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, water, bounds, horizontal, vertical);
}

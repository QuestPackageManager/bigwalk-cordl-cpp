#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/IReportsHeight.hpp"
#include "WaveHarmonic/Crest/zzzz__IReportsHeight_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::IReportsHeight.ReportHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::IReportsHeight::*)(::WaveHarmonic::Crest::WaterRenderer*, ::by_ref<::UnityEngine::Rect>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::WaveHarmonic::Crest::IReportsHeight::ReportHeight)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::IReportsHeight*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::IReportsHeight*>(), 0}
                ));
    return ___internal_method;
  }
};
inline bool WaveHarmonic::Crest::IReportsHeight::ReportHeight(::WaveHarmonic::Crest::WaterRenderer*  water, ::by_ref<::UnityEngine::Rect>  bounds, ::by_ref<float_t>  minimum, ::by_ref<float_t>  maximum)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::IReportsHeight*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, water, bounds, minimum, maximum);
}

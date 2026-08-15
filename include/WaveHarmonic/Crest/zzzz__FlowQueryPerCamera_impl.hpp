#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/FlowQueryPerCamera.hpp"
#include "WaveHarmonic/Crest/zzzz__QueryPerCameraSimple_1_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__FlowQueryPerCamera_def.hpp"
#include "WaveHarmonic/Crest/zzzz__FlowQuery_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IFlowProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IQueryProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::FlowQueryPerCamera._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FlowQueryPerCamera::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::FlowQueryPerCamera::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182575530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FlowQueryPerCamera*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::FlowQueryPerCamera::_ctor(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FlowQueryPerCamera*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline ::WaveHarmonic::Crest::FlowQueryPerCamera* WaveHarmonic::Crest::FlowQueryPerCamera::New_ctor(::WaveHarmonic::Crest::WaterRenderer*  water)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::FlowQueryPerCamera*>(water));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IFlowProvider"
constexpr  WaveHarmonic::Crest::FlowQueryPerCamera::operator ::WaveHarmonic::Crest::IFlowProvider*() noexcept {
return static_cast<::WaveHarmonic::Crest::IFlowProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::IFlowProvider"
constexpr ::WaveHarmonic::Crest::IFlowProvider* WaveHarmonic::Crest::FlowQueryPerCamera::i___WaveHarmonic__Crest__IFlowProvider() noexcept {
return static_cast<::WaveHarmonic::Crest::IFlowProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryProvider"
constexpr  WaveHarmonic::Crest::FlowQueryPerCamera::operator ::WaveHarmonic::Crest::IQueryProvider*() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::IQueryProvider"
constexpr ::WaveHarmonic::Crest::IQueryProvider* WaveHarmonic::Crest::FlowQueryPerCamera::i___WaveHarmonic__Crest__IQueryProvider() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::FlowQueryPerCamera::FlowQueryPerCamera()   {
}

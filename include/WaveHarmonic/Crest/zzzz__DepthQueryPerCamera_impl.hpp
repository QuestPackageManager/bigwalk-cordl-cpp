#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/DepthQueryPerCamera.hpp"
#include "WaveHarmonic/Crest/zzzz__QueryPerCameraSimple_1_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__DepthQueryPerCamera_def.hpp"
#include "WaveHarmonic/Crest/zzzz__DepthQuery_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IDepthProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IQueryProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthQueryPerCamera._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthQueryPerCamera::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::DepthQueryPerCamera::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182574ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthQueryPerCamera*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::DepthQueryPerCamera::_ctor(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthQueryPerCamera*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline ::WaveHarmonic::Crest::DepthQueryPerCamera* WaveHarmonic::Crest::DepthQueryPerCamera::New_ctor(::WaveHarmonic::Crest::WaterRenderer*  water)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::DepthQueryPerCamera*>(water));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IDepthProvider"
constexpr  WaveHarmonic::Crest::DepthQueryPerCamera::operator ::WaveHarmonic::Crest::IDepthProvider*() noexcept {
return static_cast<::WaveHarmonic::Crest::IDepthProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::IDepthProvider"
constexpr ::WaveHarmonic::Crest::IDepthProvider* WaveHarmonic::Crest::DepthQueryPerCamera::i___WaveHarmonic__Crest__IDepthProvider() noexcept {
return static_cast<::WaveHarmonic::Crest::IDepthProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryProvider"
constexpr  WaveHarmonic::Crest::DepthQueryPerCamera::operator ::WaveHarmonic::Crest::IQueryProvider*() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::IQueryProvider"
constexpr ::WaveHarmonic::Crest::IQueryProvider* WaveHarmonic::Crest::DepthQueryPerCamera::i___WaveHarmonic__Crest__IQueryProvider() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::DepthQueryPerCamera::DepthQueryPerCamera()   {
}

#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Portals/PortalRenderer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WaveHarmonic/Crest/Portals/zzzz__PortalRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::Portals::PortalRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Portals::PortalRenderer::*)()>(&::WaveHarmonic::Crest::Portals::PortalRenderer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Portals::PortalRenderer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::Portals::PortalRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Portals::PortalRenderer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::Portals::PortalRenderer* WaveHarmonic::Crest::Portals::PortalRenderer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Portals::PortalRenderer*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Portals::PortalRenderer::PortalRenderer()   {
}

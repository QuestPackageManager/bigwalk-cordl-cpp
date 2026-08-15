#pragma once
// IWYU pragma private; include "GlobalNamespace/PropRendering.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PropRendering_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowCastingMode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PropRendering.SetPropShadowCastingMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::Prop*, ::UnityEngine::Rendering::ShadowCastingMode)>(&::GlobalNamespace::PropRendering::SetPropShadowCastingMode)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180384ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropRendering*>(),
                        {"SetPropShadowCastingMode", {}, {::i2c::type_of<::GlobalNamespace::Prop*>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PropRendering::SetPropShadowCastingMode(::GlobalNamespace::Prop*  prop, ::UnityEngine::Rendering::ShadowCastingMode  shadowCastingMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropRendering*>(),
                        {"SetPropShadowCastingMode", {}, {::i2c::type_of<::GlobalNamespace::Prop*>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, prop, shadowCastingMode);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropRendering::PropRendering()   {
}

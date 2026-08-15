#pragma once
// IWYU pragma private; include "AmplifyImpostors/DeferredBuffers.hpp"
#include "AmplifyImpostors/zzzz__DeferredBuffers_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::AmplifyImpostors::DeferredBuffers::DeferredBuffers(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::AmplifyImpostors::DeferredBuffers::DeferredBuffers()   {
}
constexpr ::AmplifyImpostors::DeferredBuffers  AmplifyImpostors::DeferredBuffers::AlbedoAlpha{static_cast<int32_t>(0x1)};
constexpr ::AmplifyImpostors::DeferredBuffers  AmplifyImpostors::DeferredBuffers::SpecularSmoothness{static_cast<int32_t>(0x2)};
constexpr ::AmplifyImpostors::DeferredBuffers  AmplifyImpostors::DeferredBuffers::NormalDepth{static_cast<int32_t>(0x4)};
constexpr ::AmplifyImpostors::DeferredBuffers  AmplifyImpostors::DeferredBuffers::EmissionOcclusion{static_cast<int32_t>(0x8)};

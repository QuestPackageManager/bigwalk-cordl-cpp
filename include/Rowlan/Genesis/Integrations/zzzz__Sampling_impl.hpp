#pragma once
// IWYU pragma private; include "Rowlan/Genesis/Integrations/Sampling.hpp"
#include "Rowlan/Genesis/Integrations/zzzz__Sampling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rowlan::Genesis::Integrations::Sampling::Sampling(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::Integrations::Sampling::Sampling()   {
}
constexpr ::Rowlan::Genesis::Integrations::Sampling  Rowlan::Genesis::Integrations::Sampling::Discrete{static_cast<int32_t>(0x0)};
constexpr ::Rowlan::Genesis::Integrations::Sampling  Rowlan::Genesis::Integrations::Sampling::Interpolate{static_cast<int32_t>(0x1)};

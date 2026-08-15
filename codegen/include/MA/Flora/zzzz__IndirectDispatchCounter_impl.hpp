#pragma once
// IWYU pragma private; include "MA/Flora/IndirectDispatchCounter.hpp"
#include "MA/Flora/zzzz__IndirectDispatchCounter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::IndirectDispatchCounter::IndirectDispatchCounter(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::IndirectDispatchCounter::IndirectDispatchCounter()   {
}
constexpr ::MA::Flora::IndirectDispatchCounter  MA::Flora::IndirectDispatchCounter::VisibleDraws{static_cast<int32_t>(0x0)};
constexpr ::MA::Flora::IndirectDispatchCounter  MA::Flora::IndirectDispatchCounter::VisibleInstances{static_cast<int32_t>(0x1)};
constexpr ::MA::Flora::IndirectDispatchCounter  MA::Flora::IndirectDispatchCounter::OccludedInstances{static_cast<int32_t>(0x2)};
constexpr ::MA::Flora::IndirectDispatchCounter  MA::Flora::IndirectDispatchCounter::Count{static_cast<int32_t>(0x3)};

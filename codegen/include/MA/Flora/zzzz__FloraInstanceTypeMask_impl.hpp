#pragma once
// IWYU pragma private; include "MA/Flora/FloraInstanceTypeMask.hpp"
#include "MA/Flora/zzzz__FloraInstanceTypeMask_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::FloraInstanceTypeMask::FloraInstanceTypeMask(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraInstanceTypeMask::FloraInstanceTypeMask()   {
}
constexpr ::MA::Flora::FloraInstanceTypeMask  MA::Flora::FloraInstanceTypeMask::Default{static_cast<uint32_t>(0x0u)};
constexpr ::MA::Flora::FloraInstanceTypeMask  MA::Flora::FloraInstanceTypeMask::TerrainTree{static_cast<uint32_t>(0x800000u)};
constexpr ::MA::Flora::FloraInstanceTypeMask  MA::Flora::FloraInstanceTypeMask::TerrainDetail{static_cast<uint32_t>(0x1000000u)};
constexpr ::MA::Flora::FloraInstanceTypeMask  MA::Flora::FloraInstanceTypeMask::Any{static_cast<uint32_t>(0x1800000u)};

#pragma once
// IWYU pragma private; include "MA/Flora/IndirectStateFlags.hpp"
#include "MA/Flora/zzzz__IndirectStateFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::IndirectStateFlags::IndirectStateFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::IndirectStateFlags::IndirectStateFlags()   {
}
constexpr ::MA::Flora::IndirectStateFlags  MA::Flora::IndirectStateFlags::None{static_cast<int32_t>(0x0)};
constexpr ::MA::Flora::IndirectStateFlags  MA::Flora::IndirectStateFlags::HasFadeKeyword{static_cast<int32_t>(0x1)};
constexpr ::MA::Flora::IndirectStateFlags  MA::Flora::IndirectStateFlags::HasMotion{static_cast<int32_t>(0x2)};
constexpr ::MA::Flora::IndirectStateFlags  MA::Flora::IndirectStateFlags::HasFlippedWinding{static_cast<int32_t>(0x4)};
constexpr ::MA::Flora::IndirectStateFlags  MA::Flora::IndirectStateFlags::Count{static_cast<int32_t>(0x3)};
constexpr ::MA::Flora::IndirectStateFlags  MA::Flora::IndirectStateFlags::All{static_cast<int32_t>(0x7)};
constexpr ::MA::Flora::IndirectStateFlags  MA::Flora::IndirectStateFlags::KeyCount{static_cast<int32_t>(0x8)};

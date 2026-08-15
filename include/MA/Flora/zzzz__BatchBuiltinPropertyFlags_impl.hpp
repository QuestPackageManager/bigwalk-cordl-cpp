#pragma once
// IWYU pragma private; include "MA/Flora/BatchBuiltinPropertyFlags.hpp"
#include "MA/Flora/zzzz__BatchBuiltinPropertyFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::BatchBuiltinPropertyFlags::BatchBuiltinPropertyFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::BatchBuiltinPropertyFlags::BatchBuiltinPropertyFlags()   {
}
constexpr ::MA::Flora::BatchBuiltinPropertyFlags  MA::Flora::BatchBuiltinPropertyFlags::None{static_cast<int32_t>(0x0)};
constexpr ::MA::Flora::BatchBuiltinPropertyFlags  MA::Flora::BatchBuiltinPropertyFlags::LocalToWorld{static_cast<int32_t>(0x1)};
constexpr ::MA::Flora::BatchBuiltinPropertyFlags  MA::Flora::BatchBuiltinPropertyFlags::PrevLocalToWorld{static_cast<int32_t>(0x2)};
constexpr ::MA::Flora::BatchBuiltinPropertyFlags  MA::Flora::BatchBuiltinPropertyFlags::RandomID{static_cast<int32_t>(0x4)};
constexpr ::MA::Flora::BatchBuiltinPropertyFlags  MA::Flora::BatchBuiltinPropertyFlags::VariationColor{static_cast<int32_t>(0x8)};
constexpr ::MA::Flora::BatchBuiltinPropertyFlags  MA::Flora::BatchBuiltinPropertyFlags::LightmapST{static_cast<int32_t>(0x10)};
constexpr ::MA::Flora::BatchBuiltinPropertyFlags  MA::Flora::BatchBuiltinPropertyFlags::ShCoefficients{static_cast<int32_t>(0x20)};
constexpr ::MA::Flora::BatchBuiltinPropertyFlags  MA::Flora::BatchBuiltinPropertyFlags::EntityId{static_cast<int32_t>(0x40)};
constexpr ::MA::Flora::BatchBuiltinPropertyFlags  MA::Flora::BatchBuiltinPropertyFlags::Required{static_cast<int32_t>(0x1)};

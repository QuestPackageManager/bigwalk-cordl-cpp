#pragma once
// IWYU pragma private; include "MA/Flora/BatchTransformAddresses.hpp"
#include "MA/Flora/zzzz__BatchTransformAddresses_def.hpp"
// Ctor Parameters [CppParam { name: "localToWorld", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "worldToLocal", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "prevLocalToWorld", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "prevWorldToLocal", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::BatchTransformAddresses::BatchTransformAddresses(uint32_t  localToWorld, uint32_t  worldToLocal, uint32_t  prevLocalToWorld, uint32_t  prevWorldToLocal) noexcept  {
this->localToWorld = localToWorld;
this->worldToLocal = worldToLocal;
this->prevLocalToWorld = prevLocalToWorld;
this->prevWorldToLocal = prevWorldToLocal;
}
// Ctor Parameters []
constexpr ::MA::Flora::BatchTransformAddresses::BatchTransformAddresses()   {
}

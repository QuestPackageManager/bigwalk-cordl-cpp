#pragma once
// IWYU pragma private; include "MA/Flora/BatchCullingAddresses.hpp"
#include "MA/Flora/zzzz__BatchCullingAddresses_def.hpp"
// Ctor Parameters [CppParam { name: "localToWorld", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "randomID", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unused0", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unused1", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::BatchCullingAddresses::BatchCullingAddresses(uint32_t  localToWorld, uint32_t  randomID, uint32_t  unused0, uint32_t  unused1) noexcept  {
this->localToWorld = localToWorld;
this->randomID = randomID;
this->unused0 = unused0;
this->unused1 = unused1;
}
// Ctor Parameters []
constexpr ::MA::Flora::BatchCullingAddresses::BatchCullingAddresses()   {
}

#pragma once
// IWYU pragma private; include "Mirror/NetworkIdentitySerialization.hpp"
#include "Mirror/zzzz__NetworkIdentitySerialization_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
// Ctor Parameters [CppParam { name: "tick", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ownerWriter", ty: "::Mirror::NetworkWriter*", modifiers: "", def_value: Some("{}") }, CppParam { name: "observersWriter", ty: "::Mirror::NetworkWriter*", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::NetworkIdentitySerialization::NetworkIdentitySerialization(int32_t  tick, ::Mirror::NetworkWriter*  ownerWriter, ::Mirror::NetworkWriter*  observersWriter) noexcept  {
this->tick = tick;
this->ownerWriter = ownerWriter;
this->observersWriter = observersWriter;
}
// Ctor Parameters []
constexpr ::Mirror::NetworkIdentitySerialization::NetworkIdentitySerialization()   {
}

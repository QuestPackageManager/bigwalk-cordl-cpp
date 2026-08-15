#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUDrivenMaterialFilterEntry.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenBitOpType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenMaterialFilterEntry_def.hpp"
// Ctor Parameters [CppParam { name: "op", ty: "::UnityEngine::Rendering::GPUDrivenBitOpType", modifiers: "", def_value: Some("{}") }, CppParam { name: "minQueueValue", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxQueueValue", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "keyTag", ty: "::UnityEngine::Rendering::ShaderTagId", modifiers: "", def_value: Some("{}") }, CppParam { name: "valueTag", ty: "::UnityEngine::Rendering::ShaderTagId", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "keyword", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUDrivenMaterialFilterEntry::GPUDrivenMaterialFilterEntry(::UnityEngine::Rendering::GPUDrivenBitOpType  op, int32_t  minQueueValue, int32_t  maxQueueValue, ::UnityEngine::Rendering::ShaderTagId  keyTag, ::UnityEngine::Rendering::ShaderTagId  valueTag, int32_t  flags, ::StringW  keyword) noexcept  {
this->op = op;
this->minQueueValue = minQueueValue;
this->maxQueueValue = maxQueueValue;
this->keyTag = keyTag;
this->valueTag = valueTag;
this->flags = flags;
this->keyword = keyword;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUDrivenMaterialFilterEntry::GPUDrivenMaterialFilterEntry()   {
}

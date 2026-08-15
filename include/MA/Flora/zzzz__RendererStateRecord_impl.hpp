#pragma once
// IWYU pragma private; include "MA/Flora/RendererStateRecord.hpp"
#include "MA/Flora/zzzz__BatchDomainIndex_impl.hpp"
#include "MA/Flora/zzzz__RendererStateKey_impl.hpp"
#include "MA/Flora/zzzz__TemplateCapabilityProfile_impl.hpp"
#include "MA/Flora/zzzz__TemplateRenderType_impl.hpp"
#include "MA/Flora/zzzz__RendererStateRecord_def.hpp"
// Ctor Parameters [CppParam { name: "Key", ty: "::MA::Flora::RendererStateKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "DescriptorCount", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "BatchDomainIndex", ty: "::MA::Flora::BatchDomainIndex", modifiers: "", def_value: Some("{}") }, CppParam { name: "LodIndex", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Type", ty: "::MA::Flora::TemplateRenderType", modifiers: "", def_value: Some("{}") }, CppParam { name: "CapabilityProfile", ty: "::MA::Flora::TemplateCapabilityProfile", modifiers: "", def_value: Some("{}") }, CppParam { name: "RefCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::RendererStateRecord::RendererStateRecord(::MA::Flora::RendererStateKey  Key, uint16_t  DescriptorCount, ::MA::Flora::BatchDomainIndex  BatchDomainIndex, uint8_t  LodIndex, ::MA::Flora::TemplateRenderType  Type, ::MA::Flora::TemplateCapabilityProfile  CapabilityProfile, int32_t  RefCount) noexcept  {
this->Key = Key;
this->DescriptorCount = DescriptorCount;
this->BatchDomainIndex = BatchDomainIndex;
this->LodIndex = LodIndex;
this->Type = Type;
this->CapabilityProfile = CapabilityProfile;
this->RefCount = RefCount;
}
// Ctor Parameters []
constexpr ::MA::Flora::RendererStateRecord::RendererStateRecord()   {
}

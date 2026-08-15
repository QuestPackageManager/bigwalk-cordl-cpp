#pragma once
// IWYU pragma private; include "MA/Flora/SourceTemplateBinding.hpp"
#include "MA/Flora/zzzz__SourceRecordIndex_impl.hpp"
#include "MA/Flora/zzzz__TemplateIndex_impl.hpp"
#include "MA/Flora/zzzz__SourceTemplateBinding_def.hpp"
// Ctor Parameters [CppParam { name: "SourceRecord", ty: "::MA::Flora::SourceRecordIndex", modifiers: "", def_value: Some("{}") }, CppParam { name: "Template", ty: "::MA::Flora::TemplateIndex", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::SourceTemplateBinding::SourceTemplateBinding(::MA::Flora::SourceRecordIndex  SourceRecord, ::MA::Flora::TemplateIndex  Template) noexcept  {
this->SourceRecord = SourceRecord;
this->Template = Template;
}
// Ctor Parameters []
constexpr ::MA::Flora::SourceTemplateBinding::SourceTemplateBinding()   {
}

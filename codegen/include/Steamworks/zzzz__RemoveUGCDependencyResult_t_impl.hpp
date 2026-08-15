#pragma once
// IWYU pragma private; include "Steamworks/RemoveUGCDependencyResult_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_impl.hpp"
#include "Steamworks/zzzz__RemoveUGCDependencyResult_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nPublishedFileId", ty: "::Steamworks::PublishedFileId_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nChildPublishedFileId", ty: "::Steamworks::PublishedFileId_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::RemoveUGCDependencyResult_t::RemoveUGCDependencyResult_t(::Steamworks::EResult  m_eResult, ::Steamworks::PublishedFileId_t  m_nPublishedFileId, ::Steamworks::PublishedFileId_t  m_nChildPublishedFileId) noexcept  {
this->m_eResult = m_eResult;
this->m_nPublishedFileId = m_nPublishedFileId;
this->m_nChildPublishedFileId = m_nChildPublishedFileId;
}
// Ctor Parameters []
constexpr ::Steamworks::RemoveUGCDependencyResult_t::RemoveUGCDependencyResult_t()   {
}

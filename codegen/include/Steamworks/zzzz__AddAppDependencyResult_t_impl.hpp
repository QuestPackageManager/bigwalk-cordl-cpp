#pragma once
// IWYU pragma private; include "Steamworks/AddAppDependencyResult_t.hpp"
#include "Steamworks/zzzz__AppId_t_impl.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_impl.hpp"
#include "Steamworks/zzzz__AddAppDependencyResult_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nPublishedFileId", ty: "::Steamworks::PublishedFileId_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nAppID", ty: "::Steamworks::AppId_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::AddAppDependencyResult_t::AddAppDependencyResult_t(::Steamworks::EResult  m_eResult, ::Steamworks::PublishedFileId_t  m_nPublishedFileId, ::Steamworks::AppId_t  m_nAppID) noexcept  {
this->m_eResult = m_eResult;
this->m_nPublishedFileId = m_nPublishedFileId;
this->m_nAppID = m_nAppID;
}
// Ctor Parameters []
constexpr ::Steamworks::AddAppDependencyResult_t::AddAppDependencyResult_t()   {
}

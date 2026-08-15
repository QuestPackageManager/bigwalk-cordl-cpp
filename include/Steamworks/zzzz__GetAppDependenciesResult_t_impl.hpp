#pragma once
// IWYU pragma private; include "Steamworks/GetAppDependenciesResult_t.hpp"
#include "Steamworks/zzzz__AppId_t_impl.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_impl.hpp"
#include "Steamworks/zzzz__GetAppDependenciesResult_t_def.hpp"
#include "Steamworks/zzzz__AppId_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nPublishedFileId", ty: "::Steamworks::PublishedFileId_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_rgAppIDs", ty: "::ArrayW<::Steamworks::AppId_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nNumAppDependencies", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nTotalNumAppDependencies", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::GetAppDependenciesResult_t::GetAppDependenciesResult_t(::Steamworks::EResult  m_eResult, ::Steamworks::PublishedFileId_t  m_nPublishedFileId, ::ArrayW<::Steamworks::AppId_t>  m_rgAppIDs, uint32_t  m_nNumAppDependencies, uint32_t  m_nTotalNumAppDependencies) noexcept  {
this->m_eResult = m_eResult;
this->m_nPublishedFileId = m_nPublishedFileId;
this->m_rgAppIDs = m_rgAppIDs;
this->m_nNumAppDependencies = m_nNumAppDependencies;
this->m_nTotalNumAppDependencies = m_nTotalNumAppDependencies;
}
// Ctor Parameters []
constexpr ::Steamworks::GetAppDependenciesResult_t::GetAppDependenciesResult_t()   {
}

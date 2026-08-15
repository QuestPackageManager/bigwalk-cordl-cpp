#pragma once
// IWYU pragma private; include "Steamworks/RemoteStorageDeletePublishedFileResult_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_impl.hpp"
#include "Steamworks/zzzz__RemoteStorageDeletePublishedFileResult_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nPublishedFileId", ty: "::Steamworks::PublishedFileId_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::RemoteStorageDeletePublishedFileResult_t::RemoteStorageDeletePublishedFileResult_t(::Steamworks::EResult  m_eResult, ::Steamworks::PublishedFileId_t  m_nPublishedFileId) noexcept  {
this->m_eResult = m_eResult;
this->m_nPublishedFileId = m_nPublishedFileId;
}
// Ctor Parameters []
constexpr ::Steamworks::RemoteStorageDeletePublishedFileResult_t::RemoteStorageDeletePublishedFileResult_t()   {
}

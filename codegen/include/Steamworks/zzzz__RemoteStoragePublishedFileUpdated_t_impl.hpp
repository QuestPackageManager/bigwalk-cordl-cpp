#pragma once
// IWYU pragma private; include "Steamworks/RemoteStoragePublishedFileUpdated_t.hpp"
#include "Steamworks/zzzz__AppId_t_impl.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_impl.hpp"
#include "Steamworks/zzzz__RemoteStoragePublishedFileUpdated_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_nPublishedFileId", ty: "::Steamworks::PublishedFileId_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nAppID", ty: "::Steamworks::AppId_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ulUnused", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::RemoteStoragePublishedFileUpdated_t::RemoteStoragePublishedFileUpdated_t(::Steamworks::PublishedFileId_t  m_nPublishedFileId, ::Steamworks::AppId_t  m_nAppID, uint64_t  m_ulUnused) noexcept  {
this->m_nPublishedFileId = m_nPublishedFileId;
this->m_nAppID = m_nAppID;
this->m_ulUnused = m_ulUnused;
}
// Ctor Parameters []
constexpr ::Steamworks::RemoteStoragePublishedFileUpdated_t::RemoteStoragePublishedFileUpdated_t()   {
}

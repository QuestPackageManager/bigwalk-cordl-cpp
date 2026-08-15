#pragma once
// IWYU pragma private; include "Steamworks/RemoteStoragePublishedFileUnsubscribed_t.hpp"
#include "Steamworks/zzzz__AppId_t_impl.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_impl.hpp"
#include "Steamworks/zzzz__RemoteStoragePublishedFileUnsubscribed_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_nPublishedFileId", ty: "::Steamworks::PublishedFileId_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nAppID", ty: "::Steamworks::AppId_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::RemoteStoragePublishedFileUnsubscribed_t::RemoteStoragePublishedFileUnsubscribed_t(::Steamworks::PublishedFileId_t  m_nPublishedFileId, ::Steamworks::AppId_t  m_nAppID) noexcept  {
this->m_nPublishedFileId = m_nPublishedFileId;
this->m_nAppID = m_nAppID;
}
// Ctor Parameters []
constexpr ::Steamworks::RemoteStoragePublishedFileUnsubscribed_t::RemoteStoragePublishedFileUnsubscribed_t()   {
}

#pragma once
// IWYU pragma private; include "Steamworks/UserFavoriteItemsListChanged_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_impl.hpp"
#include "Steamworks/zzzz__UserFavoriteItemsListChanged_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_nPublishedFileId", ty: "::Steamworks::PublishedFileId_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bWasAddRequest", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::UserFavoriteItemsListChanged_t::UserFavoriteItemsListChanged_t(::Steamworks::PublishedFileId_t  m_nPublishedFileId, ::Steamworks::EResult  m_eResult, bool  m_bWasAddRequest) noexcept  {
this->m_nPublishedFileId = m_nPublishedFileId;
this->m_eResult = m_eResult;
this->m_bWasAddRequest = m_bWasAddRequest;
}
// Ctor Parameters []
constexpr ::Steamworks::UserFavoriteItemsListChanged_t::UserFavoriteItemsListChanged_t()   {
}

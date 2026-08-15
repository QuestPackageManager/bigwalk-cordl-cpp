#pragma once
// IWYU pragma private; include "Steamworks/ItemInstalled_t.hpp"
#include "Steamworks/zzzz__AppId_t_impl.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_impl.hpp"
#include "Steamworks/zzzz__ItemInstalled_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_unAppID", ty: "::Steamworks::AppId_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nPublishedFileId", ty: "::Steamworks::PublishedFileId_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ItemInstalled_t::ItemInstalled_t(::Steamworks::AppId_t  m_unAppID, ::Steamworks::PublishedFileId_t  m_nPublishedFileId) noexcept  {
this->m_unAppID = m_unAppID;
this->m_nPublishedFileId = m_nPublishedFileId;
}
// Ctor Parameters []
constexpr ::Steamworks::ItemInstalled_t::ItemInstalled_t()   {
}

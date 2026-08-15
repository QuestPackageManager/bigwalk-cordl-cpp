#pragma once
// IWYU pragma private; include "Steamworks/RemoteStorageSetUserPublishedFileActionResult_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__EWorkshopFileAction_impl.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_impl.hpp"
#include "Steamworks/zzzz__RemoteStorageSetUserPublishedFileActionResult_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nPublishedFileId", ty: "::Steamworks::PublishedFileId_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eAction", ty: "::Steamworks::EWorkshopFileAction", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::RemoteStorageSetUserPublishedFileActionResult_t::RemoteStorageSetUserPublishedFileActionResult_t(::Steamworks::EResult  m_eResult, ::Steamworks::PublishedFileId_t  m_nPublishedFileId, ::Steamworks::EWorkshopFileAction  m_eAction) noexcept  {
this->m_eResult = m_eResult;
this->m_nPublishedFileId = m_nPublishedFileId;
this->m_eAction = m_eAction;
}
// Ctor Parameters []
constexpr ::Steamworks::RemoteStorageSetUserPublishedFileActionResult_t::RemoteStorageSetUserPublishedFileActionResult_t()   {
}

#pragma once
// IWYU pragma private; include "Steamworks/SteamAppUninstalled_t.hpp"
#include "Steamworks/zzzz__AppId_t_impl.hpp"
#include "Steamworks/zzzz__SteamAppUninstalled_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_nAppID", ty: "::Steamworks::AppId_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_iInstallFolderIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SteamAppUninstalled_t::SteamAppUninstalled_t(::Steamworks::AppId_t  m_nAppID, int32_t  m_iInstallFolderIndex) noexcept  {
this->m_nAppID = m_nAppID;
this->m_iInstallFolderIndex = m_iInstallFolderIndex;
}
// Ctor Parameters []
constexpr ::Steamworks::SteamAppUninstalled_t::SteamAppUninstalled_t()   {
}

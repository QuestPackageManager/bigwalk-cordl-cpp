#pragma once
// IWYU pragma private; include "Steamworks/AvatarImageLoaded_t.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__AvatarImageLoaded_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_steamID", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_iImage", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_iWide", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_iTall", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::AvatarImageLoaded_t::AvatarImageLoaded_t(::Steamworks::CSteamID  m_steamID, int32_t  m_iImage, int32_t  m_iWide, int32_t  m_iTall) noexcept  {
this->m_steamID = m_steamID;
this->m_iImage = m_iImage;
this->m_iWide = m_iWide;
this->m_iTall = m_iTall;
}
// Ctor Parameters []
constexpr ::Steamworks::AvatarImageLoaded_t::AvatarImageLoaded_t()   {
}

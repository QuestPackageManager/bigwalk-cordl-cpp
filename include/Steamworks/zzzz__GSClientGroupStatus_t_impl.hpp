#pragma once
// IWYU pragma private; include "Steamworks/GSClientGroupStatus_t.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__GSClientGroupStatus_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_SteamIDUser", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SteamIDGroup", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bMember", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bOfficer", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::GSClientGroupStatus_t::GSClientGroupStatus_t(::Steamworks::CSteamID  m_SteamIDUser, ::Steamworks::CSteamID  m_SteamIDGroup, bool  m_bMember, bool  m_bOfficer) noexcept  {
this->m_SteamIDUser = m_SteamIDUser;
this->m_SteamIDGroup = m_SteamIDGroup;
this->m_bMember = m_bMember;
this->m_bOfficer = m_bOfficer;
}
// Ctor Parameters []
constexpr ::Steamworks::GSClientGroupStatus_t::GSClientGroupStatus_t()   {
}

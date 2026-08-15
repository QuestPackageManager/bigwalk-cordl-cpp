#pragma once
// IWYU pragma private; include "Steamworks/GSClientKick_t.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__EDenyReason_impl.hpp"
#include "Steamworks/zzzz__GSClientKick_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_SteamID", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eDenyReason", ty: "::Steamworks::EDenyReason", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::GSClientKick_t::GSClientKick_t(::Steamworks::CSteamID  m_SteamID, ::Steamworks::EDenyReason  m_eDenyReason) noexcept  {
this->m_SteamID = m_SteamID;
this->m_eDenyReason = m_eDenyReason;
}
// Ctor Parameters []
constexpr ::Steamworks::GSClientKick_t::GSClientKick_t()   {
}

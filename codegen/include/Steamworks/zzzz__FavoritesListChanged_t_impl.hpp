#pragma once
// IWYU pragma private; include "Steamworks/FavoritesListChanged_t.hpp"
#include "Steamworks/zzzz__AccountID_t_impl.hpp"
#include "Steamworks/zzzz__FavoritesListChanged_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_nIP", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nQueryPort", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nConnPort", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nAppID", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nFlags", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bAdd", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_unAccountId", ty: "::Steamworks::AccountID_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::FavoritesListChanged_t::FavoritesListChanged_t(uint32_t  m_nIP, uint32_t  m_nQueryPort, uint32_t  m_nConnPort, uint32_t  m_nAppID, uint32_t  m_nFlags, bool  m_bAdd, ::Steamworks::AccountID_t  m_unAccountId) noexcept  {
this->m_nIP = m_nIP;
this->m_nQueryPort = m_nQueryPort;
this->m_nConnPort = m_nConnPort;
this->m_nAppID = m_nAppID;
this->m_nFlags = m_nFlags;
this->m_bAdd = m_bAdd;
this->m_unAccountId = m_unAccountId;
}
// Ctor Parameters []
constexpr ::Steamworks::FavoritesListChanged_t::FavoritesListChanged_t()   {
}

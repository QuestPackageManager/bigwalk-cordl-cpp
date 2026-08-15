#pragma once
// IWYU pragma private; include "Steamworks/SteamItemDetails_t.hpp"
#include "Steamworks/zzzz__SteamItemDef_t_impl.hpp"
#include "Steamworks/zzzz__SteamItemInstanceID_t_impl.hpp"
#include "Steamworks/zzzz__SteamItemDetails_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_itemId", ty: "::Steamworks::SteamItemInstanceID_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_iDefinition", ty: "::Steamworks::SteamItemDef_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_unQuantity", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_unFlags", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SteamItemDetails_t::SteamItemDetails_t(::Steamworks::SteamItemInstanceID_t  m_itemId, ::Steamworks::SteamItemDef_t  m_iDefinition, uint16_t  m_unQuantity, uint16_t  m_unFlags) noexcept  {
this->m_itemId = m_itemId;
this->m_iDefinition = m_iDefinition;
this->m_unQuantity = m_unQuantity;
this->m_unFlags = m_unFlags;
}
// Ctor Parameters []
constexpr ::Steamworks::SteamItemDetails_t::SteamItemDetails_t()   {
}

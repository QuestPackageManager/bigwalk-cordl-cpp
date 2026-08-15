#pragma once
// IWYU pragma private; include "Steamworks/SteamInventoryEligiblePromoItemDefIDs_t.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__SteamInventoryEligiblePromoItemDefIDs_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_result", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_steamID", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_numEligiblePromoItemDefs", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bCachedData", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SteamInventoryEligiblePromoItemDefIDs_t::SteamInventoryEligiblePromoItemDefIDs_t(::Steamworks::EResult  m_result, ::Steamworks::CSteamID  m_steamID, int32_t  m_numEligiblePromoItemDefs, bool  m_bCachedData) noexcept  {
this->m_result = m_result;
this->m_steamID = m_steamID;
this->m_numEligiblePromoItemDefs = m_numEligiblePromoItemDefs;
this->m_bCachedData = m_bCachedData;
}
// Ctor Parameters []
constexpr ::Steamworks::SteamInventoryEligiblePromoItemDefIDs_t::SteamInventoryEligiblePromoItemDefIDs_t()   {
}

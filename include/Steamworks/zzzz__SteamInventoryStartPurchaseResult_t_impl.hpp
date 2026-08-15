#pragma once
// IWYU pragma private; include "Steamworks/SteamInventoryStartPurchaseResult_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__SteamInventoryStartPurchaseResult_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_result", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ulOrderID", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ulTransID", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SteamInventoryStartPurchaseResult_t::SteamInventoryStartPurchaseResult_t(::Steamworks::EResult  m_result, uint64_t  m_ulOrderID, uint64_t  m_ulTransID) noexcept  {
this->m_result = m_result;
this->m_ulOrderID = m_ulOrderID;
this->m_ulTransID = m_ulTransID;
}
// Ctor Parameters []
constexpr ::Steamworks::SteamInventoryStartPurchaseResult_t::SteamInventoryStartPurchaseResult_t()   {
}

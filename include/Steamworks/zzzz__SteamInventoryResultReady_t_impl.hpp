#pragma once
// IWYU pragma private; include "Steamworks/SteamInventoryResultReady_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__SteamInventoryResult_t_impl.hpp"
#include "Steamworks/zzzz__SteamInventoryResultReady_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_handle", ty: "::Steamworks::SteamInventoryResult_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_result", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SteamInventoryResultReady_t::SteamInventoryResultReady_t(::Steamworks::SteamInventoryResult_t  m_handle, ::Steamworks::EResult  m_result) noexcept  {
this->m_handle = m_handle;
this->m_result = m_result;
}
// Ctor Parameters []
constexpr ::Steamworks::SteamInventoryResultReady_t::SteamInventoryResultReady_t()   {
}

#pragma once
// IWYU pragma private; include "Steamworks/GlobalAchievementPercentagesReady_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__GlobalAchievementPercentagesReady_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_nGameID", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::GlobalAchievementPercentagesReady_t::GlobalAchievementPercentagesReady_t(uint64_t  m_nGameID, ::Steamworks::EResult  m_eResult) noexcept  {
this->m_nGameID = m_nGameID;
this->m_eResult = m_eResult;
}
// Ctor Parameters []
constexpr ::Steamworks::GlobalAchievementPercentagesReady_t::GlobalAchievementPercentagesReady_t()   {
}

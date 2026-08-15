#pragma once
// IWYU pragma private; include "Steamworks/GetOPFSettingsResult_t.hpp"
#include "Steamworks/zzzz__AppId_t_impl.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__GetOPFSettingsResult_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_unVideoAppID", ty: "::Steamworks::AppId_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::GetOPFSettingsResult_t::GetOPFSettingsResult_t(::Steamworks::EResult  m_eResult, ::Steamworks::AppId_t  m_unVideoAppID) noexcept  {
this->m_eResult = m_eResult;
this->m_unVideoAppID = m_unVideoAppID;
}
// Ctor Parameters []
constexpr ::Steamworks::GetOPFSettingsResult_t::GetOPFSettingsResult_t()   {
}

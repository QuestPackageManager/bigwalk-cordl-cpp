#pragma once
// IWYU pragma private; include "Steamworks/DlcInstalled_t.hpp"
#include "Steamworks/zzzz__AppId_t_impl.hpp"
#include "Steamworks/zzzz__DlcInstalled_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_nAppID", ty: "::Steamworks::AppId_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::DlcInstalled_t::DlcInstalled_t(::Steamworks::AppId_t  m_nAppID) noexcept  {
this->m_nAppID = m_nAppID;
}
// Ctor Parameters []
constexpr ::Steamworks::DlcInstalled_t::DlcInstalled_t()   {
}

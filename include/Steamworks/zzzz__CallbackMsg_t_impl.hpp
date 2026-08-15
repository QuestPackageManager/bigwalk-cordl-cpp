#pragma once
// IWYU pragma private; include "Steamworks/CallbackMsg_t.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Steamworks/zzzz__CallbackMsg_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_hSteamUser", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_iCallback", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pubParam", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_cubParam", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::CallbackMsg_t::CallbackMsg_t(int32_t  m_hSteamUser, int32_t  m_iCallback, ::System::IntPtr  m_pubParam, int32_t  m_cubParam) noexcept  {
this->m_hSteamUser = m_hSteamUser;
this->m_iCallback = m_iCallback;
this->m_pubParam = m_pubParam;
this->m_cubParam = m_cubParam;
}
// Ctor Parameters []
constexpr ::Steamworks::CallbackMsg_t::CallbackMsg_t()   {
}

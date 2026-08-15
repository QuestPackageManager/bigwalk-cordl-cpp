#pragma once
// IWYU pragma private; include "Steamworks/SteamAPICallCompleted_t.hpp"
#include "Steamworks/zzzz__SteamAPICall_t_impl.hpp"
#include "Steamworks/zzzz__SteamAPICallCompleted_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_hAsyncCall", ty: "::Steamworks::SteamAPICall_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_iCallback", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_cubParam", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SteamAPICallCompleted_t::SteamAPICallCompleted_t(::Steamworks::SteamAPICall_t  m_hAsyncCall, int32_t  m_iCallback, uint32_t  m_cubParam) noexcept  {
this->m_hAsyncCall = m_hAsyncCall;
this->m_iCallback = m_iCallback;
this->m_cubParam = m_cubParam;
}
// Ctor Parameters []
constexpr ::Steamworks::SteamAPICallCompleted_t::SteamAPICallCompleted_t()   {
}

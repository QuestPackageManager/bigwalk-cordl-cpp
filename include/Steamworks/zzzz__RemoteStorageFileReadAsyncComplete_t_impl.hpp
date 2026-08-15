#pragma once
// IWYU pragma private; include "Steamworks/RemoteStorageFileReadAsyncComplete_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__SteamAPICall_t_impl.hpp"
#include "Steamworks/zzzz__RemoteStorageFileReadAsyncComplete_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_hFileReadAsync", ty: "::Steamworks::SteamAPICall_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nOffset", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_cubRead", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::RemoteStorageFileReadAsyncComplete_t::RemoteStorageFileReadAsyncComplete_t(::Steamworks::SteamAPICall_t  m_hFileReadAsync, ::Steamworks::EResult  m_eResult, uint32_t  m_nOffset, uint32_t  m_cubRead) noexcept  {
this->m_hFileReadAsync = m_hFileReadAsync;
this->m_eResult = m_eResult;
this->m_nOffset = m_nOffset;
this->m_cubRead = m_cubRead;
}
// Ctor Parameters []
constexpr ::Steamworks::RemoteStorageFileReadAsyncComplete_t::RemoteStorageFileReadAsyncComplete_t()   {
}

#pragma once
// IWYU pragma private; include "Steamworks/SteamInputConfigurationLoaded_t.hpp"
#include "Steamworks/zzzz__AppId_t_impl.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__InputHandle_t_impl.hpp"
#include "Steamworks/zzzz__SteamInputConfigurationLoaded_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_unAppID", ty: "::Steamworks::AppId_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ulDeviceHandle", ty: "::Steamworks::InputHandle_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ulMappingCreator", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_unMajorRevision", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_unMinorRevision", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bUsesSteamInputAPI", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bUsesGamepadAPI", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SteamInputConfigurationLoaded_t::SteamInputConfigurationLoaded_t(::Steamworks::AppId_t  m_unAppID, ::Steamworks::InputHandle_t  m_ulDeviceHandle, ::Steamworks::CSteamID  m_ulMappingCreator, uint32_t  m_unMajorRevision, uint32_t  m_unMinorRevision, bool  m_bUsesSteamInputAPI, bool  m_bUsesGamepadAPI) noexcept  {
this->m_unAppID = m_unAppID;
this->m_ulDeviceHandle = m_ulDeviceHandle;
this->m_ulMappingCreator = m_ulMappingCreator;
this->m_unMajorRevision = m_unMajorRevision;
this->m_unMinorRevision = m_unMinorRevision;
this->m_bUsesSteamInputAPI = m_bUsesSteamInputAPI;
this->m_bUsesGamepadAPI = m_bUsesGamepadAPI;
}
// Ctor Parameters []
constexpr ::Steamworks::SteamInputConfigurationLoaded_t::SteamInputConfigurationLoaded_t()   {
}

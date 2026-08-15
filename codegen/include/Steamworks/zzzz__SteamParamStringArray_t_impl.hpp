#pragma once
// IWYU pragma private; include "Steamworks/SteamParamStringArray_t.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Steamworks/zzzz__SteamParamStringArray_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_ppStrings", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nNumStrings", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SteamParamStringArray_t::SteamParamStringArray_t(::System::IntPtr  m_ppStrings, int32_t  m_nNumStrings) noexcept  {
this->m_ppStrings = m_ppStrings;
this->m_nNumStrings = m_nNumStrings;
}
// Ctor Parameters []
constexpr ::Steamworks::SteamParamStringArray_t::SteamParamStringArray_t()   {
}

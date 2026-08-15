#pragma once
// IWYU pragma private; include "Steamworks/ScreenshotReady_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__ScreenshotHandle_impl.hpp"
#include "Steamworks/zzzz__ScreenshotReady_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_hLocal", ty: "::Steamworks::ScreenshotHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ScreenshotReady_t::ScreenshotReady_t(::Steamworks::ScreenshotHandle  m_hLocal, ::Steamworks::EResult  m_eResult) noexcept  {
this->m_hLocal = m_hLocal;
this->m_eResult = m_eResult;
}
// Ctor Parameters []
constexpr ::Steamworks::ScreenshotReady_t::ScreenshotReady_t()   {
}

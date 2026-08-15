#pragma once
// IWYU pragma private; include "Steamworks/HTML_ShowToolTip_t.hpp"
#include "Steamworks/zzzz__HHTMLBrowser_impl.hpp"
#include "Steamworks/zzzz__HTML_ShowToolTip_t_def.hpp"
// Ctor Parameters [CppParam { name: "unBrowserHandle", ty: "::Steamworks::HHTMLBrowser", modifiers: "", def_value: Some("{}") }, CppParam { name: "pchMsg", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::HTML_ShowToolTip_t::HTML_ShowToolTip_t(::Steamworks::HHTMLBrowser  unBrowserHandle, ::StringW  pchMsg) noexcept  {
this->unBrowserHandle = unBrowserHandle;
this->pchMsg = pchMsg;
}
// Ctor Parameters []
constexpr ::Steamworks::HTML_ShowToolTip_t::HTML_ShowToolTip_t()   {
}

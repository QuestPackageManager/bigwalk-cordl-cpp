#pragma once
// IWYU pragma private; include "Steamworks/HTML_UpdateToolTip_t.hpp"
#include "Steamworks/zzzz__HHTMLBrowser_impl.hpp"
#include "Steamworks/zzzz__HTML_UpdateToolTip_t_def.hpp"
// Ctor Parameters [CppParam { name: "unBrowserHandle", ty: "::Steamworks::HHTMLBrowser", modifiers: "", def_value: Some("{}") }, CppParam { name: "pchMsg", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::HTML_UpdateToolTip_t::HTML_UpdateToolTip_t(::Steamworks::HHTMLBrowser  unBrowserHandle, ::StringW  pchMsg) noexcept  {
this->unBrowserHandle = unBrowserHandle;
this->pchMsg = pchMsg;
}
// Ctor Parameters []
constexpr ::Steamworks::HTML_UpdateToolTip_t::HTML_UpdateToolTip_t()   {
}

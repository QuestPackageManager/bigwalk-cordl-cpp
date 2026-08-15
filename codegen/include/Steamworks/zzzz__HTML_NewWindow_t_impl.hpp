#pragma once
// IWYU pragma private; include "Steamworks/HTML_NewWindow_t.hpp"
#include "Steamworks/zzzz__HHTMLBrowser_impl.hpp"
#include "Steamworks/zzzz__HTML_NewWindow_t_def.hpp"
// Ctor Parameters [CppParam { name: "unBrowserHandle", ty: "::Steamworks::HHTMLBrowser", modifiers: "", def_value: Some("{}") }, CppParam { name: "pchURL", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "unX", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unY", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unWide", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unTall", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unNewWindow_BrowserHandle_IGNORE", ty: "::Steamworks::HHTMLBrowser", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::HTML_NewWindow_t::HTML_NewWindow_t(::Steamworks::HHTMLBrowser  unBrowserHandle, ::StringW  pchURL, uint32_t  unX, uint32_t  unY, uint32_t  unWide, uint32_t  unTall, ::Steamworks::HHTMLBrowser  unNewWindow_BrowserHandle_IGNORE) noexcept  {
this->unBrowserHandle = unBrowserHandle;
this->pchURL = pchURL;
this->unX = unX;
this->unY = unY;
this->unWide = unWide;
this->unTall = unTall;
this->unNewWindow_BrowserHandle_IGNORE = unNewWindow_BrowserHandle_IGNORE;
}
// Ctor Parameters []
constexpr ::Steamworks::HTML_NewWindow_t::HTML_NewWindow_t()   {
}

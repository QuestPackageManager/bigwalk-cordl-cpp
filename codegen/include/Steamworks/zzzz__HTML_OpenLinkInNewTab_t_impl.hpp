#pragma once
// IWYU pragma private; include "Steamworks/HTML_OpenLinkInNewTab_t.hpp"
#include "Steamworks/zzzz__HHTMLBrowser_impl.hpp"
#include "Steamworks/zzzz__HTML_OpenLinkInNewTab_t_def.hpp"
// Ctor Parameters [CppParam { name: "unBrowserHandle", ty: "::Steamworks::HHTMLBrowser", modifiers: "", def_value: Some("{}") }, CppParam { name: "pchURL", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::HTML_OpenLinkInNewTab_t::HTML_OpenLinkInNewTab_t(::Steamworks::HHTMLBrowser  unBrowserHandle, ::StringW  pchURL) noexcept  {
this->unBrowserHandle = unBrowserHandle;
this->pchURL = pchURL;
}
// Ctor Parameters []
constexpr ::Steamworks::HTML_OpenLinkInNewTab_t::HTML_OpenLinkInNewTab_t()   {
}

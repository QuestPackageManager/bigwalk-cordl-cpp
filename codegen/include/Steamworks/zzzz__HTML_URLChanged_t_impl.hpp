#pragma once
// IWYU pragma private; include "Steamworks/HTML_URLChanged_t.hpp"
#include "Steamworks/zzzz__HHTMLBrowser_impl.hpp"
#include "Steamworks/zzzz__HTML_URLChanged_t_def.hpp"
// Ctor Parameters [CppParam { name: "unBrowserHandle", ty: "::Steamworks::HHTMLBrowser", modifiers: "", def_value: Some("{}") }, CppParam { name: "pchURL", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "pchPostData", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "bIsRedirect", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "pchPageTitle", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "bNewNavigation", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::HTML_URLChanged_t::HTML_URLChanged_t(::Steamworks::HHTMLBrowser  unBrowserHandle, ::StringW  pchURL, ::StringW  pchPostData, bool  bIsRedirect, ::StringW  pchPageTitle, bool  bNewNavigation) noexcept  {
this->unBrowserHandle = unBrowserHandle;
this->pchURL = pchURL;
this->pchPostData = pchPostData;
this->bIsRedirect = bIsRedirect;
this->pchPageTitle = pchPageTitle;
this->bNewNavigation = bNewNavigation;
}
// Ctor Parameters []
constexpr ::Steamworks::HTML_URLChanged_t::HTML_URLChanged_t()   {
}

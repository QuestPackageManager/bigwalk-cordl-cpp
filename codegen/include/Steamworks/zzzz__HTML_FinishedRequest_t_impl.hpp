#pragma once
// IWYU pragma private; include "Steamworks/HTML_FinishedRequest_t.hpp"
#include "Steamworks/zzzz__HHTMLBrowser_impl.hpp"
#include "Steamworks/zzzz__HTML_FinishedRequest_t_def.hpp"
// Ctor Parameters [CppParam { name: "unBrowserHandle", ty: "::Steamworks::HHTMLBrowser", modifiers: "", def_value: Some("{}") }, CppParam { name: "pchURL", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "pchPageTitle", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::HTML_FinishedRequest_t::HTML_FinishedRequest_t(::Steamworks::HHTMLBrowser  unBrowserHandle, ::StringW  pchURL, ::StringW  pchPageTitle) noexcept  {
this->unBrowserHandle = unBrowserHandle;
this->pchURL = pchURL;
this->pchPageTitle = pchPageTitle;
}
// Ctor Parameters []
constexpr ::Steamworks::HTML_FinishedRequest_t::HTML_FinishedRequest_t()   {
}

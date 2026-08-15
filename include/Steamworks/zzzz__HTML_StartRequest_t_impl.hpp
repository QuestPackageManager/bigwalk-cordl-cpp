#pragma once
// IWYU pragma private; include "Steamworks/HTML_StartRequest_t.hpp"
#include "Steamworks/zzzz__HHTMLBrowser_impl.hpp"
#include "Steamworks/zzzz__HTML_StartRequest_t_def.hpp"
// Ctor Parameters [CppParam { name: "unBrowserHandle", ty: "::Steamworks::HHTMLBrowser", modifiers: "", def_value: Some("{}") }, CppParam { name: "pchURL", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "pchTarget", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "pchPostData", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "bIsRedirect", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::HTML_StartRequest_t::HTML_StartRequest_t(::Steamworks::HHTMLBrowser  unBrowserHandle, ::StringW  pchURL, ::StringW  pchTarget, ::StringW  pchPostData, bool  bIsRedirect) noexcept  {
this->unBrowserHandle = unBrowserHandle;
this->pchURL = pchURL;
this->pchTarget = pchTarget;
this->pchPostData = pchPostData;
this->bIsRedirect = bIsRedirect;
}
// Ctor Parameters []
constexpr ::Steamworks::HTML_StartRequest_t::HTML_StartRequest_t()   {
}

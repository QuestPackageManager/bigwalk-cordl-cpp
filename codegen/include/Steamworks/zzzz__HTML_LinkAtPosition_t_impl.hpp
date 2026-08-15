#pragma once
// IWYU pragma private; include "Steamworks/HTML_LinkAtPosition_t.hpp"
#include "Steamworks/zzzz__HHTMLBrowser_impl.hpp"
#include "Steamworks/zzzz__HTML_LinkAtPosition_t_def.hpp"
// Ctor Parameters [CppParam { name: "unBrowserHandle", ty: "::Steamworks::HHTMLBrowser", modifiers: "", def_value: Some("{}") }, CppParam { name: "x", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pchURL", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "bInput", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "bLiveLink", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::HTML_LinkAtPosition_t::HTML_LinkAtPosition_t(::Steamworks::HHTMLBrowser  unBrowserHandle, uint32_t  x, uint32_t  y, ::StringW  pchURL, bool  bInput, bool  bLiveLink) noexcept  {
this->unBrowserHandle = unBrowserHandle;
this->x = x;
this->y = y;
this->pchURL = pchURL;
this->bInput = bInput;
this->bLiveLink = bLiveLink;
}
// Ctor Parameters []
constexpr ::Steamworks::HTML_LinkAtPosition_t::HTML_LinkAtPosition_t()   {
}

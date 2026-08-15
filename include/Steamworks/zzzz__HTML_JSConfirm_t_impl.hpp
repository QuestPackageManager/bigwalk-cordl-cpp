#pragma once
// IWYU pragma private; include "Steamworks/HTML_JSConfirm_t.hpp"
#include "Steamworks/zzzz__HHTMLBrowser_impl.hpp"
#include "Steamworks/zzzz__HTML_JSConfirm_t_def.hpp"
// Ctor Parameters [CppParam { name: "unBrowserHandle", ty: "::Steamworks::HHTMLBrowser", modifiers: "", def_value: Some("{}") }, CppParam { name: "pchMessage", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::HTML_JSConfirm_t::HTML_JSConfirm_t(::Steamworks::HHTMLBrowser  unBrowserHandle, ::StringW  pchMessage) noexcept  {
this->unBrowserHandle = unBrowserHandle;
this->pchMessage = pchMessage;
}
// Ctor Parameters []
constexpr ::Steamworks::HTML_JSConfirm_t::HTML_JSConfirm_t()   {
}

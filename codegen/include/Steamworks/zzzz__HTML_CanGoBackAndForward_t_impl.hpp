#pragma once
// IWYU pragma private; include "Steamworks/HTML_CanGoBackAndForward_t.hpp"
#include "Steamworks/zzzz__HHTMLBrowser_impl.hpp"
#include "Steamworks/zzzz__HTML_CanGoBackAndForward_t_def.hpp"
// Ctor Parameters [CppParam { name: "unBrowserHandle", ty: "::Steamworks::HHTMLBrowser", modifiers: "", def_value: Some("{}") }, CppParam { name: "bCanGoBack", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "bCanGoForward", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::HTML_CanGoBackAndForward_t::HTML_CanGoBackAndForward_t(::Steamworks::HHTMLBrowser  unBrowserHandle, bool  bCanGoBack, bool  bCanGoForward) noexcept  {
this->unBrowserHandle = unBrowserHandle;
this->bCanGoBack = bCanGoBack;
this->bCanGoForward = bCanGoForward;
}
// Ctor Parameters []
constexpr ::Steamworks::HTML_CanGoBackAndForward_t::HTML_CanGoBackAndForward_t()   {
}

#pragma once
// IWYU pragma private; include "Steamworks/HTML_ChangedTitle_t.hpp"
#include "Steamworks/zzzz__HHTMLBrowser_impl.hpp"
#include "Steamworks/zzzz__HTML_ChangedTitle_t_def.hpp"
// Ctor Parameters [CppParam { name: "unBrowserHandle", ty: "::Steamworks::HHTMLBrowser", modifiers: "", def_value: Some("{}") }, CppParam { name: "pchTitle", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::HTML_ChangedTitle_t::HTML_ChangedTitle_t(::Steamworks::HHTMLBrowser  unBrowserHandle, ::StringW  pchTitle) noexcept  {
this->unBrowserHandle = unBrowserHandle;
this->pchTitle = pchTitle;
}
// Ctor Parameters []
constexpr ::Steamworks::HTML_ChangedTitle_t::HTML_ChangedTitle_t()   {
}

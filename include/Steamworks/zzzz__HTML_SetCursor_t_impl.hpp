#pragma once
// IWYU pragma private; include "Steamworks/HTML_SetCursor_t.hpp"
#include "Steamworks/zzzz__HHTMLBrowser_impl.hpp"
#include "Steamworks/zzzz__HTML_SetCursor_t_def.hpp"
// Ctor Parameters [CppParam { name: "unBrowserHandle", ty: "::Steamworks::HHTMLBrowser", modifiers: "", def_value: Some("{}") }, CppParam { name: "eMouseCursor", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::HTML_SetCursor_t::HTML_SetCursor_t(::Steamworks::HHTMLBrowser  unBrowserHandle, uint32_t  eMouseCursor) noexcept  {
this->unBrowserHandle = unBrowserHandle;
this->eMouseCursor = eMouseCursor;
}
// Ctor Parameters []
constexpr ::Steamworks::HTML_SetCursor_t::HTML_SetCursor_t()   {
}

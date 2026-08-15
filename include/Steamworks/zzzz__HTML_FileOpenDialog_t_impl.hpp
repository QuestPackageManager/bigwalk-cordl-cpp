#pragma once
// IWYU pragma private; include "Steamworks/HTML_FileOpenDialog_t.hpp"
#include "Steamworks/zzzz__HHTMLBrowser_impl.hpp"
#include "Steamworks/zzzz__HTML_FileOpenDialog_t_def.hpp"
// Ctor Parameters [CppParam { name: "unBrowserHandle", ty: "::Steamworks::HHTMLBrowser", modifiers: "", def_value: Some("{}") }, CppParam { name: "pchTitle", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "pchInitialFile", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::HTML_FileOpenDialog_t::HTML_FileOpenDialog_t(::Steamworks::HHTMLBrowser  unBrowserHandle, ::StringW  pchTitle, ::StringW  pchInitialFile) noexcept  {
this->unBrowserHandle = unBrowserHandle;
this->pchTitle = pchTitle;
this->pchInitialFile = pchInitialFile;
}
// Ctor Parameters []
constexpr ::Steamworks::HTML_FileOpenDialog_t::HTML_FileOpenDialog_t()   {
}

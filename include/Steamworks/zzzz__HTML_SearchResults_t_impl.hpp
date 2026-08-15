#pragma once
// IWYU pragma private; include "Steamworks/HTML_SearchResults_t.hpp"
#include "Steamworks/zzzz__HHTMLBrowser_impl.hpp"
#include "Steamworks/zzzz__HTML_SearchResults_t_def.hpp"
// Ctor Parameters [CppParam { name: "unBrowserHandle", ty: "::Steamworks::HHTMLBrowser", modifiers: "", def_value: Some("{}") }, CppParam { name: "unResults", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unCurrentMatch", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::HTML_SearchResults_t::HTML_SearchResults_t(::Steamworks::HHTMLBrowser  unBrowserHandle, uint32_t  unResults, uint32_t  unCurrentMatch) noexcept  {
this->unBrowserHandle = unBrowserHandle;
this->unResults = unResults;
this->unCurrentMatch = unCurrentMatch;
}
// Ctor Parameters []
constexpr ::Steamworks::HTML_SearchResults_t::HTML_SearchResults_t()   {
}

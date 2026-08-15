#pragma once
// IWYU pragma private; include "Steamworks/HTML_VerticalScroll_t.hpp"
#include "Steamworks/zzzz__HHTMLBrowser_impl.hpp"
#include "Steamworks/zzzz__HTML_VerticalScroll_t_def.hpp"
// Ctor Parameters [CppParam { name: "unBrowserHandle", ty: "::Steamworks::HHTMLBrowser", modifiers: "", def_value: Some("{}") }, CppParam { name: "unScrollMax", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unScrollCurrent", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "flPageScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bVisible", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "unPageSize", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::HTML_VerticalScroll_t::HTML_VerticalScroll_t(::Steamworks::HHTMLBrowser  unBrowserHandle, uint32_t  unScrollMax, uint32_t  unScrollCurrent, float_t  flPageScale, bool  bVisible, uint32_t  unPageSize) noexcept  {
this->unBrowserHandle = unBrowserHandle;
this->unScrollMax = unScrollMax;
this->unScrollCurrent = unScrollCurrent;
this->flPageScale = flPageScale;
this->bVisible = bVisible;
this->unPageSize = unPageSize;
}
// Ctor Parameters []
constexpr ::Steamworks::HTML_VerticalScroll_t::HTML_VerticalScroll_t()   {
}

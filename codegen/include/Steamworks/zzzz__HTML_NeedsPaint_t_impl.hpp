#pragma once
// IWYU pragma private; include "Steamworks/HTML_NeedsPaint_t.hpp"
#include "Steamworks/zzzz__HHTMLBrowser_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Steamworks/zzzz__HTML_NeedsPaint_t_def.hpp"
// Ctor Parameters [CppParam { name: "unBrowserHandle", ty: "::Steamworks::HHTMLBrowser", modifiers: "", def_value: Some("{}") }, CppParam { name: "pBGRA", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "unWide", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unTall", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unUpdateX", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unUpdateY", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unUpdateWide", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unUpdateTall", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unScrollX", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unScrollY", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "flPageScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unPageSerial", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::HTML_NeedsPaint_t::HTML_NeedsPaint_t(::Steamworks::HHTMLBrowser  unBrowserHandle, ::System::IntPtr  pBGRA, uint32_t  unWide, uint32_t  unTall, uint32_t  unUpdateX, uint32_t  unUpdateY, uint32_t  unUpdateWide, uint32_t  unUpdateTall, uint32_t  unScrollX, uint32_t  unScrollY, float_t  flPageScale, uint32_t  unPageSerial) noexcept  {
this->unBrowserHandle = unBrowserHandle;
this->pBGRA = pBGRA;
this->unWide = unWide;
this->unTall = unTall;
this->unUpdateX = unUpdateX;
this->unUpdateY = unUpdateY;
this->unUpdateWide = unUpdateWide;
this->unUpdateTall = unUpdateTall;
this->unScrollX = unScrollX;
this->unScrollY = unScrollY;
this->flPageScale = flPageScale;
this->unPageSerial = unPageSerial;
}
// Ctor Parameters []
constexpr ::Steamworks::HTML_NeedsPaint_t::HTML_NeedsPaint_t()   {
}

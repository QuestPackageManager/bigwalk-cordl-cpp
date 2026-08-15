#pragma once
// IWYU pragma private; include "Steamworks/HTML_NewWindow_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__HHTMLBrowser_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HTML_NewWindow_t)
// Forward declare root types
namespace Steamworks {
struct HTML_NewWindow_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::HTML_NewWindow_t);
DEFINE_IL2CPP_CLASS(::Steamworks::HTML_NewWindow_t, "Steamworks", "HTML_NewWindow_t");
// Dependencies Steamworks.HHTMLBrowser
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.HTML_NewWindow_t
#pragma pack(push, 8)
struct CORDL_TYPE HTML_NewWindow_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr HTML_NewWindow_t() ;

// Ctor Parameters [CppParam { name: "unBrowserHandle", ty: "::Steamworks::HHTMLBrowser", modifiers: "", def_value: None }, CppParam { name: "pchURL", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "unX", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "unY", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "unWide", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "unTall", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "unNewWindow_BrowserHandle_IGNORE", ty: "::Steamworks::HHTMLBrowser", modifiers: "", def_value: None }]
constexpr HTML_NewWindow_t(::Steamworks::HHTMLBrowser  unBrowserHandle, ::StringW  pchURL, uint32_t  unX, uint32_t  unY, uint32_t  unWide, uint32_t  unTall, ::Steamworks::HHTMLBrowser  unNewWindow_BrowserHandle_IGNORE) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16085};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x11a9)};

/// @brief Field unBrowserHandle, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::HHTMLBrowser  unBrowserHandle;

/// @brief Field pchURL, offset: 0x8, size: 0x8, def value: None
 ::StringW  pchURL;

/// @brief Field unX, offset: 0x10, size: 0x4, def value: None
 uint32_t  unX;

/// @brief Field unY, offset: 0x14, size: 0x4, def value: None
 uint32_t  unY;

/// @brief Field unWide, offset: 0x18, size: 0x4, def value: None
 uint32_t  unWide;

/// @brief Field unTall, offset: 0x1c, size: 0x4, def value: None
 uint32_t  unTall;

/// @brief Field unNewWindow_BrowserHandle_IGNORE, offset: 0x20, size: 0x4, def value: None
 ::Steamworks::HHTMLBrowser  unNewWindow_BrowserHandle_IGNORE;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::HTML_NewWindow_t, unBrowserHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_NewWindow_t, pchURL) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_NewWindow_t, unX) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_NewWindow_t, unY) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_NewWindow_t, unWide) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_NewWindow_t, unTall) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_NewWindow_t, unNewWindow_BrowserHandle_IGNORE) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Steamworks::HTML_NewWindow_t) == 0x28, "Size mismatch!");

} // namespace end def Steamworks

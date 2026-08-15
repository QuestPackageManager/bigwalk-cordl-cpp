#pragma once
// IWYU pragma private; include "Steamworks/HTML_URLChanged_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__HHTMLBrowser_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HTML_URLChanged_t)
// Forward declare root types
namespace Steamworks {
struct HTML_URLChanged_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::HTML_URLChanged_t);
DEFINE_IL2CPP_CLASS(::Steamworks::HTML_URLChanged_t, "Steamworks", "HTML_URLChanged_t");
// Dependencies Steamworks.HHTMLBrowser
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.HTML_URLChanged_t
#pragma pack(push, 8)
struct CORDL_TYPE HTML_URLChanged_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr HTML_URLChanged_t() ;

// Ctor Parameters [CppParam { name: "unBrowserHandle", ty: "::Steamworks::HHTMLBrowser", modifiers: "", def_value: None }, CppParam { name: "pchURL", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "pchPostData", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "bIsRedirect", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "pchPageTitle", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "bNewNavigation", ty: "bool", modifiers: "", def_value: None }]
constexpr HTML_URLChanged_t(::Steamworks::HHTMLBrowser  unBrowserHandle, ::StringW  pchURL, ::StringW  pchPostData, bool  bIsRedirect, ::StringW  pchPageTitle, bool  bNewNavigation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16073};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x1199)};

/// @brief Field unBrowserHandle, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::HHTMLBrowser  unBrowserHandle;

/// @brief Field pchURL, offset: 0x8, size: 0x8, def value: None
 ::StringW  pchURL;

/// @brief Field pchPostData, offset: 0x10, size: 0x8, def value: None
 ::StringW  pchPostData;

/// @brief Field bIsRedirect, offset: 0x18, size: 0x1, def value: None
 bool  bIsRedirect;

/// @brief Field pchPageTitle, offset: 0x20, size: 0x8, def value: None
 ::StringW  pchPageTitle;

/// @brief Field bNewNavigation, offset: 0x28, size: 0x1, def value: None
 bool  bNewNavigation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::HTML_URLChanged_t, unBrowserHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_URLChanged_t, pchURL) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_URLChanged_t, pchPostData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_URLChanged_t, bIsRedirect) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_URLChanged_t, pchPageTitle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_URLChanged_t, bNewNavigation) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Steamworks::HTML_URLChanged_t) == 0x30, "Size mismatch!");

} // namespace end def Steamworks

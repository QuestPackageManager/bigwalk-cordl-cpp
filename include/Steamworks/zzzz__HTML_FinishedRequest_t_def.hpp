#pragma once
// IWYU pragma private; include "Steamworks/HTML_FinishedRequest_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__HHTMLBrowser_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HTML_FinishedRequest_t)
// Forward declare root types
namespace Steamworks {
struct HTML_FinishedRequest_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::HTML_FinishedRequest_t);
DEFINE_IL2CPP_CLASS(::Steamworks::HTML_FinishedRequest_t, "Steamworks", "HTML_FinishedRequest_t");
// Dependencies Steamworks.HHTMLBrowser
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.HTML_FinishedRequest_t
#pragma pack(push, 8)
struct CORDL_TYPE HTML_FinishedRequest_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr HTML_FinishedRequest_t() ;

// Ctor Parameters [CppParam { name: "unBrowserHandle", ty: "::Steamworks::HHTMLBrowser", modifiers: "", def_value: None }, CppParam { name: "pchURL", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "pchPageTitle", ty: "::StringW", modifiers: "", def_value: None }]
constexpr HTML_FinishedRequest_t(::Steamworks::HHTMLBrowser  unBrowserHandle, ::StringW  pchURL, ::StringW  pchPageTitle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16074};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x119a)};

/// @brief Field unBrowserHandle, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::HHTMLBrowser  unBrowserHandle;

/// @brief Field pchURL, offset: 0x8, size: 0x8, def value: None
 ::StringW  pchURL;

/// @brief Field pchPageTitle, offset: 0x10, size: 0x8, def value: None
 ::StringW  pchPageTitle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::HTML_FinishedRequest_t, unBrowserHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_FinishedRequest_t, pchURL) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_FinishedRequest_t, pchPageTitle) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Steamworks::HTML_FinishedRequest_t) == 0x18, "Size mismatch!");

} // namespace end def Steamworks

#pragma once
// IWYU pragma private; include "Steamworks/HTML_CloseBrowser_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__HHTMLBrowser_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HTML_CloseBrowser_t)
// Forward declare root types
namespace Steamworks {
struct HTML_CloseBrowser_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::HTML_CloseBrowser_t);
DEFINE_IL2CPP_CLASS(::Steamworks::HTML_CloseBrowser_t, "Steamworks", "HTML_CloseBrowser_t");
// Dependencies Steamworks.HHTMLBrowser
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.HTML_CloseBrowser_t
#pragma pack(push, 8)
struct CORDL_TYPE HTML_CloseBrowser_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr HTML_CloseBrowser_t() ;

// Ctor Parameters [CppParam { name: "unBrowserHandle", ty: "::Steamworks::HHTMLBrowser", modifiers: "", def_value: None }]
constexpr HTML_CloseBrowser_t(::Steamworks::HHTMLBrowser  unBrowserHandle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16072};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x1198)};

/// @brief Field unBrowserHandle, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::HHTMLBrowser  unBrowserHandle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::HTML_CloseBrowser_t, unBrowserHandle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::HTML_CloseBrowser_t) == 0x4, "Size mismatch!");

} // namespace end def Steamworks

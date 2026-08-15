#pragma once
// IWYU pragma private; include "Steamworks/HTML_CanGoBackAndForward_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__HHTMLBrowser_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HTML_CanGoBackAndForward_t)
// Forward declare root types
namespace Steamworks {
struct HTML_CanGoBackAndForward_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::HTML_CanGoBackAndForward_t);
DEFINE_IL2CPP_CLASS(::Steamworks::HTML_CanGoBackAndForward_t, "Steamworks", "HTML_CanGoBackAndForward_t");
// Dependencies Steamworks.HHTMLBrowser
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.HTML_CanGoBackAndForward_t
#pragma pack(push, 8)
struct CORDL_TYPE HTML_CanGoBackAndForward_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr HTML_CanGoBackAndForward_t() ;

// Ctor Parameters [CppParam { name: "unBrowserHandle", ty: "::Steamworks::HHTMLBrowser", modifiers: "", def_value: None }, CppParam { name: "bCanGoBack", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "bCanGoForward", ty: "bool", modifiers: "", def_value: None }]
constexpr HTML_CanGoBackAndForward_t(::Steamworks::HHTMLBrowser  unBrowserHandle, bool  bCanGoBack, bool  bCanGoForward) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16078};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x119e)};

/// @brief Field unBrowserHandle, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::HHTMLBrowser  unBrowserHandle;

/// @brief Field bCanGoBack, offset: 0x4, size: 0x1, def value: None
 bool  bCanGoBack;

/// @brief Field bCanGoForward, offset: 0x5, size: 0x1, def value: None
 bool  bCanGoForward;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::HTML_CanGoBackAndForward_t, unBrowserHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_CanGoBackAndForward_t, bCanGoBack) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_CanGoBackAndForward_t, bCanGoForward) == 0x5, "Offset mismatch!");

static_assert(sizeof(::Steamworks::HTML_CanGoBackAndForward_t) == 0x8, "Size mismatch!");

} // namespace end def Steamworks

#pragma once
// IWYU pragma private; include "Steamworks/HTML_SearchResults_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__HHTMLBrowser_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HTML_SearchResults_t)
// Forward declare root types
namespace Steamworks {
struct HTML_SearchResults_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::HTML_SearchResults_t);
DEFINE_IL2CPP_CLASS(::Steamworks::HTML_SearchResults_t, "Steamworks", "HTML_SearchResults_t");
// Dependencies Steamworks.HHTMLBrowser
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.HTML_SearchResults_t
#pragma pack(push, 8)
struct CORDL_TYPE HTML_SearchResults_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr HTML_SearchResults_t() ;

// Ctor Parameters [CppParam { name: "unBrowserHandle", ty: "::Steamworks::HHTMLBrowser", modifiers: "", def_value: None }, CppParam { name: "unResults", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "unCurrentMatch", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr HTML_SearchResults_t(::Steamworks::HHTMLBrowser  unBrowserHandle, uint32_t  unResults, uint32_t  unCurrentMatch) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16077};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x119d)};

/// @brief Field unBrowserHandle, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::HHTMLBrowser  unBrowserHandle;

/// @brief Field unResults, offset: 0x4, size: 0x4, def value: None
 uint32_t  unResults;

/// @brief Field unCurrentMatch, offset: 0x8, size: 0x4, def value: None
 uint32_t  unCurrentMatch;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::HTML_SearchResults_t, unBrowserHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_SearchResults_t, unResults) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_SearchResults_t, unCurrentMatch) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Steamworks::HTML_SearchResults_t) == 0xc, "Size mismatch!");

} // namespace end def Steamworks

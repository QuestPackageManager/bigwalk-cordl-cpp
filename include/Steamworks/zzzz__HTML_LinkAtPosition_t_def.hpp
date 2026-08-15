#pragma once
// IWYU pragma private; include "Steamworks/HTML_LinkAtPosition_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__HHTMLBrowser_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HTML_LinkAtPosition_t)
// Forward declare root types
namespace Steamworks {
struct HTML_LinkAtPosition_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::HTML_LinkAtPosition_t);
DEFINE_IL2CPP_CLASS(::Steamworks::HTML_LinkAtPosition_t, "Steamworks", "HTML_LinkAtPosition_t");
// Dependencies Steamworks.HHTMLBrowser
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.HTML_LinkAtPosition_t
#pragma pack(push, 8)
struct CORDL_TYPE HTML_LinkAtPosition_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr HTML_LinkAtPosition_t() ;

// Ctor Parameters [CppParam { name: "unBrowserHandle", ty: "::Steamworks::HHTMLBrowser", modifiers: "", def_value: None }, CppParam { name: "x", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "pchURL", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "bInput", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "bLiveLink", ty: "bool", modifiers: "", def_value: None }]
constexpr HTML_LinkAtPosition_t(::Steamworks::HHTMLBrowser  unBrowserHandle, uint32_t  x, uint32_t  y, ::StringW  pchURL, bool  bInput, bool  bLiveLink) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16081};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x11a1)};

/// @brief Field unBrowserHandle, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::HHTMLBrowser  unBrowserHandle;

/// @brief Field x, offset: 0x4, size: 0x4, def value: None
 uint32_t  x;

/// @brief Field y, offset: 0x8, size: 0x4, def value: None
 uint32_t  y;

/// @brief Field pchURL, offset: 0x10, size: 0x8, def value: None
 ::StringW  pchURL;

/// @brief Field bInput, offset: 0x18, size: 0x1, def value: None
 bool  bInput;

/// @brief Field bLiveLink, offset: 0x19, size: 0x1, def value: None
 bool  bLiveLink;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::HTML_LinkAtPosition_t, unBrowserHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_LinkAtPosition_t, x) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_LinkAtPosition_t, y) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_LinkAtPosition_t, pchURL) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_LinkAtPosition_t, bInput) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_LinkAtPosition_t, bLiveLink) == 0x19, "Offset mismatch!");

static_assert(sizeof(::Steamworks::HTML_LinkAtPosition_t) == 0x20, "Size mismatch!");

} // namespace end def Steamworks

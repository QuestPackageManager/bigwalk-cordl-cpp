#pragma once
// IWYU pragma private; include "Steamworks/HTML_StartRequest_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__HHTMLBrowser_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HTML_StartRequest_t)
// Forward declare root types
namespace Steamworks {
struct HTML_StartRequest_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::HTML_StartRequest_t);
DEFINE_IL2CPP_CLASS(::Steamworks::HTML_StartRequest_t, "Steamworks", "HTML_StartRequest_t");
// Dependencies Steamworks.HHTMLBrowser
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.HTML_StartRequest_t
#pragma pack(push, 8)
struct CORDL_TYPE HTML_StartRequest_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr HTML_StartRequest_t() ;

// Ctor Parameters [CppParam { name: "unBrowserHandle", ty: "::Steamworks::HHTMLBrowser", modifiers: "", def_value: None }, CppParam { name: "pchURL", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "pchTarget", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "pchPostData", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "bIsRedirect", ty: "bool", modifiers: "", def_value: None }]
constexpr HTML_StartRequest_t(::Steamworks::HHTMLBrowser  unBrowserHandle, ::StringW  pchURL, ::StringW  pchTarget, ::StringW  pchPostData, bool  bIsRedirect) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16071};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x1197)};

/// @brief Field unBrowserHandle, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::HHTMLBrowser  unBrowserHandle;

/// @brief Field pchURL, offset: 0x8, size: 0x8, def value: None
 ::StringW  pchURL;

/// @brief Field pchTarget, offset: 0x10, size: 0x8, def value: None
 ::StringW  pchTarget;

/// @brief Field pchPostData, offset: 0x18, size: 0x8, def value: None
 ::StringW  pchPostData;

/// @brief Field bIsRedirect, offset: 0x20, size: 0x1, def value: None
 bool  bIsRedirect;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::HTML_StartRequest_t, unBrowserHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_StartRequest_t, pchURL) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_StartRequest_t, pchTarget) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_StartRequest_t, pchPostData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_StartRequest_t, bIsRedirect) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Steamworks::HTML_StartRequest_t) == 0x28, "Size mismatch!");

} // namespace end def Steamworks

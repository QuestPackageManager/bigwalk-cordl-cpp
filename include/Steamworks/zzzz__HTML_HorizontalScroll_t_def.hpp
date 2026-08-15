#pragma once
// IWYU pragma private; include "Steamworks/HTML_HorizontalScroll_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__HHTMLBrowser_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HTML_HorizontalScroll_t)
// Forward declare root types
namespace Steamworks {
struct HTML_HorizontalScroll_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::HTML_HorizontalScroll_t);
DEFINE_IL2CPP_CLASS(::Steamworks::HTML_HorizontalScroll_t, "Steamworks", "HTML_HorizontalScroll_t");
// Dependencies Steamworks.HHTMLBrowser
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.HTML_HorizontalScroll_t
#pragma pack(push, 8)
struct CORDL_TYPE HTML_HorizontalScroll_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr HTML_HorizontalScroll_t() ;

// Ctor Parameters [CppParam { name: "unBrowserHandle", ty: "::Steamworks::HHTMLBrowser", modifiers: "", def_value: None }, CppParam { name: "unScrollMax", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "unScrollCurrent", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "flPageScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "bVisible", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "unPageSize", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr HTML_HorizontalScroll_t(::Steamworks::HHTMLBrowser  unBrowserHandle, uint32_t  unScrollMax, uint32_t  unScrollCurrent, float_t  flPageScale, bool  bVisible, uint32_t  unPageSize) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16079};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x119f)};

/// @brief Field unBrowserHandle, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::HHTMLBrowser  unBrowserHandle;

/// @brief Field unScrollMax, offset: 0x4, size: 0x4, def value: None
 uint32_t  unScrollMax;

/// @brief Field unScrollCurrent, offset: 0x8, size: 0x4, def value: None
 uint32_t  unScrollCurrent;

/// @brief Field flPageScale, offset: 0xc, size: 0x4, def value: None
 float_t  flPageScale;

/// @brief Field bVisible, offset: 0x10, size: 0x1, def value: None
 bool  bVisible;

/// @brief Field unPageSize, offset: 0x14, size: 0x4, def value: None
 uint32_t  unPageSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::HTML_HorizontalScroll_t, unBrowserHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_HorizontalScroll_t, unScrollMax) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_HorizontalScroll_t, unScrollCurrent) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_HorizontalScroll_t, flPageScale) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_HorizontalScroll_t, bVisible) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_HorizontalScroll_t, unPageSize) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Steamworks::HTML_HorizontalScroll_t) == 0x18, "Size mismatch!");

} // namespace end def Steamworks

#pragma once
// IWYU pragma private; include "Steamworks/HTML_NeedsPaint_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__HHTMLBrowser_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HTML_NeedsPaint_t)
// Forward declare root types
namespace Steamworks {
struct HTML_NeedsPaint_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::HTML_NeedsPaint_t);
DEFINE_IL2CPP_CLASS(::Steamworks::HTML_NeedsPaint_t, "Steamworks", "HTML_NeedsPaint_t");
// Dependencies Steamworks.HHTMLBrowser, System.IntPtr
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.HTML_NeedsPaint_t
#pragma pack(push, 8)
struct CORDL_TYPE HTML_NeedsPaint_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr HTML_NeedsPaint_t() ;

// Ctor Parameters [CppParam { name: "unBrowserHandle", ty: "::Steamworks::HHTMLBrowser", modifiers: "", def_value: None }, CppParam { name: "pBGRA", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "unWide", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "unTall", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "unUpdateX", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "unUpdateY", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "unUpdateWide", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "unUpdateTall", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "unScrollX", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "unScrollY", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "flPageScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "unPageSerial", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr HTML_NeedsPaint_t(::Steamworks::HHTMLBrowser  unBrowserHandle, ::System::IntPtr  pBGRA, uint32_t  unWide, uint32_t  unTall, uint32_t  unUpdateX, uint32_t  unUpdateY, uint32_t  unUpdateWide, uint32_t  unUpdateTall, uint32_t  unScrollX, uint32_t  unScrollY, float_t  flPageScale, uint32_t  unPageSerial) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16070};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x1196)};

/// @brief Field unBrowserHandle, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::HHTMLBrowser  unBrowserHandle;

/// @brief Field pBGRA, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  pBGRA;

/// @brief Field unWide, offset: 0x10, size: 0x4, def value: None
 uint32_t  unWide;

/// @brief Field unTall, offset: 0x14, size: 0x4, def value: None
 uint32_t  unTall;

/// @brief Field unUpdateX, offset: 0x18, size: 0x4, def value: None
 uint32_t  unUpdateX;

/// @brief Field unUpdateY, offset: 0x1c, size: 0x4, def value: None
 uint32_t  unUpdateY;

/// @brief Field unUpdateWide, offset: 0x20, size: 0x4, def value: None
 uint32_t  unUpdateWide;

/// @brief Field unUpdateTall, offset: 0x24, size: 0x4, def value: None
 uint32_t  unUpdateTall;

/// @brief Field unScrollX, offset: 0x28, size: 0x4, def value: None
 uint32_t  unScrollX;

/// @brief Field unScrollY, offset: 0x2c, size: 0x4, def value: None
 uint32_t  unScrollY;

/// @brief Field flPageScale, offset: 0x30, size: 0x4, def value: None
 float_t  flPageScale;

/// @brief Field unPageSerial, offset: 0x34, size: 0x4, def value: None
 uint32_t  unPageSerial;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::HTML_NeedsPaint_t, unBrowserHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_NeedsPaint_t, pBGRA) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_NeedsPaint_t, unWide) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_NeedsPaint_t, unTall) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_NeedsPaint_t, unUpdateX) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_NeedsPaint_t, unUpdateY) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_NeedsPaint_t, unUpdateWide) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_NeedsPaint_t, unUpdateTall) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_NeedsPaint_t, unScrollX) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_NeedsPaint_t, unScrollY) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_NeedsPaint_t, flPageScale) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTML_NeedsPaint_t, unPageSerial) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Steamworks::HTML_NeedsPaint_t) == 0x38, "Size mismatch!");

} // namespace end def Steamworks

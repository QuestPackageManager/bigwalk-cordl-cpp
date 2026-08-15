#pragma once
// IWYU pragma private; include "GlobalNamespace/saUeGRcDrUvMVGtDcCPVIPFwocHf.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(saUeGRcDrUvMVGtDcCPVIPFwocHf)
// Forward declare root types
namespace GlobalNamespace {
struct saUeGRcDrUvMVGtDcCPVIPFwocHf;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::saUeGRcDrUvMVGtDcCPVIPFwocHf);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::saUeGRcDrUvMVGtDcCPVIPFwocHf, "", "saUeGRcDrUvMVGtDcCPVIPFwocHf");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: saUeGRcDrUvMVGtDcCPVIPFwocHf
struct CORDL_TYPE saUeGRcDrUvMVGtDcCPVIPFwocHf {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int16_t;

/// @brief Nested struct __saUeGRcDrUvMVGtDcCPVIPFwocHf_Unwrapped
enum struct __saUeGRcDrUvMVGtDcCPVIPFwocHf_Unwrapped : int16_t {
__E_DPadUp = static_cast<int16_t>(0x1),
__E_DPadDown = static_cast<int16_t>(0x2),
__E_DPadLeft = static_cast<int16_t>(0x4),
__E_DPadRight = static_cast<int16_t>(0x8),
__E_Start = static_cast<int16_t>(0x10),
__E_Back = static_cast<int16_t>(0x20),
__E_LeftThumb = static_cast<int16_t>(0x40),
__E_RightThumb = static_cast<int16_t>(0x80),
__E_LeftShoulder = static_cast<int16_t>(0x100),
__E_RightShoulder = static_cast<int16_t>(0x200),
__E_Guide = static_cast<int16_t>(0x400),
__E_A = static_cast<int16_t>(0x1000),
__E_B = static_cast<int16_t>(0x2000),
__E_X = static_cast<int16_t>(0x4000),
__E_Y = static_cast<int16_t>(0x8000),
__E_None = static_cast<int16_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __saUeGRcDrUvMVGtDcCPVIPFwocHf_Unwrapped () const noexcept {
return static_cast<__saUeGRcDrUvMVGtDcCPVIPFwocHf_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int16_t () const noexcept {
return static_cast<int16_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr saUeGRcDrUvMVGtDcCPVIPFwocHf() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: None }]
constexpr saUeGRcDrUvMVGtDcCPVIPFwocHf(int16_t  value__) noexcept;

/// @brief Field A value: I16(4096)
static ::GlobalNamespace::saUeGRcDrUvMVGtDcCPVIPFwocHf const A;

/// @brief Field B value: I16(8192)
static ::GlobalNamespace::saUeGRcDrUvMVGtDcCPVIPFwocHf const B;

/// @brief Field Back value: I16(32)
static ::GlobalNamespace::saUeGRcDrUvMVGtDcCPVIPFwocHf const Back;

/// @brief Field DPadDown value: I16(2)
static ::GlobalNamespace::saUeGRcDrUvMVGtDcCPVIPFwocHf const DPadDown;

/// @brief Field DPadLeft value: I16(4)
static ::GlobalNamespace::saUeGRcDrUvMVGtDcCPVIPFwocHf const DPadLeft;

/// @brief Field DPadRight value: I16(8)
static ::GlobalNamespace::saUeGRcDrUvMVGtDcCPVIPFwocHf const DPadRight;

/// @brief Field DPadUp value: I16(1)
static ::GlobalNamespace::saUeGRcDrUvMVGtDcCPVIPFwocHf const DPadUp;

/// @brief Field Guide value: I16(1024)
static ::GlobalNamespace::saUeGRcDrUvMVGtDcCPVIPFwocHf const Guide;

/// @brief Field LeftShoulder value: I16(256)
static ::GlobalNamespace::saUeGRcDrUvMVGtDcCPVIPFwocHf const LeftShoulder;

/// @brief Field LeftThumb value: I16(64)
static ::GlobalNamespace::saUeGRcDrUvMVGtDcCPVIPFwocHf const LeftThumb;

/// @brief Field None value: I16(0)
static ::GlobalNamespace::saUeGRcDrUvMVGtDcCPVIPFwocHf const None;

/// @brief Field RightShoulder value: I16(512)
static ::GlobalNamespace::saUeGRcDrUvMVGtDcCPVIPFwocHf const RightShoulder;

/// @brief Field RightThumb value: I16(128)
static ::GlobalNamespace::saUeGRcDrUvMVGtDcCPVIPFwocHf const RightThumb;

/// @brief Field Start value: I16(16)
static ::GlobalNamespace::saUeGRcDrUvMVGtDcCPVIPFwocHf const Start;

/// @brief Field X value: I16(16384)
static ::GlobalNamespace::saUeGRcDrUvMVGtDcCPVIPFwocHf const X;

/// @brief Field Y value: I16(-32768)
static ::GlobalNamespace::saUeGRcDrUvMVGtDcCPVIPFwocHf const Y;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6127};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field value__, offset: 0x2, size: 0x2, def value: None
 int16_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::saUeGRcDrUvMVGtDcCPVIPFwocHf, value__) == 0x2, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::saUeGRcDrUvMVGtDcCPVIPFwocHf) == 0x2, "Size mismatch!");

} // namespace end def GlobalNamespace

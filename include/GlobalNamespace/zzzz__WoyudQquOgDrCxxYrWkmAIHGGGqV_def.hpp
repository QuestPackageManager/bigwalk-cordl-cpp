#pragma once
// IWYU pragma private; include "GlobalNamespace/WoyudQquOgDrCxxYrWkmAIHGGGqV.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WoyudQquOgDrCxxYrWkmAIHGGGqV)
// Forward declare root types
namespace GlobalNamespace {
struct WoyudQquOgDrCxxYrWkmAIHGGGqV;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV, "", "WoyudQquOgDrCxxYrWkmAIHGGGqV");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: WoyudQquOgDrCxxYrWkmAIHGGGqV
struct CORDL_TYPE WoyudQquOgDrCxxYrWkmAIHGGGqV {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WoyudQquOgDrCxxYrWkmAIHGGGqV_Unwrapped
enum struct __WoyudQquOgDrCxxYrWkmAIHGGGqV_Unwrapped : int32_t {
__E_FrontLeft = static_cast<int32_t>(0x1),
__E_FrontRight = static_cast<int32_t>(0x2),
__E_FrontCenter = static_cast<int32_t>(0x4),
__E_LowFrequency = static_cast<int32_t>(0x8),
__E_BackLeft = static_cast<int32_t>(0x10),
__E_BackRight = static_cast<int32_t>(0x20),
__E_FrontLeftOfCenter = static_cast<int32_t>(0x40),
__E_FrontRightOfCenter = static_cast<int32_t>(0x80),
__E_BackCenter = static_cast<int32_t>(0x100),
__E_SideLeft = static_cast<int32_t>(0x200),
__E_SideRight = static_cast<int32_t>(0x400),
__E_TopCenter = static_cast<int32_t>(0x800),
__E_TopFrontLeft = static_cast<int32_t>(0x1000),
__E_TopFrontCenter = static_cast<int32_t>(0x2000),
__E_TopFrontRight = static_cast<int32_t>(0x4000),
__E_TopBackLeft = static_cast<int32_t>(0x8000),
__E_TopBackCenter = static_cast<int32_t>(0x10000),
__E_TopBackRight = static_cast<int32_t>(0x20000),
__E_Reserved = static_cast<int32_t>(0x7ffc0000),
__E_All = static_cast<int32_t>(0x80000000),
__E_Mono = static_cast<int32_t>(0x4),
__E_Stereo = static_cast<int32_t>(0x3),
__E_TwoPointOne = static_cast<int32_t>(0xb),
__E_Surround = static_cast<int32_t>(0x107),
__E_Quad = static_cast<int32_t>(0x33),
__E_FourPointOne = static_cast<int32_t>(0x3b),
__E_FivePointOne = static_cast<int32_t>(0x3f),
__E_SevenPointOne = static_cast<int32_t>(0xff),
__E_FivePointOneSurround = static_cast<int32_t>(0x60f),
__E_SevenPointOneSurround = static_cast<int32_t>(0x63f),
__E_None = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WoyudQquOgDrCxxYrWkmAIHGGGqV_Unwrapped () const noexcept {
return static_cast<__WoyudQquOgDrCxxYrWkmAIHGGGqV_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WoyudQquOgDrCxxYrWkmAIHGGGqV() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WoyudQquOgDrCxxYrWkmAIHGGGqV(int32_t  value__) noexcept;

/// @brief Field All value: I32(-2147483648)
static ::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV const All;

/// @brief Field BackCenter value: I32(256)
static ::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV const BackCenter;

/// @brief Field BackLeft value: I32(16)
static ::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV const BackLeft;

/// @brief Field BackRight value: I32(32)
static ::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV const BackRight;

/// @brief Field FivePointOne value: I32(63)
static ::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV const FivePointOne;

/// @brief Field FivePointOneSurround value: I32(1551)
static ::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV const FivePointOneSurround;

/// @brief Field FourPointOne value: I32(59)
static ::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV const FourPointOne;

/// @brief Field FrontCenter value: I32(4)
static ::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV const FrontCenter;

/// @brief Field FrontLeft value: I32(1)
static ::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV const FrontLeft;

/// @brief Field FrontLeftOfCenter value: I32(64)
static ::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV const FrontLeftOfCenter;

/// @brief Field FrontRight value: I32(2)
static ::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV const FrontRight;

/// @brief Field FrontRightOfCenter value: I32(128)
static ::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV const FrontRightOfCenter;

/// @brief Field LowFrequency value: I32(8)
static ::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV const LowFrequency;

/// @brief Field Mono value: I32(4)
static ::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV const Mono;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV const None;

/// @brief Field Quad value: I32(51)
static ::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV const Quad;

/// @brief Field Reserved value: I32(2147221504)
static ::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV const Reserved;

/// @brief Field SevenPointOne value: I32(255)
static ::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV const SevenPointOne;

/// @brief Field SevenPointOneSurround value: I32(1599)
static ::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV const SevenPointOneSurround;

/// @brief Field SideLeft value: I32(512)
static ::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV const SideLeft;

/// @brief Field SideRight value: I32(1024)
static ::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV const SideRight;

/// @brief Field Stereo value: I32(3)
static ::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV const Stereo;

/// @brief Field Surround value: I32(263)
static ::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV const Surround;

/// @brief Field TopBackCenter value: I32(65536)
static ::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV const TopBackCenter;

/// @brief Field TopBackLeft value: I32(32768)
static ::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV const TopBackLeft;

/// @brief Field TopBackRight value: I32(131072)
static ::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV const TopBackRight;

/// @brief Field TopCenter value: I32(2048)
static ::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV const TopCenter;

/// @brief Field TopFrontCenter value: I32(8192)
static ::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV const TopFrontCenter;

/// @brief Field TopFrontLeft value: I32(4096)
static ::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV const TopFrontLeft;

/// @brief Field TopFrontRight value: I32(16384)
static ::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV const TopFrontRight;

/// @brief Field TwoPointOne value: I32(11)
static ::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV const TwoPointOne;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6196};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WoyudQquOgDrCxxYrWkmAIHGGGqV) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

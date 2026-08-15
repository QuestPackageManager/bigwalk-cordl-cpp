#pragma once
// IWYU pragma private; include "GlobalNamespace/nzOQtISxPFkMkdNwebayaEFhhUhj.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(nzOQtISxPFkMkdNwebayaEFhhUhj)
// Forward declare root types
namespace GlobalNamespace {
struct nzOQtISxPFkMkdNwebayaEFhhUhj;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::nzOQtISxPFkMkdNwebayaEFhhUhj);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::nzOQtISxPFkMkdNwebayaEFhhUhj, "", "nzOQtISxPFkMkdNwebayaEFhhUhj");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: nzOQtISxPFkMkdNwebayaEFhhUhj
struct CORDL_TYPE nzOQtISxPFkMkdNwebayaEFhhUhj {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __nzOQtISxPFkMkdNwebayaEFhhUhj_Unwrapped
enum struct __nzOQtISxPFkMkdNwebayaEFhhUhj_Unwrapped : int32_t {
__E_INVALID = static_cast<int32_t>(0xffffffff),
__E_A = static_cast<int32_t>(0x0),
__E_B = static_cast<int32_t>(0x1),
__E_X = static_cast<int32_t>(0x2),
__E_Y = static_cast<int32_t>(0x3),
__E_BACK = static_cast<int32_t>(0x4),
__E_GUIDE = static_cast<int32_t>(0x5),
__E_START = static_cast<int32_t>(0x6),
__E_LEFTSTICK = static_cast<int32_t>(0x7),
__E_RIGHTSTICK = static_cast<int32_t>(0x8),
__E_LEFTSHOULDER = static_cast<int32_t>(0x9),
__E_RIGHTSHOULDER = static_cast<int32_t>(0xa),
__E_DPAD_UP = static_cast<int32_t>(0xb),
__E_DPAD_DOWN = static_cast<int32_t>(0xc),
__E_DPAD_LEFT = static_cast<int32_t>(0xd),
__E_DPAD_RIGHT = static_cast<int32_t>(0xe),
__E_MAX = static_cast<int32_t>(0xf),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __nzOQtISxPFkMkdNwebayaEFhhUhj_Unwrapped () const noexcept {
return static_cast<__nzOQtISxPFkMkdNwebayaEFhhUhj_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr nzOQtISxPFkMkdNwebayaEFhhUhj() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr nzOQtISxPFkMkdNwebayaEFhhUhj(int32_t  value__) noexcept;

/// @brief Field A value: I32(0)
static ::GlobalNamespace::nzOQtISxPFkMkdNwebayaEFhhUhj const A;

/// @brief Field B value: I32(1)
static ::GlobalNamespace::nzOQtISxPFkMkdNwebayaEFhhUhj const B;

/// @brief Field BACK value: I32(4)
static ::GlobalNamespace::nzOQtISxPFkMkdNwebayaEFhhUhj const BACK;

/// @brief Field DPAD_DOWN value: I32(12)
static ::GlobalNamespace::nzOQtISxPFkMkdNwebayaEFhhUhj const DPAD_DOWN;

/// @brief Field DPAD_LEFT value: I32(13)
static ::GlobalNamespace::nzOQtISxPFkMkdNwebayaEFhhUhj const DPAD_LEFT;

/// @brief Field DPAD_RIGHT value: I32(14)
static ::GlobalNamespace::nzOQtISxPFkMkdNwebayaEFhhUhj const DPAD_RIGHT;

/// @brief Field DPAD_UP value: I32(11)
static ::GlobalNamespace::nzOQtISxPFkMkdNwebayaEFhhUhj const DPAD_UP;

/// @brief Field GUIDE value: I32(5)
static ::GlobalNamespace::nzOQtISxPFkMkdNwebayaEFhhUhj const GUIDE;

/// @brief Field INVALID value: I32(-1)
static ::GlobalNamespace::nzOQtISxPFkMkdNwebayaEFhhUhj const INVALID;

/// @brief Field LEFTSHOULDER value: I32(9)
static ::GlobalNamespace::nzOQtISxPFkMkdNwebayaEFhhUhj const LEFTSHOULDER;

/// @brief Field LEFTSTICK value: I32(7)
static ::GlobalNamespace::nzOQtISxPFkMkdNwebayaEFhhUhj const LEFTSTICK;

/// @brief Field MAX value: I32(15)
static ::GlobalNamespace::nzOQtISxPFkMkdNwebayaEFhhUhj const MAX;

/// @brief Field RIGHTSHOULDER value: I32(10)
static ::GlobalNamespace::nzOQtISxPFkMkdNwebayaEFhhUhj const RIGHTSHOULDER;

/// @brief Field RIGHTSTICK value: I32(8)
static ::GlobalNamespace::nzOQtISxPFkMkdNwebayaEFhhUhj const RIGHTSTICK;

/// @brief Field START value: I32(6)
static ::GlobalNamespace::nzOQtISxPFkMkdNwebayaEFhhUhj const START;

/// @brief Field X value: I32(2)
static ::GlobalNamespace::nzOQtISxPFkMkdNwebayaEFhhUhj const X;

/// @brief Field Y value: I32(3)
static ::GlobalNamespace::nzOQtISxPFkMkdNwebayaEFhhUhj const Y;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6535};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::nzOQtISxPFkMkdNwebayaEFhhUhj, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::nzOQtISxPFkMkdNwebayaEFhhUhj) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

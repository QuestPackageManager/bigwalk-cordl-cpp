#pragma once
// IWYU pragma private; include "GlobalNamespace/nwlEErKNnqdwDPAVZvEEFxhQMAzUA.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(nwlEErKNnqdwDPAVZvEEFxhQMAzUA)
// Forward declare root types
namespace GlobalNamespace {
struct nwlEErKNnqdwDPAVZvEEFxhQMAzUA;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::nwlEErKNnqdwDPAVZvEEFxhQMAzUA);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::nwlEErKNnqdwDPAVZvEEFxhQMAzUA, "", "nwlEErKNnqdwDPAVZvEEFxhQMAzUA");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: nwlEErKNnqdwDPAVZvEEFxhQMAzUA
struct CORDL_TYPE nwlEErKNnqdwDPAVZvEEFxhQMAzUA {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __nwlEErKNnqdwDPAVZvEEFxhQMAzUA_Unwrapped
enum struct __nwlEErKNnqdwDPAVZvEEFxhQMAzUA_Unwrapped : int32_t {
__E_INVALID = static_cast<int32_t>(0xffffffff),
__E_LEFTX = static_cast<int32_t>(0x0),
__E_LEFTY = static_cast<int32_t>(0x1),
__E_RIGHTX = static_cast<int32_t>(0x2),
__E_RIGHTY = static_cast<int32_t>(0x3),
__E_TRIGGERLEFT = static_cast<int32_t>(0x4),
__E_TRIGGERRIGHT = static_cast<int32_t>(0x5),
__E_MAX = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __nwlEErKNnqdwDPAVZvEEFxhQMAzUA_Unwrapped () const noexcept {
return static_cast<__nwlEErKNnqdwDPAVZvEEFxhQMAzUA_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr nwlEErKNnqdwDPAVZvEEFxhQMAzUA() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr nwlEErKNnqdwDPAVZvEEFxhQMAzUA(int32_t  value__) noexcept;

/// @brief Field INVALID value: I32(-1)
static ::GlobalNamespace::nwlEErKNnqdwDPAVZvEEFxhQMAzUA const INVALID;

/// @brief Field LEFTX value: I32(0)
static ::GlobalNamespace::nwlEErKNnqdwDPAVZvEEFxhQMAzUA const LEFTX;

/// @brief Field LEFTY value: I32(1)
static ::GlobalNamespace::nwlEErKNnqdwDPAVZvEEFxhQMAzUA const LEFTY;

/// @brief Field MAX value: I32(6)
static ::GlobalNamespace::nwlEErKNnqdwDPAVZvEEFxhQMAzUA const MAX;

/// @brief Field RIGHTX value: I32(2)
static ::GlobalNamespace::nwlEErKNnqdwDPAVZvEEFxhQMAzUA const RIGHTX;

/// @brief Field RIGHTY value: I32(3)
static ::GlobalNamespace::nwlEErKNnqdwDPAVZvEEFxhQMAzUA const RIGHTY;

/// @brief Field TRIGGERLEFT value: I32(4)
static ::GlobalNamespace::nwlEErKNnqdwDPAVZvEEFxhQMAzUA const TRIGGERLEFT;

/// @brief Field TRIGGERRIGHT value: I32(5)
static ::GlobalNamespace::nwlEErKNnqdwDPAVZvEEFxhQMAzUA const TRIGGERRIGHT;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6534};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::nwlEErKNnqdwDPAVZvEEFxhQMAzUA, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::nwlEErKNnqdwDPAVZvEEFxhQMAzUA) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

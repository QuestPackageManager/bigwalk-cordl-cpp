#pragma once
// IWYU pragma private; include "GlobalNamespace/aztCksYRYchZXwmSvhhTREZrFNLp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(aztCksYRYchZXwmSvhhTREZrFNLp)
// Forward declare root types
namespace GlobalNamespace {
struct aztCksYRYchZXwmSvhhTREZrFNLp;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::aztCksYRYchZXwmSvhhTREZrFNLp);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::aztCksYRYchZXwmSvhhTREZrFNLp, "", "aztCksYRYchZXwmSvhhTREZrFNLp");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: aztCksYRYchZXwmSvhhTREZrFNLp
struct CORDL_TYPE aztCksYRYchZXwmSvhhTREZrFNLp {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __aztCksYRYchZXwmSvhhTREZrFNLp_Unwrapped
enum struct __aztCksYRYchZXwmSvhhTREZrFNLp_Unwrapped : int32_t {
__E_Device = static_cast<int32_t>(0x0),
__E_Byoffset = static_cast<int32_t>(0x1),
__E_Byid = static_cast<int32_t>(0x2),
__E_Byusage = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __aztCksYRYchZXwmSvhhTREZrFNLp_Unwrapped () const noexcept {
return static_cast<__aztCksYRYchZXwmSvhhTREZrFNLp_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr aztCksYRYchZXwmSvhhTREZrFNLp() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr aztCksYRYchZXwmSvhhTREZrFNLp(int32_t  value__) noexcept;

/// @brief Field Byid value: I32(2)
static ::GlobalNamespace::aztCksYRYchZXwmSvhhTREZrFNLp const Byid;

/// @brief Field Byoffset value: I32(1)
static ::GlobalNamespace::aztCksYRYchZXwmSvhhTREZrFNLp const Byoffset;

/// @brief Field Byusage value: I32(3)
static ::GlobalNamespace::aztCksYRYchZXwmSvhhTREZrFNLp const Byusage;

/// @brief Field Device value: I32(0)
static ::GlobalNamespace::aztCksYRYchZXwmSvhhTREZrFNLp const Device;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6292};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::aztCksYRYchZXwmSvhhTREZrFNLp, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::aztCksYRYchZXwmSvhhTREZrFNLp) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

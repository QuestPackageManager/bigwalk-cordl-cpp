#pragma once
// IWYU pragma private; include "GlobalNamespace/vCpoqjXfFIiLtqOGytEsXCDLsXtV.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(vCpoqjXfFIiLtqOGytEsXCDLsXtV)
// Forward declare root types
namespace GlobalNamespace {
struct vCpoqjXfFIiLtqOGytEsXCDLsXtV;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::vCpoqjXfFIiLtqOGytEsXCDLsXtV);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::vCpoqjXfFIiLtqOGytEsXCDLsXtV, "", "vCpoqjXfFIiLtqOGytEsXCDLsXtV");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: vCpoqjXfFIiLtqOGytEsXCDLsXtV
struct CORDL_TYPE vCpoqjXfFIiLtqOGytEsXCDLsXtV {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __vCpoqjXfFIiLtqOGytEsXCDLsXtV_Unwrapped
enum struct __vCpoqjXfFIiLtqOGytEsXCDLsXtV_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_IncludeNonStandard = static_cast<int32_t>(0x1),
__E_ModidyIfNeeded = static_cast<int32_t>(0x10),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __vCpoqjXfFIiLtqOGytEsXCDLsXtV_Unwrapped () const noexcept {
return static_cast<__vCpoqjXfFIiLtqOGytEsXCDLsXtV_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr vCpoqjXfFIiLtqOGytEsXCDLsXtV() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr vCpoqjXfFIiLtqOGytEsXCDLsXtV(int32_t  value__) noexcept;

/// @brief Field IncludeNonStandard value: I32(1)
static ::GlobalNamespace::vCpoqjXfFIiLtqOGytEsXCDLsXtV const IncludeNonStandard;

/// @brief Field ModidyIfNeeded value: I32(16)
static ::GlobalNamespace::vCpoqjXfFIiLtqOGytEsXCDLsXtV const ModidyIfNeeded;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::vCpoqjXfFIiLtqOGytEsXCDLsXtV const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6279};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::vCpoqjXfFIiLtqOGytEsXCDLsXtV, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::vCpoqjXfFIiLtqOGytEsXCDLsXtV) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

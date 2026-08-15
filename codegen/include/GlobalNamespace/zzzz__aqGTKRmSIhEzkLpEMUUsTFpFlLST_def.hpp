#pragma once
// IWYU pragma private; include "GlobalNamespace/aqGTKRmSIhEzkLpEMUUsTFpFlLST.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(aqGTKRmSIhEzkLpEMUUsTFpFlLST)
// Forward declare root types
namespace GlobalNamespace {
struct aqGTKRmSIhEzkLpEMUUsTFpFlLST;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::aqGTKRmSIhEzkLpEMUUsTFpFlLST);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::aqGTKRmSIhEzkLpEMUUsTFpFlLST, "", "aqGTKRmSIhEzkLpEMUUsTFpFlLST");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: aqGTKRmSIhEzkLpEMUUsTFpFlLST
struct CORDL_TYPE aqGTKRmSIhEzkLpEMUUsTFpFlLST {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __aqGTKRmSIhEzkLpEMUUsTFpFlLST_Unwrapped
enum struct __aqGTKRmSIhEzkLpEMUUsTFpFlLST_Unwrapped : int32_t {
__E_Idle = static_cast<int32_t>(0x0),
__E_Working = static_cast<int32_t>(0x1),
__E_Success = static_cast<int32_t>(0x2),
__E_Fail = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __aqGTKRmSIhEzkLpEMUUsTFpFlLST_Unwrapped () const noexcept {
return static_cast<__aqGTKRmSIhEzkLpEMUUsTFpFlLST_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr aqGTKRmSIhEzkLpEMUUsTFpFlLST() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr aqGTKRmSIhEzkLpEMUUsTFpFlLST(int32_t  value__) noexcept;

/// @brief Field Fail value: I32(3)
static ::GlobalNamespace::aqGTKRmSIhEzkLpEMUUsTFpFlLST const Fail;

/// @brief Field Idle value: I32(0)
static ::GlobalNamespace::aqGTKRmSIhEzkLpEMUUsTFpFlLST const Idle;

/// @brief Field Success value: I32(2)
static ::GlobalNamespace::aqGTKRmSIhEzkLpEMUUsTFpFlLST const Success;

/// @brief Field Working value: I32(1)
static ::GlobalNamespace::aqGTKRmSIhEzkLpEMUUsTFpFlLST const Working;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6049};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::aqGTKRmSIhEzkLpEMUUsTFpFlLST, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::aqGTKRmSIhEzkLpEMUUsTFpFlLST) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

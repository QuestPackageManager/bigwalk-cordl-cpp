#pragma once
// IWYU pragma private; include "MA/Flora/GPUErrorCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUErrorCode)
// Forward declare root types
namespace MA::Flora {
struct GPUErrorCode;
}
// Write type traits
MARK_VAL_T(::MA::Flora::GPUErrorCode);
DEFINE_IL2CPP_CLASS(::MA::Flora::GPUErrorCode, "MA.Flora", "GPUErrorCode");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.GPUErrorCode
struct CORDL_TYPE GPUErrorCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GPUErrorCode_Unwrapped
enum struct __GPUErrorCode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_PerInstanceEmitOverflow = static_cast<int32_t>(0x1),
__E_StateKeyOutOfRange = static_cast<int32_t>(0x2),
__E_LodIndexOutOfRange = static_cast<int32_t>(0x3),
__E_TemplateLodInconsistent = static_cast<int32_t>(0x4),
__E_BinIndexOverflow = static_cast<int32_t>(0x5),
__E_CommandCountZero = static_cast<int32_t>(0x6),
__E_PackedKeyOrLodOutOfRange = static_cast<int32_t>(0x7),
__E_BinWritePastReservedEnd = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GPUErrorCode_Unwrapped () const noexcept {
return static_cast<__GPUErrorCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GPUErrorCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GPUErrorCode(int32_t  value__) noexcept;

/// @brief Field BinIndexOverflow value: I32(5)
static ::MA::Flora::GPUErrorCode const BinIndexOverflow;

/// @brief Field BinWritePastReservedEnd value: I32(8)
static ::MA::Flora::GPUErrorCode const BinWritePastReservedEnd;

/// @brief Field CommandCountZero value: I32(6)
static ::MA::Flora::GPUErrorCode const CommandCountZero;

/// @brief Field LodIndexOutOfRange value: I32(3)
static ::MA::Flora::GPUErrorCode const LodIndexOutOfRange;

/// @brief Field None value: I32(0)
static ::MA::Flora::GPUErrorCode const None;

/// @brief Field PackedKeyOrLodOutOfRange value: I32(7)
static ::MA::Flora::GPUErrorCode const PackedKeyOrLodOutOfRange;

/// @brief Field PerInstanceEmitOverflow value: I32(1)
static ::MA::Flora::GPUErrorCode const PerInstanceEmitOverflow;

/// @brief Field StateKeyOutOfRange value: I32(2)
static ::MA::Flora::GPUErrorCode const StateKeyOutOfRange;

/// @brief Field TemplateLodInconsistent value: I32(4)
static ::MA::Flora::GPUErrorCode const TemplateLodInconsistent;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13195};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::GPUErrorCode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::GPUErrorCode) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora

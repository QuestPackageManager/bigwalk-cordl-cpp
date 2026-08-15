#pragma once
// IWYU pragma private; include "MA/Flora/FrustumIntersectResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FrustumIntersectResult)
// Forward declare root types
namespace MA::Flora {
struct FrustumIntersectResult;
}
// Write type traits
MARK_VAL_T(::MA::Flora::FrustumIntersectResult);
DEFINE_IL2CPP_CLASS(::MA::Flora::FrustumIntersectResult, "MA.Flora", "FrustumIntersectResult");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.FrustumIntersectResult
struct CORDL_TYPE FrustumIntersectResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __FrustumIntersectResult_Unwrapped
enum struct __FrustumIntersectResult_Unwrapped : uint8_t {
__E_Outside = static_cast<uint8_t>(0x0u),
__E_Inside = static_cast<uint8_t>(0x1u),
__E_Partial = static_cast<uint8_t>(0x2u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FrustumIntersectResult_Unwrapped () const noexcept {
return static_cast<__FrustumIntersectResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FrustumIntersectResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr FrustumIntersectResult(uint8_t  value__) noexcept;

/// @brief Field Inside value: U8(1)
static ::MA::Flora::FrustumIntersectResult const Inside;

/// @brief Field Outside value: U8(0)
static ::MA::Flora::FrustumIntersectResult const Outside;

/// @brief Field Partial value: U8(2)
static ::MA::Flora::FrustumIntersectResult const Partial;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13312};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FrustumIntersectResult, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FrustumIntersectResult) == 0x1, "Size mismatch!");

} // namespace end def MA::Flora

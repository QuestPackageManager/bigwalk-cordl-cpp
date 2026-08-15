#pragma once
// IWYU pragma private; include "GlobalNamespace/qxVblRJfdQVixkJCLkgThACPgjRnA.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(qxVblRJfdQVixkJCLkgThACPgjRnA)
// Forward declare root types
namespace GlobalNamespace {
struct qxVblRJfdQVixkJCLkgThACPgjRnA;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::qxVblRJfdQVixkJCLkgThACPgjRnA);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::qxVblRJfdQVixkJCLkgThACPgjRnA, "", "qxVblRJfdQVixkJCLkgThACPgjRnA");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: qxVblRJfdQVixkJCLkgThACPgjRnA
struct CORDL_TYPE qxVblRJfdQVixkJCLkgThACPgjRnA {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __qxVblRJfdQVixkJCLkgThACPgjRnA_Unwrapped
enum struct __qxVblRJfdQVixkJCLkgThACPgjRnA_Unwrapped : int32_t {
__E_Undefined = static_cast<int32_t>(0x0),
__E_Integer = static_cast<int32_t>(0x1),
__E_PowerOfTwo = static_cast<int32_t>(0x2),
__E_FractionalOdd = static_cast<int32_t>(0x3),
__E_FractionalEven = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __qxVblRJfdQVixkJCLkgThACPgjRnA_Unwrapped () const noexcept {
return static_cast<__qxVblRJfdQVixkJCLkgThACPgjRnA_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr qxVblRJfdQVixkJCLkgThACPgjRnA() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr qxVblRJfdQVixkJCLkgThACPgjRnA(int32_t  value__) noexcept;

/// @brief Field FractionalEven value: I32(4)
static ::GlobalNamespace::qxVblRJfdQVixkJCLkgThACPgjRnA const FractionalEven;

/// @brief Field FractionalOdd value: I32(3)
static ::GlobalNamespace::qxVblRJfdQVixkJCLkgThACPgjRnA const FractionalOdd;

/// @brief Field Integer value: I32(1)
static ::GlobalNamespace::qxVblRJfdQVixkJCLkgThACPgjRnA const Integer;

/// @brief Field PowerOfTwo value: I32(2)
static ::GlobalNamespace::qxVblRJfdQVixkJCLkgThACPgjRnA const PowerOfTwo;

/// @brief Field Undefined value: I32(0)
static ::GlobalNamespace::qxVblRJfdQVixkJCLkgThACPgjRnA const Undefined;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6219};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::qxVblRJfdQVixkJCLkgThACPgjRnA, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::qxVblRJfdQVixkJCLkgThACPgjRnA) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

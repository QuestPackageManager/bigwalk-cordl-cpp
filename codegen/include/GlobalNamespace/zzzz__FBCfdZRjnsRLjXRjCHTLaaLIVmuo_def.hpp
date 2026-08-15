#pragma once
// IWYU pragma private; include "GlobalNamespace/FBCfdZRjnsRLjXRjCHTLaaLIVmuo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FBCfdZRjnsRLjXRjCHTLaaLIVmuo)
// Forward declare root types
namespace GlobalNamespace {
struct FBCfdZRjnsRLjXRjCHTLaaLIVmuo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FBCfdZRjnsRLjXRjCHTLaaLIVmuo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FBCfdZRjnsRLjXRjCHTLaaLIVmuo, "", "FBCfdZRjnsRLjXRjCHTLaaLIVmuo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: FBCfdZRjnsRLjXRjCHTLaaLIVmuo
struct CORDL_TYPE FBCfdZRjnsRLjXRjCHTLaaLIVmuo {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FBCfdZRjnsRLjXRjCHTLaaLIVmuo_Unwrapped
enum struct __FBCfdZRjnsRLjXRjCHTLaaLIVmuo_Unwrapped : int32_t {
__E_Scalar = static_cast<int32_t>(0x0),
__E_Vector = static_cast<int32_t>(0x1),
__E_MatrixRows = static_cast<int32_t>(0x2),
__E_MatrixColumns = static_cast<int32_t>(0x3),
__E_Object = static_cast<int32_t>(0x4),
__E_Struct = static_cast<int32_t>(0x5),
__E_InterfaceClass = static_cast<int32_t>(0x6),
__E_InterfacePointer = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FBCfdZRjnsRLjXRjCHTLaaLIVmuo_Unwrapped () const noexcept {
return static_cast<__FBCfdZRjnsRLjXRjCHTLaaLIVmuo_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FBCfdZRjnsRLjXRjCHTLaaLIVmuo() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FBCfdZRjnsRLjXRjCHTLaaLIVmuo(int32_t  value__) noexcept;

/// @brief Field InterfaceClass value: I32(6)
static ::GlobalNamespace::FBCfdZRjnsRLjXRjCHTLaaLIVmuo const InterfaceClass;

/// @brief Field InterfacePointer value: I32(7)
static ::GlobalNamespace::FBCfdZRjnsRLjXRjCHTLaaLIVmuo const InterfacePointer;

/// @brief Field MatrixColumns value: I32(3)
static ::GlobalNamespace::FBCfdZRjnsRLjXRjCHTLaaLIVmuo const MatrixColumns;

/// @brief Field MatrixRows value: I32(2)
static ::GlobalNamespace::FBCfdZRjnsRLjXRjCHTLaaLIVmuo const MatrixRows;

/// @brief Field Object value: I32(4)
static ::GlobalNamespace::FBCfdZRjnsRLjXRjCHTLaaLIVmuo const Object;

/// @brief Field Scalar value: I32(0)
static ::GlobalNamespace::FBCfdZRjnsRLjXRjCHTLaaLIVmuo const Scalar;

/// @brief Field Struct value: I32(5)
static ::GlobalNamespace::FBCfdZRjnsRLjXRjCHTLaaLIVmuo const Struct;

/// @brief Field Vector value: I32(1)
static ::GlobalNamespace::FBCfdZRjnsRLjXRjCHTLaaLIVmuo const Vector;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6213};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FBCfdZRjnsRLjXRjCHTLaaLIVmuo, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FBCfdZRjnsRLjXRjCHTLaaLIVmuo) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

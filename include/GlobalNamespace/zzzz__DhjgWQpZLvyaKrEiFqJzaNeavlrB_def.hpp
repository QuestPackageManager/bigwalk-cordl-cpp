#pragma once
// IWYU pragma private; include "GlobalNamespace/DhjgWQpZLvyaKrEiFqJzaNeavlrB.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DhjgWQpZLvyaKrEiFqJzaNeavlrB)
// Forward declare root types
namespace GlobalNamespace {
struct DhjgWQpZLvyaKrEiFqJzaNeavlrB;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DhjgWQpZLvyaKrEiFqJzaNeavlrB);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DhjgWQpZLvyaKrEiFqJzaNeavlrB, "", "DhjgWQpZLvyaKrEiFqJzaNeavlrB");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: DhjgWQpZLvyaKrEiFqJzaNeavlrB
struct CORDL_TYPE DhjgWQpZLvyaKrEiFqJzaNeavlrB {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DhjgWQpZLvyaKrEiFqJzaNeavlrB_Unwrapped
enum struct __DhjgWQpZLvyaKrEiFqJzaNeavlrB_Unwrapped : int32_t {
__E_Center = static_cast<int32_t>(0x0),
__E_Up = static_cast<int32_t>(0x1),
__E_UpRight = static_cast<int32_t>(0x2),
__E_Right = static_cast<int32_t>(0x3),
__E_DownRight = static_cast<int32_t>(0x4),
__E_Down = static_cast<int32_t>(0x5),
__E_DownLeft = static_cast<int32_t>(0x6),
__E_Left = static_cast<int32_t>(0x7),
__E_UpLeft = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DhjgWQpZLvyaKrEiFqJzaNeavlrB_Unwrapped () const noexcept {
return static_cast<__DhjgWQpZLvyaKrEiFqJzaNeavlrB_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DhjgWQpZLvyaKrEiFqJzaNeavlrB() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DhjgWQpZLvyaKrEiFqJzaNeavlrB(int32_t  value__) noexcept;

/// @brief Field Center value: I32(0)
static ::GlobalNamespace::DhjgWQpZLvyaKrEiFqJzaNeavlrB const Center;

/// @brief Field Down value: I32(5)
static ::GlobalNamespace::DhjgWQpZLvyaKrEiFqJzaNeavlrB const Down;

/// @brief Field DownLeft value: I32(6)
static ::GlobalNamespace::DhjgWQpZLvyaKrEiFqJzaNeavlrB const DownLeft;

/// @brief Field DownRight value: I32(4)
static ::GlobalNamespace::DhjgWQpZLvyaKrEiFqJzaNeavlrB const DownRight;

/// @brief Field Left value: I32(7)
static ::GlobalNamespace::DhjgWQpZLvyaKrEiFqJzaNeavlrB const Left;

/// @brief Field Right value: I32(3)
static ::GlobalNamespace::DhjgWQpZLvyaKrEiFqJzaNeavlrB const Right;

/// @brief Field Up value: I32(1)
static ::GlobalNamespace::DhjgWQpZLvyaKrEiFqJzaNeavlrB const Up;

/// @brief Field UpLeft value: I32(8)
static ::GlobalNamespace::DhjgWQpZLvyaKrEiFqJzaNeavlrB const UpLeft;

/// @brief Field UpRight value: I32(2)
static ::GlobalNamespace::DhjgWQpZLvyaKrEiFqJzaNeavlrB const UpRight;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6028};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DhjgWQpZLvyaKrEiFqJzaNeavlrB, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DhjgWQpZLvyaKrEiFqJzaNeavlrB) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

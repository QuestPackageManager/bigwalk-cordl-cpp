#pragma once
// IWYU pragma private; include "AmplifyImpostors/LODReplacement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LODReplacement)
// Forward declare root types
namespace AmplifyImpostors {
struct LODReplacement;
}
// Write type traits
MARK_VAL_T(::AmplifyImpostors::LODReplacement);
DEFINE_IL2CPP_CLASS(::AmplifyImpostors::LODReplacement, "AmplifyImpostors", "LODReplacement");
// Dependencies 
namespace AmplifyImpostors {
// Is value type: true
// CS Name: AmplifyImpostors.LODReplacement
struct CORDL_TYPE LODReplacement {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LODReplacement_Unwrapped
enum struct __LODReplacement_Unwrapped : int32_t {
__E_DoNothing = static_cast<int32_t>(0x0),
__E_ReplaceCulled = static_cast<int32_t>(0x1),
__E_ReplaceLast = static_cast<int32_t>(0x2),
__E_ReplaceAllExceptFirst = static_cast<int32_t>(0x3),
__E_ReplaceSpecific = static_cast<int32_t>(0x4),
__E_ReplaceAfterSpecific = static_cast<int32_t>(0x5),
__E_InsertAfter = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LODReplacement_Unwrapped () const noexcept {
return static_cast<__LODReplacement_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LODReplacement() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LODReplacement(int32_t  value__) noexcept;

/// @brief Field DoNothing value: I32(0)
static ::AmplifyImpostors::LODReplacement const DoNothing;

/// @brief Field InsertAfter value: I32(6)
static ::AmplifyImpostors::LODReplacement const InsertAfter;

/// @brief Field ReplaceAfterSpecific value: I32(5)
static ::AmplifyImpostors::LODReplacement const ReplaceAfterSpecific;

/// @brief Field ReplaceAllExceptFirst value: I32(3)
static ::AmplifyImpostors::LODReplacement const ReplaceAllExceptFirst;

/// @brief Field ReplaceCulled value: I32(1)
static ::AmplifyImpostors::LODReplacement const ReplaceCulled;

/// @brief Field ReplaceLast value: I32(2)
static ::AmplifyImpostors::LODReplacement const ReplaceLast;

/// @brief Field ReplaceSpecific value: I32(4)
static ::AmplifyImpostors::LODReplacement const ReplaceSpecific;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20940};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::AmplifyImpostors::LODReplacement, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::AmplifyImpostors::LODReplacement) == 0x4, "Size mismatch!");

} // namespace end def AmplifyImpostors

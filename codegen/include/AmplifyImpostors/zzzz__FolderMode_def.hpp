#pragma once
// IWYU pragma private; include "AmplifyImpostors/FolderMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FolderMode)
// Forward declare root types
namespace AmplifyImpostors {
struct FolderMode;
}
// Write type traits
MARK_VAL_T(::AmplifyImpostors::FolderMode);
DEFINE_IL2CPP_CLASS(::AmplifyImpostors::FolderMode, "AmplifyImpostors", "FolderMode");
// Dependencies 
namespace AmplifyImpostors {
// Is value type: true
// CS Name: AmplifyImpostors.FolderMode
struct CORDL_TYPE FolderMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FolderMode_Unwrapped
enum struct __FolderMode_Unwrapped : int32_t {
__E_RelativeToPrefab = static_cast<int32_t>(0x0),
__E_Global = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FolderMode_Unwrapped () const noexcept {
return static_cast<__FolderMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FolderMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FolderMode(int32_t  value__) noexcept;

/// @brief Field Global value: I32(1)
static ::AmplifyImpostors::FolderMode const Global;

/// @brief Field RelativeToPrefab value: I32(0)
static ::AmplifyImpostors::FolderMode const RelativeToPrefab;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20942};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::AmplifyImpostors::FolderMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::AmplifyImpostors::FolderMode) == 0x4, "Size mismatch!");

} // namespace end def AmplifyImpostors

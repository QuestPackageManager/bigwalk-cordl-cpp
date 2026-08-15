#pragma once
// IWYU pragma private; include "GlobalNamespace/yQtXDCwmdQVTUEPMKlfKKbmWifrJ.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(yQtXDCwmdQVTUEPMKlfKKbmWifrJ)
// Forward declare root types
namespace GlobalNamespace {
struct yQtXDCwmdQVTUEPMKlfKKbmWifrJ;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::yQtXDCwmdQVTUEPMKlfKKbmWifrJ);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::yQtXDCwmdQVTUEPMKlfKKbmWifrJ, "", "yQtXDCwmdQVTUEPMKlfKKbmWifrJ");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: yQtXDCwmdQVTUEPMKlfKKbmWifrJ
struct CORDL_TYPE yQtXDCwmdQVTUEPMKlfKKbmWifrJ {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __yQtXDCwmdQVTUEPMKlfKKbmWifrJ_Unwrapped
enum struct __yQtXDCwmdQVTUEPMKlfKKbmWifrJ_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_Overwrite = static_cast<int32_t>(0x1),
__E_OnlyCurrent = static_cast<int32_t>(0x2),
__E_DangerouslyCommitMerelyToDiskCache = static_cast<int32_t>(0x4),
__E_Consolidate = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __yQtXDCwmdQVTUEPMKlfKKbmWifrJ_Unwrapped () const noexcept {
return static_cast<__yQtXDCwmdQVTUEPMKlfKKbmWifrJ_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr yQtXDCwmdQVTUEPMKlfKKbmWifrJ() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr yQtXDCwmdQVTUEPMKlfKKbmWifrJ(int32_t  value__) noexcept;

/// @brief Field Consolidate value: I32(8)
static ::GlobalNamespace::yQtXDCwmdQVTUEPMKlfKKbmWifrJ const Consolidate;

/// @brief Field DangerouslyCommitMerelyToDiskCache value: I32(4)
static ::GlobalNamespace::yQtXDCwmdQVTUEPMKlfKKbmWifrJ const DangerouslyCommitMerelyToDiskCache;

/// @brief Field Default value: I32(0)
static ::GlobalNamespace::yQtXDCwmdQVTUEPMKlfKKbmWifrJ const Default;

/// @brief Field OnlyCurrent value: I32(2)
static ::GlobalNamespace::yQtXDCwmdQVTUEPMKlfKKbmWifrJ const OnlyCurrent;

/// @brief Field Overwrite value: I32(1)
static ::GlobalNamespace::yQtXDCwmdQVTUEPMKlfKKbmWifrJ const Overwrite;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6182};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::yQtXDCwmdQVTUEPMKlfKKbmWifrJ, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::yQtXDCwmdQVTUEPMKlfKKbmWifrJ) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

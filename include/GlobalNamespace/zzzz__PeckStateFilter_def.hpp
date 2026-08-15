#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckStateFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PeckStateFilter)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
struct PeckStateFilter_FilterType;
}
// Forward declare root types
namespace GlobalNamespace {
struct PeckStateFilter_FilterType;
}
namespace GlobalNamespace {
struct PeckStateFilter;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PeckStateFilter_FilterType);
MARK_VAL_T(::GlobalNamespace::PeckStateFilter);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckStateFilter_FilterType, "", "PeckStateFilter/FilterType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckStateFilter, "", "PeckStateFilter");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckStateFilter/FilterType
struct CORDL_TYPE PeckStateFilter_FilterType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PeckStateFilter_FilterType_Unwrapped
enum struct __PeckStateFilter_FilterType_Unwrapped : int32_t {
__E_Always = static_cast<int32_t>(0x0),
__E_OnSpecificStates = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PeckStateFilter_FilterType_Unwrapped () const noexcept {
return static_cast<__PeckStateFilter_FilterType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PeckStateFilter_FilterType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PeckStateFilter_FilterType(int32_t  value__) noexcept;

/// @brief Field Always value: I32(0)
static ::GlobalNamespace::PeckStateFilter_FilterType const Always;

/// @brief Field OnSpecificStates value: I32(1)
static ::GlobalNamespace::PeckStateFilter_FilterType const OnSpecificStates;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5349};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckStateFilter_FilterType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckStateFilter_FilterType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PeckStateFilter::FilterType
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckStateFilter
struct CORDL_TYPE PeckStateFilter {
public:
// Declarations
using FilterType = ::GlobalNamespace::PeckStateFilter_FilterType;

/// @brief Method ShouldPeck, addr 0x180453b00, size 0x1c0, virtual false, abstract: false, final false
inline bool ShouldPeck(::GlobalNamespace::PeckContext  peckContext) ;

// Ctor Parameters []
// @brief default ctor
constexpr PeckStateFilter() ;

// Ctor Parameters [CppParam { name: "filterType", ty: "::GlobalNamespace::PeckStateFilter_FilterType", modifiers: "", def_value: None }, CppParam { name: "specificStates", ty: "::ArrayW<bool>", modifiers: "", def_value: None }]
constexpr PeckStateFilter(::GlobalNamespace::PeckStateFilter_FilterType  filterType, ::ArrayW<bool>  specificStates) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5350};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field filterType, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::PeckStateFilter_FilterType  filterType;

/// @brief Field specificStates, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<bool>  specificStates;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckStateFilter, filterType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckStateFilter, specificStates) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckStateFilter) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

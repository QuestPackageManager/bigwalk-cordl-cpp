#pragma once
// IWYU pragma private; include "GlobalNamespace/oVSIEFDpAQhSkKHXjYJhZknWQkkr.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(oVSIEFDpAQhSkKHXjYJhZknWQkkr)
// Forward declare root types
namespace GlobalNamespace {
struct oVSIEFDpAQhSkKHXjYJhZknWQkkr;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::oVSIEFDpAQhSkKHXjYJhZknWQkkr);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::oVSIEFDpAQhSkKHXjYJhZknWQkkr, "", "oVSIEFDpAQhSkKHXjYJhZknWQkkr");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: oVSIEFDpAQhSkKHXjYJhZknWQkkr
struct CORDL_TYPE oVSIEFDpAQhSkKHXjYJhZknWQkkr {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __oVSIEFDpAQhSkKHXjYJhZknWQkkr_Unwrapped
enum struct __oVSIEFDpAQhSkKHXjYJhZknWQkkr_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_NoFiltering = static_cast<int32_t>(0x1),
__E_CustomFiltering = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __oVSIEFDpAQhSkKHXjYJhZknWQkkr_Unwrapped () const noexcept {
return static_cast<__oVSIEFDpAQhSkKHXjYJhZknWQkkr_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr oVSIEFDpAQhSkKHXjYJhZknWQkkr() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr oVSIEFDpAQhSkKHXjYJhZknWQkkr(int32_t  value__) noexcept;

/// @brief Field CustomFiltering value: I32(2)
static ::GlobalNamespace::oVSIEFDpAQhSkKHXjYJhZknWQkkr const CustomFiltering;

/// @brief Field Default value: I32(0)
static ::GlobalNamespace::oVSIEFDpAQhSkKHXjYJhZknWQkkr const Default;

/// @brief Field NoFiltering value: I32(1)
static ::GlobalNamespace::oVSIEFDpAQhSkKHXjYJhZknWQkkr const NoFiltering;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6178};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::oVSIEFDpAQhSkKHXjYJhZknWQkkr, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::oVSIEFDpAQhSkKHXjYJhZknWQkkr) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

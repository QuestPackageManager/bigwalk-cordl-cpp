#pragma once
// IWYU pragma private; include "GlobalNamespace/bbKKpEavMuWvrgIfKLNegyyxRksx.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(bbKKpEavMuWvrgIfKLNegyyxRksx)
// Forward declare root types
namespace GlobalNamespace {
struct bbKKpEavMuWvrgIfKLNegyyxRksx;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::bbKKpEavMuWvrgIfKLNegyyxRksx);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::bbKKpEavMuWvrgIfKLNegyyxRksx, "", "bbKKpEavMuWvrgIfKLNegyyxRksx");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: bbKKpEavMuWvrgIfKLNegyyxRksx
struct CORDL_TYPE bbKKpEavMuWvrgIfKLNegyyxRksx {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __bbKKpEavMuWvrgIfKLNegyyxRksx_Unwrapped
enum struct __bbKKpEavMuWvrgIfKLNegyyxRksx_Unwrapped : int32_t {
__E_Input = static_cast<int32_t>(0x10000003),
__E_Header = static_cast<int32_t>(0x10000005),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __bbKKpEavMuWvrgIfKLNegyyxRksx_Unwrapped () const noexcept {
return static_cast<__bbKKpEavMuWvrgIfKLNegyyxRksx_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr bbKKpEavMuWvrgIfKLNegyyxRksx() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr bbKKpEavMuWvrgIfKLNegyyxRksx(int32_t  value__) noexcept;

/// @brief Field Header value: I32(268435461)
static ::GlobalNamespace::bbKKpEavMuWvrgIfKLNegyyxRksx const Header;

/// @brief Field Input value: I32(268435459)
static ::GlobalNamespace::bbKKpEavMuWvrgIfKLNegyyxRksx const Input;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6153};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::bbKKpEavMuWvrgIfKLNegyyxRksx, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::bbKKpEavMuWvrgIfKLNegyyxRksx) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

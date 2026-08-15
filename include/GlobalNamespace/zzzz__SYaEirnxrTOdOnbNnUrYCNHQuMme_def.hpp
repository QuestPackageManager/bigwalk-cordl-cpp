#pragma once
// IWYU pragma private; include "GlobalNamespace/SYaEirnxrTOdOnbNnUrYCNHQuMme.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SYaEirnxrTOdOnbNnUrYCNHQuMme)
// Forward declare root types
namespace GlobalNamespace {
struct SYaEirnxrTOdOnbNnUrYCNHQuMme;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SYaEirnxrTOdOnbNnUrYCNHQuMme);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SYaEirnxrTOdOnbNnUrYCNHQuMme, "", "SYaEirnxrTOdOnbNnUrYCNHQuMme");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SYaEirnxrTOdOnbNnUrYCNHQuMme
struct CORDL_TYPE SYaEirnxrTOdOnbNnUrYCNHQuMme {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SYaEirnxrTOdOnbNnUrYCNHQuMme_Unwrapped
enum struct __SYaEirnxrTOdOnbNnUrYCNHQuMme_Unwrapped : int32_t {
__E_SharpDX = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SYaEirnxrTOdOnbNnUrYCNHQuMme_Unwrapped () const noexcept {
return static_cast<__SYaEirnxrTOdOnbNnUrYCNHQuMme_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SYaEirnxrTOdOnbNnUrYCNHQuMme() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SYaEirnxrTOdOnbNnUrYCNHQuMme(int32_t  value__) noexcept;

/// @brief Field SharpDX value: I32(0)
static ::GlobalNamespace::SYaEirnxrTOdOnbNnUrYCNHQuMme const SharpDX;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5953};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SYaEirnxrTOdOnbNnUrYCNHQuMme, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SYaEirnxrTOdOnbNnUrYCNHQuMme) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

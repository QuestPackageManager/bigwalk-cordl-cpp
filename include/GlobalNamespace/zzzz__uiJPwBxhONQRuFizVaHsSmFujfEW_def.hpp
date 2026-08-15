#pragma once
// IWYU pragma private; include "GlobalNamespace/uiJPwBxhONQRuFizVaHsSmFujfEW.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(uiJPwBxhONQRuFizVaHsSmFujfEW)
// Forward declare root types
namespace GlobalNamespace {
struct uiJPwBxhONQRuFizVaHsSmFujfEW;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::uiJPwBxhONQRuFizVaHsSmFujfEW);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::uiJPwBxhONQRuFizVaHsSmFujfEW, "", "uiJPwBxhONQRuFizVaHsSmFujfEW");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: uiJPwBxhONQRuFizVaHsSmFujfEW
struct CORDL_TYPE uiJPwBxhONQRuFizVaHsSmFujfEW {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __uiJPwBxhONQRuFizVaHsSmFujfEW_Unwrapped
enum struct __uiJPwBxhONQRuFizVaHsSmFujfEW_Unwrapped : int32_t {
__E_Userpacked = static_cast<int32_t>(0x1),
__E_ComparisonSampler = static_cast<int32_t>(0x2),
__E_TextureComponent0 = static_cast<int32_t>(0x4),
__E_TextureComponent1 = static_cast<int32_t>(0x8),
__E_TextureComponents = static_cast<int32_t>(0xc),
__E_Unused = static_cast<int32_t>(0x10),
__E_None = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __uiJPwBxhONQRuFizVaHsSmFujfEW_Unwrapped () const noexcept {
return static_cast<__uiJPwBxhONQRuFizVaHsSmFujfEW_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr uiJPwBxhONQRuFizVaHsSmFujfEW() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr uiJPwBxhONQRuFizVaHsSmFujfEW(int32_t  value__) noexcept;

/// @brief Field ComparisonSampler value: I32(2)
static ::GlobalNamespace::uiJPwBxhONQRuFizVaHsSmFujfEW const ComparisonSampler;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::uiJPwBxhONQRuFizVaHsSmFujfEW const None;

/// @brief Field TextureComponent0 value: I32(4)
static ::GlobalNamespace::uiJPwBxhONQRuFizVaHsSmFujfEW const TextureComponent0;

/// @brief Field TextureComponent1 value: I32(8)
static ::GlobalNamespace::uiJPwBxhONQRuFizVaHsSmFujfEW const TextureComponent1;

/// @brief Field TextureComponents value: I32(12)
static ::GlobalNamespace::uiJPwBxhONQRuFizVaHsSmFujfEW const TextureComponents;

/// @brief Field Unused value: I32(16)
static ::GlobalNamespace::uiJPwBxhONQRuFizVaHsSmFujfEW const Unused;

/// @brief Field Userpacked value: I32(1)
static ::GlobalNamespace::uiJPwBxhONQRuFizVaHsSmFujfEW const Userpacked;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6210};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::uiJPwBxhONQRuFizVaHsSmFujfEW, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::uiJPwBxhONQRuFizVaHsSmFujfEW) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

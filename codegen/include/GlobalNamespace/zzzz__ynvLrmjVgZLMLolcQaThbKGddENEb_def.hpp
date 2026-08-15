#pragma once
// IWYU pragma private; include "GlobalNamespace/ynvLrmjVgZLMLolcQaThbKGddENEb.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ynvLrmjVgZLMLolcQaThbKGddENEb)
// Forward declare root types
namespace GlobalNamespace {
struct ynvLrmjVgZLMLolcQaThbKGddENEb;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ynvLrmjVgZLMLolcQaThbKGddENEb);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ynvLrmjVgZLMLolcQaThbKGddENEb, "", "ynvLrmjVgZLMLolcQaThbKGddENEb");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ynvLrmjVgZLMLolcQaThbKGddENEb
struct CORDL_TYPE ynvLrmjVgZLMLolcQaThbKGddENEb {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ynvLrmjVgZLMLolcQaThbKGddENEb_Unwrapped
enum struct __ynvLrmjVgZLMLolcQaThbKGddENEb_Unwrapped : int32_t {
__E_Solo = static_cast<int32_t>(0x1),
__E_NoDownload = static_cast<int32_t>(0x80000000),
__E_None = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ynvLrmjVgZLMLolcQaThbKGddENEb_Unwrapped () const noexcept {
return static_cast<__ynvLrmjVgZLMLolcQaThbKGddENEb_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ynvLrmjVgZLMLolcQaThbKGddENEb() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ynvLrmjVgZLMLolcQaThbKGddENEb(int32_t  value__) noexcept;

/// @brief Field NoDownload value: I32(-2147483648)
static ::GlobalNamespace::ynvLrmjVgZLMLolcQaThbKGddENEb const NoDownload;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::ynvLrmjVgZLMLolcQaThbKGddENEb const None;

/// @brief Field Solo value: I32(1)
static ::GlobalNamespace::ynvLrmjVgZLMLolcQaThbKGddENEb const Solo;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6282};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ynvLrmjVgZLMLolcQaThbKGddENEb, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ynvLrmjVgZLMLolcQaThbKGddENEb) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

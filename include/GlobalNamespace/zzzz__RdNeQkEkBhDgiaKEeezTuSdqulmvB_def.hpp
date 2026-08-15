#pragma once
// IWYU pragma private; include "GlobalNamespace/RdNeQkEkBhDgiaKEeezTuSdqulmvB.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RdNeQkEkBhDgiaKEeezTuSdqulmvB)
// Forward declare root types
namespace GlobalNamespace {
struct RdNeQkEkBhDgiaKEeezTuSdqulmvB;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RdNeQkEkBhDgiaKEeezTuSdqulmvB);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RdNeQkEkBhDgiaKEeezTuSdqulmvB, "", "RdNeQkEkBhDgiaKEeezTuSdqulmvB");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: RdNeQkEkBhDgiaKEeezTuSdqulmvB
struct CORDL_TYPE RdNeQkEkBhDgiaKEeezTuSdqulmvB {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RdNeQkEkBhDgiaKEeezTuSdqulmvB_Unwrapped
enum struct __RdNeQkEkBhDgiaKEeezTuSdqulmvB_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_LostFocus = static_cast<int32_t>(0x1),
__E_GainedFocus = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RdNeQkEkBhDgiaKEeezTuSdqulmvB_Unwrapped () const noexcept {
return static_cast<__RdNeQkEkBhDgiaKEeezTuSdqulmvB_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RdNeQkEkBhDgiaKEeezTuSdqulmvB() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RdNeQkEkBhDgiaKEeezTuSdqulmvB(int32_t  value__) noexcept;

/// @brief Field GainedFocus value: I32(2)
static ::GlobalNamespace::RdNeQkEkBhDgiaKEeezTuSdqulmvB const GainedFocus;

/// @brief Field LostFocus value: I32(1)
static ::GlobalNamespace::RdNeQkEkBhDgiaKEeezTuSdqulmvB const LostFocus;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::RdNeQkEkBhDgiaKEeezTuSdqulmvB const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5842};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RdNeQkEkBhDgiaKEeezTuSdqulmvB, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RdNeQkEkBhDgiaKEeezTuSdqulmvB) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

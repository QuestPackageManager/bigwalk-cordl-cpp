#pragma once
// IWYU pragma private; include "GlobalNamespace/RIezUwMeaWCjTImPsqGoIzVtjjaHb.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RIezUwMeaWCjTImPsqGoIzVtjjaHb)
// Forward declare root types
namespace GlobalNamespace {
struct RIezUwMeaWCjTImPsqGoIzVtjjaHb;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RIezUwMeaWCjTImPsqGoIzVtjjaHb);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RIezUwMeaWCjTImPsqGoIzVtjjaHb, "", "RIezUwMeaWCjTImPsqGoIzVtjjaHb");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: RIezUwMeaWCjTImPsqGoIzVtjjaHb
struct CORDL_TYPE RIezUwMeaWCjTImPsqGoIzVtjjaHb {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RIezUwMeaWCjTImPsqGoIzVtjjaHb_Unwrapped
enum struct __RIezUwMeaWCjTImPsqGoIzVtjjaHb_Unwrapped : int32_t {
__E_AbsoluteAxis = static_cast<int32_t>(0x1),
__E_RelativeAxis = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RIezUwMeaWCjTImPsqGoIzVtjjaHb_Unwrapped () const noexcept {
return static_cast<__RIezUwMeaWCjTImPsqGoIzVtjjaHb_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RIezUwMeaWCjTImPsqGoIzVtjjaHb() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RIezUwMeaWCjTImPsqGoIzVtjjaHb(int32_t  value__) noexcept;

/// @brief Field AbsoluteAxis value: I32(1)
static ::GlobalNamespace::RIezUwMeaWCjTImPsqGoIzVtjjaHb const AbsoluteAxis;

/// @brief Field RelativeAxis value: I32(2)
static ::GlobalNamespace::RIezUwMeaWCjTImPsqGoIzVtjjaHb const RelativeAxis;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6272};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RIezUwMeaWCjTImPsqGoIzVtjjaHb, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RIezUwMeaWCjTImPsqGoIzVtjjaHb) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

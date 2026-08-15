#pragma once
// IWYU pragma private; include "GlobalNamespace/FzDhesALMeNyaxnlfXifiIOzhizv.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FzDhesALMeNyaxnlfXifiIOzhizv)
// Forward declare root types
namespace GlobalNamespace {
struct FzDhesALMeNyaxnlfXifiIOzhizv;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FzDhesALMeNyaxnlfXifiIOzhizv);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FzDhesALMeNyaxnlfXifiIOzhizv, "", "FzDhesALMeNyaxnlfXifiIOzhizv");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: FzDhesALMeNyaxnlfXifiIOzhizv
struct CORDL_TYPE FzDhesALMeNyaxnlfXifiIOzhizv {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FzDhesALMeNyaxnlfXifiIOzhizv_Unwrapped
enum struct __FzDhesALMeNyaxnlfXifiIOzhizv_Unwrapped : int32_t {
__E_Attached = static_cast<int32_t>(0x1),
__E_PolledDevice = static_cast<int32_t>(0x2),
__E_Emulated = static_cast<int32_t>(0x4),
__E_PolledDataFormat = static_cast<int32_t>(0x8),
__E_ForceFeedback = static_cast<int32_t>(0x100),
__E_ForwardFeedbackAttack = static_cast<int32_t>(0x200),
__E_ForceFeedbackDate = static_cast<int32_t>(0x400),
__E_Saturation = static_cast<int32_t>(0x800),
__E_PositiveNegativeCoeeficients = static_cast<int32_t>(0x1000),
__E_PositiveNegativeSaturation = static_cast<int32_t>(0x2000),
__E_DeadBand = static_cast<int32_t>(0x4000),
__E_StartDelay = static_cast<int32_t>(0x8000),
__E_Alias = static_cast<int32_t>(0x10000),
__E_Phantom = static_cast<int32_t>(0x20000),
__E_Hidden = static_cast<int32_t>(0x40000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FzDhesALMeNyaxnlfXifiIOzhizv_Unwrapped () const noexcept {
return static_cast<__FzDhesALMeNyaxnlfXifiIOzhizv_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FzDhesALMeNyaxnlfXifiIOzhizv() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FzDhesALMeNyaxnlfXifiIOzhizv(int32_t  value__) noexcept;

/// @brief Field Alias value: I32(65536)
static ::GlobalNamespace::FzDhesALMeNyaxnlfXifiIOzhizv const Alias;

/// @brief Field Attached value: I32(1)
static ::GlobalNamespace::FzDhesALMeNyaxnlfXifiIOzhizv const Attached;

/// @brief Field DeadBand value: I32(16384)
static ::GlobalNamespace::FzDhesALMeNyaxnlfXifiIOzhizv const DeadBand;

/// @brief Field Emulated value: I32(4)
static ::GlobalNamespace::FzDhesALMeNyaxnlfXifiIOzhizv const Emulated;

/// @brief Field ForceFeedback value: I32(256)
static ::GlobalNamespace::FzDhesALMeNyaxnlfXifiIOzhizv const ForceFeedback;

/// @brief Field ForceFeedbackDate value: I32(1024)
static ::GlobalNamespace::FzDhesALMeNyaxnlfXifiIOzhizv const ForceFeedbackDate;

/// @brief Field ForwardFeedbackAttack value: I32(512)
static ::GlobalNamespace::FzDhesALMeNyaxnlfXifiIOzhizv const ForwardFeedbackAttack;

/// @brief Field Hidden value: I32(262144)
static ::GlobalNamespace::FzDhesALMeNyaxnlfXifiIOzhizv const Hidden;

/// @brief Field Phantom value: I32(131072)
static ::GlobalNamespace::FzDhesALMeNyaxnlfXifiIOzhizv const Phantom;

/// @brief Field PolledDataFormat value: I32(8)
static ::GlobalNamespace::FzDhesALMeNyaxnlfXifiIOzhizv const PolledDataFormat;

/// @brief Field PolledDevice value: I32(2)
static ::GlobalNamespace::FzDhesALMeNyaxnlfXifiIOzhizv const PolledDevice;

/// @brief Field PositiveNegativeCoeeficients value: I32(4096)
static ::GlobalNamespace::FzDhesALMeNyaxnlfXifiIOzhizv const PositiveNegativeCoeeficients;

/// @brief Field PositiveNegativeSaturation value: I32(8192)
static ::GlobalNamespace::FzDhesALMeNyaxnlfXifiIOzhizv const PositiveNegativeSaturation;

/// @brief Field Saturation value: I32(2048)
static ::GlobalNamespace::FzDhesALMeNyaxnlfXifiIOzhizv const Saturation;

/// @brief Field StartDelay value: I32(32768)
static ::GlobalNamespace::FzDhesALMeNyaxnlfXifiIOzhizv const StartDelay;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6276};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FzDhesALMeNyaxnlfXifiIOzhizv, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FzDhesALMeNyaxnlfXifiIOzhizv) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

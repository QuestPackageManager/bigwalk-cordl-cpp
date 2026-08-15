#pragma once
// IWYU pragma private; include "Animancer/OptionalWarning.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OptionalWarning)
// Forward declare root types
namespace Animancer {
struct OptionalWarning;
}
// Write type traits
MARK_VAL_T(::Animancer::OptionalWarning);
DEFINE_IL2CPP_CLASS(::Animancer::OptionalWarning, "Animancer", "OptionalWarning");
// Dependencies 
namespace Animancer {
// Is value type: true
// CS Name: Animancer.OptionalWarning
struct CORDL_TYPE OptionalWarning {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OptionalWarning_Unwrapped
enum struct __OptionalWarning_Unwrapped : int32_t {
__E_ProOnly = static_cast<int32_t>(0x1),
__E_CreateGraphWhileDisabled = static_cast<int32_t>(0x2),
__E_CreateGraphDuringGuiEvent = static_cast<int32_t>(0x4),
__E_AnimatorDisabled = static_cast<int32_t>(0x8),
__E_NativeControllerHumanoid = static_cast<int32_t>(0x10),
__E_NativeControllerHybrid = static_cast<int32_t>(0x20),
__E_DuplicateEvent = static_cast<int32_t>(0x40),
__E_EndEventInterrupt = static_cast<int32_t>(0x80),
__E_UselessEvent = static_cast<int32_t>(0x100),
__E_LockedEvents = static_cast<int32_t>(0x200),
__E_UnsupportedEvents = static_cast<int32_t>(0x400),
__E_UnsupportedSpeed = static_cast<int32_t>(0x800),
__E_UnsupportedIK = static_cast<int32_t>(0x1000),
__E_MixerMinChildren = static_cast<int32_t>(0x2000),
__E_MixerSynchronizeZeroLength = static_cast<int32_t>(0x4000),
__E_CustomFadeBounds = static_cast<int32_t>(0x8000),
__E_CustomFadeNotNull = static_cast<int32_t>(0x10000),
__E_AnimatorSpeed = static_cast<int32_t>(0x20000),
__E_UnusedNode = static_cast<int32_t>(0x40000),
__E_PlayableAssetAnimatorBinding = static_cast<int32_t>(0x80000),
__E_CloneComplexState = static_cast<int32_t>(0x100000),
__E_All = static_cast<int32_t>(0xffffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OptionalWarning_Unwrapped () const noexcept {
return static_cast<__OptionalWarning_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OptionalWarning() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OptionalWarning(int32_t  value__) noexcept;

/// @brief Field All value: I32(-1)
static ::Animancer::OptionalWarning const All;

/// @brief Field AnimatorDisabled value: I32(8)
static ::Animancer::OptionalWarning const AnimatorDisabled;

/// @brief Field AnimatorSpeed value: I32(131072)
static ::Animancer::OptionalWarning const AnimatorSpeed;

/// @brief Field CloneComplexState value: I32(1048576)
static ::Animancer::OptionalWarning const CloneComplexState;

/// @brief Field CreateGraphDuringGuiEvent value: I32(4)
static ::Animancer::OptionalWarning const CreateGraphDuringGuiEvent;

/// @brief Field CreateGraphWhileDisabled value: I32(2)
static ::Animancer::OptionalWarning const CreateGraphWhileDisabled;

/// @brief Field CustomFadeBounds value: I32(32768)
static ::Animancer::OptionalWarning const CustomFadeBounds;

/// @brief Field CustomFadeNotNull value: I32(65536)
static ::Animancer::OptionalWarning const CustomFadeNotNull;

/// @brief Field DuplicateEvent value: I32(64)
static ::Animancer::OptionalWarning const DuplicateEvent;

/// @brief Field EndEventInterrupt value: I32(128)
static ::Animancer::OptionalWarning const EndEventInterrupt;

/// @brief Field LockedEvents value: I32(512)
static ::Animancer::OptionalWarning const LockedEvents;

/// @brief Field MixerMinChildren value: I32(8192)
static ::Animancer::OptionalWarning const MixerMinChildren;

/// @brief Field MixerSynchronizeZeroLength value: I32(16384)
static ::Animancer::OptionalWarning const MixerSynchronizeZeroLength;

/// @brief Field NativeControllerHumanoid value: I32(16)
static ::Animancer::OptionalWarning const NativeControllerHumanoid;

/// @brief Field NativeControllerHybrid value: I32(32)
static ::Animancer::OptionalWarning const NativeControllerHybrid;

/// @brief Field PlayableAssetAnimatorBinding value: I32(524288)
static ::Animancer::OptionalWarning const PlayableAssetAnimatorBinding;

/// @brief Field ProOnly value: I32(1)
static ::Animancer::OptionalWarning const ProOnly;

/// @brief Field UnsupportedEvents value: I32(1024)
static ::Animancer::OptionalWarning const UnsupportedEvents;

/// @brief Field UnsupportedIK value: I32(4096)
static ::Animancer::OptionalWarning const UnsupportedIK;

/// @brief Field UnsupportedSpeed value: I32(2048)
static ::Animancer::OptionalWarning const UnsupportedSpeed;

/// @brief Field UnusedNode value: I32(262144)
static ::Animancer::OptionalWarning const UnusedNode;

/// @brief Field UselessEvent value: I32(256)
static ::Animancer::OptionalWarning const UselessEvent;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18124};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Animancer::OptionalWarning, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Animancer::OptionalWarning) == 0x4, "Size mismatch!");

} // namespace end def Animancer

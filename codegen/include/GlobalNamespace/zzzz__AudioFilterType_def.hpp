#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioFilterType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioFilterType)
// Forward declare root types
namespace GlobalNamespace {
struct AudioFilterType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AudioFilterType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioFilterType, "", "AudioFilterType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: AudioFilterType
struct CORDL_TYPE AudioFilterType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AudioFilterType_Unwrapped
enum struct __AudioFilterType_Unwrapped : int32_t {
__E_AllpassFilter = static_cast<int32_t>(0x0),
__E_LowPassFilter = static_cast<int32_t>(0x1),
__E_HighPassFilter = static_cast<int32_t>(0x2),
__E_NotchFilter = static_cast<int32_t>(0x3),
__E_LowShelfFilter = static_cast<int32_t>(0x4),
__E_HighShelfFilter = static_cast<int32_t>(0x5),
__E_PeakingEQFilter = static_cast<int32_t>(0x6),
__E_TapeDelay = static_cast<int32_t>(0x7),
__E_BitCrusher = static_cast<int32_t>(0x8),
__E_LoudnessMeter = static_cast<int32_t>(0x9),
__E_Send = static_cast<int32_t>(0xa),
__E_Receive = static_cast<int32_t>(0xb),
__E_BasicDelay = static_cast<int32_t>(0xc),
__E_Downsampler = static_cast<int32_t>(0xd),
__E_Distortion = static_cast<int32_t>(0xe),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AudioFilterType_Unwrapped () const noexcept {
return static_cast<__AudioFilterType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AudioFilterType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AudioFilterType(int32_t  value__) noexcept;

/// @brief Field AllpassFilter value: I32(0)
static ::GlobalNamespace::AudioFilterType const AllpassFilter;

/// @brief Field BasicDelay value: I32(12)
static ::GlobalNamespace::AudioFilterType const BasicDelay;

/// @brief Field BitCrusher value: I32(8)
static ::GlobalNamespace::AudioFilterType const BitCrusher;

/// @brief Field Distortion value: I32(14)
static ::GlobalNamespace::AudioFilterType const Distortion;

/// @brief Field Downsampler value: I32(13)
static ::GlobalNamespace::AudioFilterType const Downsampler;

/// @brief Field HighPassFilter value: I32(2)
static ::GlobalNamespace::AudioFilterType const HighPassFilter;

/// @brief Field HighShelfFilter value: I32(5)
static ::GlobalNamespace::AudioFilterType const HighShelfFilter;

/// @brief Field LoudnessMeter value: I32(9)
static ::GlobalNamespace::AudioFilterType const LoudnessMeter;

/// @brief Field LowPassFilter value: I32(1)
static ::GlobalNamespace::AudioFilterType const LowPassFilter;

/// @brief Field LowShelfFilter value: I32(4)
static ::GlobalNamespace::AudioFilterType const LowShelfFilter;

/// @brief Field NotchFilter value: I32(3)
static ::GlobalNamespace::AudioFilterType const NotchFilter;

/// @brief Field PeakingEQFilter value: I32(6)
static ::GlobalNamespace::AudioFilterType const PeakingEQFilter;

/// @brief Field Receive value: I32(11)
static ::GlobalNamespace::AudioFilterType const Receive;

/// @brief Field Send value: I32(10)
static ::GlobalNamespace::AudioFilterType const Send;

/// @brief Field TapeDelay value: I32(7)
static ::GlobalNamespace::AudioFilterType const TapeDelay;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17500};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioFilterType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioFilterType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

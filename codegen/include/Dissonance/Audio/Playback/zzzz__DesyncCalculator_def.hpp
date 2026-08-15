#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/DesyncCalculator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DesyncCalculator)
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace Dissonance::Audio::Playback {
struct DesyncCalculator;
}
// Write type traits
MARK_VAL_T(::Dissonance::Audio::Playback::DesyncCalculator);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::DesyncCalculator, "Dissonance.Audio.Playback", "DesyncCalculator");
// Dependencies 
namespace Dissonance::Audio::Playback {
// Is value type: true
// CS Name: Dissonance.Audio.Playback.DesyncCalculator
struct CORDL_TYPE DesyncCalculator {
public:
// Declarations
 __declspec(property(get=get_CorrectedPlaybackSpeed)) float_t  CorrectedPlaybackSpeed;

 __declspec(property(get=get_DesyncMilliseconds, put=set_DesyncMilliseconds)) int32_t  DesyncMilliseconds;

/// @brief Method CalculateCorrectionFactor, addr 0x1805dcea0, size 0x50, virtual false, abstract: false, final false
static inline float_t CalculateCorrectionFactor(float_t  desyncMilliseconds) ;

/// @brief Method CalculateDesync, addr 0x1805dcef0, size 0x80, virtual false, abstract: false, final false
static inline int32_t CalculateDesync(::System::TimeSpan  idealPlaybackPosition, ::System::TimeSpan  actualPlaybackPosition) ;

/// @brief Method Skip, addr 0x1805dcf70, size 0x10, virtual false, abstract: false, final false
inline void Skip(int32_t  deltaDesyncMilliseconds) ;

/// @brief Method Update, addr 0x1805dcf80, size 0xb0, virtual false, abstract: false, final false
inline void Update(::System::TimeSpan  ideal, ::System::TimeSpan  actual) ;

/// @brief Method get_CorrectedPlaybackSpeed, addr 0x1805dd030, size 0x70, virtual false, abstract: false, final false
inline float_t get_CorrectedPlaybackSpeed() ;

/// @brief Method get_DesyncMilliseconds, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_DesyncMilliseconds() ;

/// @brief Method set_DesyncMilliseconds, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_DesyncMilliseconds(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr DesyncCalculator() ;

// Ctor Parameters [CppParam { name: "_DesyncMilliseconds_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DesyncCalculator(int32_t  _DesyncMilliseconds_k__BackingField) noexcept;

/// @brief Field MaxAllowedDesyncMillis offset 0xffffffff size 0x4
static constexpr int32_t  MaxAllowedDesyncMillis{static_cast<int32_t>(0x3e8)};

/// @brief Field MaximumPlaybackAdjustment offset 0xffffffff size 0x4
static constexpr float_t  MaximumPlaybackAdjustment{static_cast<float_t>(0.15f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16968};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field <DesyncMilliseconds>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  _DesyncMilliseconds_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Playback::DesyncCalculator, _DesyncMilliseconds_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Playback::DesyncCalculator) == 0x4, "Size mismatch!");

} // namespace end def Dissonance::Audio::Playback

#pragma once
// IWYU pragma private; include "Dissonance/FrameSkipDetector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(FrameSkipDetector)
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace Dissonance {
struct FrameSkipDetector;
}
// Write type traits
MARK_VAL_T(::Dissonance::FrameSkipDetector);
DEFINE_IL2CPP_CLASS(::Dissonance::FrameSkipDetector, "Dissonance", "FrameSkipDetector");
// Dependencies 
namespace Dissonance {
// Is value type: true
// CS Name: Dissonance.FrameSkipDetector
struct CORDL_TYPE FrameSkipDetector {
public:
// Declarations
 __declspec(property(get=get_IsBreakerClosed)) bool  IsBreakerClosed;

/// @brief Field MetricFrameTime, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MetricFrameTime, put=setStaticF_MetricFrameTime)) ::StringW  MetricFrameTime;

/// @brief Method IsFrameSkip, addr 0x1805ca8e0, size 0xa0, virtual false, abstract: false, final false
inline bool IsFrameSkip(float_t  deltaTime) ;

/// @brief Method UpdateBreaker, addr 0x1805ca980, size 0x60, virtual false, abstract: false, final false
inline void UpdateBreaker(bool  skip, float_t  dt) ;

/// @brief Method .ctor, addr 0x1805caa20, size 0x110, virtual false, abstract: false, final false
inline void _ctor(::System::TimeSpan  maxFrameTime, ::System::TimeSpan  minimumBreakerDuration, ::System::TimeSpan  maxBreakerDuration, ::System::TimeSpan  breakerResetPerSecond) ;

static inline ::StringW getStaticF_MetricFrameTime() ;

/// @brief Method get_IsBreakerClosed, addr 0x18037a0f0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsBreakerClosed() ;

static inline void setStaticF_MetricFrameTime(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr FrameSkipDetector() ;

// Ctor Parameters [CppParam { name: "_maxFrameTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_minimumBreakerDuration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_maxBreakerDuration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_breakerResetPerSecond", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_breakerCloseTimer", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_currentBreakerDuration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_breakerClosed", ty: "bool", modifiers: "", def_value: None }]
constexpr FrameSkipDetector(float_t  _maxFrameTime, float_t  _minimumBreakerDuration, float_t  _maxBreakerDuration, float_t  _breakerResetPerSecond, float_t  _breakerCloseTimer, float_t  _currentBreakerDuration, bool  _breakerClosed) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16802};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field _maxFrameTime, offset: 0x0, size: 0x4, def value: None
 float_t  _maxFrameTime;

/// @brief Field _minimumBreakerDuration, offset: 0x4, size: 0x4, def value: None
 float_t  _minimumBreakerDuration;

/// @brief Field _maxBreakerDuration, offset: 0x8, size: 0x4, def value: None
 float_t  _maxBreakerDuration;

/// @brief Field _breakerResetPerSecond, offset: 0xc, size: 0x4, def value: None
 float_t  _breakerResetPerSecond;

/// @brief Field _breakerCloseTimer, offset: 0x10, size: 0x4, def value: None
 float_t  _breakerCloseTimer;

/// @brief Field _currentBreakerDuration, offset: 0x14, size: 0x4, def value: None
 float_t  _currentBreakerDuration;

/// @brief Field _breakerClosed, offset: 0x18, size: 0x1, def value: None
 bool  _breakerClosed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::FrameSkipDetector, _maxFrameTime) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::FrameSkipDetector, _minimumBreakerDuration) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Dissonance::FrameSkipDetector, _maxBreakerDuration) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Dissonance::FrameSkipDetector, _breakerResetPerSecond) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Dissonance::FrameSkipDetector, _breakerCloseTimer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::FrameSkipDetector, _currentBreakerDuration) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Dissonance::FrameSkipDetector, _breakerClosed) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Dissonance::FrameSkipDetector) == 0x1c, "Size mismatch!");

} // namespace end def Dissonance

#pragma once
// IWYU pragma private; include "Dissonance/Audio/AecDiagnostics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__CallingConvention_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AecDiagnostics)
namespace Dissonance::Audio {
struct AecDiagnostics_AecState;
}
namespace Dissonance::Audio {
struct AecDiagnostics_AecStats;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Dissonance::Audio {
struct AecDiagnostics_AecState;
}
namespace Dissonance::Audio {
class AecDiagnostics;
}
namespace Dissonance::Audio {
struct AecDiagnostics_AecStats;
}
// Write type traits
MARK_VAL_T(::Dissonance::Audio::AecDiagnostics_AecState);
MARK_REF_T(::Dissonance::Audio::AecDiagnostics*);
MARK_VAL_T(::Dissonance::Audio::AecDiagnostics_AecStats);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::AecDiagnostics_AecState, "Dissonance.Audio", "AecDiagnostics/AecState");
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::AecDiagnostics*, "Dissonance.Audio", "AecDiagnostics");
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::AecDiagnostics_AecStats, "Dissonance.Audio", "AecDiagnostics/AecStats");
// Dependencies 
namespace Dissonance::Audio {
// Is value type: true
// CS Name: Dissonance.Audio.AecDiagnostics/AecStats
struct CORDL_TYPE AecDiagnostics_AecStats {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AecDiagnostics_AecStats() ;

// Ctor Parameters [CppParam { name: "DelayMedian", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "DelayStdDev", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "FractionPoorDelays", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "EchoReturnLossAverage", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "EchoReturnLossMin", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "EchoReturnLossMax", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "EchoReturnLossEnhancementAverage", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "EchoReturnLossEnhancementMin", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "EchoReturnLossEnhancementMax", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ResidualEchoLikelihood", ty: "float_t", modifiers: "", def_value: None }]
constexpr AecDiagnostics_AecStats(float_t  DelayMedian, float_t  DelayStdDev, float_t  FractionPoorDelays, float_t  EchoReturnLossAverage, float_t  EchoReturnLossMin, float_t  EchoReturnLossMax, float_t  EchoReturnLossEnhancementAverage, float_t  EchoReturnLossEnhancementMin, float_t  EchoReturnLossEnhancementMax, float_t  ResidualEchoLikelihood) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16952};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field DelayMedian, offset: 0x0, size: 0x4, def value: None
 float_t  DelayMedian;

/// @brief Field DelayStdDev, offset: 0x4, size: 0x4, def value: None
 float_t  DelayStdDev;

/// @brief Field FractionPoorDelays, offset: 0x8, size: 0x4, def value: None
 float_t  FractionPoorDelays;

/// @brief Field EchoReturnLossAverage, offset: 0xc, size: 0x4, def value: None
 float_t  EchoReturnLossAverage;

/// @brief Field EchoReturnLossMin, offset: 0x10, size: 0x4, def value: None
 float_t  EchoReturnLossMin;

/// @brief Field EchoReturnLossMax, offset: 0x14, size: 0x4, def value: None
 float_t  EchoReturnLossMax;

/// @brief Field EchoReturnLossEnhancementAverage, offset: 0x18, size: 0x4, def value: None
 float_t  EchoReturnLossEnhancementAverage;

/// @brief Field EchoReturnLossEnhancementMin, offset: 0x1c, size: 0x4, def value: None
 float_t  EchoReturnLossEnhancementMin;

/// @brief Field EchoReturnLossEnhancementMax, offset: 0x20, size: 0x4, def value: None
 float_t  EchoReturnLossEnhancementMax;

/// @brief Field ResidualEchoLikelihood, offset: 0x24, size: 0x4, def value: None
 float_t  ResidualEchoLikelihood;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::AecDiagnostics_AecStats, DelayMedian) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::AecDiagnostics_AecStats, DelayStdDev) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::AecDiagnostics_AecStats, FractionPoorDelays) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::AecDiagnostics_AecStats, EchoReturnLossAverage) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::AecDiagnostics_AecStats, EchoReturnLossMin) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::AecDiagnostics_AecStats, EchoReturnLossMax) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::AecDiagnostics_AecStats, EchoReturnLossEnhancementAverage) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::AecDiagnostics_AecStats, EchoReturnLossEnhancementMin) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::AecDiagnostics_AecStats, EchoReturnLossEnhancementMax) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::AecDiagnostics_AecStats, ResidualEchoLikelihood) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::AecDiagnostics_AecStats) == 0x28, "Size mismatch!");

} // namespace end def Dissonance::Audio
// Dependencies 
namespace Dissonance::Audio {
// Is value type: true
// CS Name: Dissonance.Audio.AecDiagnostics/AecState
struct CORDL_TYPE AecDiagnostics_AecState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AecDiagnostics_AecState_Unwrapped
enum struct __AecDiagnostics_AecState_Unwrapped : int32_t {
__E_FilterNotRunning = static_cast<int32_t>(0x0),
__E_FilterNoInstance = static_cast<int32_t>(0x1),
__E_FilterNoSamplesSubmitted = static_cast<int32_t>(0x2),
__E_FilterOk = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AecDiagnostics_AecState_Unwrapped () const noexcept {
return static_cast<__AecDiagnostics_AecState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AecDiagnostics_AecState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AecDiagnostics_AecState(int32_t  value__) noexcept;

/// @brief Field FilterNoInstance value: I32(1)
static ::Dissonance::Audio::AecDiagnostics_AecState const FilterNoInstance;

/// @brief Field FilterNoSamplesSubmitted value: I32(2)
static ::Dissonance::Audio::AecDiagnostics_AecState const FilterNoSamplesSubmitted;

/// @brief Field FilterNotRunning value: I32(0)
static ::Dissonance::Audio::AecDiagnostics_AecState const FilterNotRunning;

/// @brief Field FilterOk value: I32(3)
static ::Dissonance::Audio::AecDiagnostics_AecState const FilterOk;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16953};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::AecDiagnostics_AecState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::AecDiagnostics_AecState) == 0x4, "Size mismatch!");

} // namespace end def Dissonance::Audio
// Dependencies System.Object, System.Runtime.InteropServices.CallingConvention
namespace Dissonance::Audio {
// Is value type: false
// CS Name: Dissonance.Audio.AecDiagnostics
class CORDL_TYPE AecDiagnostics : public ::System::Object {
public:
// Declarations
using AecState = ::Dissonance::Audio::AecDiagnostics_AecState;

using AecStats = ::Dissonance::Audio::AecDiagnostics_AecStats;

/// @brief Method Dissonance_GetAecMetrics, addr 0x1805d74f0, size 0x90, virtual false, abstract: false, final false
static inline void Dissonance_GetAecMetrics(::System::IntPtr  buffer, int32_t  length) ;

/// @brief Method GetState, addr 0x1805d7580, size 0x10, virtual false, abstract: false, final false
static inline ::Dissonance::Audio::AecDiagnostics_AecState GetState() ;

/// @brief Method GetStats, addr 0x1805d7590, size 0x220, virtual false, abstract: false, final false
static inline ::Dissonance::Audio::AecDiagnostics_AecStats GetStats(::by_ref<::ArrayW<float_t>>  temp) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AecDiagnostics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AecDiagnostics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AecDiagnostics(AecDiagnostics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AecDiagnostics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AecDiagnostics(AecDiagnostics const& ) = delete;

/// @brief Field Convention value: I32(2)
static ::System::Runtime::InteropServices::CallingConvention const Convention;

/// @brief Field ImportString offset 0xffffffff size 0x8
static constexpr ::ConstString  ImportString{u"AudioPluginDissonance"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16954};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::Audio::AecDiagnostics) == 0x10, "Size mismatch!");

} // namespace end def Dissonance::Audio

#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/AudioPluginDissonanceNative.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__CallingConvention_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioPluginDissonanceNative)
namespace Dissonance::Audio::Capture {
struct AecSuppressionLevels;
}
namespace Dissonance::Audio::Capture {
struct AecmRoutingMode;
}
namespace Dissonance::Audio::Capture {
struct AudioPluginDissonanceNative_FilterState;
}
namespace Dissonance::Audio::Capture {
struct AudioPluginDissonanceNative_ProcessorErrors;
}
namespace Dissonance::Audio::Capture {
struct AudioPluginDissonanceNative_SampleRates;
}
namespace Dissonance::Audio::Capture {
struct NoiseSuppressionLevels;
}
namespace Dissonance::Audio::Capture {
struct VadSensitivityLevels;
}
namespace Dissonance {
class Log;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Dissonance::Audio::Capture {
struct AudioPluginDissonanceNative_FilterState;
}
namespace Dissonance::Audio::Capture {
struct AudioPluginDissonanceNative_ProcessorErrors;
}
namespace Dissonance::Audio::Capture {
struct AudioPluginDissonanceNative_SampleRates;
}
namespace Dissonance::Audio::Capture {
class AudioPluginDissonanceNative;
}
// Write type traits
MARK_VAL_T(::Dissonance::Audio::Capture::AudioPluginDissonanceNative_FilterState);
MARK_VAL_T(::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors);
MARK_VAL_T(::Dissonance::Audio::Capture::AudioPluginDissonanceNative_SampleRates);
MARK_REF_T(::Dissonance::Audio::Capture::AudioPluginDissonanceNative*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Capture::AudioPluginDissonanceNative_FilterState, "Dissonance.Audio.Capture", "AudioPluginDissonanceNative/FilterState");
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors, "Dissonance.Audio.Capture", "AudioPluginDissonanceNative/ProcessorErrors");
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Capture::AudioPluginDissonanceNative_SampleRates, "Dissonance.Audio.Capture", "AudioPluginDissonanceNative/SampleRates");
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Capture::AudioPluginDissonanceNative*, "Dissonance.Audio.Capture", "AudioPluginDissonanceNative");
// Dependencies 
namespace Dissonance::Audio::Capture {
// Is value type: true
// CS Name: Dissonance.Audio.Capture.AudioPluginDissonanceNative/SampleRates
struct CORDL_TYPE AudioPluginDissonanceNative_SampleRates {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AudioPluginDissonanceNative_SampleRates_Unwrapped
enum struct __AudioPluginDissonanceNative_SampleRates_Unwrapped : int32_t {
__E_SampleRate8KHz = static_cast<int32_t>(0x1f40),
__E_SampleRate16KHz = static_cast<int32_t>(0x3e80),
__E_SampleRate32KHz = static_cast<int32_t>(0x7d00),
__E_SampleRate48KHz = static_cast<int32_t>(0xbb80),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AudioPluginDissonanceNative_SampleRates_Unwrapped () const noexcept {
return static_cast<__AudioPluginDissonanceNative_SampleRates_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AudioPluginDissonanceNative_SampleRates() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AudioPluginDissonanceNative_SampleRates(int32_t  value__) noexcept;

/// @brief Field SampleRate16KHz value: I32(16000)
static ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_SampleRates const SampleRate16KHz;

/// @brief Field SampleRate32KHz value: I32(32000)
static ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_SampleRates const SampleRate32KHz;

/// @brief Field SampleRate48KHz value: I32(48000)
static ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_SampleRates const SampleRate48KHz;

/// @brief Field SampleRate8KHz value: I32(8000)
static ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_SampleRates const SampleRate8KHz;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17017};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Capture::AudioPluginDissonanceNative_SampleRates, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Capture::AudioPluginDissonanceNative_SampleRates) == 0x4, "Size mismatch!");

} // namespace end def Dissonance::Audio::Capture
// Dependencies 
namespace Dissonance::Audio::Capture {
// Is value type: true
// CS Name: Dissonance.Audio.Capture.AudioPluginDissonanceNative/ProcessorErrors
struct CORDL_TYPE AudioPluginDissonanceNative_ProcessorErrors {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AudioPluginDissonanceNative_ProcessorErrors_Unwrapped
enum struct __AudioPluginDissonanceNative_ProcessorErrors_Unwrapped : int32_t {
__E_Ok = static_cast<int32_t>(0x0),
__E_Unspecified = static_cast<int32_t>(0xffffffff),
__E_CreationFailed = static_cast<int32_t>(0xfffffffe),
__E_UnsupportedComponent = static_cast<int32_t>(0xfffffffd),
__E_UnsupportedFunction = static_cast<int32_t>(0xfffffffc),
__E_NullPointer = static_cast<int32_t>(0xfffffffb),
__E_BadParameter = static_cast<int32_t>(0xfffffffa),
__E_BadSampleRate = static_cast<int32_t>(0xfffffff9),
__E_BadDataLength = static_cast<int32_t>(0xfffffff8),
__E_BadNumberChannels = static_cast<int32_t>(0xfffffff7),
__E_FileError = static_cast<int32_t>(0xfffffff6),
__E_StreamParameterNotSet = static_cast<int32_t>(0xfffffff5),
__E_NotEnabled = static_cast<int32_t>(0xfffffff4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AudioPluginDissonanceNative_ProcessorErrors_Unwrapped () const noexcept {
return static_cast<__AudioPluginDissonanceNative_ProcessorErrors_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AudioPluginDissonanceNative_ProcessorErrors() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AudioPluginDissonanceNative_ProcessorErrors(int32_t  value__) noexcept;

/// @brief Field BadDataLength value: I32(-8)
static ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors const BadDataLength;

/// @brief Field BadNumberChannels value: I32(-9)
static ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors const BadNumberChannels;

/// @brief Field BadParameter value: I32(-6)
static ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors const BadParameter;

/// @brief Field BadSampleRate value: I32(-7)
static ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors const BadSampleRate;

/// @brief Field CreationFailed value: I32(-2)
static ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors const CreationFailed;

/// @brief Field FileError value: I32(-10)
static ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors const FileError;

/// @brief Field NotEnabled value: I32(-12)
static ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors const NotEnabled;

/// @brief Field NullPointer value: I32(-5)
static ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors const NullPointer;

/// @brief Field Ok value: I32(0)
static ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors const Ok;

/// @brief Field StreamParameterNotSet value: I32(-11)
static ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors const StreamParameterNotSet;

/// @brief Field Unspecified value: I32(-1)
static ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors const Unspecified;

/// @brief Field UnsupportedComponent value: I32(-3)
static ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors const UnsupportedComponent;

/// @brief Field UnsupportedFunction value: I32(-4)
static ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors const UnsupportedFunction;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17018};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors) == 0x4, "Size mismatch!");

} // namespace end def Dissonance::Audio::Capture
// Dependencies 
namespace Dissonance::Audio::Capture {
// Is value type: true
// CS Name: Dissonance.Audio.Capture.AudioPluginDissonanceNative/FilterState
struct CORDL_TYPE AudioPluginDissonanceNative_FilterState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AudioPluginDissonanceNative_FilterState_Unwrapped
enum struct __AudioPluginDissonanceNative_FilterState_Unwrapped : int32_t {
__E_FilterNotRunning = static_cast<int32_t>(0x0),
__E_FilterNoInstance = static_cast<int32_t>(0x1),
__E_FilterNoSamplesSubmitted = static_cast<int32_t>(0x2),
__E_FilterOk = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AudioPluginDissonanceNative_FilterState_Unwrapped () const noexcept {
return static_cast<__AudioPluginDissonanceNative_FilterState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AudioPluginDissonanceNative_FilterState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AudioPluginDissonanceNative_FilterState(int32_t  value__) noexcept;

/// @brief Field FilterNoInstance value: I32(1)
static ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_FilterState const FilterNoInstance;

/// @brief Field FilterNoSamplesSubmitted value: I32(2)
static ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_FilterState const FilterNoSamplesSubmitted;

/// @brief Field FilterNotRunning value: I32(0)
static ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_FilterState const FilterNotRunning;

/// @brief Field FilterOk value: I32(3)
static ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_FilterState const FilterOk;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17019};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Capture::AudioPluginDissonanceNative_FilterState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Capture::AudioPluginDissonanceNative_FilterState) == 0x4, "Size mismatch!");

} // namespace end def Dissonance::Audio::Capture
// Dependencies System.Object, System.Runtime.InteropServices.CallingConvention
namespace Dissonance::Audio::Capture {
// Is value type: false
// CS Name: Dissonance.Audio.Capture.AudioPluginDissonanceNative
class CORDL_TYPE AudioPluginDissonanceNative : public ::System::Object {
public:
// Declarations
using FilterState = ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_FilterState;

using ProcessorErrors = ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors;

using SampleRates = ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_SampleRates;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

/// @brief Method Dissonance_ConfigureAecSuppression, addr 0x1805efc00, size 0xa0, virtual false, abstract: false, final false
static inline void Dissonance_ConfigureAecSuppression(::System::IntPtr  handle, ::Dissonance::Audio::Capture::AecSuppressionLevels  aecLevel, ::Dissonance::Audio::Capture::AecmRoutingMode  aecmRouting) ;

/// @brief Method Dissonance_ConfigureNoiseSuppression, addr 0x1805efca0, size 0x90, virtual false, abstract: false, final false
static inline void Dissonance_ConfigureNoiseSuppression(::System::IntPtr  handle, ::Dissonance::Audio::Capture::NoiseSuppressionLevels  nsLevel) ;

/// @brief Method Dissonance_ConfigureVadSensitivity, addr 0x1805efd30, size 0x90, virtual false, abstract: false, final false
static inline void Dissonance_ConfigureVadSensitivity(::System::IntPtr  handle, ::Dissonance::Audio::Capture::VadSensitivityLevels  nsLevel) ;

/// @brief Method Dissonance_CreatePreprocessor, addr 0x1805efdc0, size 0xd0, virtual false, abstract: false, final false
static inline ::System::IntPtr Dissonance_CreatePreprocessor(::Dissonance::Audio::Capture::NoiseSuppressionLevels  nsLevel, ::Dissonance::Audio::Capture::AecSuppressionLevels  aecLevel, bool  aecDelayAgnostic, bool  aecExtended, bool  aecRefined, ::Dissonance::Audio::Capture::AecmRoutingMode  aecmRoutingMode, bool  aecmComfortNoise) ;

/// @brief Method Dissonance_CreateRnnoiseState, addr 0x1805efe90, size 0x70, virtual false, abstract: false, final false
static inline ::System::IntPtr Dissonance_CreateRnnoiseState() ;

/// @brief Method Dissonance_DestroyPreprocessor, addr 0x1805eff00, size 0x80, virtual false, abstract: false, final false
static inline void Dissonance_DestroyPreprocessor(::System::IntPtr  handle) ;

/// @brief Method Dissonance_DestroyRnnoiseState, addr 0x1805eff80, size 0x80, virtual false, abstract: false, final false
static inline void Dissonance_DestroyRnnoiseState(::System::IntPtr  state) ;

/// @brief Method Dissonance_GetAecMetrics, addr 0x1805f0000, size 0x90, virtual false, abstract: false, final false
static inline void Dissonance_GetAecMetrics(::System::IntPtr  floatBuffer, int32_t  bufferLength) ;

/// @brief Method Dissonance_GetFilterState, addr 0x1805f0090, size 0x70, virtual false, abstract: false, final false
static inline int32_t Dissonance_GetFilterState() ;

/// @brief Method Dissonance_GetVadSpeechState, addr 0x1805f0100, size 0x80, virtual false, abstract: false, final false
static inline bool Dissonance_GetVadSpeechState(::System::IntPtr  handle) ;

/// @brief Method Dissonance_PreprocessCaptureFrame, addr 0x1805f0180, size 0xd0, virtual false, abstract: false, final false
static inline ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors Dissonance_PreprocessCaptureFrame(::System::IntPtr  handle, int32_t  sampleRate, ::ArrayW<float_t>  input, ::ArrayW<float_t>  output, int32_t  streamDelay) ;

/// @brief Method Dissonance_PreprocessorExchangeInstance, addr 0x1805f0250, size 0x90, virtual false, abstract: false, final false
static inline bool Dissonance_PreprocessorExchangeInstance(::System::IntPtr  previous, ::System::IntPtr  replacement) ;

/// @brief Method Dissonance_RnnoiseGetGains, addr 0x1805f02e0, size 0xa0, virtual false, abstract: false, final false
static inline int32_t Dissonance_RnnoiseGetGains(::System::IntPtr  state, ::ArrayW<float_t>  output, int32_t  length) ;

/// @brief Method Dissonance_RnnoiseProcessFrame, addr 0x1805f0380, size 0xd0, virtual false, abstract: false, final false
static inline bool Dissonance_RnnoiseProcessFrame(::System::IntPtr  state, int32_t  count, int32_t  sampleRate, ::ArrayW<float_t>  input, ::ArrayW<float_t>  output) ;

/// @brief Method Dissonance_SetAgcIsOutputMutedState, addr 0x1805f0450, size 0x90, virtual false, abstract: false, final false
static inline void Dissonance_SetAgcIsOutputMutedState(::System::IntPtr  handle, bool  isMuted) ;

/// @brief Method Dissonance_SetMinBandGain, addr 0x1805f04e0, size 0x90, virtual false, abstract: false, final false
static inline void Dissonance_SetMinBandGain(::System::IntPtr  state, float_t  min_band_gain) ;

/// @brief Method GetAecFilterState, addr 0x1805f0570, size 0x10, virtual false, abstract: false, final false
static inline ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_FilterState GetAecFilterState() ;

static inline ::Dissonance::Log* getStaticF_Log() ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioPluginDissonanceNative() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioPluginDissonanceNative", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioPluginDissonanceNative(AudioPluginDissonanceNative && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioPluginDissonanceNative", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioPluginDissonanceNative(AudioPluginDissonanceNative const& ) = delete;

/// @brief Field Convention value: I32(2)
static ::System::Runtime::InteropServices::CallingConvention const Convention;

/// @brief Field ImportString offset 0xffffffff size 0x8
static constexpr ::ConstString  ImportString{u"AudioPluginDissonance"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17020};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::Audio::Capture::AudioPluginDissonanceNative) == 0x10, "Size mismatch!");

} // namespace end def Dissonance::Audio::Capture

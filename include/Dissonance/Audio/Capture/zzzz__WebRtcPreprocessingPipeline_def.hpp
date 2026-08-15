#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/WebRtcPreprocessingPipeline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/Audio/Capture/zzzz__AecSuppressionLevels_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__AecmRoutingMode_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__BasePreprocessingPipeline_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__NoiseSuppressionLevels_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__VadSensitivityLevels_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WebRtcPreprocessingPipeline)
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
struct AudioPluginDissonanceNative_SampleRates;
}
namespace Dissonance::Audio::Capture {
struct NoiseSuppressionLevels;
}
namespace Dissonance::Audio::Capture {
class RnnoisePreprocessor_WebRtcPreprocessingPipeline___c;
}
namespace Dissonance::Audio::Capture {
template<typename T>
class RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1;
}
namespace Dissonance::Audio::Capture {
struct VadSensitivityLevels;
}
namespace Dissonance::Audio::Capture {
class WebRtcPreprocessingPipeline_RnnoisePreprocessor;
}
namespace Dissonance::Audio::Capture {
class WebRtcPreprocessingPipeline_WebRtcPreprocessor;
}
namespace Dissonance::Audio::Capture {
class WebRtcPreprocessor_WebRtcPreprocessingPipeline___c;
}
namespace Dissonance::Audio::Capture {
template<typename T>
class WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1;
}
namespace Dissonance::Config {
class VoiceSettings;
}
namespace Dissonance::Threading {
template<typename T>
class LockedValue_1;
}
namespace Dissonance {
class Log;
}
namespace NAudio::Wave {
class WaveFormat;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::ComponentModel {
class PropertyChangedEventArgs;
}
namespace System::ComponentModel {
class PropertyChangedEventHandler;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Dissonance::Audio::Capture {
class RnnoisePreprocessor_WebRtcPreprocessingPipeline___c;
}
namespace Dissonance::Audio::Capture {
template<typename T>
class RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1;
}
namespace Dissonance::Audio::Capture {
class WebRtcPreprocessingPipeline;
}
namespace Dissonance::Audio::Capture {
class WebRtcPreprocessingPipeline_RnnoisePreprocessor;
}
namespace Dissonance::Audio::Capture {
class WebRtcPreprocessingPipeline_WebRtcPreprocessor;
}
namespace Dissonance::Audio::Capture {
class WebRtcPreprocessor_WebRtcPreprocessingPipeline___c;
}
namespace Dissonance::Audio::Capture {
template<typename T>
class WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c*);
MARK_GEN_REF_T_PTR(::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1);
MARK_REF_T(::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*);
MARK_REF_T(::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor*);
MARK_REF_T(::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*);
MARK_REF_T(::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c*);
MARK_GEN_REF_T_PTR(::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c*, "Dissonance.Audio.Capture", "WebRtcPreprocessingPipeline/RnnoisePreprocessor/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1, "Dissonance.Audio.Capture", "WebRtcPreprocessingPipeline/RnnoisePreprocessor/<>c__DisplayClass8_0`1");
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*, "Dissonance.Audio.Capture", "WebRtcPreprocessingPipeline");
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor*, "Dissonance.Audio.Capture", "WebRtcPreprocessingPipeline/RnnoisePreprocessor");
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*, "Dissonance.Audio.Capture", "WebRtcPreprocessingPipeline/WebRtcPreprocessor");
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c*, "Dissonance.Audio.Capture", "WebRtcPreprocessingPipeline/WebRtcPreprocessor/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1, "Dissonance.Audio.Capture", "WebRtcPreprocessingPipeline/WebRtcPreprocessor/<>c__DisplayClass24_0`1");
// Dependencies System.Object
namespace Dissonance::Audio::Capture {
// Is value type: false
// CS Name: Dissonance.Audio.Capture.WebRtcPreprocessingPipeline/WebRtcPreprocessor/<>c
class CORDL_TYPE WebRtcPreprocessor_WebRtcPreprocessingPipeline___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c*  __9;

/// @brief Field <>9__23_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__23_0, put=setStaticF___9__23_0)) ::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,::Dissonance::Audio::Capture::NoiseSuppressionLevels>*  __9__23_0;

/// @brief Field <>9__23_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__23_2, put=setStaticF___9__23_2)) ::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,::Dissonance::Audio::Capture::AecSuppressionLevels>*  __9__23_2;

/// @brief Field <>9__23_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__23_4, put=setStaticF___9__23_4)) ::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,::Dissonance::Audio::Capture::AecmRoutingMode>*  __9__23_4;

/// @brief Field <>9__23_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__23_6, put=setStaticF___9__23_6)) ::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,::Dissonance::Audio::Capture::VadSensitivityLevels>*  __9__23_6;

static inline ::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c* New_ctor() ;

/// @brief Method <SetFilterPreprocessor>b__23_0, addr 0x1805f9f70, size 0x20, virtual false, abstract: false, final false
inline ::Dissonance::Audio::Capture::NoiseSuppressionLevels _SetFilterPreprocessor_b__23_0(::Dissonance::Config::VoiceSettings*  s) ;

/// @brief Method <SetFilterPreprocessor>b__23_2, addr 0x1805f9f90, size 0x20, virtual false, abstract: false, final false
inline ::Dissonance::Audio::Capture::AecSuppressionLevels _SetFilterPreprocessor_b__23_2(::Dissonance::Config::VoiceSettings*  s) ;

/// @brief Method <SetFilterPreprocessor>b__23_4, addr 0x1805f9fb0, size 0x20, virtual false, abstract: false, final false
inline ::Dissonance::Audio::Capture::AecmRoutingMode _SetFilterPreprocessor_b__23_4(::Dissonance::Config::VoiceSettings*  s) ;

/// @brief Method <SetFilterPreprocessor>b__23_6, addr 0x1805f9fd0, size 0x20, virtual false, abstract: false, final false
inline ::Dissonance::Audio::Capture::VadSensitivityLevels _SetFilterPreprocessor_b__23_6(::Dissonance::Config::VoiceSettings*  s) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,::Dissonance::Audio::Capture::NoiseSuppressionLevels>* getStaticF___9__23_0() ;

static inline ::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,::Dissonance::Audio::Capture::AecSuppressionLevels>* getStaticF___9__23_2() ;

static inline ::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,::Dissonance::Audio::Capture::AecmRoutingMode>* getStaticF___9__23_4() ;

static inline ::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,::Dissonance::Audio::Capture::VadSensitivityLevels>* getStaticF___9__23_6() ;

static inline void setStaticF___9(::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c*  value) ;

static inline void setStaticF___9__23_0(::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,::Dissonance::Audio::Capture::NoiseSuppressionLevels>*  value) ;

static inline void setStaticF___9__23_2(::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,::Dissonance::Audio::Capture::AecSuppressionLevels>*  value) ;

static inline void setStaticF___9__23_4(::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,::Dissonance::Audio::Capture::AecmRoutingMode>*  value) ;

static inline void setStaticF___9__23_6(::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,::Dissonance::Audio::Capture::VadSensitivityLevels>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebRtcPreprocessor_WebRtcPreprocessingPipeline___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebRtcPreprocessor_WebRtcPreprocessingPipeline___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebRtcPreprocessor_WebRtcPreprocessingPipeline___c(WebRtcPreprocessor_WebRtcPreprocessingPipeline___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebRtcPreprocessor_WebRtcPreprocessingPipeline___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebRtcPreprocessor_WebRtcPreprocessingPipeline___c(WebRtcPreprocessor_WebRtcPreprocessingPipeline___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17039};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c) == 0x10, "Size mismatch!");

} // namespace end def Dissonance::Audio::Capture
// Dependencies System.Object
namespace Dissonance::Audio::Capture {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Dissonance.Audio.Capture.WebRtcPreprocessingPipeline/WebRtcPreprocessor/<>c__DisplayClass24_0`1<T>
class CORDL_TYPE WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field getValue, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_getValue, put=__cordl_internal_set_getValue)) ::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,T>*  getValue;

/// @brief Field propertyName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_propertyName, put=__cordl_internal_set_propertyName)) ::StringW  propertyName;

/// @brief Field setValue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_setValue, put=__cordl_internal_set_setValue)) ::System::Action_1<T>*  setValue;

/// @brief Field settings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_settings, put=__cordl_internal_set_settings)) ::UnityW<::Dissonance::Config::VoiceSettings>  settings;

static inline ::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1<T>* New_ctor() ;

/// @brief Method <Bind>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Bind_b__0(::System::Object*  sender, ::System::ComponentModel::PropertyChangedEventArgs*  args) ;

constexpr ::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,T>* const& __cordl_internal_get_getValue() const;

constexpr ::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,T>*& __cordl_internal_get_getValue() ;

constexpr ::StringW const& __cordl_internal_get_propertyName() const;

constexpr ::StringW& __cordl_internal_get_propertyName() ;

constexpr ::System::Action_1<T>* const& __cordl_internal_get_setValue() const;

constexpr ::System::Action_1<T>*& __cordl_internal_get_setValue() ;

constexpr ::UnityW<::Dissonance::Config::VoiceSettings> const& __cordl_internal_get_settings() const;

constexpr ::UnityW<::Dissonance::Config::VoiceSettings>& __cordl_internal_get_settings() ;

constexpr void __cordl_internal_set_getValue(::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,T>*  value) ;

constexpr void __cordl_internal_set_propertyName(::StringW  value) ;

constexpr void __cordl_internal_set_setValue(::System::Action_1<T>*  value) ;

constexpr void __cordl_internal_set_settings(::UnityW<::Dissonance::Config::VoiceSettings>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1(WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1(WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17040};

/// @brief Field propertyName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___propertyName;

/// @brief Field setValue, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<T>*  ___setValue;

/// @brief Field getValue, offset: 0x20, size: 0x8, def value: None
 ::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,T>*  ___getValue;

/// @brief Field settings, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Dissonance::Config::VoiceSettings>  ___settings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Audio::Capture
// Dependencies Dissonance.Audio.Capture.AecSuppressionLevels, Dissonance.Audio.Capture.AecmRoutingMode, Dissonance.Audio.Capture.NoiseSuppressionLevels, Dissonance.Audio.Capture.VadSensitivityLevels, System.Object
namespace Dissonance::Audio::Capture {
// Is value type: false
// CS Name: Dissonance.Audio.Capture.WebRtcPreprocessingPipeline/WebRtcPreprocessor
class CORDL_TYPE WebRtcPreprocessingPipeline_WebRtcPreprocessor : public ::System::Object {
public:
// Declarations
using __c = ::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c;

template<typename T>
using __c__DisplayClass24_0_1 = ::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1<T>;

 __declspec(property(get=get_AecSuppressionLevel, put=set_AecSuppressionLevel)) ::Dissonance::Audio::Capture::AecSuppressionLevels  AecSuppressionLevel;

 __declspec(property(get=get_AecmSuppressionLevel, put=set_AecmSuppressionLevel)) ::Dissonance::Audio::Capture::AecmRoutingMode  AecmSuppressionLevel;

 __declspec(property(get=get_NoiseSuppressionLevel, put=set_NoiseSuppressionLevel)) ::Dissonance::Audio::Capture::NoiseSuppressionLevels  NoiseSuppressionLevel;

 __declspec(property(get=get_VadSensitivityLevel, put=set_VadSensitivityLevel)) ::Dissonance::Audio::Capture::VadSensitivityLevels  VadSensitivityLevel;

/// @brief Field _aecLevel, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__aecLevel, put=__cordl_internal_set__aecLevel)) ::Dissonance::Audio::Capture::AecSuppressionLevels  _aecLevel;

/// @brief Field _aecmLevel, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__aecmLevel, put=__cordl_internal_set__aecmLevel)) ::Dissonance::Audio::Capture::AecmRoutingMode  _aecmLevel;

/// @brief Field _handle, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__handle, put=__cordl_internal_set__handle)) ::Dissonance::Threading::LockedValue_1<::System::IntPtr>*  _handle;

/// @brief Field _nsLevel, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__nsLevel, put=__cordl_internal_set__nsLevel)) ::Dissonance::Audio::Capture::NoiseSuppressionLevels  _nsLevel;

/// @brief Field _subscribed, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__subscribed, put=__cordl_internal_set__subscribed)) ::System::Collections::Generic::List_1<::System::ComponentModel::PropertyChangedEventHandler*>*  _subscribed;

/// @brief Field _useMobileAec, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__useMobileAec, put=__cordl_internal_set__useMobileAec)) bool  _useMobileAec;

/// @brief Field _vadlevel, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__vadlevel, put=__cordl_internal_set__vadlevel)) ::Dissonance::Audio::Capture::VadSensitivityLevels  _vadlevel;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Bind, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void Bind(::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,T>*  getValue, ::StringW  propertyName, ::System::Action_1<T>*  setValue) ;

/// @brief Method ClearFilterPreprocessor, addr 0x1805fa970, size 0x2f0, virtual false, abstract: false, final false
inline bool ClearFilterPreprocessor(bool  throwOnError) ;

/// @brief Method CreatePreprocessor, addr 0x1805fac60, size 0x150, virtual false, abstract: false, final false
inline ::System::IntPtr CreatePreprocessor() ;

/// @brief Method Dispose, addr 0x1805fadb0, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Finalize, addr 0x1805fadd0, size 0x10, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor* New_ctor(bool  useMobileAec) ;

/// @brief Method Process, addr 0x1805fade0, size 0x3b0, virtual false, abstract: false, final false
inline bool Process(::Dissonance::Audio::Capture::AudioPluginDissonanceNative_SampleRates  inputSampleRate, ::ArrayW<float_t>  input, ::ArrayW<float_t>  output, int32_t  estimatedStreamDelay, bool  isOutputMuted) ;

/// @brief Method ReleaseUnmanagedResources, addr 0x1805fb190, size 0x100, virtual false, abstract: false, final false
inline void ReleaseUnmanagedResources() ;

/// @brief Method Reset, addr 0x1805fb290, size 0x290, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetFilterPreprocessor, addr 0x1805fb520, size 0x520, virtual false, abstract: false, final false
inline void SetFilterPreprocessor(::System::IntPtr  preprocessor) ;

/// @brief Method <SetFilterPreprocessor>b__23_1, addr 0x1805fba40, size 0x10, virtual false, abstract: false, final false
inline void _SetFilterPreprocessor_b__23_1(::Dissonance::Audio::Capture::NoiseSuppressionLevels  v) ;

/// @brief Method <SetFilterPreprocessor>b__23_3, addr 0x1805fba50, size 0x10, virtual false, abstract: false, final false
inline void _SetFilterPreprocessor_b__23_3(::Dissonance::Audio::Capture::AecSuppressionLevels  v) ;

/// @brief Method <SetFilterPreprocessor>b__23_5, addr 0x1805fba60, size 0x10, virtual false, abstract: false, final false
inline void _SetFilterPreprocessor_b__23_5(::Dissonance::Audio::Capture::AecmRoutingMode  v) ;

/// @brief Method <SetFilterPreprocessor>b__23_7, addr 0x1805fba70, size 0x10, virtual false, abstract: false, final false
inline void _SetFilterPreprocessor_b__23_7(::Dissonance::Audio::Capture::VadSensitivityLevels  v) ;

constexpr ::Dissonance::Audio::Capture::AecSuppressionLevels const& __cordl_internal_get__aecLevel() const;

constexpr ::Dissonance::Audio::Capture::AecSuppressionLevels& __cordl_internal_get__aecLevel() ;

constexpr ::Dissonance::Audio::Capture::AecmRoutingMode const& __cordl_internal_get__aecmLevel() const;

constexpr ::Dissonance::Audio::Capture::AecmRoutingMode& __cordl_internal_get__aecmLevel() ;

constexpr ::Dissonance::Threading::LockedValue_1<::System::IntPtr>* const& __cordl_internal_get__handle() const;

constexpr ::Dissonance::Threading::LockedValue_1<::System::IntPtr>*& __cordl_internal_get__handle() ;

constexpr ::Dissonance::Audio::Capture::NoiseSuppressionLevels const& __cordl_internal_get__nsLevel() const;

constexpr ::Dissonance::Audio::Capture::NoiseSuppressionLevels& __cordl_internal_get__nsLevel() ;

constexpr ::System::Collections::Generic::List_1<::System::ComponentModel::PropertyChangedEventHandler*>* const& __cordl_internal_get__subscribed() const;

constexpr ::System::Collections::Generic::List_1<::System::ComponentModel::PropertyChangedEventHandler*>*& __cordl_internal_get__subscribed() ;

constexpr bool const& __cordl_internal_get__useMobileAec() const;

constexpr bool& __cordl_internal_get__useMobileAec() ;

constexpr ::Dissonance::Audio::Capture::VadSensitivityLevels const& __cordl_internal_get__vadlevel() const;

constexpr ::Dissonance::Audio::Capture::VadSensitivityLevels& __cordl_internal_get__vadlevel() ;

constexpr void __cordl_internal_set__aecLevel(::Dissonance::Audio::Capture::AecSuppressionLevels  value) ;

constexpr void __cordl_internal_set__aecmLevel(::Dissonance::Audio::Capture::AecmRoutingMode  value) ;

constexpr void __cordl_internal_set__handle(::Dissonance::Threading::LockedValue_1<::System::IntPtr>*  value) ;

constexpr void __cordl_internal_set__nsLevel(::Dissonance::Audio::Capture::NoiseSuppressionLevels  value) ;

constexpr void __cordl_internal_set__subscribed(::System::Collections::Generic::List_1<::System::ComponentModel::PropertyChangedEventHandler*>*  value) ;

constexpr void __cordl_internal_set__useMobileAec(bool  value) ;

constexpr void __cordl_internal_set__vadlevel(::Dissonance::Audio::Capture::VadSensitivityLevels  value) ;

/// @brief Method .ctor, addr 0x1805fba80, size 0x100, virtual false, abstract: false, final false
inline void _ctor(bool  useMobileAec) ;

/// @brief Method get_AecSuppressionLevel, addr 0x1803914b0, size 0x10, virtual false, abstract: false, final false
inline ::Dissonance::Audio::Capture::AecSuppressionLevels get_AecSuppressionLevel() ;

/// @brief Method get_AecmSuppressionLevel, addr 0x1802e2ba0, size 0x10, virtual false, abstract: false, final false
inline ::Dissonance::Audio::Capture::AecmRoutingMode get_AecmSuppressionLevel() ;

/// @brief Method get_NoiseSuppressionLevel, addr 0x180396ef0, size 0x10, virtual false, abstract: false, final false
inline ::Dissonance::Audio::Capture::NoiseSuppressionLevels get_NoiseSuppressionLevel() ;

/// @brief Method get_VadSensitivityLevel, addr 0x1803914a0, size 0x10, virtual false, abstract: false, final false
inline ::Dissonance::Audio::Capture::VadSensitivityLevels get_VadSensitivityLevel() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_AecSuppressionLevel, addr 0x1805fbb80, size 0xf0, virtual false, abstract: false, final false
inline void set_AecSuppressionLevel(::Dissonance::Audio::Capture::AecSuppressionLevels  value) ;

/// @brief Method set_AecmSuppressionLevel, addr 0x1805fbc70, size 0xf0, virtual false, abstract: false, final false
inline void set_AecmSuppressionLevel(::Dissonance::Audio::Capture::AecmRoutingMode  value) ;

/// @brief Method set_NoiseSuppressionLevel, addr 0x1805fbd60, size 0x170, virtual false, abstract: false, final false
inline void set_NoiseSuppressionLevel(::Dissonance::Audio::Capture::NoiseSuppressionLevels  value) ;

/// @brief Method set_VadSensitivityLevel, addr 0x1805fbed0, size 0x100, virtual false, abstract: false, final false
inline void set_VadSensitivityLevel(::Dissonance::Audio::Capture::VadSensitivityLevels  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebRtcPreprocessingPipeline_WebRtcPreprocessor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebRtcPreprocessingPipeline_WebRtcPreprocessor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebRtcPreprocessingPipeline_WebRtcPreprocessor(WebRtcPreprocessingPipeline_WebRtcPreprocessor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebRtcPreprocessingPipeline_WebRtcPreprocessor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebRtcPreprocessingPipeline_WebRtcPreprocessor(WebRtcPreprocessingPipeline_WebRtcPreprocessor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17041};

/// @brief Field _handle, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::Threading::LockedValue_1<::System::IntPtr>*  ____handle;

/// @brief Field _subscribed, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::ComponentModel::PropertyChangedEventHandler*>*  ____subscribed;

/// @brief Field _useMobileAec, offset: 0x20, size: 0x1, def value: None
 bool  ____useMobileAec;

/// @brief Field _nsLevel, offset: 0x24, size: 0x4, def value: None
 ::Dissonance::Audio::Capture::NoiseSuppressionLevels  ____nsLevel;

/// @brief Field _vadlevel, offset: 0x28, size: 0x4, def value: None
 ::Dissonance::Audio::Capture::VadSensitivityLevels  ____vadlevel;

/// @brief Field _aecLevel, offset: 0x2c, size: 0x4, def value: None
 ::Dissonance::Audio::Capture::AecSuppressionLevels  ____aecLevel;

/// @brief Field _aecmLevel, offset: 0x30, size: 0x4, def value: None
 ::Dissonance::Audio::Capture::AecmRoutingMode  ____aecmLevel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor, ____handle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor, ____subscribed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor, ____useMobileAec) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor, ____nsLevel) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor, ____vadlevel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor, ____aecLevel) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor, ____aecmLevel) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor) == 0x38, "Size mismatch!");

} // namespace end def Dissonance::Audio::Capture
// Dependencies System.Object
namespace Dissonance::Audio::Capture {
// Is value type: false
// CS Name: Dissonance.Audio.Capture.WebRtcPreprocessingPipeline/RnnoisePreprocessor/<>c
class CORDL_TYPE RnnoisePreprocessor_WebRtcPreprocessingPipeline___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c*  __9;

/// @brief Field <>9__7_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_0, put=setStaticF___9__7_0)) ::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,bool>*  __9__7_0;

/// @brief Field <>9__7_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_2, put=setStaticF___9__7_2)) ::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,float_t>*  __9__7_2;

static inline ::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c* New_ctor() ;

/// @brief Method <.ctor>b__7_0, addr 0x1805f9ff0, size 0x20, virtual false, abstract: false, final false
inline bool __ctor_b__7_0(::Dissonance::Config::VoiceSettings*  v) ;

/// @brief Method <.ctor>b__7_2, addr 0x1805fa010, size 0x20, virtual false, abstract: false, final false
inline float_t __ctor_b__7_2(::Dissonance::Config::VoiceSettings*  v) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,bool>* getStaticF___9__7_0() ;

static inline ::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,float_t>* getStaticF___9__7_2() ;

static inline void setStaticF___9(::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c*  value) ;

static inline void setStaticF___9__7_0(::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,bool>*  value) ;

static inline void setStaticF___9__7_2(::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RnnoisePreprocessor_WebRtcPreprocessingPipeline___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RnnoisePreprocessor_WebRtcPreprocessingPipeline___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RnnoisePreprocessor_WebRtcPreprocessingPipeline___c(RnnoisePreprocessor_WebRtcPreprocessingPipeline___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RnnoisePreprocessor_WebRtcPreprocessingPipeline___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RnnoisePreprocessor_WebRtcPreprocessingPipeline___c(RnnoisePreprocessor_WebRtcPreprocessingPipeline___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17042};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c) == 0x10, "Size mismatch!");

} // namespace end def Dissonance::Audio::Capture
// Dependencies System.Object
namespace Dissonance::Audio::Capture {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Dissonance.Audio.Capture.WebRtcPreprocessingPipeline/RnnoisePreprocessor/<>c__DisplayClass8_0`1<T>
class CORDL_TYPE RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field getValue, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_getValue, put=__cordl_internal_set_getValue)) ::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,T>*  getValue;

/// @brief Field propertyName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_propertyName, put=__cordl_internal_set_propertyName)) ::StringW  propertyName;

/// @brief Field setValue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_setValue, put=__cordl_internal_set_setValue)) ::System::Action_1<T>*  setValue;

/// @brief Field settings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_settings, put=__cordl_internal_set_settings)) ::UnityW<::Dissonance::Config::VoiceSettings>  settings;

static inline ::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1<T>* New_ctor() ;

/// @brief Method <Bind>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Bind_b__0(::System::Object*  sender, ::System::ComponentModel::PropertyChangedEventArgs*  args) ;

constexpr ::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,T>* const& __cordl_internal_get_getValue() const;

constexpr ::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,T>*& __cordl_internal_get_getValue() ;

constexpr ::StringW const& __cordl_internal_get_propertyName() const;

constexpr ::StringW& __cordl_internal_get_propertyName() ;

constexpr ::System::Action_1<T>* const& __cordl_internal_get_setValue() const;

constexpr ::System::Action_1<T>*& __cordl_internal_get_setValue() ;

constexpr ::UnityW<::Dissonance::Config::VoiceSettings> const& __cordl_internal_get_settings() const;

constexpr ::UnityW<::Dissonance::Config::VoiceSettings>& __cordl_internal_get_settings() ;

constexpr void __cordl_internal_set_getValue(::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,T>*  value) ;

constexpr void __cordl_internal_set_propertyName(::StringW  value) ;

constexpr void __cordl_internal_set_setValue(::System::Action_1<T>*  value) ;

constexpr void __cordl_internal_set_settings(::UnityW<::Dissonance::Config::VoiceSettings>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1(RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1(RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17043};

/// @brief Field propertyName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___propertyName;

/// @brief Field setValue, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<T>*  ___setValue;

/// @brief Field getValue, offset: 0x20, size: 0x8, def value: None
 ::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,T>*  ___getValue;

/// @brief Field settings, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Dissonance::Config::VoiceSettings>  ___settings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Audio::Capture
// Dependencies System.Object
namespace Dissonance::Audio::Capture {
// Is value type: false
// CS Name: Dissonance.Audio.Capture.WebRtcPreprocessingPipeline/RnnoisePreprocessor
class CORDL_TYPE WebRtcPreprocessingPipeline_RnnoisePreprocessor : public ::System::Object {
public:
// Declarations
using __c = ::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c;

template<typename T>
using __c__DisplayClass8_0_1 = ::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1<T>;

 __declspec(property(get=get_Enabled, put=set_Enabled)) bool  Enabled;

/// @brief Field _enabled, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__enabled, put=__cordl_internal_set__enabled)) bool  _enabled;

/// @brief Field _handle, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__handle, put=__cordl_internal_set__handle)) ::Dissonance::Threading::LockedValue_1<::System::IntPtr>*  _handle;

/// @brief Field _removalAmount, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__removalAmount, put=__cordl_internal_set__removalAmount)) float_t  _removalAmount;

/// @brief Field _subscribed, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__subscribed, put=__cordl_internal_set__subscribed)) ::System::Collections::Generic::List_1<::System::ComponentModel::PropertyChangedEventHandler*>*  _subscribed;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Bind, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void Bind(::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,T>*  getValue, ::StringW  propertyName, ::System::Action_1<T>*  setValue) ;

/// @brief Method Dispose, addr 0x1805f9090, size 0xd0, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Finalize, addr 0x1805f9160, size 0x10, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetGains, addr 0x1805f9170, size 0x1b0, virtual false, abstract: false, final false
inline int32_t GetGains(::ArrayW<float_t>  output) ;

static inline ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor* New_ctor() ;

/// @brief Method Process, addr 0x1805f9320, size 0x370, virtual false, abstract: false, final false
inline void Process(::Dissonance::Audio::Capture::AudioPluginDissonanceNative_SampleRates  inputSampleRate, ::ArrayW<float_t>  input, ::ArrayW<float_t>  output) ;

/// @brief Method ReleaseUnmanagedResources, addr 0x1805f9690, size 0xf0, virtual false, abstract: false, final false
inline void ReleaseUnmanagedResources() ;

/// @brief Method Reset, addr 0x1805f9780, size 0x110, virtual false, abstract: false, final false
inline void Reset() ;

constexpr bool const& __cordl_internal_get__enabled() const;

constexpr bool& __cordl_internal_get__enabled() ;

constexpr ::Dissonance::Threading::LockedValue_1<::System::IntPtr>* const& __cordl_internal_get__handle() const;

constexpr ::Dissonance::Threading::LockedValue_1<::System::IntPtr>*& __cordl_internal_get__handle() ;

constexpr float_t const& __cordl_internal_get__removalAmount() const;

constexpr float_t& __cordl_internal_get__removalAmount() ;

constexpr ::System::Collections::Generic::List_1<::System::ComponentModel::PropertyChangedEventHandler*>* const& __cordl_internal_get__subscribed() const;

constexpr ::System::Collections::Generic::List_1<::System::ComponentModel::PropertyChangedEventHandler*>*& __cordl_internal_get__subscribed() ;

constexpr void __cordl_internal_set__enabled(bool  value) ;

constexpr void __cordl_internal_set__handle(::Dissonance::Threading::LockedValue_1<::System::IntPtr>*  value) ;

constexpr void __cordl_internal_set__removalAmount(float_t  value) ;

constexpr void __cordl_internal_set__subscribed(::System::Collections::Generic::List_1<::System::ComponentModel::PropertyChangedEventHandler*>*  value) ;

/// @brief Method <.ctor>b__7_1, addr 0x1805f9890, size 0x10, virtual false, abstract: false, final false
inline void __ctor_b__7_1(bool  a) ;

/// @brief Method <.ctor>b__7_3, addr 0x1803bda40, size 0x10, virtual false, abstract: false, final false
inline void __ctor_b__7_3(float_t  a) ;

/// @brief Method .ctor, addr 0x1805f98a0, size 0x200, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Enabled, addr 0x180392490, size 0x10, virtual false, abstract: false, final false
inline bool get_Enabled() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_Enabled, addr 0x1805f9aa0, size 0x150, virtual false, abstract: false, final false
inline void set_Enabled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebRtcPreprocessingPipeline_RnnoisePreprocessor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebRtcPreprocessingPipeline_RnnoisePreprocessor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebRtcPreprocessingPipeline_RnnoisePreprocessor(WebRtcPreprocessingPipeline_RnnoisePreprocessor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebRtcPreprocessingPipeline_RnnoisePreprocessor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebRtcPreprocessingPipeline_RnnoisePreprocessor(WebRtcPreprocessingPipeline_RnnoisePreprocessor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17044};

/// @brief Field _enabled, offset: 0x10, size: 0x1, def value: None
 bool  ____enabled;

/// @brief Field _removalAmount, offset: 0x14, size: 0x4, def value: None
 float_t  ____removalAmount;

/// @brief Field _handle, offset: 0x18, size: 0x8, def value: None
 ::Dissonance::Threading::LockedValue_1<::System::IntPtr>*  ____handle;

/// @brief Field _subscribed, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::ComponentModel::PropertyChangedEventHandler*>*  ____subscribed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor, ____enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor, ____removalAmount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor, ____handle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor, ____subscribed) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor) == 0x28, "Size mismatch!");

} // namespace end def Dissonance::Audio::Capture
// Dependencies Dissonance.Audio.Capture.BasePreprocessingPipeline
namespace Dissonance::Audio::Capture {
// Is value type: false
// CS Name: Dissonance.Audio.Capture.WebRtcPreprocessingPipeline
class CORDL_TYPE WebRtcPreprocessingPipeline : public ::Dissonance::Audio::Capture::BasePreprocessingPipeline {
public:
// Declarations
using RnnoisePreprocessor = ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor;

using WebRtcPreprocessor = ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor;

 __declspec(property(put=set_IsOutputMuted)) bool  IsOutputMuted;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

 __declspec(property(get=get_VadIsSpeechDetected)) bool  VadIsSpeechDetected;

/// @brief Field _isMobilePlatform, offset 0x9d, size 0x1 
 __declspec(property(get=__cordl_internal_get__isMobilePlatform, put=__cordl_internal_set__isMobilePlatform)) bool  _isMobilePlatform;

/// @brief Field _isOutputMuted, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get__isOutputMuted, put=__cordl_internal_set__isOutputMuted)) bool  _isOutputMuted;

/// @brief Field _isVadDetectingSpeech, offset 0x9c, size 0x1 
 __declspec(property(get=__cordl_internal_get__isVadDetectingSpeech, put=__cordl_internal_set__isVadDetectingSpeech)) bool  _isVadDetectingSpeech;

/// @brief Field _preprocessor, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__preprocessor, put=__cordl_internal_set__preprocessor)) ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*  _preprocessor;

/// @brief Field _rnnoise, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__rnnoise, put=__cordl_internal_set__rnnoise)) ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor*  _rnnoise;

/// @brief Method ApplyReset, addr 0x1805fa4b0, size 0x50, virtual true, abstract: false, final false
inline void ApplyReset() ;

/// @brief Method Dispose, addr 0x1805fa500, size 0x110, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method GetAecFilterState, addr 0x1805f0570, size 0x10, virtual false, abstract: false, final false
static inline ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_FilterState GetAecFilterState() ;

/// @brief Method GetBackgroundNoiseRemovalGains, addr 0x1805fa610, size 0x20, virtual false, abstract: false, final false
inline int32_t GetBackgroundNoiseRemovalGains(::ArrayW<float_t>  output) ;

static inline ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline* New_ctor(::NAudio::Wave::WaveFormat*  inputFormat, bool  mobilePlatform) ;

/// @brief Method PreprocessAudioFrame, addr 0x1805fa630, size 0x120, virtual true, abstract: false, final false
inline void PreprocessAudioFrame(::ArrayW<float_t>  frame) ;

/// @brief Method ThreadStart, addr 0x1805fa750, size 0x170, virtual true, abstract: false, final false
inline void ThreadStart() ;

constexpr bool const& __cordl_internal_get__isMobilePlatform() const;

constexpr bool& __cordl_internal_get__isMobilePlatform() ;

constexpr bool const& __cordl_internal_get__isOutputMuted() const;

constexpr bool& __cordl_internal_get__isOutputMuted() ;

constexpr bool const& __cordl_internal_get__isVadDetectingSpeech() const;

constexpr bool& __cordl_internal_get__isVadDetectingSpeech() ;

constexpr ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor* const& __cordl_internal_get__preprocessor() const;

constexpr ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*& __cordl_internal_get__preprocessor() ;

constexpr ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor* const& __cordl_internal_get__rnnoise() const;

constexpr ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor*& __cordl_internal_get__rnnoise() ;

constexpr void __cordl_internal_set__isMobilePlatform(bool  value) ;

constexpr void __cordl_internal_set__isOutputMuted(bool  value) ;

constexpr void __cordl_internal_set__isVadDetectingSpeech(bool  value) ;

constexpr void __cordl_internal_set__preprocessor(::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*  value) ;

constexpr void __cordl_internal_set__rnnoise(::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor*  value) ;

/// @brief Method .ctor, addr 0x1805fa910, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::NAudio::Wave::WaveFormat*  inputFormat, bool  mobilePlatform) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_VadIsSpeechDetected, addr 0x1805fa960, size 0x10, virtual true, abstract: false, final false
inline bool get_VadIsSpeechDetected() ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

/// @brief Method set_IsOutputMuted, addr 0x180487390, size 0x10, virtual true, abstract: false, final false
inline void set_IsOutputMuted(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebRtcPreprocessingPipeline() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebRtcPreprocessingPipeline", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebRtcPreprocessingPipeline(WebRtcPreprocessingPipeline && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebRtcPreprocessingPipeline", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebRtcPreprocessingPipeline(WebRtcPreprocessingPipeline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17045};

/// @brief Field _isVadDetectingSpeech, offset: 0x9c, size: 0x1, def value: None
 bool  ____isVadDetectingSpeech;

/// @brief Field _isMobilePlatform, offset: 0x9d, size: 0x1, def value: None
 bool  ____isMobilePlatform;

/// @brief Field _preprocessor, offset: 0xa0, size: 0x8, def value: None
 ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*  ____preprocessor;

/// @brief Field _rnnoise, offset: 0xa8, size: 0x8, def value: None
 ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor*  ____rnnoise;

/// @brief Field _isOutputMuted, offset: 0xb0, size: 0x1, def value: None
 bool  ____isOutputMuted;

/// @brief Size padding 0xc0 - 0xb8 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline, ____isVadDetectingSpeech) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline, ____isMobilePlatform) == 0x9d, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline, ____preprocessor) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline, ____rnnoise) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline, ____isOutputMuted) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline) == 0xc0, "Size mismatch!");

} // namespace end def Dissonance::Audio::Capture

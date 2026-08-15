#pragma once
// IWYU pragma private; include "Dissonance/Config/VoiceSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/zzzz__AudioQuality_def.hpp"
#include "Dissonance/zzzz__FrameSize_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VoiceSettings)
namespace Dissonance::Audio::Capture {
struct AecSuppressionLevels;
}
namespace Dissonance::Audio::Capture {
struct AecmRoutingMode;
}
namespace Dissonance::Audio::Capture {
struct NoiseSuppressionLevels;
}
namespace Dissonance::Audio::Capture {
struct VadSensitivityLevels;
}
namespace Dissonance::Config {
class VoiceSettings___c;
}
namespace Dissonance {
struct AudioQuality;
}
namespace Dissonance {
struct FrameSize;
}
namespace Dissonance {
class Log;
}
namespace System::ComponentModel {
class INotifyPropertyChanged;
}
namespace System::ComponentModel {
class PropertyChangedEventHandler;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
// Forward declare root types
namespace Dissonance::Config {
class VoiceSettings;
}
namespace Dissonance::Config {
class VoiceSettings___c;
}
// Write type traits
MARK_REF_T(::Dissonance::Config::VoiceSettings*);
MARK_REF_T(::Dissonance::Config::VoiceSettings___c*);
DEFINE_IL2CPP_CLASS(::Dissonance::Config::VoiceSettings*, "Dissonance.Config", "VoiceSettings");
DEFINE_IL2CPP_CLASS(::Dissonance::Config::VoiceSettings___c*, "Dissonance.Config", "VoiceSettings/<>c");
// Dependencies System.Object
namespace Dissonance::Config {
// Is value type: false
// CS Name: Dissonance.Config.VoiceSettings/<>c
class CORDL_TYPE VoiceSettings___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Dissonance::Config::VoiceSettings___c*  __9;

/// @brief Field <>9__20_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__20_0, put=setStaticF___9__20_0)) ::System::Action_2<::StringW,::Dissonance::AudioQuality>*  __9__20_0;

/// @brief Field <>9__24_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_0, put=setStaticF___9__24_0)) ::System::Action_2<::StringW,::Dissonance::FrameSize>*  __9__24_0;

/// @brief Field <>9__84_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__84_0, put=setStaticF___9__84_0)) ::System::Func_3<::StringW,::Dissonance::AudioQuality,::Dissonance::AudioQuality>*  __9__84_0;

/// @brief Field <>9__84_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__84_1, put=setStaticF___9__84_1)) ::System::Func_3<::StringW,::Dissonance::FrameSize,::Dissonance::FrameSize>*  __9__84_1;

static inline ::Dissonance::Config::VoiceSettings___c* New_ctor() ;

/// @brief Method <Load>b__84_0, addr 0x1805ed220, size 0x10, virtual false, abstract: false, final false
inline ::Dissonance::AudioQuality _Load_b__84_0(::StringW  s, ::Dissonance::AudioQuality  q) ;

/// @brief Method <Load>b__84_1, addr 0x1805ed220, size 0x10, virtual false, abstract: false, final false
inline ::Dissonance::FrameSize _Load_b__84_1(::StringW  s, ::Dissonance::FrameSize  f) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <set_FrameSize>b__24_0, addr 0x1805ed300, size 0x10, virtual false, abstract: false, final false
inline void _set_FrameSize_b__24_0(::StringW  key, ::Dissonance::FrameSize  f) ;

/// @brief Method <set_Quality>b__20_0, addr 0x1805ed300, size 0x10, virtual false, abstract: false, final false
inline void _set_Quality_b__20_0(::StringW  key, ::Dissonance::AudioQuality  q) ;

static inline ::Dissonance::Config::VoiceSettings___c* getStaticF___9() ;

static inline ::System::Action_2<::StringW,::Dissonance::AudioQuality>* getStaticF___9__20_0() ;

static inline ::System::Action_2<::StringW,::Dissonance::FrameSize>* getStaticF___9__24_0() ;

static inline ::System::Func_3<::StringW,::Dissonance::AudioQuality,::Dissonance::AudioQuality>* getStaticF___9__84_0() ;

static inline ::System::Func_3<::StringW,::Dissonance::FrameSize,::Dissonance::FrameSize>* getStaticF___9__84_1() ;

static inline void setStaticF___9(::Dissonance::Config::VoiceSettings___c*  value) ;

static inline void setStaticF___9__20_0(::System::Action_2<::StringW,::Dissonance::AudioQuality>*  value) ;

static inline void setStaticF___9__24_0(::System::Action_2<::StringW,::Dissonance::FrameSize>*  value) ;

static inline void setStaticF___9__84_0(::System::Func_3<::StringW,::Dissonance::AudioQuality,::Dissonance::AudioQuality>*  value) ;

static inline void setStaticF___9__84_1(::System::Func_3<::StringW,::Dissonance::FrameSize,::Dissonance::FrameSize>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceSettings___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceSettings___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceSettings___c(VoiceSettings___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceSettings___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceSettings___c(VoiceSettings___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16950};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::Config::VoiceSettings___c) == 0x10, "Size mismatch!");

} // namespace end def Dissonance::Config
// Dependencies Dissonance.AudioQuality, Dissonance.FrameSize, UnityEngine.ScriptableObject
namespace Dissonance::Config {
// Is value type: false
// CS Name: Dissonance.Config.VoiceSettings
class CORDL_TYPE VoiceSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using __c = ::Dissonance::Config::VoiceSettings___c;

 __declspec(property(get=get_AecDelayAgnostic, put=set_AecDelayAgnostic)) bool  AecDelayAgnostic;

 __declspec(property(get=get_AecExtendedFilter, put=set_AecExtendedFilter)) bool  AecExtendedFilter;

 __declspec(property(get=get_AecRefinedAdaptiveFilter, put=set_AecRefinedAdaptiveFilter)) bool  AecRefinedAdaptiveFilter;

 __declspec(property(get=get_AecSuppressionAmount, put=set_AecSuppressionAmount)) ::Dissonance::Audio::Capture::AecSuppressionLevels  AecSuppressionAmount;

 __declspec(property(get=get_AecmComfortNoise, put=set_AecmComfortNoise)) bool  AecmComfortNoise;

 __declspec(property(get=get_AecmRoutingMode, put=set_AecmRoutingMode)) ::Dissonance::Audio::Capture::AecmRoutingMode  AecmRoutingMode;

 __declspec(property(get=get_BackgroundSoundRemovalAmount, put=set_BackgroundSoundRemovalAmount)) float_t  BackgroundSoundRemovalAmount;

 __declspec(property(get=get_BackgroundSoundRemovalEnabled, put=set_BackgroundSoundRemovalEnabled)) bool  BackgroundSoundRemovalEnabled;

 __declspec(property(get=get_DenoiseAmount, put=set_DenoiseAmount)) ::Dissonance::Audio::Capture::NoiseSuppressionLevels  DenoiseAmount;

 __declspec(property(get=get_ForwardErrorCorrection, put=set_ForwardErrorCorrection)) bool  ForwardErrorCorrection;

 __declspec(property(get=get_FrameSize, put=set_FrameSize)) ::Dissonance::FrameSize  FrameSize;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

/// @brief Field PropertyChanged, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_PropertyChanged, put=__cordl_internal_set_PropertyChanged)) ::System::ComponentModel::PropertyChangedEventHandler*  PropertyChanged;

 __declspec(property(get=get_Quality, put=set_Quality)) ::Dissonance::AudioQuality  Quality;

/// @brief Field SettingsFilePath, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SettingsFilePath, put=setStaticF_SettingsFilePath)) ::StringW  SettingsFilePath;

 __declspec(property(get=get_VadSensitivity, put=set_VadSensitivity)) ::Dissonance::Audio::Capture::VadSensitivityLevels  VadSensitivity;

 __declspec(property(get=get_VoiceDuckLevel, put=set_VoiceDuckLevel)) float_t  VoiceDuckLevel;

/// @brief Field _aecAmount, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__aecAmount, put=__cordl_internal_set__aecAmount)) int32_t  _aecAmount;

/// @brief Field _aecDelayAgnostic, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__aecDelayAgnostic, put=__cordl_internal_set__aecDelayAgnostic)) int32_t  _aecDelayAgnostic;

/// @brief Field _aecExtendedFilter, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__aecExtendedFilter, put=__cordl_internal_set__aecExtendedFilter)) int32_t  _aecExtendedFilter;

/// @brief Field _aecRefinedAdaptiveFilter, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__aecRefinedAdaptiveFilter, put=__cordl_internal_set__aecRefinedAdaptiveFilter)) int32_t  _aecRefinedAdaptiveFilter;

/// @brief Field _aecmComfortNoise, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__aecmComfortNoise, put=__cordl_internal_set__aecmComfortNoise)) int32_t  _aecmComfortNoise;

/// @brief Field _aecmRoutingMode, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__aecmRoutingMode, put=__cordl_internal_set__aecmRoutingMode)) int32_t  _aecmRoutingMode;

/// @brief Field _bgSoundRemovalAmount, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__bgSoundRemovalAmount, put=__cordl_internal_set__bgSoundRemovalAmount)) float_t  _bgSoundRemovalAmount;

/// @brief Field _bgSoundRemovalEnabled, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__bgSoundRemovalEnabled, put=__cordl_internal_set__bgSoundRemovalEnabled)) int32_t  _bgSoundRemovalEnabled;

/// @brief Field _denoiseAmount, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__denoiseAmount, put=__cordl_internal_set__denoiseAmount)) int32_t  _denoiseAmount;

/// @brief Field _forwardErrorCorrection, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__forwardErrorCorrection, put=__cordl_internal_set__forwardErrorCorrection)) int32_t  _forwardErrorCorrection;

/// @brief Field _frameSize, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__frameSize, put=__cordl_internal_set__frameSize)) ::Dissonance::FrameSize  _frameSize;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::Dissonance::Config::VoiceSettings>  _instance;

/// @brief Field _quality, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__quality, put=__cordl_internal_set__quality)) ::Dissonance::AudioQuality  _quality;

/// @brief Field _vadSensitivity, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__vadSensitivity, put=__cordl_internal_set__vadSensitivity)) int32_t  _vadSensitivity;

/// @brief Field _voiceDuckLevel, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__voiceDuckLevel, put=__cordl_internal_set__voiceDuckLevel)) float_t  _voiceDuckLevel;

/// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
constexpr operator  ::System::ComponentModel::INotifyPropertyChanged*() noexcept;

/// @brief Method Load, addr 0x1805edfa0, size 0x580, virtual false, abstract: false, final false
static inline ::UnityW<::Dissonance::Config::VoiceSettings> Load() ;

/// @brief Method LoadDefaults, addr 0x1805edf10, size 0x90, virtual false, abstract: false, final false
inline void LoadDefaults() ;

static inline ::Dissonance::Config::VoiceSettings* New_ctor() ;

/// @brief Method OnPropertyChanged, addr 0x1805ee520, size 0x70, virtual false, abstract: false, final false
inline void OnPropertyChanged(::StringW  propertyName) ;

/// @brief Method Preload, addr 0x1805ee590, size 0x80, virtual false, abstract: false, final false
static inline void Preload() ;

/// @brief Method Reset, addr 0x1805ee610, size 0xe0, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ToString, addr 0x1805ee6f0, size 0x1b0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::ComponentModel::PropertyChangedEventHandler* const& __cordl_internal_get_PropertyChanged() const;

constexpr ::System::ComponentModel::PropertyChangedEventHandler*& __cordl_internal_get_PropertyChanged() ;

constexpr int32_t const& __cordl_internal_get__aecAmount() const;

constexpr int32_t& __cordl_internal_get__aecAmount() ;

constexpr int32_t const& __cordl_internal_get__aecDelayAgnostic() const;

constexpr int32_t& __cordl_internal_get__aecDelayAgnostic() ;

constexpr int32_t const& __cordl_internal_get__aecExtendedFilter() const;

constexpr int32_t& __cordl_internal_get__aecExtendedFilter() ;

constexpr int32_t const& __cordl_internal_get__aecRefinedAdaptiveFilter() const;

constexpr int32_t& __cordl_internal_get__aecRefinedAdaptiveFilter() ;

constexpr int32_t const& __cordl_internal_get__aecmComfortNoise() const;

constexpr int32_t& __cordl_internal_get__aecmComfortNoise() ;

constexpr int32_t const& __cordl_internal_get__aecmRoutingMode() const;

constexpr int32_t& __cordl_internal_get__aecmRoutingMode() ;

constexpr float_t const& __cordl_internal_get__bgSoundRemovalAmount() const;

constexpr float_t& __cordl_internal_get__bgSoundRemovalAmount() ;

constexpr int32_t const& __cordl_internal_get__bgSoundRemovalEnabled() const;

constexpr int32_t& __cordl_internal_get__bgSoundRemovalEnabled() ;

constexpr int32_t const& __cordl_internal_get__denoiseAmount() const;

constexpr int32_t& __cordl_internal_get__denoiseAmount() ;

constexpr int32_t const& __cordl_internal_get__forwardErrorCorrection() const;

constexpr int32_t& __cordl_internal_get__forwardErrorCorrection() ;

constexpr ::Dissonance::FrameSize const& __cordl_internal_get__frameSize() const;

constexpr ::Dissonance::FrameSize& __cordl_internal_get__frameSize() ;

constexpr ::Dissonance::AudioQuality const& __cordl_internal_get__quality() const;

constexpr ::Dissonance::AudioQuality& __cordl_internal_get__quality() ;

constexpr int32_t const& __cordl_internal_get__vadSensitivity() const;

constexpr int32_t& __cordl_internal_get__vadSensitivity() ;

constexpr float_t const& __cordl_internal_get__voiceDuckLevel() const;

constexpr float_t& __cordl_internal_get__voiceDuckLevel() ;

constexpr void __cordl_internal_set_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler*  value) ;

constexpr void __cordl_internal_set__aecAmount(int32_t  value) ;

constexpr void __cordl_internal_set__aecDelayAgnostic(int32_t  value) ;

constexpr void __cordl_internal_set__aecExtendedFilter(int32_t  value) ;

constexpr void __cordl_internal_set__aecRefinedAdaptiveFilter(int32_t  value) ;

constexpr void __cordl_internal_set__aecmComfortNoise(int32_t  value) ;

constexpr void __cordl_internal_set__aecmRoutingMode(int32_t  value) ;

constexpr void __cordl_internal_set__bgSoundRemovalAmount(float_t  value) ;

constexpr void __cordl_internal_set__bgSoundRemovalEnabled(int32_t  value) ;

constexpr void __cordl_internal_set__denoiseAmount(int32_t  value) ;

constexpr void __cordl_internal_set__forwardErrorCorrection(int32_t  value) ;

constexpr void __cordl_internal_set__frameSize(::Dissonance::FrameSize  value) ;

constexpr void __cordl_internal_set__quality(::Dissonance::AudioQuality  value) ;

constexpr void __cordl_internal_set__vadSensitivity(int32_t  value) ;

constexpr void __cordl_internal_set__voiceDuckLevel(float_t  value) ;

/// @brief Method .ctor, addr 0x1805ee940, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_PropertyChanged, addr 0x1805ee960, size 0x80, virtual true, abstract: false, final true
inline void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler*  value) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

static inline ::StringW getStaticF_SettingsFilePath() ;

static inline ::UnityW<::Dissonance::Config::VoiceSettings> getStaticF__instance() ;

/// @brief Method get_AecDelayAgnostic, addr 0x1805ee9e0, size 0x10, virtual false, abstract: false, final false
inline bool get_AecDelayAgnostic() ;

/// @brief Method get_AecExtendedFilter, addr 0x1805ee9f0, size 0x10, virtual false, abstract: false, final false
inline bool get_AecExtendedFilter() ;

/// @brief Method get_AecRefinedAdaptiveFilter, addr 0x1805eea00, size 0x10, virtual false, abstract: false, final false
inline bool get_AecRefinedAdaptiveFilter() ;

/// @brief Method get_AecSuppressionAmount, addr 0x180392ff0, size 0x10, virtual false, abstract: false, final false
inline ::Dissonance::Audio::Capture::AecSuppressionLevels get_AecSuppressionAmount() ;

/// @brief Method get_AecmComfortNoise, addr 0x1805eea10, size 0x10, virtual false, abstract: false, final false
inline bool get_AecmComfortNoise() ;

/// @brief Method get_AecmRoutingMode, addr 0x180511540, size 0x10, virtual false, abstract: false, final false
inline ::Dissonance::Audio::Capture::AecmRoutingMode get_AecmRoutingMode() ;

/// @brief Method get_BackgroundSoundRemovalAmount, addr 0x18049a530, size 0x10, virtual false, abstract: false, final false
inline float_t get_BackgroundSoundRemovalAmount() ;

/// @brief Method get_BackgroundSoundRemovalEnabled, addr 0x1805eea20, size 0x10, virtual false, abstract: false, final false
inline bool get_BackgroundSoundRemovalEnabled() ;

/// @brief Method get_DenoiseAmount, addr 0x180396ef0, size 0x10, virtual false, abstract: false, final false
inline ::Dissonance::Audio::Capture::NoiseSuppressionLevels get_DenoiseAmount() ;

/// @brief Method get_ForwardErrorCorrection, addr 0x1805eea30, size 0x10, virtual false, abstract: false, final false
inline bool get_ForwardErrorCorrection() ;

/// @brief Method get_FrameSize, addr 0x1802f42c0, size 0x10, virtual false, abstract: false, final false
inline ::Dissonance::FrameSize get_FrameSize() ;

/// @brief Method get_Instance, addr 0x1805eea40, size 0x90, virtual false, abstract: false, final false
static inline ::UnityW<::Dissonance::Config::VoiceSettings> get_Instance() ;

/// @brief Method get_Quality, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline ::Dissonance::AudioQuality get_Quality() ;

/// @brief Method get_VadSensitivity, addr 0x1802e2ba0, size 0x10, virtual false, abstract: false, final false
inline ::Dissonance::Audio::Capture::VadSensitivityLevels get_VadSensitivity() ;

/// @brief Method get_VoiceDuckLevel, addr 0x1802f8070, size 0x10, virtual false, abstract: false, final false
inline float_t get_VoiceDuckLevel() ;

/// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
constexpr ::System::ComponentModel::INotifyPropertyChanged* i___System__ComponentModel__INotifyPropertyChanged() noexcept;

/// @brief Method remove_PropertyChanged, addr 0x1805eead0, size 0x80, virtual true, abstract: false, final true
inline void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler*  value) ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

static inline void setStaticF_SettingsFilePath(::StringW  value) ;

static inline void setStaticF__instance(::UnityW<::Dissonance::Config::VoiceSettings>  value) ;

/// @brief Method set_AecDelayAgnostic, addr 0x1805eeb50, size 0x100, virtual false, abstract: false, final false
inline void set_AecDelayAgnostic(bool  value) ;

/// @brief Method set_AecExtendedFilter, addr 0x1805eec50, size 0x100, virtual false, abstract: false, final false
inline void set_AecExtendedFilter(bool  value) ;

/// @brief Method set_AecRefinedAdaptiveFilter, addr 0x1805eed50, size 0x100, virtual false, abstract: false, final false
inline void set_AecRefinedAdaptiveFilter(bool  value) ;

/// @brief Method set_AecSuppressionAmount, addr 0x1805eee50, size 0xf0, virtual false, abstract: false, final false
inline void set_AecSuppressionAmount(::Dissonance::Audio::Capture::AecSuppressionLevels  value) ;

/// @brief Method set_AecmComfortNoise, addr 0x1805eef40, size 0x100, virtual false, abstract: false, final false
inline void set_AecmComfortNoise(bool  value) ;

/// @brief Method set_AecmRoutingMode, addr 0x1805ef040, size 0xf0, virtual false, abstract: false, final false
inline void set_AecmRoutingMode(::Dissonance::Audio::Capture::AecmRoutingMode  value) ;

/// @brief Method set_BackgroundSoundRemovalAmount, addr 0x1805ef130, size 0x120, virtual false, abstract: false, final false
inline void set_BackgroundSoundRemovalAmount(float_t  value) ;

/// @brief Method set_BackgroundSoundRemovalEnabled, addr 0x1805ef250, size 0x100, virtual false, abstract: false, final false
inline void set_BackgroundSoundRemovalEnabled(bool  value) ;

/// @brief Method set_DenoiseAmount, addr 0x1805ef350, size 0xf0, virtual false, abstract: false, final false
inline void set_DenoiseAmount(::Dissonance::Audio::Capture::NoiseSuppressionLevels  value) ;

/// @brief Method set_ForwardErrorCorrection, addr 0x1805ef440, size 0x100, virtual false, abstract: false, final false
inline void set_ForwardErrorCorrection(bool  value) ;

/// @brief Method set_FrameSize, addr 0x1805ef540, size 0x160, virtual false, abstract: false, final false
inline void set_FrameSize(::Dissonance::FrameSize  value) ;

/// @brief Method set_Quality, addr 0x1805ef6a0, size 0x160, virtual false, abstract: false, final false
inline void set_Quality(::Dissonance::AudioQuality  value) ;

/// @brief Method set_VadSensitivity, addr 0x1805ef800, size 0xf0, virtual false, abstract: false, final false
inline void set_VadSensitivity(::Dissonance::Audio::Capture::VadSensitivityLevels  value) ;

/// @brief Method set_VoiceDuckLevel, addr 0x1805ef8f0, size 0x100, virtual false, abstract: false, final false
inline void set_VoiceDuckLevel(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceSettings(VoiceSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceSettings(VoiceSettings const& ) = delete;

/// @brief Field PersistName_AecDelayAgnostic offset 0xffffffff size 0x8
static constexpr ::ConstString  PersistName_AecDelayAgnostic{u"Dissonance_Audio_Aec_Delay_Agnostic"};

/// @brief Field PersistName_AecExtendedFilter offset 0xffffffff size 0x8
static constexpr ::ConstString  PersistName_AecExtendedFilter{u"Dissonance_Audio_Aec_Extended_Filter"};

/// @brief Field PersistName_AecRefinedAdaptiveFilter offset 0xffffffff size 0x8
static constexpr ::ConstString  PersistName_AecRefinedAdaptiveFilter{u"Dissonance_Audio_Aec_Refined_Adaptive_Filter"};

/// @brief Field PersistName_AecSuppressionAmount offset 0xffffffff size 0x8
static constexpr ::ConstString  PersistName_AecSuppressionAmount{u"Dissonance_Audio_Aec_Suppression_Amount"};

/// @brief Field PersistName_AecmComfortNoise offset 0xffffffff size 0x8
static constexpr ::ConstString  PersistName_AecmComfortNoise{u"Dissonance_Audio_Aecm_Comfort_Noise"};

/// @brief Field PersistName_AecmRoutingMode offset 0xffffffff size 0x8
static constexpr ::ConstString  PersistName_AecmRoutingMode{u"Dissonance_Audio_Aecm_Routing_Mode"};

/// @brief Field PersistName_BgDenoiseEnabled offset 0xffffffff size 0x8
static constexpr ::ConstString  PersistName_BgDenoiseEnabled{u"Dissonance_Audio_BgDenoise_Enabled"};

/// @brief Field PersistName_BgDenoiseWetmix offset 0xffffffff size 0x8
static constexpr ::ConstString  PersistName_BgDenoiseWetmix{u"Dissonance_Audio_BgDenoise_Amount"};

/// @brief Field PersistName_DenoiseAmount offset 0xffffffff size 0x8
static constexpr ::ConstString  PersistName_DenoiseAmount{u"Dissonance_Audio_Denoise_Amount"};

/// @brief Field PersistName_Fec offset 0xffffffff size 0x8
static constexpr ::ConstString  PersistName_Fec{u"Dissonance_Audio_DisableFEC"};

/// @brief Field PersistName_FrameSize offset 0xffffffff size 0x8
static constexpr ::ConstString  PersistName_FrameSize{u"Dissonance_Audio_FrameSize"};

/// @brief Field PersistName_PttDuckAmount offset 0xffffffff size 0x8
static constexpr ::ConstString  PersistName_PttDuckAmount{u"Dissonance_Audio_Duck_Amount"};

/// @brief Field PersistName_Quality offset 0xffffffff size 0x8
static constexpr ::ConstString  PersistName_Quality{u"Dissonance_Audio_Quality"};

/// @brief Field PersistName_VadSensitivity offset 0xffffffff size 0x8
static constexpr ::ConstString  PersistName_VadSensitivity{u"Dissonance_Audio_Vad_Sensitivity"};

/// @brief Field SettingsFileResourceName offset 0xffffffff size 0x8
static constexpr ::ConstString  SettingsFileResourceName{u"VoiceSettings"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16951};

/// @brief Field _quality, offset: 0x18, size: 0x4, def value: None
 ::Dissonance::AudioQuality  ____quality;

/// @brief Field _frameSize, offset: 0x1c, size: 0x4, def value: None
 ::Dissonance::FrameSize  ____frameSize;

/// @brief Field _forwardErrorCorrection, offset: 0x20, size: 0x4, def value: None
 int32_t  ____forwardErrorCorrection;

/// @brief Field _denoiseAmount, offset: 0x24, size: 0x4, def value: None
 int32_t  ____denoiseAmount;

/// @brief Field _bgSoundRemovalEnabled, offset: 0x28, size: 0x4, def value: None
 int32_t  ____bgSoundRemovalEnabled;

/// @brief Field _bgSoundRemovalAmount, offset: 0x2c, size: 0x4, def value: None
 float_t  ____bgSoundRemovalAmount;

/// @brief Field _vadSensitivity, offset: 0x30, size: 0x4, def value: None
 int32_t  ____vadSensitivity;

/// @brief Field _aecAmount, offset: 0x34, size: 0x4, def value: None
 int32_t  ____aecAmount;

/// @brief Field _aecDelayAgnostic, offset: 0x38, size: 0x4, def value: None
 int32_t  ____aecDelayAgnostic;

/// @brief Field _aecExtendedFilter, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____aecExtendedFilter;

/// @brief Field _aecRefinedAdaptiveFilter, offset: 0x40, size: 0x4, def value: None
 int32_t  ____aecRefinedAdaptiveFilter;

/// @brief Field _aecmRoutingMode, offset: 0x44, size: 0x4, def value: None
 int32_t  ____aecmRoutingMode;

/// @brief Field _aecmComfortNoise, offset: 0x48, size: 0x4, def value: None
 int32_t  ____aecmComfortNoise;

/// @brief Field _voiceDuckLevel, offset: 0x4c, size: 0x4, def value: None
 float_t  ____voiceDuckLevel;

/// @brief Field PropertyChanged, offset: 0x50, size: 0x8, def value: None
 ::System::ComponentModel::PropertyChangedEventHandler*  ___PropertyChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Config::VoiceSettings, ____quality) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Config::VoiceSettings, ____frameSize) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Config::VoiceSettings, ____forwardErrorCorrection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Config::VoiceSettings, ____denoiseAmount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Config::VoiceSettings, ____bgSoundRemovalEnabled) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Config::VoiceSettings, ____bgSoundRemovalAmount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Config::VoiceSettings, ____vadSensitivity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Config::VoiceSettings, ____aecAmount) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Config::VoiceSettings, ____aecDelayAgnostic) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Config::VoiceSettings, ____aecExtendedFilter) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Config::VoiceSettings, ____aecRefinedAdaptiveFilter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Config::VoiceSettings, ____aecmRoutingMode) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Config::VoiceSettings, ____aecmComfortNoise) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Config::VoiceSettings, ____voiceDuckLevel) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Config::VoiceSettings, ___PropertyChanged) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Config::VoiceSettings) == 0x58, "Size mismatch!");

} // namespace end def Dissonance::Config

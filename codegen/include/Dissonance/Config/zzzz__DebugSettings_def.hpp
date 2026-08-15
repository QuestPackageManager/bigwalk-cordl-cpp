#pragma once
// IWYU pragma private; include "Dissonance/Config/DebugSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/zzzz__LogLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugSettings)
namespace Dissonance::Config {
class DebugSettings___c;
}
namespace Dissonance {
struct LogCategory;
}
namespace Dissonance {
struct LogLevel;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Dissonance::Config {
class DebugSettings;
}
namespace Dissonance::Config {
class DebugSettings___c;
}
// Write type traits
MARK_REF_T(::Dissonance::Config::DebugSettings*);
MARK_REF_T(::Dissonance::Config::DebugSettings___c*);
DEFINE_IL2CPP_CLASS(::Dissonance::Config::DebugSettings*, "Dissonance.Config", "DebugSettings");
DEFINE_IL2CPP_CLASS(::Dissonance::Config::DebugSettings___c*, "Dissonance.Config", "DebugSettings/<>c");
// Dependencies System.Object
namespace Dissonance::Config {
// Is value type: false
// CS Name: Dissonance.Config.DebugSettings/<>c
class CORDL_TYPE DebugSettings___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Dissonance::Config::DebugSettings___c*  __9;

/// @brief Field <>9__15_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__15_0, put=setStaticF___9__15_0)) ::System::Func_2<::Dissonance::LogCategory,int32_t>*  __9__15_0;

static inline ::Dissonance::Config::DebugSettings___c* New_ctor() ;

/// @brief Method <.ctor>b__15_0, addr 0x1805ed280, size 0x10, virtual false, abstract: false, final false
inline int32_t __ctor_b__15_0(::Dissonance::LogCategory  c) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Dissonance::Config::DebugSettings___c* getStaticF___9() ;

static inline ::System::Func_2<::Dissonance::LogCategory,int32_t>* getStaticF___9__15_0() ;

static inline void setStaticF___9(::Dissonance::Config::DebugSettings___c*  value) ;

static inline void setStaticF___9__15_0(::System::Func_2<::Dissonance::LogCategory,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugSettings___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugSettings___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugSettings___c(DebugSettings___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugSettings___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugSettings___c(DebugSettings___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16947};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::Config::DebugSettings___c) == 0x10, "Size mismatch!");

} // namespace end def Dissonance::Config
// Dependencies Dissonance.LogLevel, UnityEngine.ScriptableObject
namespace Dissonance::Config {
// Is value type: false
// CS Name: Dissonance.Config.DebugSettings
class CORDL_TYPE DebugSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using __c = ::Dissonance::Config::DebugSettings___c;

/// @brief Field EnableNetworkSimulation, offset 0x26, size 0x1 
 __declspec(property(get=__cordl_internal_get_EnableNetworkSimulation, put=__cordl_internal_set_EnableNetworkSimulation)) bool  EnableNetworkSimulation;

/// @brief Field EnablePlaybackDiagnostics, offset 0x23, size 0x1 
 __declspec(property(get=__cordl_internal_get_EnablePlaybackDiagnostics, put=__cordl_internal_set_EnablePlaybackDiagnostics)) bool  EnablePlaybackDiagnostics;

/// @brief Field EnableRecordingDiagnostics, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_EnableRecordingDiagnostics, put=__cordl_internal_set_EnableRecordingDiagnostics)) bool  EnableRecordingDiagnostics;

/// @brief Field PacketLoss, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_PacketLoss, put=__cordl_internal_set_PacketLoss)) float_t  PacketLoss;

/// @brief Field RecordDecodedAudio, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_RecordDecodedAudio, put=__cordl_internal_set_RecordDecodedAudio)) bool  RecordDecodedAudio;

/// @brief Field RecordFinalAudio, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_RecordFinalAudio, put=__cordl_internal_set_RecordFinalAudio)) bool  RecordFinalAudio;

/// @brief Field RecordMicrophoneRawAudio, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_RecordMicrophoneRawAudio, put=__cordl_internal_set_RecordMicrophoneRawAudio)) bool  RecordMicrophoneRawAudio;

/// @brief Field RecordPreprocessorOutput, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get_RecordPreprocessorOutput, put=__cordl_internal_set_RecordPreprocessorOutput)) bool  RecordPreprocessorOutput;

/// @brief Field SettingsFilePath, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SettingsFilePath, put=setStaticF_SettingsFilePath)) ::StringW  SettingsFilePath;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::Dissonance::Config::DebugSettings>  _instance;

/// @brief Field _levels, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__levels, put=__cordl_internal_set__levels)) ::System::Collections::Generic::List_1<::Dissonance::LogLevel>*  _levels;

/// @brief Method GetLevel, addr 0x1805db390, size 0x40, virtual false, abstract: false, final false
inline ::Dissonance::LogLevel GetLevel(int32_t  category) ;

/// @brief Method Load, addr 0x1805db3d0, size 0x50, virtual false, abstract: false, final false
static inline ::UnityW<::Dissonance::Config::DebugSettings> Load() ;

static inline ::Dissonance::Config::DebugSettings* New_ctor() ;

/// @brief Method Preload, addr 0x1805db420, size 0xc0, virtual false, abstract: false, final false
static inline void Preload() ;

/// @brief Method SetLevel, addr 0x1805db4e0, size 0xc0, virtual false, abstract: false, final false
inline void SetLevel(int32_t  category, ::Dissonance::LogLevel  level) ;

constexpr bool const& __cordl_internal_get_EnableNetworkSimulation() const;

constexpr bool& __cordl_internal_get_EnableNetworkSimulation() ;

constexpr bool const& __cordl_internal_get_EnablePlaybackDiagnostics() const;

constexpr bool& __cordl_internal_get_EnablePlaybackDiagnostics() ;

constexpr bool const& __cordl_internal_get_EnableRecordingDiagnostics() const;

constexpr bool& __cordl_internal_get_EnableRecordingDiagnostics() ;

constexpr float_t const& __cordl_internal_get_PacketLoss() const;

constexpr float_t& __cordl_internal_get_PacketLoss() ;

constexpr bool const& __cordl_internal_get_RecordDecodedAudio() const;

constexpr bool& __cordl_internal_get_RecordDecodedAudio() ;

constexpr bool const& __cordl_internal_get_RecordFinalAudio() const;

constexpr bool& __cordl_internal_get_RecordFinalAudio() ;

constexpr bool const& __cordl_internal_get_RecordMicrophoneRawAudio() const;

constexpr bool& __cordl_internal_get_RecordMicrophoneRawAudio() ;

constexpr bool const& __cordl_internal_get_RecordPreprocessorOutput() const;

constexpr bool& __cordl_internal_get_RecordPreprocessorOutput() ;

constexpr ::System::Collections::Generic::List_1<::Dissonance::LogLevel>* const& __cordl_internal_get__levels() const;

constexpr ::System::Collections::Generic::List_1<::Dissonance::LogLevel>*& __cordl_internal_get__levels() ;

constexpr void __cordl_internal_set_EnableNetworkSimulation(bool  value) ;

constexpr void __cordl_internal_set_EnablePlaybackDiagnostics(bool  value) ;

constexpr void __cordl_internal_set_EnableRecordingDiagnostics(bool  value) ;

constexpr void __cordl_internal_set_PacketLoss(float_t  value) ;

constexpr void __cordl_internal_set_RecordDecodedAudio(bool  value) ;

constexpr void __cordl_internal_set_RecordFinalAudio(bool  value) ;

constexpr void __cordl_internal_set_RecordMicrophoneRawAudio(bool  value) ;

constexpr void __cordl_internal_set_RecordPreprocessorOutput(bool  value) ;

constexpr void __cordl_internal_set__levels(::System::Collections::Generic::List_1<::Dissonance::LogLevel>*  value) ;

/// @brief Method .ctor, addr 0x1805db600, size 0x1a0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_SettingsFilePath() ;

static inline ::UnityW<::Dissonance::Config::DebugSettings> getStaticF__instance() ;

/// @brief Method get_Instance, addr 0x1805db7a0, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityW<::Dissonance::Config::DebugSettings> get_Instance() ;

static inline void setStaticF_SettingsFilePath(::StringW  value) ;

static inline void setStaticF__instance(::UnityW<::Dissonance::Config::DebugSettings>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugSettings(DebugSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugSettings(DebugSettings const& ) = delete;

/// @brief Field DefaultLevel value: I32(2)
static ::Dissonance::LogLevel const DefaultLevel;

/// @brief Field SettingsFileResourceName offset 0xffffffff size 0x8
static constexpr ::ConstString  SettingsFileResourceName{u"DebugSettings"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16948};

/// @brief Field _levels, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Dissonance::LogLevel>*  ____levels;

/// @brief Field EnableRecordingDiagnostics, offset: 0x20, size: 0x1, def value: None
 bool  ___EnableRecordingDiagnostics;

/// @brief Field RecordMicrophoneRawAudio, offset: 0x21, size: 0x1, def value: None
 bool  ___RecordMicrophoneRawAudio;

/// @brief Field RecordPreprocessorOutput, offset: 0x22, size: 0x1, def value: None
 bool  ___RecordPreprocessorOutput;

/// @brief Field EnablePlaybackDiagnostics, offset: 0x23, size: 0x1, def value: None
 bool  ___EnablePlaybackDiagnostics;

/// @brief Field RecordDecodedAudio, offset: 0x24, size: 0x1, def value: None
 bool  ___RecordDecodedAudio;

/// @brief Field RecordFinalAudio, offset: 0x25, size: 0x1, def value: None
 bool  ___RecordFinalAudio;

/// @brief Field EnableNetworkSimulation, offset: 0x26, size: 0x1, def value: None
 bool  ___EnableNetworkSimulation;

/// @brief Field PacketLoss, offset: 0x28, size: 0x4, def value: None
 float_t  ___PacketLoss;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Config::DebugSettings, ____levels) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Config::DebugSettings, ___EnableRecordingDiagnostics) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Config::DebugSettings, ___RecordMicrophoneRawAudio) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Config::DebugSettings, ___RecordPreprocessorOutput) == 0x22, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Config::DebugSettings, ___EnablePlaybackDiagnostics) == 0x23, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Config::DebugSettings, ___RecordDecodedAudio) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Config::DebugSettings, ___RecordFinalAudio) == 0x25, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Config::DebugSettings, ___EnableNetworkSimulation) == 0x26, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Config::DebugSettings, ___PacketLoss) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Config::DebugSettings) == 0x30, "Size mismatch!");

} // namespace end def Dissonance::Config

#pragma once
// IWYU pragma private; include "Dissonance/CodecSettingsLoader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/Audio/Codecs/zzzz__Codec_def.hpp"
#include "Dissonance/zzzz__AudioQuality_def.hpp"
#include "Dissonance/zzzz__CodecSettings_def.hpp"
#include "Dissonance/zzzz__FrameSize_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CodecSettingsLoader)
namespace Dissonance::Audio::Codecs {
struct Codec;
}
namespace Dissonance::Audio::Codecs {
class IVoiceEncoder;
}
namespace Dissonance {
struct AudioQuality;
}
namespace Dissonance {
struct CodecSettings;
}
namespace Dissonance {
struct FrameSize;
}
namespace Dissonance {
class Log;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Dissonance {
class CodecSettingsLoader;
}
// Write type traits
MARK_REF_T(::Dissonance::CodecSettingsLoader*);
DEFINE_IL2CPP_CLASS(::Dissonance::CodecSettingsLoader*, "Dissonance", "CodecSettingsLoader");
// Dependencies Dissonance.Audio.Codecs.Codec, Dissonance.AudioQuality, Dissonance.CodecSettings, Dissonance.FrameSize, System.Object
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.CodecSettingsLoader
class CORDL_TYPE CodecSettingsLoader : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Config)) ::Dissonance::CodecSettings  Config;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

/// @brief Field _codec, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__codec, put=__cordl_internal_set__codec)) ::Dissonance::Audio::Codecs::Codec  _codec;

/// @brief Field _config, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get__config, put=__cordl_internal_set__config)) ::Dissonance::CodecSettings  _config;

/// @brief Field _encodeFec, offset 0x35, size 0x1 
 __declspec(property(get=__cordl_internal_get__encodeFec, put=__cordl_internal_set__encodeFec)) bool  _encodeFec;

/// @brief Field _encoderFrameSize, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__encoderFrameSize, put=__cordl_internal_set__encoderFrameSize)) ::Dissonance::FrameSize  _encoderFrameSize;

/// @brief Field _encoderQuality, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__encoderQuality, put=__cordl_internal_set__encoderQuality)) ::Dissonance::AudioQuality  _encoderQuality;

/// @brief Field _settingsReady, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get__settingsReady, put=__cordl_internal_set__settingsReady)) bool  _settingsReady;

/// @brief Field _settingsWriteLock, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__settingsWriteLock, put=__cordl_internal_set__settingsWriteLock)) ::System::Object*  _settingsWriteLock;

/// @brief Field _started, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method CreateEncoder, addr 0x1805c6570, size 0x190, virtual false, abstract: false, final false
inline ::Dissonance::Audio::Codecs::IVoiceEncoder* CreateEncoder() ;

/// @brief Method GenerateSettings, addr 0x1805c6700, size 0x1e0, virtual false, abstract: false, final false
inline void GenerateSettings() ;

/// @brief Method GetEncoderSettings, addr 0x1805c68e0, size 0x100, virtual false, abstract: false, final false
static inline ::Dissonance::CodecSettings GetEncoderSettings(::Dissonance::Audio::Codecs::Codec  codec, ::Dissonance::AudioQuality  quality, ::Dissonance::FrameSize  frameSize) ;

static inline ::Dissonance::CodecSettingsLoader* New_ctor() ;

/// @brief Method Start, addr 0x1805c69e0, size 0x60, virtual false, abstract: false, final false
inline void Start(::Dissonance::Audio::Codecs::Codec  codec) ;

/// @brief Method ToString, addr 0x1805c6a40, size 0xb0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::Dissonance::Audio::Codecs::Codec const& __cordl_internal_get__codec() const;

constexpr ::Dissonance::Audio::Codecs::Codec& __cordl_internal_get__codec() ;

constexpr ::Dissonance::CodecSettings const& __cordl_internal_get__config() const;

constexpr ::Dissonance::CodecSettings& __cordl_internal_get__config() ;

constexpr bool const& __cordl_internal_get__encodeFec() const;

constexpr bool& __cordl_internal_get__encodeFec() ;

constexpr ::Dissonance::FrameSize const& __cordl_internal_get__encoderFrameSize() const;

constexpr ::Dissonance::FrameSize& __cordl_internal_get__encoderFrameSize() ;

constexpr ::Dissonance::AudioQuality const& __cordl_internal_get__encoderQuality() const;

constexpr ::Dissonance::AudioQuality& __cordl_internal_get__encoderQuality() ;

constexpr bool const& __cordl_internal_get__settingsReady() const;

constexpr bool& __cordl_internal_get__settingsReady() ;

constexpr ::System::Object* const& __cordl_internal_get__settingsWriteLock() const;

constexpr ::System::Object*& __cordl_internal_get__settingsWriteLock() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__codec(::Dissonance::Audio::Codecs::Codec  value) ;

constexpr void __cordl_internal_set__config(::Dissonance::CodecSettings  value) ;

constexpr void __cordl_internal_set__encodeFec(bool  value) ;

constexpr void __cordl_internal_set__encoderFrameSize(::Dissonance::FrameSize  value) ;

constexpr void __cordl_internal_set__encoderQuality(::Dissonance::AudioQuality  value) ;

constexpr void __cordl_internal_set__settingsReady(bool  value) ;

constexpr void __cordl_internal_set__settingsWriteLock(::System::Object*  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0x1805c6b40, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_Config, addr 0x1805c6b70, size 0x40, virtual false, abstract: false, final false
inline ::Dissonance::CodecSettings get_Config() ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CodecSettingsLoader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CodecSettingsLoader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CodecSettingsLoader(CodecSettingsLoader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CodecSettingsLoader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CodecSettingsLoader(CodecSettingsLoader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16795};

/// @brief Field _started, offset: 0x10, size: 0x1, def value: None
 bool  ____started;

/// @brief Field _settingsReady, offset: 0x11, size: 0x1, def value: None
 bool  ____settingsReady;

/// @brief Field _settingsWriteLock, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ____settingsWriteLock;

/// @brief Field _config, offset: 0x20, size: 0xc, def value: None
 ::Dissonance::CodecSettings  ____config;

/// @brief Field _encoderQuality, offset: 0x2c, size: 0x4, def value: None
 ::Dissonance::AudioQuality  ____encoderQuality;

/// @brief Field _encoderFrameSize, offset: 0x30, size: 0x4, def value: None
 ::Dissonance::FrameSize  ____encoderFrameSize;

/// @brief Field _codec, offset: 0x34, size: 0x1, def value: None
 ::Dissonance::Audio::Codecs::Codec  ____codec;

/// @brief Field _encodeFec, offset: 0x35, size: 0x1, def value: None
 bool  ____encodeFec;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::CodecSettingsLoader, ____started) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::CodecSettingsLoader, ____settingsReady) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Dissonance::CodecSettingsLoader, ____settingsWriteLock) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::CodecSettingsLoader, ____config) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::CodecSettingsLoader, ____encoderQuality) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Dissonance::CodecSettingsLoader, ____encoderFrameSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Dissonance::CodecSettingsLoader, ____codec) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Dissonance::CodecSettingsLoader, ____encodeFec) == 0x35, "Offset mismatch!");

static_assert(sizeof(::Dissonance::CodecSettingsLoader) == 0x38, "Size mismatch!");

} // namespace end def Dissonance

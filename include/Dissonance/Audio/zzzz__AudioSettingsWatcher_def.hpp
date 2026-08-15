#pragma once
// IWYU pragma private; include "Dissonance/Audio/AudioSettingsWatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioConfiguration_def.hpp"
CORDL_MODULE_EXPORT(AudioSettingsWatcher)
namespace System {
class Object;
}
namespace UnityEngine {
struct AudioConfiguration;
}
// Forward declare root types
namespace Dissonance::Audio {
class AudioSettingsWatcher;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::AudioSettingsWatcher*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::AudioSettingsWatcher*, "Dissonance.Audio", "AudioSettingsWatcher");
// Dependencies System.Object, UnityEngine.AudioConfiguration
namespace Dissonance::Audio {
// Is value type: false
// CS Name: Dissonance.Audio.AudioSettingsWatcher
class CORDL_TYPE AudioSettingsWatcher : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Configuration)) ::UnityEngine::AudioConfiguration  Configuration;

/// @brief Field Singleton, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Singleton, put=setStaticF_Singleton)) ::Dissonance::Audio::AudioSettingsWatcher*  Singleton;

/// @brief Field _config, offset 0x1c, size 0x14 
 __declspec(property(get=__cordl_internal_get__config, put=__cordl_internal_set__config)) ::UnityEngine::AudioConfiguration  _config;

/// @brief Field _lock, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__lock, put=__cordl_internal_set__lock)) ::System::Object*  _lock;

/// @brief Field _started, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

static inline ::Dissonance::Audio::AudioSettingsWatcher* New_ctor() ;

/// @brief Method OnAudioConfigChanged, addr 0x1805d7cf0, size 0xa0, virtual false, abstract: false, final false
inline void OnAudioConfigChanged(bool  devicewaschanged) ;

/// @brief Method Start, addr 0x1805d7d90, size 0xe0, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityEngine::AudioConfiguration const& __cordl_internal_get__config() const;

constexpr ::UnityEngine::AudioConfiguration& __cordl_internal_get__config() ;

constexpr ::System::Object* const& __cordl_internal_get__lock() const;

constexpr ::System::Object*& __cordl_internal_get__lock() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__config(::UnityEngine::AudioConfiguration  value) ;

constexpr void __cordl_internal_set__lock(::System::Object*  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0x1805d7ee0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Dissonance::Audio::AudioSettingsWatcher* getStaticF_Singleton() ;

/// @brief Method get_Configuration, addr 0x1805d7f10, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::AudioConfiguration get_Configuration() ;

/// @brief Method get_Instance, addr 0x1805d7fc0, size 0xa0, virtual false, abstract: false, final false
static inline ::Dissonance::Audio::AudioSettingsWatcher* get_Instance() ;

static inline void setStaticF_Singleton(::Dissonance::Audio::AudioSettingsWatcher*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioSettingsWatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioSettingsWatcher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioSettingsWatcher(AudioSettingsWatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioSettingsWatcher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioSettingsWatcher(AudioSettingsWatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16957};

/// @brief Field _lock, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  ____lock;

/// @brief Field _started, offset: 0x18, size: 0x1, def value: None
 bool  ____started;

/// @brief Field _config, offset: 0x1c, size: 0x14, def value: None
 ::UnityEngine::AudioConfiguration  ____config;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::AudioSettingsWatcher, ____lock) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::AudioSettingsWatcher, ____started) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::AudioSettingsWatcher, ____config) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::AudioSettingsWatcher) == 0x30, "Size mismatch!");

} // namespace end def Dissonance::Audio

#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioSampleReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioSampleReader)
namespace GlobalNamespace {
class AudioSampleReader___c;
}
namespace GlobalNamespace {
class AudioSampleSaver;
}
namespace UnityEngine {
class AudioClip_PCMReaderCallback;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioSampleReader;
}
namespace GlobalNamespace {
class AudioSampleReader___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioSampleReader*);
MARK_REF_T(::GlobalNamespace::AudioSampleReader___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioSampleReader*, "", "AudioSampleReader");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioSampleReader___c*, "", "AudioSampleReader/<>c");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioSampleReader/<>c
class CORDL_TYPE AudioSampleReader___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::AudioSampleReader___c*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::UnityEngine::AudioClip_PCMReaderCallback*  __9__2_0;

static inline ::GlobalNamespace::AudioSampleReader___c* New_ctor() ;

/// @brief Method <Awake>b__2_0, addr 0x18038e250, size 0x30, virtual false, abstract: false, final false
inline void _Awake_b__2_0(::ArrayW<float_t>  buf) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::AudioSampleReader___c* getStaticF___9() ;

static inline ::UnityEngine::AudioClip_PCMReaderCallback* getStaticF___9__2_0() ;

static inline void setStaticF___9(::GlobalNamespace::AudioSampleReader___c*  value) ;

static inline void setStaticF___9__2_0(::UnityEngine::AudioClip_PCMReaderCallback*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioSampleReader___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioSampleReader___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioSampleReader___c(AudioSampleReader___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioSampleReader___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioSampleReader___c(AudioSampleReader___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5616};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::AudioSampleReader___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioSampleReader
class CORDL_TYPE AudioSampleReader : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::AudioSampleReader___c;

/// @brief Field delay, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_delay, put=__cordl_internal_set_delay)) int32_t  delay;

/// @brief Field saver, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_saver, put=__cordl_internal_set_saver)) ::UnityW<::GlobalNamespace::AudioSampleSaver>  saver;

/// @brief Method Awake, addr 0x180391710, size 0x130, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::AudioSampleReader* New_ctor() ;

/// @brief Method OnAudioFilterRead, addr 0x180391840, size 0x90, virtual false, abstract: false, final false
inline void OnAudioFilterRead(::ArrayW<float_t>  data, int32_t  channels) ;

constexpr int32_t const& __cordl_internal_get_delay() const;

constexpr int32_t& __cordl_internal_get_delay() ;

constexpr ::UnityW<::GlobalNamespace::AudioSampleSaver> const& __cordl_internal_get_saver() const;

constexpr ::UnityW<::GlobalNamespace::AudioSampleSaver>& __cordl_internal_get_saver() ;

constexpr void __cordl_internal_set_delay(int32_t  value) ;

constexpr void __cordl_internal_set_saver(::UnityW<::GlobalNamespace::AudioSampleSaver>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioSampleReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioSampleReader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioSampleReader(AudioSampleReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioSampleReader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioSampleReader(AudioSampleReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5617};

/// @brief Field saver, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSampleSaver>  ___saver;

/// @brief Field delay, offset: 0x28, size: 0x4, def value: None
 int32_t  ___delay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioSampleReader, ___saver) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSampleReader, ___delay) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioSampleReader) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

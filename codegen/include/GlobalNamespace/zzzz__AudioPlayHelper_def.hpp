#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioPlayHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioPlayHelper)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class AudioEvent;
}
namespace GlobalNamespace {
class AudioLayerContainer;
}
namespace GlobalNamespace {
class AudioPlayHelper___c__DisplayClass9_0;
}
namespace GlobalNamespace {
struct AudioRTPC_XAxisType;
}
namespace GlobalNamespace {
class AudioRandomContainer;
}
namespace GlobalNamespace {
class AudioSourceController;
}
namespace GlobalNamespace {
template<typename T,typename U,typename V>
class FuncOneOut_3;
}
namespace GlobalNamespace {
class IAudioRTPCXProvider;
}
namespace GlobalNamespace {
class IAudioVolume;
}
namespace GlobalNamespace {
class SoundCue;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioPlayHelper;
}
namespace GlobalNamespace {
class AudioPlayHelper___c__DisplayClass9_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioPlayHelper*);
MARK_REF_T(::GlobalNamespace::AudioPlayHelper___c__DisplayClass9_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioPlayHelper*, "", "AudioPlayHelper");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioPlayHelper___c__DisplayClass9_0*, "", "AudioPlayHelper/<>c__DisplayClass9_0");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioPlayHelper/<>c__DisplayClass9_0
class CORDL_TYPE AudioPlayHelper___c__DisplayClass9_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__0, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__0, put=__cordl_internal_set___9__0)) ::System::Func_2<::UnityW<::GlobalNamespace::AudioRandomContainer>,int32_t>*  __9__0;

/// @brief Field <layerContainer>5__2, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__layerContainer_5__2, put=__cordl_internal_set__layerContainer_5__2)) ::UnityW<::GlobalNamespace::AudioLayerContainer>  _layerContainer_5__2;

static inline ::GlobalNamespace::AudioPlayHelper___c__DisplayClass9_0* New_ctor() ;

/// @brief Method <Play>b__0, addr 0x180497ef0, size 0x50, virtual false, abstract: false, final false
inline int32_t _Play_b__0(::GlobalNamespace::AudioRandomContainer*  c) ;

constexpr ::System::Func_2<::UnityW<::GlobalNamespace::AudioRandomContainer>,int32_t>* const& __cordl_internal_get___9__0() const;

constexpr ::System::Func_2<::UnityW<::GlobalNamespace::AudioRandomContainer>,int32_t>*& __cordl_internal_get___9__0() ;

constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer> const& __cordl_internal_get__layerContainer_5__2() const;

constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer>& __cordl_internal_get__layerContainer_5__2() ;

constexpr void __cordl_internal_set___9__0(::System::Func_2<::UnityW<::GlobalNamespace::AudioRandomContainer>,int32_t>*  value) ;

constexpr void __cordl_internal_set__layerContainer_5__2(::UnityW<::GlobalNamespace::AudioLayerContainer>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioPlayHelper___c__DisplayClass9_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioPlayHelper___c__DisplayClass9_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioPlayHelper___c__DisplayClass9_0(AudioPlayHelper___c__DisplayClass9_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioPlayHelper___c__DisplayClass9_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioPlayHelper___c__DisplayClass9_0(AudioPlayHelper___c__DisplayClass9_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17544};

/// @brief Field <layerContainer>5__2, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioLayerContainer>  ____layerContainer_5__2;

/// @brief Field <>9__0, offset: 0x18, size: 0x8, def value: None
 ::System::Func_2<::UnityW<::GlobalNamespace::AudioRandomContainer>,int32_t>*  _____9__0;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioPlayHelper___c__DisplayClass9_0, ____layerContainer_5__2) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPlayHelper___c__DisplayClass9_0, _____9__0) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioPlayHelper___c__DisplayClass9_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object, UnityEngine.AudioSource
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioPlayHelper
class CORDL_TYPE AudioPlayHelper : public ::System::Object {
public:
// Declarations
using __c__DisplayClass9_0 = ::GlobalNamespace::AudioPlayHelper___c__DisplayClass9_0;

/// @brief Field <TempVolumeList>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__TempVolumeList_k__BackingField, put=setStaticF__TempVolumeList_k__BackingField)) ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*  _TempVolumeList_k__BackingField;

/// @brief Field editorPoolObj, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_editorPoolObj, put=setStaticF_editorPoolObj)) ::UnityW<::UnityEngine::GameObject>  editorPoolObj;

/// @brief Field editorSources, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_editorSources, put=setStaticF_editorSources)) ::ArrayW<::UnityW<::UnityEngine::AudioSource>>  editorSources;

/// @brief Method CreateEventAndPlay, addr 0x180487c50, size 0x100, virtual false, abstract: false, final false
static inline ::GlobalNamespace::AudioEvent* CreateEventAndPlay(::GlobalNamespace::AudioAsset*  audioAsset, ::UnityEngine::Vector3  worldPosition, ::UnityEngine::Object*  owner, ::GlobalNamespace::IAudioRTPCXProvider*  xProvider, ::UnityEngine::Transform*  followTransform, bool  rtpc, float_t  fadeInOverride, ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*  getXFunc, ::System::Func_1<float_t>*  intensityFunc, bool  editor) ;

/// @brief Method DestroyAudioSources, addr 0x180487d50, size 0x190, virtual false, abstract: false, final false
static inline void DestroyAudioSources() ;

/// @brief Method InitializeAudioSources, addr 0x180487ee0, size 0x2d0, virtual false, abstract: false, final false
static inline void InitializeAudioSources() ;

/// @brief Method Play, addr 0x180488760, size 0x8b0, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::AudioSourceController> Play(::GlobalNamespace::AudioAsset*  audioAsset, ::UnityEngine::Vector3  worldPosition, ::UnityEngine::Object*  owner, ::GlobalNamespace::IAudioRTPCXProvider*  xProvider, ::UnityEngine::Transform*  followTransform, bool  rtpc, double_t  delay, float_t  fadeInOverride, ::UnityEngine::AudioClip*  clipOverride, ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*  getXFunc, bool  editor, ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*  volumes) ;

/// @brief Method PlayInEditor, addr 0x1804881b0, size 0x5b0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::AudioSource> PlayInEditor(::GlobalNamespace::SoundCue*  cue, float_t  vol, float_t  pitch, float_t  delay, bool  randomTime, bool  allowLoop, float_t  offset) ;

/// @brief Method PreviewAssetInEditor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void PreviewAssetInEditor(::GlobalNamespace::AudioAsset*  asset) ;

/// @brief Method StopAll, addr 0x180489250, size 0x170, virtual false, abstract: false, final false
static inline void StopAll() ;

/// @brief Method StopAllEditorSources, addr 0x180489010, size 0x240, virtual false, abstract: false, final false
static inline void StopAllEditorSources() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>* getStaticF__TempVolumeList_k__BackingField() ;

static inline ::UnityW<::UnityEngine::GameObject> getStaticF_editorPoolObj() ;

static inline ::ArrayW<::UnityW<::UnityEngine::AudioSource>> getStaticF_editorSources() ;

/// @brief Method get_TempVolumeList, addr 0x180316190, size 0x40, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>* get_TempVolumeList() ;

static inline void setStaticF__TempVolumeList_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*  value) ;

static inline void setStaticF_editorPoolObj(::UnityW<::UnityEngine::GameObject>  value) ;

static inline void setStaticF_editorSources(::ArrayW<::UnityW<::UnityEngine::AudioSource>>  value) ;

/// @brief Method set_TempVolumeList, addr 0x180489420, size 0x60, virtual false, abstract: false, final false
static inline void set_TempVolumeList(::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioPlayHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioPlayHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioPlayHelper(AudioPlayHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioPlayHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioPlayHelper(AudioPlayHelper const& ) = delete;

/// @brief Field AUDIOSOURCE_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  AUDIOSOURCE_NAME{u"[EditorOnly] Audio Source"};

/// @brief Field EDITOR_POOL_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  EDITOR_POOL_SIZE{static_cast<int32_t>(0xf)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17545};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::AudioPlayHelper) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

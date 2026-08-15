#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioPlayHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AudioSource_impl.hpp"
#include "GlobalNamespace/zzzz__AudioPlayHelper_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioEvent_def.hpp"
#include "GlobalNamespace/zzzz__AudioLayerContainer_def.hpp"
#include "GlobalNamespace/zzzz__AudioPlayHelper_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__AudioRandomContainer_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "GlobalNamespace/zzzz__FuncOneOut_3_def.hpp"
#include "GlobalNamespace/zzzz__IAudioRTPCXProvider_def.hpp"
#include "GlobalNamespace/zzzz__IAudioVolume_def.hpp"
#include "GlobalNamespace/zzzz__SoundCue_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioPlayHelper___c__DisplayClass9_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioPlayHelper___c__DisplayClass9_0::*)()>(&::GlobalNamespace::AudioPlayHelper___c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayHelper___c__DisplayClass9_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPlayHelper___c__DisplayClass9_0._Play_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AudioPlayHelper___c__DisplayClass9_0::*)(::GlobalNamespace::AudioRandomContainer*)>(&::GlobalNamespace::AudioPlayHelper___c__DisplayClass9_0::_Play_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180497ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayHelper___c__DisplayClass9_0*>(),
                        {"<Play>b__0", {}, {::i2c::type_of<::GlobalNamespace::AudioRandomContainer*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer>& GlobalNamespace::AudioPlayHelper___c__DisplayClass9_0::__cordl_internal_get__layerContainer_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layerContainer_5__2;
}
constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer> const& GlobalNamespace::AudioPlayHelper___c__DisplayClass9_0::__cordl_internal_get__layerContainer_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layerContainer_5__2;
}
constexpr void GlobalNamespace::AudioPlayHelper___c__DisplayClass9_0::__cordl_internal_set__layerContainer_5__2(::UnityW<::GlobalNamespace::AudioLayerContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____layerContainer_5__2 = value;
}
constexpr ::System::Func_2<::UnityW<::GlobalNamespace::AudioRandomContainer>,int32_t>*& GlobalNamespace::AudioPlayHelper___c__DisplayClass9_0::__cordl_internal_get___9__0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr ::System::Func_2<::UnityW<::GlobalNamespace::AudioRandomContainer>,int32_t>* const& GlobalNamespace::AudioPlayHelper___c__DisplayClass9_0::__cordl_internal_get___9__0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr void GlobalNamespace::AudioPlayHelper___c__DisplayClass9_0::__cordl_internal_set___9__0(::System::Func_2<::UnityW<::GlobalNamespace::AudioRandomContainer>,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__0 = value;
}
inline void GlobalNamespace::AudioPlayHelper___c__DisplayClass9_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayHelper___c__DisplayClass9_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::AudioPlayHelper___c__DisplayClass9_0::_Play_b__0(::GlobalNamespace::AudioRandomContainer*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayHelper___c__DisplayClass9_0*>(),
                        {"<Play>b__0", {}, {::i2c::type_of<::GlobalNamespace::AudioRandomContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, c);
}
inline ::GlobalNamespace::AudioPlayHelper___c__DisplayClass9_0* GlobalNamespace::AudioPlayHelper___c__DisplayClass9_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioPlayHelper___c__DisplayClass9_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioPlayHelper___c__DisplayClass9_0::AudioPlayHelper___c__DisplayClass9_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::AudioPlayHelper.get_TempVolumeList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>* (*)()>(&::GlobalNamespace::AudioPlayHelper::get_TempVolumeList)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180316190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayHelper*>(),
                        {"get_TempVolumeList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPlayHelper.set_TempVolumeList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*)>(&::GlobalNamespace::AudioPlayHelper::set_TempVolumeList)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180489420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayHelper*>(),
                        {"set_TempVolumeList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPlayHelper.CreateEventAndPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioEvent* (*)(::GlobalNamespace::AudioAsset*, ::UnityEngine::Vector3, ::UnityEngine::Object*, ::GlobalNamespace::IAudioRTPCXProvider*, ::UnityEngine::Transform*, bool, float_t, ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*, ::System::Func_1<float_t>*, bool)>(&::GlobalNamespace::AudioPlayHelper::CreateEventAndPlay)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180487c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayHelper*>(),
                        {"CreateEventAndPlay", {}, {::i2c::type_of<::GlobalNamespace::AudioAsset*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::GlobalNamespace::IAudioRTPCXProvider*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*>(), ::i2c::type_of<::System::Func_1<float_t>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPlayHelper.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioSourceController> (*)(::GlobalNamespace::AudioAsset*, ::UnityEngine::Vector3, ::UnityEngine::Object*, ::GlobalNamespace::IAudioRTPCXProvider*, ::UnityEngine::Transform*, bool, double_t, float_t, ::UnityEngine::AudioClip*, ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*, bool, ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*)>(&::GlobalNamespace::AudioPlayHelper::Play)> {
  constexpr static std::size_t size = 0x8b0;
  constexpr static std::size_t addrs = 0x180488760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayHelper*>(),
                        {"Play", {}, {::i2c::type_of<::GlobalNamespace::AudioAsset*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::GlobalNamespace::IAudioRTPCXProvider*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<double_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPlayHelper.PreviewAssetInEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AudioAsset*)>(&::GlobalNamespace::AudioPlayHelper::PreviewAssetInEditor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayHelper*>(),
                        {"PreviewAssetInEditor", {}, {::i2c::type_of<::GlobalNamespace::AudioAsset*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPlayHelper.InitializeAudioSources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::AudioPlayHelper::InitializeAudioSources)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x180487ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayHelper*>(),
                        {"InitializeAudioSources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPlayHelper.DestroyAudioSources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::AudioPlayHelper::DestroyAudioSources)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x180487d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayHelper*>(),
                        {"DestroyAudioSources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPlayHelper.PlayInEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioSource> (*)(::GlobalNamespace::SoundCue*, float_t, float_t, float_t, bool, bool, float_t)>(&::GlobalNamespace::AudioPlayHelper::PlayInEditor)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x1804881b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayHelper*>(),
                        {"PlayInEditor", {}, {::i2c::type_of<::GlobalNamespace::SoundCue*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPlayHelper.StopAllEditorSources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::AudioPlayHelper::StopAllEditorSources)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x180489010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayHelper*>(),
                        {"StopAllEditorSources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPlayHelper.StopAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::AudioPlayHelper::StopAll)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x180489250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayHelper*>(),
                        {"StopAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AudioPlayHelper::setStaticF_editorPoolObj(::UnityW<::UnityEngine::GameObject>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::GameObject>, "editorPoolObj", ::GlobalNamespace::AudioPlayHelper*>(std::forward<::UnityW<::UnityEngine::GameObject>>(value));
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::AudioPlayHelper::getStaticF_editorPoolObj()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::GameObject>, "editorPoolObj", ::GlobalNamespace::AudioPlayHelper*>();
}
inline void GlobalNamespace::AudioPlayHelper::setStaticF_editorSources(::ArrayW<::UnityW<::UnityEngine::AudioSource>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityW<::UnityEngine::AudioSource>>, "editorSources", ::GlobalNamespace::AudioPlayHelper*>(std::forward<::ArrayW<::UnityW<::UnityEngine::AudioSource>>>(value));
}
inline ::ArrayW<::UnityW<::UnityEngine::AudioSource>> GlobalNamespace::AudioPlayHelper::getStaticF_editorSources()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityW<::UnityEngine::AudioSource>>, "editorSources", ::GlobalNamespace::AudioPlayHelper*>();
}
inline void GlobalNamespace::AudioPlayHelper::setStaticF__TempVolumeList_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*, "<TempVolumeList>k__BackingField", ::GlobalNamespace::AudioPlayHelper*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>* GlobalNamespace::AudioPlayHelper::getStaticF__TempVolumeList_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*, "<TempVolumeList>k__BackingField", ::GlobalNamespace::AudioPlayHelper*>();
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>* GlobalNamespace::AudioPlayHelper::get_TempVolumeList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayHelper*>(),
                        {"get_TempVolumeList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::AudioPlayHelper::set_TempVolumeList(::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayHelper*>(),
                        {"set_TempVolumeList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::GlobalNamespace::AudioEvent* GlobalNamespace::AudioPlayHelper::CreateEventAndPlay(::GlobalNamespace::AudioAsset*  audioAsset, ::UnityEngine::Vector3  worldPosition, ::UnityEngine::Object*  owner, ::GlobalNamespace::IAudioRTPCXProvider*  xProvider, ::UnityEngine::Transform*  followTransform, bool  rtpc, float_t  fadeInOverride, ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*  getXFunc, ::System::Func_1<float_t>*  intensityFunc, bool  editor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayHelper*>(),
                        {"CreateEventAndPlay", {}, {::i2c::type_of<::GlobalNamespace::AudioAsset*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::GlobalNamespace::IAudioRTPCXProvider*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*>(), ::i2c::type_of<::System::Func_1<float_t>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioEvent*>(nullptr, ___internal_method, audioAsset, worldPosition, owner, xProvider, followTransform, rtpc, fadeInOverride, getXFunc, intensityFunc, editor);
}
inline ::UnityW<::GlobalNamespace::AudioSourceController> GlobalNamespace::AudioPlayHelper::Play(::GlobalNamespace::AudioAsset*  audioAsset, ::UnityEngine::Vector3  worldPosition, ::UnityEngine::Object*  owner, ::GlobalNamespace::IAudioRTPCXProvider*  xProvider, ::UnityEngine::Transform*  followTransform, bool  rtpc, double_t  delay, float_t  fadeInOverride, ::UnityEngine::AudioClip*  clipOverride, ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*  getXFunc, bool  editor, ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*  volumes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayHelper*>(),
                        {"Play", {}, {::i2c::type_of<::GlobalNamespace::AudioAsset*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::GlobalNamespace::IAudioRTPCXProvider*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<double_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioSourceController>>(nullptr, ___internal_method, audioAsset, worldPosition, owner, xProvider, followTransform, rtpc, delay, fadeInOverride, clipOverride, getXFunc, editor, volumes);
}
inline void GlobalNamespace::AudioPlayHelper::PreviewAssetInEditor(::GlobalNamespace::AudioAsset*  asset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayHelper*>(),
                        {"PreviewAssetInEditor", {}, {::i2c::type_of<::GlobalNamespace::AudioAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, asset);
}
inline void GlobalNamespace::AudioPlayHelper::InitializeAudioSources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayHelper*>(),
                        {"InitializeAudioSources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::AudioPlayHelper::DestroyAudioSources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayHelper*>(),
                        {"DestroyAudioSources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioSource> GlobalNamespace::AudioPlayHelper::PlayInEditor(::GlobalNamespace::SoundCue*  cue, float_t  vol, float_t  pitch, float_t  delay, bool  randomTime, bool  allowLoop, float_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayHelper*>(),
                        {"PlayInEditor", {}, {::i2c::type_of<::GlobalNamespace::SoundCue*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>>(nullptr, ___internal_method, cue, vol, pitch, delay, randomTime, allowLoop, offset);
}
inline void GlobalNamespace::AudioPlayHelper::StopAllEditorSources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayHelper*>(),
                        {"StopAllEditorSources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::AudioPlayHelper::StopAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayHelper*>(),
                        {"StopAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioPlayHelper::AudioPlayHelper()   {
}

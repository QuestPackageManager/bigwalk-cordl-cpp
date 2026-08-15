#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioEvent)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class AudioEvent_LayerRuntimeInfo;
}
namespace GlobalNamespace {
class AudioEvent_MinigunRuntimeInfo;
}
namespace GlobalNamespace {
class AudioEvent_ScatterRuntimeInfo;
}
namespace GlobalNamespace {
class AudioEvent___c__DisplayClass81_0;
}
namespace GlobalNamespace {
struct AudioLayerContainer_LayerType;
}
namespace GlobalNamespace {
class AudioLayerContainer;
}
namespace GlobalNamespace {
class AudioLayer;
}
namespace GlobalNamespace {
class AudioMinigunContainer;
}
namespace GlobalNamespace {
struct AudioRTPC_XAxisType;
}
namespace GlobalNamespace {
class AudioRandomContainer;
}
namespace GlobalNamespace {
class AudioScatterContainer;
}
namespace GlobalNamespace {
class AudioSourceController;
}
namespace GlobalNamespace {
class AudioVolume;
}
namespace GlobalNamespace {
template<typename T,typename U,typename V>
class FuncOneOut_3;
}
namespace GlobalNamespace {
class IAudioBehaviour;
}
namespace GlobalNamespace {
class IAudioRTPCXProvider;
}
namespace GlobalNamespace {
class IAudioVolume;
}
namespace GlobalNamespace {
class ISoundCueProvider;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename TResult>
class Func_1;
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
class AudioEvent;
}
namespace GlobalNamespace {
class AudioEvent_LayerRuntimeInfo;
}
namespace GlobalNamespace {
class AudioEvent_MinigunRuntimeInfo;
}
namespace GlobalNamespace {
class AudioEvent_ScatterRuntimeInfo;
}
namespace GlobalNamespace {
class AudioEvent___c__DisplayClass81_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioEvent*);
MARK_REF_T(::GlobalNamespace::AudioEvent_LayerRuntimeInfo*);
MARK_REF_T(::GlobalNamespace::AudioEvent_MinigunRuntimeInfo*);
MARK_REF_T(::GlobalNamespace::AudioEvent_ScatterRuntimeInfo*);
MARK_REF_T(::GlobalNamespace::AudioEvent___c__DisplayClass81_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioEvent*, "", "AudioEvent");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioEvent_LayerRuntimeInfo*, "", "AudioEvent/LayerRuntimeInfo");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioEvent_MinigunRuntimeInfo*, "", "AudioEvent/MinigunRuntimeInfo");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioEvent_ScatterRuntimeInfo*, "", "AudioEvent/ScatterRuntimeInfo");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioEvent___c__DisplayClass81_0*, "", "AudioEvent/<>c__DisplayClass81_0");
// Dependencies System.Object, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioEvent/ScatterRuntimeInfo
class CORDL_TYPE AudioEvent_ScatterRuntimeInfo : public ::System::Object {
public:
// Declarations
/// @brief Field AlwaysCenter, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_AlwaysCenter, put=__cordl_internal_set_AlwaysCenter)) bool  AlwaysCenter;

/// @brief Field CenterTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_CenterTransform, put=__cordl_internal_set_CenterTransform)) ::UnityW<::UnityEngine::Transform>  CenterTransform;

/// @brief Field CurrentTime, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_CurrentTime, put=__cordl_internal_set_CurrentTime)) float_t  CurrentTime;

/// @brief Field NextInterval, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_NextInterval, put=__cordl_internal_set_NextInterval)) float_t  NextInterval;

/// @brief Field NextPos, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get_NextPos, put=__cordl_internal_set_NextPos)) ::UnityEngine::Vector3  NextPos;

/// @brief Field Owner, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Owner, put=__cordl_internal_set_Owner)) ::UnityW<::UnityEngine::Object>  Owner;

/// @brief Field RTPC, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_RTPC, put=__cordl_internal_set_RTPC)) bool  RTPC;

/// @brief Field isPlaying, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_isPlaying, put=__cordl_internal_set_isPlaying)) bool  isPlaying;

static inline ::GlobalNamespace::AudioEvent_ScatterRuntimeInfo* New_ctor() ;

constexpr bool const& __cordl_internal_get_AlwaysCenter() const;

constexpr bool& __cordl_internal_get_AlwaysCenter() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_CenterTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_CenterTransform() ;

constexpr float_t const& __cordl_internal_get_CurrentTime() const;

constexpr float_t& __cordl_internal_get_CurrentTime() ;

constexpr float_t const& __cordl_internal_get_NextInterval() const;

constexpr float_t& __cordl_internal_get_NextInterval() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_NextPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_NextPos() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_Owner() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_Owner() ;

constexpr bool const& __cordl_internal_get_RTPC() const;

constexpr bool& __cordl_internal_get_RTPC() ;

constexpr bool const& __cordl_internal_get_isPlaying() const;

constexpr bool& __cordl_internal_get_isPlaying() ;

constexpr void __cordl_internal_set_AlwaysCenter(bool  value) ;

constexpr void __cordl_internal_set_CenterTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_CurrentTime(float_t  value) ;

constexpr void __cordl_internal_set_NextInterval(float_t  value) ;

constexpr void __cordl_internal_set_NextPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_Owner(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set_RTPC(bool  value) ;

constexpr void __cordl_internal_set_isPlaying(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioEvent_ScatterRuntimeInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioEvent_ScatterRuntimeInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioEvent_ScatterRuntimeInfo(AudioEvent_ScatterRuntimeInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioEvent_ScatterRuntimeInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioEvent_ScatterRuntimeInfo(AudioEvent_ScatterRuntimeInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17516};

/// @brief Field NextInterval, offset: 0x10, size: 0x4, def value: None
 float_t  ___NextInterval;

/// @brief Field CurrentTime, offset: 0x14, size: 0x4, def value: None
 float_t  ___CurrentTime;

/// @brief Field NextPos, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___NextPos;

/// @brief Field AlwaysCenter, offset: 0x24, size: 0x1, def value: None
 bool  ___AlwaysCenter;

/// @brief Field CenterTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___CenterTransform;

/// @brief Field Owner, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___Owner;

/// @brief Field RTPC, offset: 0x38, size: 0x1, def value: None
 bool  ___RTPC;

/// @brief Field isPlaying, offset: 0x39, size: 0x1, def value: None
 bool  ___isPlaying;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioEvent_ScatterRuntimeInfo, ___NextInterval) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent_ScatterRuntimeInfo, ___CurrentTime) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent_ScatterRuntimeInfo, ___NextPos) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent_ScatterRuntimeInfo, ___AlwaysCenter) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent_ScatterRuntimeInfo, ___CenterTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent_ScatterRuntimeInfo, ___Owner) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent_ScatterRuntimeInfo, ___RTPC) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent_ScatterRuntimeInfo, ___isPlaying) == 0x39, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioEvent_ScatterRuntimeInfo) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioEvent/MinigunRuntimeInfo
class CORDL_TYPE AudioEvent_MinigunRuntimeInfo : public ::System::Object {
public:
// Declarations
/// @brief Field CenterTransform, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_CenterTransform, put=__cordl_internal_set_CenterTransform)) ::UnityW<::UnityEngine::Transform>  CenterTransform;

/// @brief Field CurrentTime, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_CurrentTime, put=__cordl_internal_set_CurrentTime)) float_t  CurrentTime;

/// @brief Field NextInterval, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_NextInterval, put=__cordl_internal_set_NextInterval)) float_t  NextInterval;

/// @brief Field NextTargetPositions, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_NextTargetPositions, put=__cordl_internal_set_NextTargetPositions)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  NextTargetPositions;

/// @brief Field Owner, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Owner, put=__cordl_internal_set_Owner)) ::UnityW<::UnityEngine::Object>  Owner;

/// @brief Field PositionProgresses, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_PositionProgresses, put=__cordl_internal_set_PositionProgresses)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  PositionProgresses;

/// @brief Field RTPC, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_RTPC, put=__cordl_internal_set_RTPC)) bool  RTPC;

/// @brief Field isPlaying, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_isPlaying, put=__cordl_internal_set_isPlaying)) bool  isPlaying;

static inline ::GlobalNamespace::AudioEvent_MinigunRuntimeInfo* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_CenterTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_CenterTransform() ;

constexpr float_t const& __cordl_internal_get_CurrentTime() const;

constexpr float_t& __cordl_internal_get_CurrentTime() ;

constexpr float_t const& __cordl_internal_get_NextInterval() const;

constexpr float_t& __cordl_internal_get_NextInterval() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_NextTargetPositions() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_NextTargetPositions() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_Owner() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_Owner() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_PositionProgresses() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_PositionProgresses() ;

constexpr bool const& __cordl_internal_get_RTPC() const;

constexpr bool& __cordl_internal_get_RTPC() ;

constexpr bool const& __cordl_internal_get_isPlaying() const;

constexpr bool& __cordl_internal_get_isPlaying() ;

constexpr void __cordl_internal_set_CenterTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_CurrentTime(float_t  value) ;

constexpr void __cordl_internal_set_NextInterval(float_t  value) ;

constexpr void __cordl_internal_set_NextTargetPositions(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_Owner(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set_PositionProgresses(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_RTPC(bool  value) ;

constexpr void __cordl_internal_set_isPlaying(bool  value) ;

/// @brief Method .ctor, addr 0x180482c80, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioEvent_MinigunRuntimeInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioEvent_MinigunRuntimeInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioEvent_MinigunRuntimeInfo(AudioEvent_MinigunRuntimeInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioEvent_MinigunRuntimeInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioEvent_MinigunRuntimeInfo(AudioEvent_MinigunRuntimeInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17517};

/// @brief Field CenterTransform, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___CenterTransform;

/// @brief Field NextInterval, offset: 0x18, size: 0x4, def value: None
 float_t  ___NextInterval;

/// @brief Field CurrentTime, offset: 0x1c, size: 0x4, def value: None
 float_t  ___CurrentTime;

/// @brief Field NextTargetPositions, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___NextTargetPositions;

/// @brief Field PositionProgresses, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___PositionProgresses;

/// @brief Field Owner, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___Owner;

/// @brief Field RTPC, offset: 0x38, size: 0x1, def value: None
 bool  ___RTPC;

/// @brief Field isPlaying, offset: 0x39, size: 0x1, def value: None
 bool  ___isPlaying;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioEvent_MinigunRuntimeInfo, ___CenterTransform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent_MinigunRuntimeInfo, ___NextInterval) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent_MinigunRuntimeInfo, ___CurrentTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent_MinigunRuntimeInfo, ___NextTargetPositions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent_MinigunRuntimeInfo, ___PositionProgresses) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent_MinigunRuntimeInfo, ___Owner) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent_MinigunRuntimeInfo, ___RTPC) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent_MinigunRuntimeInfo, ___isPlaying) == 0x39, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioEvent_MinigunRuntimeInfo) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioEvent/LayerRuntimeInfo
class CORDL_TYPE AudioEvent_LayerRuntimeInfo : public ::System::Object {
public:
// Declarations
/// @brief Field FollowTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_FollowTransform, put=__cordl_internal_set_FollowTransform)) ::UnityW<::UnityEngine::Transform>  FollowTransform;

/// @brief Field IntensityFunc, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_IntensityFunc, put=__cordl_internal_set_IntensityFunc)) ::System::Func_1<float_t>*  IntensityFunc;

/// @brief Field IntensityVolumes, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_IntensityVolumes, put=__cordl_internal_set_IntensityVolumes)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioLayer*,::GlobalNamespace::AudioVolume*>*  IntensityVolumes;

/// @brief Field LastPlayedTime, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_LastPlayedTime, put=__cordl_internal_set_LastPlayedTime)) double_t  LastPlayedTime;

/// @brief Field Loops, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Loops, put=__cordl_internal_set_Loops)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioLayer*,::UnityW<::GlobalNamespace::AudioSourceController>>*  Loops;

/// @brief Field OnLayerPlayed, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLayerPlayed, put=__cordl_internal_set_OnLayerPlayed)) ::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  OnLayerPlayed;

/// @brief Field Owner, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Owner, put=__cordl_internal_set_Owner)) ::UnityW<::UnityEngine::Object>  Owner;

/// @brief Field RTPC, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_RTPC, put=__cordl_internal_set_RTPC)) bool  RTPC;

/// @brief Field S_ToRemove, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_S_ToRemove, put=setStaticF_S_ToRemove)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  S_ToRemove;

/// @brief Field WorldPos, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_WorldPos, put=__cordl_internal_set_WorldPos)) ::UnityEngine::Vector3  WorldPos;

static inline ::GlobalNamespace::AudioEvent_LayerRuntimeInfo* New_ctor() ;

/// @brief Method OnLayerPlay, addr 0x180482a60, size 0x20, virtual false, abstract: false, final false
inline void OnLayerPlay(::GlobalNamespace::AudioSourceController*  asc) ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_FollowTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_FollowTransform() ;

constexpr ::System::Func_1<float_t>* const& __cordl_internal_get_IntensityFunc() const;

constexpr ::System::Func_1<float_t>*& __cordl_internal_get_IntensityFunc() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioLayer*,::GlobalNamespace::AudioVolume*>* const& __cordl_internal_get_IntensityVolumes() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioLayer*,::GlobalNamespace::AudioVolume*>*& __cordl_internal_get_IntensityVolumes() ;

constexpr double_t const& __cordl_internal_get_LastPlayedTime() const;

constexpr double_t& __cordl_internal_get_LastPlayedTime() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioLayer*,::UnityW<::GlobalNamespace::AudioSourceController>>* const& __cordl_internal_get_Loops() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioLayer*,::UnityW<::GlobalNamespace::AudioSourceController>>*& __cordl_internal_get_Loops() ;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& __cordl_internal_get_OnLayerPlayed() const;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& __cordl_internal_get_OnLayerPlayed() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_Owner() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_Owner() ;

constexpr bool const& __cordl_internal_get_RTPC() const;

constexpr bool& __cordl_internal_get_RTPC() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_WorldPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_WorldPos() ;

constexpr void __cordl_internal_set_FollowTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_IntensityFunc(::System::Func_1<float_t>*  value) ;

constexpr void __cordl_internal_set_IntensityVolumes(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioLayer*,::GlobalNamespace::AudioVolume*>*  value) ;

constexpr void __cordl_internal_set_LastPlayedTime(double_t  value) ;

constexpr void __cordl_internal_set_Loops(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioLayer*,::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

constexpr void __cordl_internal_set_OnLayerPlayed(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

constexpr void __cordl_internal_set_Owner(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set_RTPC(bool  value) ;

constexpr void __cordl_internal_set_WorldPos(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x180482ae0, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_OnLayerPlayed, addr 0x180482b60, size 0x90, virtual false, abstract: false, final false
inline void add_OnLayerPlayed(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>* getStaticF_S_ToRemove() ;

/// @brief Method remove_OnLayerPlayed, addr 0x180482bf0, size 0x90, virtual false, abstract: false, final false
inline void remove_OnLayerPlayed(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

static inline void setStaticF_S_ToRemove(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioEvent_LayerRuntimeInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioEvent_LayerRuntimeInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioEvent_LayerRuntimeInfo(AudioEvent_LayerRuntimeInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioEvent_LayerRuntimeInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioEvent_LayerRuntimeInfo(AudioEvent_LayerRuntimeInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17518};

/// @brief Field WorldPos, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___WorldPos;

/// @brief Field FollowTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___FollowTransform;

/// @brief Field Owner, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___Owner;

/// @brief Field RTPC, offset: 0x30, size: 0x1, def value: None
 bool  ___RTPC;

/// @brief Field Loops, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioLayer*,::UnityW<::GlobalNamespace::AudioSourceController>>*  ___Loops;

/// @brief Field IntensityVolumes, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioLayer*,::GlobalNamespace::AudioVolume*>*  ___IntensityVolumes;

/// @brief Field IntensityFunc, offset: 0x48, size: 0x8, def value: None
 ::System::Func_1<float_t>*  ___IntensityFunc;

/// @brief Field LastPlayedTime, offset: 0x50, size: 0x8, def value: None
 double_t  ___LastPlayedTime;

/// @brief Field OnLayerPlayed, offset: 0x58, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  ___OnLayerPlayed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioEvent_LayerRuntimeInfo, ___WorldPos) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent_LayerRuntimeInfo, ___FollowTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent_LayerRuntimeInfo, ___Owner) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent_LayerRuntimeInfo, ___RTPC) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent_LayerRuntimeInfo, ___Loops) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent_LayerRuntimeInfo, ___IntensityVolumes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent_LayerRuntimeInfo, ___IntensityFunc) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent_LayerRuntimeInfo, ___LastPlayedTime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent_LayerRuntimeInfo, ___OnLayerPlayed) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioEvent_LayerRuntimeInfo) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioEvent/<>c__DisplayClass81_0
class CORDL_TYPE AudioEvent___c__DisplayClass81_0 : public ::System::Object {
public:
// Declarations
/// @brief Field layerContainer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_layerContainer, put=__cordl_internal_set_layerContainer)) ::UnityW<::GlobalNamespace::AudioLayerContainer>  layerContainer;

static inline ::GlobalNamespace::AudioEvent___c__DisplayClass81_0* New_ctor() ;

/// @brief Method <PlayLayer>b__6, addr 0x180482dc0, size 0x70, virtual false, abstract: false, final false
inline int32_t _PlayLayer_b__6(::GlobalNamespace::AudioRandomContainer*  c) ;

constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer> const& __cordl_internal_get_layerContainer() const;

constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer>& __cordl_internal_get_layerContainer() ;

constexpr void __cordl_internal_set_layerContainer(::UnityW<::GlobalNamespace::AudioLayerContainer>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioEvent___c__DisplayClass81_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioEvent___c__DisplayClass81_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioEvent___c__DisplayClass81_0(AudioEvent___c__DisplayClass81_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioEvent___c__DisplayClass81_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioEvent___c__DisplayClass81_0(AudioEvent___c__DisplayClass81_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17519};

/// @brief Field layerContainer, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioLayerContainer>  ___layerContainer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioEvent___c__DisplayClass81_0, ___layerContainer) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioEvent___c__DisplayClass81_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioEvent
class CORDL_TYPE AudioEvent : public ::System::Object {
public:
// Declarations
using LayerRuntimeInfo = ::GlobalNamespace::AudioEvent_LayerRuntimeInfo;

using MinigunRuntimeInfo = ::GlobalNamespace::AudioEvent_MinigunRuntimeInfo;

using ScatterRuntimeInfo = ::GlobalNamespace::AudioEvent_ScatterRuntimeInfo;

using __c__DisplayClass81_0 = ::GlobalNamespace::AudioEvent___c__DisplayClass81_0;

 __declspec(property(get=get_Asset)) ::UnityW<::GlobalNamespace::AudioAsset>  Asset;

 __declspec(property(get=get_AudioVolumes)) ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*  AudioVolumes;

 __declspec(property(get=get_Hibernating)) bool  Hibernating;

 __declspec(property(get=get_Initialized)) bool  Initialized;

 __declspec(property(get=get_IsFadingOut)) bool  IsFadingOut;

 __declspec(property(get=get_IsPlaying)) bool  IsPlaying;

 __declspec(property(get=get_IsPlayingAndNotAllFadingOut)) bool  IsPlayingAndNotAllFadingOut;

 __declspec(property(get=get_IsPlayingAndNotAnyFadingOut)) bool  IsPlayingAndNotAnyFadingOut;

 __declspec(property(get=get_LayerRuntime)) ::GlobalNamespace::AudioEvent_LayerRuntimeInfo*  LayerRuntime;

 __declspec(property(get=get_MinigunRuntime)) ::GlobalNamespace::AudioEvent_MinigunRuntimeInfo*  MinigunRuntime;

 __declspec(property(get=get_PlayingControllers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  PlayingControllers;

 __declspec(property(get=get_ScatterRuntime)) ::GlobalNamespace::AudioEvent_ScatterRuntimeInfo*  ScatterRuntime;

 __declspec(property(get=get_ScriptablePan, put=set_ScriptablePan)) float_t  ScriptablePan;

 __declspec(property(get=get_ScriptablePitch, put=set_ScriptablePitch)) float_t  ScriptablePitch;

 __declspec(property(get=get_ScriptableSpatialBlend, put=set_ScriptableSpatialBlend)) float_t  ScriptableSpatialBlend;

 __declspec(property(get=get_ScriptableSpread, put=set_ScriptableSpread)) float_t  ScriptableSpread;

 __declspec(property(get=get_ScriptableVolume, put=set_ScriptableVolume)) float_t  ScriptableVolume;

 __declspec(property(get=get_XProviderIdentifier)) ::StringW  XProviderIdentifier;

 __declspec(property(get=get_XProviderOverride)) ::GlobalNamespace::IAudioRTPCXProvider*  XProviderOverride;

/// @brief Field _asset, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__asset, put=__cordl_internal_set__asset)) ::UnityW<::GlobalNamespace::AudioAsset>  _asset;

/// @brief Field _audioVolumes, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioVolumes, put=__cordl_internal_set__audioVolumes)) ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*  _audioVolumes;

/// @brief Field _defaultOwner, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultOwner, put=__cordl_internal_set__defaultOwner)) ::UnityW<::UnityEngine::Object>  _defaultOwner;

/// @brief Field _getXFunc, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__getXFunc, put=__cordl_internal_set__getXFunc)) ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*  _getXFunc;

/// @brief Field _hibernating, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get__hibernating, put=__cordl_internal_set__hibernating)) bool  _hibernating;

/// @brief Field _layerRuntime, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__layerRuntime, put=__cordl_internal_set__layerRuntime)) ::GlobalNamespace::AudioEvent_LayerRuntimeInfo*  _layerRuntime;

/// @brief Field _minigunRuntime, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__minigunRuntime, put=__cordl_internal_set__minigunRuntime)) ::GlobalNamespace::AudioEvent_MinigunRuntimeInfo*  _minigunRuntime;

/// @brief Field _playingControllers, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__playingControllers, put=__cordl_internal_set__playingControllers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  _playingControllers;

/// @brief Field _scatterRuntime, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__scatterRuntime, put=__cordl_internal_set__scatterRuntime)) ::GlobalNamespace::AudioEvent_ScatterRuntimeInfo*  _scatterRuntime;

/// @brief Field _scriptablePan, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__scriptablePan, put=__cordl_internal_set__scriptablePan)) float_t  _scriptablePan;

/// @brief Field _scriptablePitch, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__scriptablePitch, put=__cordl_internal_set__scriptablePitch)) float_t  _scriptablePitch;

/// @brief Field _scriptableSpatialBlend, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__scriptableSpatialBlend, put=__cordl_internal_set__scriptableSpatialBlend)) float_t  _scriptableSpatialBlend;

/// @brief Field _scriptableSpread, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__scriptableSpread, put=__cordl_internal_set__scriptableSpread)) float_t  _scriptableSpread;

/// @brief Field _scriptableVolume, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__scriptableVolume, put=__cordl_internal_set__scriptableVolume)) float_t  _scriptableVolume;

/// @brief Field _xProvider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__xProvider, put=__cordl_internal_set__xProvider)) ::GlobalNamespace::IAudioRTPCXProvider*  _xProvider;

/// @brief Convert operator to "::GlobalNamespace::IAudioBehaviour"
constexpr operator  ::GlobalNamespace::IAudioBehaviour*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr operator  ::GlobalNamespace::IAudioRTPCXProvider*() noexcept;

/// @brief Method AddVolume, addr 0x180474d60, size 0x140, virtual false, abstract: false, final false
inline void AddVolume(::GlobalNamespace::IAudioVolume*  vol, ::UnityEngine::Object*  owner, bool  addToExisting) ;

/// @brief Method ApplyScriptableParameters, addr 0x180474ea0, size 0x90, virtual false, abstract: false, final false
inline void ApplyScriptableParameters(::GlobalNamespace::AudioSourceController*  controller) ;

/// @brief Method AudioFixedUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void AudioFixedUpdate(float_t  deltaTime) ;

/// @brief Method AudioLateUpdate, addr 0x180474f30, size 0x1d0, virtual true, abstract: false, final true
inline void AudioLateUpdate(float_t  deltaTime) ;

/// @brief Method AudioSlowUpdate, addr 0x180475100, size 0x70, virtual true, abstract: false, final true
inline void AudioSlowUpdate(float_t  deltaTime) ;

/// @brief Method AudioUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void AudioUpdate(float_t  deltaTime) ;

/// @brief Method DecideHibernation, addr 0x180475170, size 0x1e0, virtual false, abstract: false, final false
inline bool DecideHibernation() ;

/// @brief Method DrawMinigunGizmosRuntime, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void DrawMinigunGizmosRuntime(::GlobalNamespace::AudioMinigunContainer*  container, ::GlobalNamespace::AudioEvent_MinigunRuntimeInfo*  info) ;

/// @brief Method DrawScatterGizmosRuntime, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void DrawScatterGizmosRuntime(::GlobalNamespace::AudioScatterContainer*  sctr, ::GlobalNamespace::AudioEvent_ScatterRuntimeInfo*  info) ;

/// @brief Method GetX, addr 0x180475350, size 0x40, virtual true, abstract: false, final true
inline bool GetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x) ;

static inline ::GlobalNamespace::AudioEvent* New_ctor(::GlobalNamespace::AudioAsset*  asset, ::UnityEngine::Object*  defaultOwner, ::GlobalNamespace::IAudioRTPCXProvider*  xProvider, ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*  getXFunc) ;

/// @brief Method Pause, addr 0x180475390, size 0x610, virtual false, abstract: false, final false
inline void Pause() ;

/// @brief Method Play, addr 0x180477570, size 0x440, virtual false, abstract: false, final false
inline bool Play(::UnityEngine::Vector3  worldPosition, ::UnityEngine::Object*  owner, ::UnityEngine::Transform*  followTransform, bool  rtpc, float_t  fadeInOverride, ::System::Func_1<float_t>*  intensityFunc) ;

/// @brief Method PlayCue, addr 0x1804759a0, size 0x230, virtual false, abstract: false, final false
inline void PlayCue(::GlobalNamespace::ISoundCueProvider*  asset, ::UnityEngine::Vector3  worldPosition, ::UnityEngine::Object*  owner, ::UnityEngine::Transform*  followTransform, bool  rtpc, float_t  fadeInOverride) ;

/// @brief Method PlayLayer, addr 0x180476010, size 0x9a0, virtual false, abstract: false, final false
inline void PlayLayer(::GlobalNamespace::AudioLayerContainer*  layerContainer, ::GlobalNamespace::AudioLayer*  layer, ::GlobalNamespace::AudioLayerContainer_LayerType  type, ::UnityEngine::Vector3  worldPosition, ::UnityEngine::Object*  owner, ::UnityEngine::Transform*  followTransform, bool  rtpc, float_t  rawIntensity) ;

/// @brief Method PlayLayerContainer, addr 0x180475bd0, size 0x440, virtual false, abstract: false, final false
inline void PlayLayerContainer(::GlobalNamespace::AudioLayerContainer*  asset, ::UnityEngine::Vector3  worldPosition, ::System::Func_1<float_t>*  intensityFunc, ::UnityEngine::Object*  owner, ::UnityEngine::Transform*  followTransform, bool  rtpc) ;

/// @brief Method PlayMinigun, addr 0x180476b20, size 0x3a0, virtual false, abstract: false, final false
inline void PlayMinigun(::GlobalNamespace::AudioEvent_MinigunRuntimeInfo*  info) ;

/// @brief Method PlayMinigunContainer, addr 0x1804769b0, size 0x170, virtual false, abstract: false, final false
inline void PlayMinigunContainer(::GlobalNamespace::AudioMinigunContainer*  minigun, ::UnityEngine::Transform*  centerTransform, ::UnityEngine::Object*  owner, bool  rtpc) ;

/// @brief Method PlayRandomContainer, addr 0x180476ec0, size 0x1f0, virtual false, abstract: false, final false
inline void PlayRandomContainer(::GlobalNamespace::AudioRandomContainer*  asset, ::UnityEngine::Vector3  worldPosition, ::UnityEngine::Object*  owner, ::UnityEngine::Transform*  followTransform, bool  rtpc) ;

/// @brief Method PlayScatter, addr 0x180477290, size 0x2e0, virtual false, abstract: false, final false
inline void PlayScatter(::GlobalNamespace::AudioEvent_ScatterRuntimeInfo*  info) ;

/// @brief Method PlayScatterContainer, addr 0x1804770b0, size 0x1e0, virtual false, abstract: false, final false
inline void PlayScatterContainer(::GlobalNamespace::AudioScatterContainer*  scatter, ::UnityEngine::Transform*  centerTransform, ::UnityEngine::Object*  owner, bool  rtpc) ;

/// @brief Method RemoveVolume, addr 0x1804779b0, size 0xe0, virtual false, abstract: false, final false
inline void RemoveVolume(::GlobalNamespace::IAudioVolume*  vol, ::UnityEngine::Object*  owner, bool  removeFromExisting) ;

/// @brief Method Resume, addr 0x180477a90, size 0x4f0, virtual false, abstract: false, final false
inline void Resume() ;

/// @brief Method SeekTo, addr 0x180477f80, size 0x90, virtual false, abstract: false, final false
inline void SeekTo(float_t  time) ;

/// @brief Method Stop, addr 0x180478010, size 0x950, virtual false, abstract: false, final false
inline void Stop(bool  stopHead, bool  cancelTail, bool  stopUpdating, float_t  fadeOutOverride, bool  immediate, bool  stopCurrent, bool  removeTransform) ;

/// @brief Method UpdateLayerContainer, addr 0x180478c20, size 0x3d0, virtual false, abstract: false, final false
inline void UpdateLayerContainer(::GlobalNamespace::AudioEvent_LayerRuntimeInfo*  info) ;

/// @brief Method UpdateMinigun, addr 0x180478ff0, size 0x5d0, virtual false, abstract: false, final false
inline void UpdateMinigun(::GlobalNamespace::AudioEvent_MinigunRuntimeInfo*  info) ;

/// @brief Method <PlayCue>g___clearRef|67_0, addr 0x180478960, size 0x30, virtual false, abstract: false, final false
static inline void _PlayCue_g___clearRef_67_0(::GlobalNamespace::AudioEvent*  e, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <PlayLayer>g___clearRef|81_0, addr 0x180478960, size 0x30, virtual false, abstract: false, final false
static inline void _PlayLayer_g___clearRef_81_0(::GlobalNamespace::AudioEvent*  e, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <PlayLayer>g___deregisterVoice|81_5, addr 0x180478990, size 0x70, virtual false, abstract: false, final false
static inline void _PlayLayer_g___deregisterVoice_81_5(::GlobalNamespace::AudioLayerContainer*  l, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <PlayLayer>g___onFadeOut|81_3, addr 0x180478a00, size 0xc0, virtual false, abstract: false, final false
static inline void _PlayLayer_g___onFadeOut_81_3(::GlobalNamespace::AudioEvent_LayerRuntimeInfo*  r, ::GlobalNamespace::AudioLayer*  l, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <PlayLayer>g___onStop|81_2, addr 0x180478ac0, size 0x60, virtual false, abstract: false, final false
static inline void _PlayLayer_g___onStop_81_2(::GlobalNamespace::AudioEvent_LayerRuntimeInfo*  r, ::GlobalNamespace::AudioLayer*  l, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <PlayLayer>g___registerVoice|81_4, addr 0x180478b20, size 0x70, virtual false, abstract: false, final false
static inline void _PlayLayer_g___registerVoice_81_4(::GlobalNamespace::AudioLayerContainer*  l, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <PlayLayer>g___removeLoopLayer|81_1, addr 0x180478ac0, size 0x60, virtual false, abstract: false, final false
static inline void _PlayLayer_g___removeLoopLayer_81_1(::GlobalNamespace::AudioEvent_LayerRuntimeInfo*  r, ::GlobalNamespace::AudioLayer*  l, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <PlayMinigun>g___clearRef|75_0, addr 0x180478b90, size 0x90, virtual false, abstract: false, final false
static inline void _PlayMinigun_g___clearRef_75_0(::GlobalNamespace::AudioEvent*  a, ::GlobalNamespace::AudioEvent_MinigunRuntimeInfo*  m, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <PlayRandomContainer>g___clearRef|68_0, addr 0x180478960, size 0x30, virtual false, abstract: false, final false
static inline void _PlayRandomContainer_g___clearRef_68_0(::GlobalNamespace::AudioEvent*  e, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <PlayScatter>g___clearRef|71_0, addr 0x180478960, size 0x30, virtual false, abstract: false, final false
static inline void _PlayScatter_g___clearRef_71_0(::GlobalNamespace::AudioEvent*  e, ::GlobalNamespace::AudioSourceController*  c) ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get__asset() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get__asset() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>* const& __cordl_internal_get__audioVolumes() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*& __cordl_internal_get__audioVolumes() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__defaultOwner() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__defaultOwner() ;

constexpr ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>* const& __cordl_internal_get__getXFunc() const;

constexpr ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*& __cordl_internal_get__getXFunc() ;

constexpr bool const& __cordl_internal_get__hibernating() const;

constexpr bool& __cordl_internal_get__hibernating() ;

constexpr ::GlobalNamespace::AudioEvent_LayerRuntimeInfo* const& __cordl_internal_get__layerRuntime() const;

constexpr ::GlobalNamespace::AudioEvent_LayerRuntimeInfo*& __cordl_internal_get__layerRuntime() ;

constexpr ::GlobalNamespace::AudioEvent_MinigunRuntimeInfo* const& __cordl_internal_get__minigunRuntime() const;

constexpr ::GlobalNamespace::AudioEvent_MinigunRuntimeInfo*& __cordl_internal_get__minigunRuntime() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& __cordl_internal_get__playingControllers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& __cordl_internal_get__playingControllers() ;

constexpr ::GlobalNamespace::AudioEvent_ScatterRuntimeInfo* const& __cordl_internal_get__scatterRuntime() const;

constexpr ::GlobalNamespace::AudioEvent_ScatterRuntimeInfo*& __cordl_internal_get__scatterRuntime() ;

constexpr float_t const& __cordl_internal_get__scriptablePan() const;

constexpr float_t& __cordl_internal_get__scriptablePan() ;

constexpr float_t const& __cordl_internal_get__scriptablePitch() const;

constexpr float_t& __cordl_internal_get__scriptablePitch() ;

constexpr float_t const& __cordl_internal_get__scriptableSpatialBlend() const;

constexpr float_t& __cordl_internal_get__scriptableSpatialBlend() ;

constexpr float_t const& __cordl_internal_get__scriptableSpread() const;

constexpr float_t& __cordl_internal_get__scriptableSpread() ;

constexpr float_t const& __cordl_internal_get__scriptableVolume() const;

constexpr float_t& __cordl_internal_get__scriptableVolume() ;

constexpr ::GlobalNamespace::IAudioRTPCXProvider* const& __cordl_internal_get__xProvider() const;

constexpr ::GlobalNamespace::IAudioRTPCXProvider*& __cordl_internal_get__xProvider() ;

constexpr void __cordl_internal_set__asset(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set__audioVolumes(::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*  value) ;

constexpr void __cordl_internal_set__defaultOwner(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__getXFunc(::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*  value) ;

constexpr void __cordl_internal_set__hibernating(bool  value) ;

constexpr void __cordl_internal_set__layerRuntime(::GlobalNamespace::AudioEvent_LayerRuntimeInfo*  value) ;

constexpr void __cordl_internal_set__minigunRuntime(::GlobalNamespace::AudioEvent_MinigunRuntimeInfo*  value) ;

constexpr void __cordl_internal_set__playingControllers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

constexpr void __cordl_internal_set__scatterRuntime(::GlobalNamespace::AudioEvent_ScatterRuntimeInfo*  value) ;

constexpr void __cordl_internal_set__scriptablePan(float_t  value) ;

constexpr void __cordl_internal_set__scriptablePitch(float_t  value) ;

constexpr void __cordl_internal_set__scriptableSpatialBlend(float_t  value) ;

constexpr void __cordl_internal_set__scriptableSpread(float_t  value) ;

constexpr void __cordl_internal_set__scriptableVolume(float_t  value) ;

constexpr void __cordl_internal_set__xProvider(::GlobalNamespace::IAudioRTPCXProvider*  value) ;

/// @brief Method .ctor, addr 0x1804795c0, size 0x390, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::AudioAsset*  asset, ::UnityEngine::Object*  defaultOwner, ::GlobalNamespace::IAudioRTPCXProvider*  xProvider, ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*  getXFunc) ;

/// @brief Method get_Asset, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioAsset> get_Asset() ;

/// @brief Method get_AudioVolumes, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>* get_AudioVolumes() ;

/// @brief Method get_Hibernating, addr 0x180407540, size 0x10, virtual false, abstract: false, final false
inline bool get_Hibernating() ;

/// @brief Method get_Initialized, addr 0x180479950, size 0x10, virtual true, abstract: false, final true
inline bool get_Initialized() ;

/// @brief Method get_IsFadingOut, addr 0x180479960, size 0xa0, virtual false, abstract: false, final false
inline bool get_IsFadingOut() ;

/// @brief Method get_IsPlaying, addr 0x180479b40, size 0x80, virtual false, abstract: false, final false
inline bool get_IsPlaying() ;

/// @brief Method get_IsPlayingAndNotAllFadingOut, addr 0x180479a00, size 0xa0, virtual false, abstract: false, final false
inline bool get_IsPlayingAndNotAllFadingOut() ;

/// @brief Method get_IsPlayingAndNotAnyFadingOut, addr 0x180479aa0, size 0xa0, virtual false, abstract: false, final false
inline bool get_IsPlayingAndNotAnyFadingOut() ;

/// @brief Method get_LayerRuntime, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioEvent_LayerRuntimeInfo* get_LayerRuntime() ;

/// @brief Method get_MinigunRuntime, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioEvent_MinigunRuntimeInfo* get_MinigunRuntime() ;

/// @brief Method get_PlayingControllers, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>* get_PlayingControllers() ;

/// @brief Method get_ScatterRuntime, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioEvent_ScatterRuntimeInfo* get_ScatterRuntime() ;

/// @brief Method get_ScriptablePan, addr 0x18046fae0, size 0x10, virtual false, abstract: false, final false
inline float_t get_ScriptablePan() ;

/// @brief Method get_ScriptablePitch, addr 0x18046fb00, size 0x10, virtual false, abstract: false, final false
inline float_t get_ScriptablePitch() ;

/// @brief Method get_ScriptableSpatialBlend, addr 0x18046fad0, size 0x10, virtual false, abstract: false, final false
inline float_t get_ScriptableSpatialBlend() ;

/// @brief Method get_ScriptableSpread, addr 0x18034f9d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_ScriptableSpread() ;

/// @brief Method get_ScriptableVolume, addr 0x18046faf0, size 0x10, virtual false, abstract: false, final false
inline float_t get_ScriptableVolume() ;

/// @brief Method get_XProviderIdentifier, addr 0x180479bc0, size 0x10, virtual true, abstract: false, final true
inline ::StringW get_XProviderIdentifier() ;

/// @brief Method get_XProviderOverride, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::IAudioRTPCXProvider* get_XProviderOverride() ;

/// @brief Convert to "::GlobalNamespace::IAudioBehaviour"
constexpr ::GlobalNamespace::IAudioBehaviour* i___GlobalNamespace__IAudioBehaviour() noexcept;

/// @brief Convert to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr ::GlobalNamespace::IAudioRTPCXProvider* i___GlobalNamespace__IAudioRTPCXProvider() noexcept;

/// @brief Method set_ScriptablePan, addr 0x180479bd0, size 0xa0, virtual false, abstract: false, final false
inline void set_ScriptablePan(float_t  value) ;

/// @brief Method set_ScriptablePitch, addr 0x180479c70, size 0xa0, virtual false, abstract: false, final false
inline void set_ScriptablePitch(float_t  value) ;

/// @brief Method set_ScriptableSpatialBlend, addr 0x180479d10, size 0xa0, virtual false, abstract: false, final false
inline void set_ScriptableSpatialBlend(float_t  value) ;

/// @brief Method set_ScriptableSpread, addr 0x180479db0, size 0xa0, virtual false, abstract: false, final false
inline void set_ScriptableSpread(float_t  value) ;

/// @brief Method set_ScriptableVolume, addr 0x180479e50, size 0xa0, virtual false, abstract: false, final false
inline void set_ScriptableVolume(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioEvent(AudioEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioEvent(AudioEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17520};

/// @brief Field _asset, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ____asset;

/// @brief Field _defaultOwner, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____defaultOwner;

/// @brief Field _xProvider, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::IAudioRTPCXProvider*  ____xProvider;

/// @brief Field _scatterRuntime, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent_ScatterRuntimeInfo*  ____scatterRuntime;

/// @brief Field _minigunRuntime, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent_MinigunRuntimeInfo*  ____minigunRuntime;

/// @brief Field _layerRuntime, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent_LayerRuntimeInfo*  ____layerRuntime;

/// @brief Field _playingControllers, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  ____playingControllers;

/// @brief Field _audioVolumes, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*  ____audioVolumes;

/// @brief Field _getXFunc, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*  ____getXFunc;

/// @brief Field _scriptableVolume, offset: 0x58, size: 0x4, def value: None
 float_t  ____scriptableVolume;

/// @brief Field _scriptablePitch, offset: 0x5c, size: 0x4, def value: None
 float_t  ____scriptablePitch;

/// @brief Field _scriptablePan, offset: 0x60, size: 0x4, def value: None
 float_t  ____scriptablePan;

/// @brief Field _scriptableSpatialBlend, offset: 0x64, size: 0x4, def value: None
 float_t  ____scriptableSpatialBlend;

/// @brief Field _scriptableSpread, offset: 0x68, size: 0x4, def value: None
 float_t  ____scriptableSpread;

/// @brief Field _hibernating, offset: 0x6c, size: 0x1, def value: None
 bool  ____hibernating;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioEvent, ____asset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent, ____defaultOwner) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent, ____xProvider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent, ____scatterRuntime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent, ____minigunRuntime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent, ____layerRuntime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent, ____playingControllers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent, ____audioVolumes) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent, ____getXFunc) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent, ____scriptableVolume) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent, ____scriptablePitch) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent, ____scriptablePan) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent, ____scriptableSpatialBlend) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent, ____scriptableSpread) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioEvent, ____hibernating) == 0x6c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioEvent) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace

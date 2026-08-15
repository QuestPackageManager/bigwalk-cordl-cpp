#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioClock.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioClock)
namespace GlobalNamespace {
class AudioSourceController;
}
namespace GlobalNamespace {
struct AudioUpdateType;
}
namespace GlobalNamespace {
template<typename TElement,typename TPriority>
class CustomPriorityQueue_2;
}
namespace GlobalNamespace {
class IAudioBehaviour;
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
// Forward declare root types
namespace GlobalNamespace {
class AudioClock;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioClock*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioClock*, "", "AudioClock");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioClock
class CORDL_TYPE AudioClock : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Initialized)) bool  Initialized;

/// @brief Field _alarmsFixedUpdate, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__alarmsFixedUpdate, put=__cordl_internal_set__alarmsFixedUpdate)) ::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>*  _alarmsFixedUpdate;

/// @brief Field _alarmsLateUpdate, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__alarmsLateUpdate, put=__cordl_internal_set__alarmsLateUpdate)) ::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>*  _alarmsLateUpdate;

/// @brief Field _alarmsLateUpdateByFrame, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__alarmsLateUpdateByFrame, put=__cordl_internal_set__alarmsLateUpdateByFrame)) ::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<int32_t>*,int32_t>*  _alarmsLateUpdateByFrame;

/// @brief Field _alarmsSlowUpdate, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__alarmsSlowUpdate, put=__cordl_internal_set__alarmsSlowUpdate)) ::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>*  _alarmsSlowUpdate;

/// @brief Field _alarmsUpdate, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__alarmsUpdate, put=__cordl_internal_set__alarmsUpdate)) ::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>*  _alarmsUpdate;

/// @brief Field _ascAlarms, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__ascAlarms, put=__cordl_internal_set__ascAlarms)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioSourceController>,::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,float_t>*>*  _ascAlarms;

/// @brief Field _ascsToIterate, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__ascsToIterate, put=__cordl_internal_set__ascsToIterate)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  _ascsToIterate;

/// @brief Field _ascsToRemove, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__ascsToRemove, put=__cordl_internal_set__ascsToRemove)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  _ascsToRemove;

/// @brief Field _executionBuffer, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__executionBuffer, put=__cordl_internal_set__executionBuffer)) ::System::Collections::Generic::List_1<::System::Action_1<double_t>*>*  _executionBuffer;

/// @brief Field _executionBufferInt, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__executionBufferInt, put=__cordl_internal_set__executionBufferInt)) ::System::Collections::Generic::List_1<::System::Action_1<int32_t>*>*  _executionBufferInt;

/// @brief Field _initialized, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__initialized, put=__cordl_internal_set__initialized)) bool  _initialized;

/// @brief Convert operator to "::GlobalNamespace::IAudioBehaviour"
constexpr operator  ::GlobalNamespace::IAudioBehaviour*() noexcept;

/// @brief Method AddAlarm, addr 0x18046fd00, size 0x2b0, virtual false, abstract: false, final false
static inline void AddAlarm(::GlobalNamespace::AudioSourceController*  asc, float_t  clipTime, ::System::Action_1<double_t>*  action) ;

/// @brief Method AddAlarm, addr 0x18046ffb0, size 0x180, virtual false, abstract: false, final false
static inline void AddAlarm(int32_t  frame, ::System::Action_1<int32_t>*  action) ;

/// @brief Method AddAlarm, addr 0x180470130, size 0x200, virtual false, abstract: false, final false
static inline void AddAlarm(::GlobalNamespace::AudioUpdateType  updateType, double_t  dspTime, ::System::Action_1<double_t>*  action) ;

/// @brief Method AudioFixedUpdate, addr 0x180470330, size 0x40, virtual true, abstract: false, final true
inline void AudioFixedUpdate(float_t  deltaTime) ;

/// @brief Method AudioLateUpdate, addr 0x180470370, size 0x50, virtual true, abstract: false, final true
inline void AudioLateUpdate(float_t  deltaTime) ;

/// @brief Method AudioSlowUpdate, addr 0x1804703c0, size 0x40, virtual true, abstract: false, final true
inline void AudioSlowUpdate(float_t  deltaTime) ;

/// @brief Method AudioUpdate, addr 0x180470400, size 0x40, virtual true, abstract: false, final true
inline void AudioUpdate(float_t  deltaTime) ;

/// @brief Method FireASCAlarms, addr 0x180470440, size 0x400, virtual false, abstract: false, final false
inline void FireASCAlarms() ;

/// @brief Method FireDSPAlarms, addr 0x180470840, size 0x1c0, virtual false, abstract: false, final false
inline void FireDSPAlarms(::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>*  queue, double_t  currentTime) ;

/// @brief Method FireFrameAlarms, addr 0x180470a00, size 0x1c0, virtual false, abstract: false, final false
inline void FireFrameAlarms() ;

/// @brief Method Initialize, addr 0x1803b3b50, size 0x10, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::AudioClock* New_ctor() ;

/// @brief Method <AddAlarm>g___clearRef|25_0, addr 0x180470bc0, size 0x20, virtual false, abstract: false, final false
static inline void _AddAlarm_g___clearRef_25_0(::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,float_t>*  q, ::GlobalNamespace::AudioSourceController*  c) ;

constexpr ::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>* const& __cordl_internal_get__alarmsFixedUpdate() const;

constexpr ::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>*& __cordl_internal_get__alarmsFixedUpdate() ;

constexpr ::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>* const& __cordl_internal_get__alarmsLateUpdate() const;

constexpr ::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>*& __cordl_internal_get__alarmsLateUpdate() ;

constexpr ::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<int32_t>*,int32_t>* const& __cordl_internal_get__alarmsLateUpdateByFrame() const;

constexpr ::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<int32_t>*,int32_t>*& __cordl_internal_get__alarmsLateUpdateByFrame() ;

constexpr ::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>* const& __cordl_internal_get__alarmsSlowUpdate() const;

constexpr ::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>*& __cordl_internal_get__alarmsSlowUpdate() ;

constexpr ::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>* const& __cordl_internal_get__alarmsUpdate() const;

constexpr ::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>*& __cordl_internal_get__alarmsUpdate() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioSourceController>,::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,float_t>*>* const& __cordl_internal_get__ascAlarms() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioSourceController>,::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,float_t>*>*& __cordl_internal_get__ascAlarms() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& __cordl_internal_get__ascsToIterate() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& __cordl_internal_get__ascsToIterate() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& __cordl_internal_get__ascsToRemove() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& __cordl_internal_get__ascsToRemove() ;

constexpr ::System::Collections::Generic::List_1<::System::Action_1<double_t>*>* const& __cordl_internal_get__executionBuffer() const;

constexpr ::System::Collections::Generic::List_1<::System::Action_1<double_t>*>*& __cordl_internal_get__executionBuffer() ;

constexpr ::System::Collections::Generic::List_1<::System::Action_1<int32_t>*>* const& __cordl_internal_get__executionBufferInt() const;

constexpr ::System::Collections::Generic::List_1<::System::Action_1<int32_t>*>*& __cordl_internal_get__executionBufferInt() ;

constexpr bool const& __cordl_internal_get__initialized() const;

constexpr bool& __cordl_internal_get__initialized() ;

constexpr void __cordl_internal_set__alarmsFixedUpdate(::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>*  value) ;

constexpr void __cordl_internal_set__alarmsLateUpdate(::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>*  value) ;

constexpr void __cordl_internal_set__alarmsLateUpdateByFrame(::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<int32_t>*,int32_t>*  value) ;

constexpr void __cordl_internal_set__alarmsSlowUpdate(::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>*  value) ;

constexpr void __cordl_internal_set__alarmsUpdate(::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>*  value) ;

constexpr void __cordl_internal_set__ascAlarms(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioSourceController>,::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,float_t>*>*  value) ;

constexpr void __cordl_internal_set__ascsToIterate(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

constexpr void __cordl_internal_set__ascsToRemove(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

constexpr void __cordl_internal_set__executionBuffer(::System::Collections::Generic::List_1<::System::Action_1<double_t>*>*  value) ;

constexpr void __cordl_internal_set__executionBufferInt(::System::Collections::Generic::List_1<::System::Action_1<int32_t>*>*  value) ;

constexpr void __cordl_internal_set__initialized(bool  value) ;

/// @brief Method .ctor, addr 0x180470be0, size 0x200, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DSPTime, addr 0x180470de0, size 0x10, virtual false, abstract: false, final false
static inline double_t get_DSPTime() ;

/// @brief Method get_Initialized, addr 0x180392490, size 0x10, virtual true, abstract: false, final true
inline bool get_Initialized() ;

/// @brief Convert to "::GlobalNamespace::IAudioBehaviour"
constexpr ::GlobalNamespace::IAudioBehaviour* i___GlobalNamespace__IAudioBehaviour() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioClock() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioClock", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioClock(AudioClock && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioClock", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioClock(AudioClock const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17488};

/// @brief Field _initialized, offset: 0x10, size: 0x1, def value: None
 bool  ____initialized;

/// @brief Field _alarmsUpdate, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>*  ____alarmsUpdate;

/// @brief Field _alarmsFixedUpdate, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>*  ____alarmsFixedUpdate;

/// @brief Field _alarmsLateUpdate, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>*  ____alarmsLateUpdate;

/// @brief Field _alarmsSlowUpdate, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>*  ____alarmsSlowUpdate;

/// @brief Field _alarmsLateUpdateByFrame, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<int32_t>*,int32_t>*  ____alarmsLateUpdateByFrame;

/// @brief Field _ascAlarms, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioSourceController>,::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,float_t>*>*  ____ascAlarms;

/// @brief Field _ascsToRemove, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  ____ascsToRemove;

/// @brief Field _ascsToIterate, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  ____ascsToIterate;

/// @brief Field _executionBuffer, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Action_1<double_t>*>*  ____executionBuffer;

/// @brief Field _executionBufferInt, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Action_1<int32_t>*>*  ____executionBufferInt;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioClock, ____initialized) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClock, ____alarmsUpdate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClock, ____alarmsFixedUpdate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClock, ____alarmsLateUpdate) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClock, ____alarmsSlowUpdate) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClock, ____alarmsLateUpdateByFrame) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClock, ____ascAlarms) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClock, ____ascsToRemove) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClock, ____ascsToIterate) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClock, ____executionBuffer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClock, ____executionBufferInt) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioClock) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace

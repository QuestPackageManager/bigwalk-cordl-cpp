#pragma once
// IWYU pragma private; include "UnityEngine/Video/VideoPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VideoPlayer)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Video {
class VideoPlayer_ErrorEventHandler;
}
namespace UnityEngine::Video {
class VideoPlayer_EventHandler;
}
namespace UnityEngine::Video {
class VideoPlayer_FrameReadyEventHandler;
}
namespace UnityEngine::Video {
class VideoPlayer_TimeEventHandler;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace UnityEngine::Video {
class VideoPlayer;
}
namespace UnityEngine::Video {
class VideoPlayer_ErrorEventHandler;
}
namespace UnityEngine::Video {
class VideoPlayer_EventHandler;
}
namespace UnityEngine::Video {
class VideoPlayer_FrameReadyEventHandler;
}
namespace UnityEngine::Video {
class VideoPlayer_TimeEventHandler;
}
// Write type traits
MARK_REF_T(::UnityEngine::Video::VideoPlayer*);
MARK_REF_T(::UnityEngine::Video::VideoPlayer_ErrorEventHandler*);
MARK_REF_T(::UnityEngine::Video::VideoPlayer_EventHandler*);
MARK_REF_T(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*);
MARK_REF_T(::UnityEngine::Video::VideoPlayer_TimeEventHandler*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Video::VideoPlayer*, "UnityEngine.Video", "VideoPlayer");
DEFINE_IL2CPP_CLASS(::UnityEngine::Video::VideoPlayer_ErrorEventHandler*, "UnityEngine.Video", "VideoPlayer/ErrorEventHandler");
DEFINE_IL2CPP_CLASS(::UnityEngine::Video::VideoPlayer_EventHandler*, "UnityEngine.Video", "VideoPlayer/EventHandler");
DEFINE_IL2CPP_CLASS(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*, "UnityEngine.Video", "VideoPlayer/FrameReadyEventHandler");
DEFINE_IL2CPP_CLASS(::UnityEngine::Video::VideoPlayer_TimeEventHandler*, "UnityEngine.Video", "VideoPlayer/TimeEventHandler");
// Dependencies System.MulticastDelegate
namespace UnityEngine::Video {
// Is value type: false
// CS Name: UnityEngine.Video.VideoPlayer/EventHandler
class CORDL_TYPE VideoPlayer_EventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Video::VideoPlayer*  source) ;

static inline ::UnityEngine::Video::VideoPlayer_EventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1804dc850, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VideoPlayer_EventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayer_EventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VideoPlayer_EventHandler(VideoPlayer_EventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayer_EventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideoPlayer_EventHandler(VideoPlayer_EventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21541};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Video::VideoPlayer_EventHandler) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Video
// Dependencies System.MulticastDelegate
namespace UnityEngine::Video {
// Is value type: false
// CS Name: UnityEngine.Video.VideoPlayer/ErrorEventHandler
class CORDL_TYPE VideoPlayer_ErrorEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1804f6ae0, size 0xc0, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Video::VideoPlayer*  source, ::StringW  message) ;

static inline ::UnityEngine::Video::VideoPlayer_ErrorEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x181c92f10, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VideoPlayer_ErrorEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayer_ErrorEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VideoPlayer_ErrorEventHandler(VideoPlayer_ErrorEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayer_ErrorEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideoPlayer_ErrorEventHandler(VideoPlayer_ErrorEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21542};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Video::VideoPlayer_ErrorEventHandler) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Video
// Dependencies System.MulticastDelegate
namespace UnityEngine::Video {
// Is value type: false
// CS Name: UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
class CORDL_TYPE VideoPlayer_FrameReadyEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1804f6ae0, size 0xc0, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Video::VideoPlayer*  source, int64_t  frameIdx) ;

static inline ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x181c92f10, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VideoPlayer_FrameReadyEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayer_FrameReadyEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VideoPlayer_FrameReadyEventHandler(VideoPlayer_FrameReadyEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayer_FrameReadyEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideoPlayer_FrameReadyEventHandler(VideoPlayer_FrameReadyEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21543};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Video
// Dependencies System.MulticastDelegate
namespace UnityEngine::Video {
// Is value type: false
// CS Name: UnityEngine.Video.VideoPlayer/TimeEventHandler
class CORDL_TYPE VideoPlayer_TimeEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1804f6ae0, size 0xc0, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Video::VideoPlayer*  source, double_t  seconds) ;

static inline ::UnityEngine::Video::VideoPlayer_TimeEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1810e6120, size 0xf30, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VideoPlayer_TimeEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayer_TimeEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VideoPlayer_TimeEventHandler(VideoPlayer_TimeEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayer_TimeEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideoPlayer_TimeEventHandler(VideoPlayer_TimeEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21544};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Video::VideoPlayer_TimeEventHandler) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Video
// Dependencies UnityEngine.Behaviour
namespace UnityEngine::Video {
// Is value type: false
// CS Name: UnityEngine.Video.VideoPlayer
class CORDL_TYPE VideoPlayer : public ::UnityEngine::Behaviour {
public:
// Declarations
using ErrorEventHandler = ::UnityEngine::Video::VideoPlayer_ErrorEventHandler;

using EventHandler = ::UnityEngine::Video::VideoPlayer_EventHandler;

using FrameReadyEventHandler = ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler;

using TimeEventHandler = ::UnityEngine::Video::VideoPlayer_TimeEventHandler;

/// @brief Field clockResyncOccurred, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_clockResyncOccurred, put=__cordl_internal_set_clockResyncOccurred)) ::UnityEngine::Video::VideoPlayer_TimeEventHandler*  clockResyncOccurred;

/// @brief Field errorReceived, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_errorReceived, put=__cordl_internal_set_errorReceived)) ::UnityEngine::Video::VideoPlayer_ErrorEventHandler*  errorReceived;

/// @brief Field frameDropped, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_frameDropped, put=__cordl_internal_set_frameDropped)) ::UnityEngine::Video::VideoPlayer_EventHandler*  frameDropped;

/// @brief Field frameReady, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_frameReady, put=__cordl_internal_set_frameReady)) ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*  frameReady;

 __declspec(property(get=get_isPlaying)) bool  isPlaying;

/// @brief Field loopPointReached, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_loopPointReached, put=__cordl_internal_set_loopPointReached)) ::UnityEngine::Video::VideoPlayer_EventHandler*  loopPointReached;

/// @brief Field prepareCompleted, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_prepareCompleted, put=__cordl_internal_set_prepareCompleted)) ::UnityEngine::Video::VideoPlayer_EventHandler*  prepareCompleted;

/// @brief Field seekCompleted, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_seekCompleted, put=__cordl_internal_set_seekCompleted)) ::UnityEngine::Video::VideoPlayer_EventHandler*  seekCompleted;

/// @brief Field started, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_started, put=__cordl_internal_set_started)) ::UnityEngine::Video::VideoPlayer_EventHandler*  started;

 __declspec(property(get=get_time, put=set_time)) double_t  time;

/// @brief Method GetTargetAudioSource, addr 0x18254d820, size 0xc0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioSource> GetTargetAudioSource(uint16_t  trackIndex) ;

/// @brief Method GetTargetAudioSource_Injected, addr 0x18254d810, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetTargetAudioSource_Injected(::System::IntPtr  _unity_self, uint16_t  trackIndex) ;

/// @brief Method InvokeClockResyncOccurredCallback_Internal, addr 0x18254d8e0, size 0x30, virtual false, abstract: false, final false
static inline void InvokeClockResyncOccurredCallback_Internal(::UnityEngine::Video::VideoPlayer*  source, double_t  seconds) ;

/// @brief Method InvokeErrorReceivedCallback_Internal, addr 0x18254d910, size 0x30, virtual false, abstract: false, final false
static inline void InvokeErrorReceivedCallback_Internal(::UnityEngine::Video::VideoPlayer*  source, ::StringW  errorStr) ;

/// @brief Method InvokeFrameDroppedCallback_Internal, addr 0x18254d940, size 0x20, virtual false, abstract: false, final false
static inline void InvokeFrameDroppedCallback_Internal(::UnityEngine::Video::VideoPlayer*  source) ;

/// @brief Method InvokeFrameReadyCallback_Internal, addr 0x18254d960, size 0x30, virtual false, abstract: false, final false
static inline void InvokeFrameReadyCallback_Internal(::UnityEngine::Video::VideoPlayer*  source, int64_t  frameIdx) ;

/// @brief Method InvokeLoopPointReachedCallback_Internal, addr 0x1822b7990, size 0x20, virtual false, abstract: false, final false
static inline void InvokeLoopPointReachedCallback_Internal(::UnityEngine::Video::VideoPlayer*  source) ;

/// @brief Method InvokePrepareCompletedCallback_Internal, addr 0x1822b79b0, size 0x20, virtual false, abstract: false, final false
static inline void InvokePrepareCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer*  source) ;

/// @brief Method InvokeSeekCompletedCallback_Internal, addr 0x18254d990, size 0x20, virtual false, abstract: false, final false
static inline void InvokeSeekCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer*  source) ;

/// @brief Method InvokeStartedCallback_Internal, addr 0x1822b79d0, size 0x20, virtual false, abstract: false, final false
static inline void InvokeStartedCallback_Internal(::UnityEngine::Video::VideoPlayer*  source) ;

static inline ::UnityEngine::Video::VideoPlayer* New_ctor() ;

/// @brief Method Play, addr 0x18254d9c0, size 0x30, virtual false, abstract: false, final false
inline void Play() ;

/// @brief Method Play_Injected, addr 0x18254d9b0, size 0x10, virtual false, abstract: false, final false
static inline void Play_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method SetTargetAudioSource, addr 0x18254da00, size 0x60, virtual false, abstract: false, final false
inline void SetTargetAudioSource(uint16_t  trackIndex, ::UnityEngine::AudioSource*  source) ;

/// @brief Method SetTargetAudioSource_Injected, addr 0x18254d9f0, size 0x10, virtual false, abstract: false, final false
static inline void SetTargetAudioSource_Injected(::System::IntPtr  _unity_self, uint16_t  trackIndex, ::System::IntPtr  source) ;

/// @brief Method Stop, addr 0x18254da70, size 0x30, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method Stop_Injected, addr 0x18254da60, size 0x10, virtual false, abstract: false, final false
static inline void Stop_Injected(::System::IntPtr  _unity_self) ;

constexpr ::UnityEngine::Video::VideoPlayer_TimeEventHandler* const& __cordl_internal_get_clockResyncOccurred() const;

constexpr ::UnityEngine::Video::VideoPlayer_TimeEventHandler*& __cordl_internal_get_clockResyncOccurred() ;

constexpr ::UnityEngine::Video::VideoPlayer_ErrorEventHandler* const& __cordl_internal_get_errorReceived() const;

constexpr ::UnityEngine::Video::VideoPlayer_ErrorEventHandler*& __cordl_internal_get_errorReceived() ;

constexpr ::UnityEngine::Video::VideoPlayer_EventHandler* const& __cordl_internal_get_frameDropped() const;

constexpr ::UnityEngine::Video::VideoPlayer_EventHandler*& __cordl_internal_get_frameDropped() ;

constexpr ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler* const& __cordl_internal_get_frameReady() const;

constexpr ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*& __cordl_internal_get_frameReady() ;

constexpr ::UnityEngine::Video::VideoPlayer_EventHandler* const& __cordl_internal_get_loopPointReached() const;

constexpr ::UnityEngine::Video::VideoPlayer_EventHandler*& __cordl_internal_get_loopPointReached() ;

constexpr ::UnityEngine::Video::VideoPlayer_EventHandler* const& __cordl_internal_get_prepareCompleted() const;

constexpr ::UnityEngine::Video::VideoPlayer_EventHandler*& __cordl_internal_get_prepareCompleted() ;

constexpr ::UnityEngine::Video::VideoPlayer_EventHandler* const& __cordl_internal_get_seekCompleted() const;

constexpr ::UnityEngine::Video::VideoPlayer_EventHandler*& __cordl_internal_get_seekCompleted() ;

constexpr ::UnityEngine::Video::VideoPlayer_EventHandler* const& __cordl_internal_get_started() const;

constexpr ::UnityEngine::Video::VideoPlayer_EventHandler*& __cordl_internal_get_started() ;

constexpr void __cordl_internal_set_clockResyncOccurred(::UnityEngine::Video::VideoPlayer_TimeEventHandler*  value) ;

constexpr void __cordl_internal_set_errorReceived(::UnityEngine::Video::VideoPlayer_ErrorEventHandler*  value) ;

constexpr void __cordl_internal_set_frameDropped(::UnityEngine::Video::VideoPlayer_EventHandler*  value) ;

constexpr void __cordl_internal_set_frameReady(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*  value) ;

constexpr void __cordl_internal_set_loopPointReached(::UnityEngine::Video::VideoPlayer_EventHandler*  value) ;

constexpr void __cordl_internal_set_prepareCompleted(::UnityEngine::Video::VideoPlayer_EventHandler*  value) ;

constexpr void __cordl_internal_set_seekCompleted(::UnityEngine::Video::VideoPlayer_EventHandler*  value) ;

constexpr void __cordl_internal_set_started(::UnityEngine::Video::VideoPlayer_EventHandler*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_isPlaying, addr 0x18254dab0, size 0x30, virtual false, abstract: false, final false
inline bool get_isPlaying() ;

/// @brief Method get_isPlaying_Injected, addr 0x18254daa0, size 0x10, virtual false, abstract: false, final false
static inline bool get_isPlaying_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_time, addr 0x18254daf0, size 0x30, virtual false, abstract: false, final false
inline double_t get_time() ;

/// @brief Method get_time_Injected, addr 0x18254dae0, size 0x10, virtual false, abstract: false, final false
static inline double_t get_time_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_time, addr 0x18254db30, size 0x40, virtual false, abstract: false, final false
inline void set_time(double_t  value) ;

/// @brief Method set_time_Injected, addr 0x18254db20, size 0x10, virtual false, abstract: false, final false
static inline void set_time_Injected(::System::IntPtr  _unity_self, double_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VideoPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VideoPlayer(VideoPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideoPlayer(VideoPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21545};

/// @brief Field prepareCompleted, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Video::VideoPlayer_EventHandler*  ___prepareCompleted;

/// @brief Field loopPointReached, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Video::VideoPlayer_EventHandler*  ___loopPointReached;

/// @brief Field started, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Video::VideoPlayer_EventHandler*  ___started;

/// @brief Field frameDropped, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Video::VideoPlayer_EventHandler*  ___frameDropped;

/// @brief Field errorReceived, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Video::VideoPlayer_ErrorEventHandler*  ___errorReceived;

/// @brief Field seekCompleted, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Video::VideoPlayer_EventHandler*  ___seekCompleted;

/// @brief Field clockResyncOccurred, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Video::VideoPlayer_TimeEventHandler*  ___clockResyncOccurred;

/// @brief Field frameReady, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*  ___frameReady;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___prepareCompleted) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___loopPointReached) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___started) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___frameDropped) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___errorReceived) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___seekCompleted) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___clockResyncOccurred) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___frameReady) == 0x50, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Video::VideoPlayer) == 0x58, "Size mismatch!");

} // namespace end def UnityEngine::Video

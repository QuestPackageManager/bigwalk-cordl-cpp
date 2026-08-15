#pragma once
// IWYU pragma private; include "Dissonance/DissonanceComms.hpp"
#include "Dissonance/zzzz__ChannelPriority_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Dissonance/zzzz__DissonanceComms_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__CapturePipelineManager_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__IChannelPriorityProvider_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__IMicrophoneCapture_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__IMicrophoneSubscriber_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IPriorityManager_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IVolumeProvider_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__PriorityManager_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__VoicePlayback_def.hpp"
#include "Dissonance/Audio/zzzz__OpenChannelVolumeDuck_def.hpp"
#include "Dissonance/Networking/zzzz__ICommsNetwork_def.hpp"
#include "Dissonance/Networking/zzzz__RoomEvent_def.hpp"
#include "Dissonance/Networking/zzzz__VoicePacket_def.hpp"
#include "Dissonance/VAD/zzzz__IVoiceActivationListener_def.hpp"
#include "Dissonance/zzzz__ChannelPriority_def.hpp"
#include "Dissonance/zzzz__CodecSettingsLoader_def.hpp"
#include "Dissonance/zzzz__CodecSettings_def.hpp"
#include "Dissonance/zzzz__DissonanceComms_def.hpp"
#include "Dissonance/zzzz__IAccessTokenCollection_def.hpp"
#include "Dissonance/zzzz__IDissonancePlayer_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "Dissonance/zzzz__PlaybackPool_def.hpp"
#include "Dissonance/zzzz__PlayerChannels_def.hpp"
#include "Dissonance/zzzz__PlayerCollection_def.hpp"
#include "Dissonance/zzzz__PlayerTrackerManager_def.hpp"
#include "Dissonance/zzzz__RoomChannels_def.hpp"
#include "Dissonance/zzzz__Rooms_def.hpp"
#include "Dissonance/zzzz__SemanticVersion_def.hpp"
#include "Dissonance/zzzz__TextChat_def.hpp"
#include "Dissonance/zzzz__TokenSet_def.hpp"
#include "Dissonance/zzzz__VoicePlayerState_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Dissonance::DissonanceComms__CoResumePlayback_d__99._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms__CoResumePlayback_d__99::*)(int32_t)>(&::Dissonance::DissonanceComms__CoResumePlayback_d__99::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms__CoResumePlayback_d__99*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms__CoResumePlayback_d__99.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms__CoResumePlayback_d__99::*)()>(&::Dissonance::DissonanceComms__CoResumePlayback_d__99::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms__CoResumePlayback_d__99*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms__CoResumePlayback_d__99.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::DissonanceComms__CoResumePlayback_d__99::*)()>(&::Dissonance::DissonanceComms__CoResumePlayback_d__99::MoveNext)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1805d2100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms__CoResumePlayback_d__99*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms__CoResumePlayback_d__99.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Dissonance::DissonanceComms__CoResumePlayback_d__99::*)()>(&::Dissonance::DissonanceComms__CoResumePlayback_d__99::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms__CoResumePlayback_d__99*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms__CoResumePlayback_d__99.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms__CoResumePlayback_d__99::*)()>(&::Dissonance::DissonanceComms__CoResumePlayback_d__99::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms__CoResumePlayback_d__99*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms__CoResumePlayback_d__99.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Dissonance::DissonanceComms__CoResumePlayback_d__99::*)()>(&::Dissonance::DissonanceComms__CoResumePlayback_d__99::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms__CoResumePlayback_d__99*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Dissonance::DissonanceComms__CoResumePlayback_d__99::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Dissonance::DissonanceComms__CoResumePlayback_d__99::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Dissonance::DissonanceComms__CoResumePlayback_d__99::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Dissonance::DissonanceComms__CoResumePlayback_d__99::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Dissonance::DissonanceComms__CoResumePlayback_d__99::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Dissonance::DissonanceComms__CoResumePlayback_d__99::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Dissonance::DissonanceComms>& Dissonance::DissonanceComms__CoResumePlayback_d__99::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Dissonance::DissonanceComms> const& Dissonance::DissonanceComms__CoResumePlayback_d__99::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Dissonance::DissonanceComms__CoResumePlayback_d__99::__cordl_internal_set___4__this(::UnityW<::Dissonance::DissonanceComms>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& Dissonance::DissonanceComms__CoResumePlayback_d__99::__cordl_internal_get__i_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
constexpr int32_t const& Dissonance::DissonanceComms__CoResumePlayback_d__99::__cordl_internal_get__i_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
constexpr void Dissonance::DissonanceComms__CoResumePlayback_d__99::__cordl_internal_set__i_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__2 = value;
}
inline void Dissonance::DissonanceComms__CoResumePlayback_d__99::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms__CoResumePlayback_d__99*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Dissonance::DissonanceComms__CoResumePlayback_d__99::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms__CoResumePlayback_d__99*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Dissonance::DissonanceComms__CoResumePlayback_d__99::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms__CoResumePlayback_d__99*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Dissonance::DissonanceComms__CoResumePlayback_d__99::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms__CoResumePlayback_d__99*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Dissonance::DissonanceComms__CoResumePlayback_d__99::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms__CoResumePlayback_d__99*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Dissonance::DissonanceComms__CoResumePlayback_d__99::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms__CoResumePlayback_d__99*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Dissonance::DissonanceComms__CoResumePlayback_d__99* Dissonance::DissonanceComms__CoResumePlayback_d__99::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::DissonanceComms__CoResumePlayback_d__99*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Dissonance::DissonanceComms__CoResumePlayback_d__99::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Dissonance::DissonanceComms__CoResumePlayback_d__99::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Dissonance::DissonanceComms__CoResumePlayback_d__99::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Dissonance::DissonanceComms__CoResumePlayback_d__99::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Dissonance::DissonanceComms__CoResumePlayback_d__99::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Dissonance::DissonanceComms__CoResumePlayback_d__99::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::DissonanceComms__CoResumePlayback_d__99::DissonanceComms__CoResumePlayback_d__99()   {
}
//  Writing Method size for method: ::Dissonance::DissonanceComms.get_IsStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::DissonanceComms::*)()>(&::Dissonance::DissonanceComms::get_IsStarted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_IsStarted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.add_OnPlayerJoinedSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::System::Action_1<::Dissonance::VoicePlayerState*>*)>(&::Dissonance::DissonanceComms::add_OnPlayerJoinedSession)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805c9990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"add_OnPlayerJoinedSession", {}, {::i2c::type_of<::System::Action_1<::Dissonance::VoicePlayerState*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.remove_OnPlayerJoinedSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::System::Action_1<::Dissonance::VoicePlayerState*>*)>(&::Dissonance::DissonanceComms::remove_OnPlayerJoinedSession)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805ca040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"remove_OnPlayerJoinedSession", {}, {::i2c::type_of<::System::Action_1<::Dissonance::VoicePlayerState*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.add_OnPlayerLeftSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::System::Action_1<::Dissonance::VoicePlayerState*>*)>(&::Dissonance::DissonanceComms::add_OnPlayerLeftSession)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805c9a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"add_OnPlayerLeftSession", {}, {::i2c::type_of<::System::Action_1<::Dissonance::VoicePlayerState*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.remove_OnPlayerLeftSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::System::Action_1<::Dissonance::VoicePlayerState*>*)>(&::Dissonance::DissonanceComms::remove_OnPlayerLeftSession)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805ca0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"remove_OnPlayerLeftSession", {}, {::i2c::type_of<::System::Action_1<::Dissonance::VoicePlayerState*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.add_OnPlayerStartedSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::System::Action_1<::Dissonance::VoicePlayerState*>*)>(&::Dissonance::DissonanceComms::add_OnPlayerStartedSpeaking)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805c9ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"add_OnPlayerStartedSpeaking", {}, {::i2c::type_of<::System::Action_1<::Dissonance::VoicePlayerState*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.remove_OnPlayerStartedSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::System::Action_1<::Dissonance::VoicePlayerState*>*)>(&::Dissonance::DissonanceComms::remove_OnPlayerStartedSpeaking)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805ca180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"remove_OnPlayerStartedSpeaking", {}, {::i2c::type_of<::System::Action_1<::Dissonance::VoicePlayerState*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.add_OnPlayerStoppedSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::System::Action_1<::Dissonance::VoicePlayerState*>*)>(&::Dissonance::DissonanceComms::add_OnPlayerStoppedSpeaking)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805c9b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"add_OnPlayerStoppedSpeaking", {}, {::i2c::type_of<::System::Action_1<::Dissonance::VoicePlayerState*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.remove_OnPlayerStoppedSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::System::Action_1<::Dissonance::VoicePlayerState*>*)>(&::Dissonance::DissonanceComms::remove_OnPlayerStoppedSpeaking)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805ca220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"remove_OnPlayerStoppedSpeaking", {}, {::i2c::type_of<::System::Action_1<::Dissonance::VoicePlayerState*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.add_OnPlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*)>(&::Dissonance::DissonanceComms::add_OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805c9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"add_OnPlayerEnteredRoom", {}, {::i2c::type_of<::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.remove_OnPlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*)>(&::Dissonance::DissonanceComms::remove_OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805c9f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"remove_OnPlayerEnteredRoom", {}, {::i2c::type_of<::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.add_OnPlayerExitedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*)>(&::Dissonance::DissonanceComms::add_OnPlayerExitedRoom)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805c98f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"add_OnPlayerExitedRoom", {}, {::i2c::type_of<::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.remove_OnPlayerExitedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*)>(&::Dissonance::DissonanceComms::remove_OnPlayerExitedRoom)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805c9fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"remove_OnPlayerExitedRoom", {}, {::i2c::type_of<::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.add_LocalPlayerNameChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::System::Action_1<::StringW>*)>(&::Dissonance::DissonanceComms::add_LocalPlayerNameChanged)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805c97b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"add_LocalPlayerNameChanged", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.remove_LocalPlayerNameChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::System::Action_1<::StringW>*)>(&::Dissonance::DissonanceComms::remove_LocalPlayerNameChanged)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805c9e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"remove_LocalPlayerNameChanged", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.add_OnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::System::Action*)>(&::Dissonance::DissonanceComms::add_OnStart)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805c9c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"add_OnStart", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.remove_OnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::System::Action*)>(&::Dissonance::DissonanceComms::remove_OnStart)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805ca2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"remove_OnStart", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)()>(&::Dissonance::DissonanceComms::_ctor)> {
  constexpr static std::size_t size = 0x6e0;
  constexpr static std::size_t addrs = 0x1805c90d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.get_PacketLoss
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::DissonanceComms::*)()>(&::Dissonance::DissonanceComms::get_PacketLoss)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c9de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_PacketLoss", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.get_LocalPlayerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::DissonanceComms::*)()>(&::Dissonance::DissonanceComms::get_LocalPlayerName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180312ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_LocalPlayerName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.set_LocalPlayerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::StringW)>(&::Dissonance::DissonanceComms::set_LocalPlayerName)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805ca530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"set_LocalPlayerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.get_IsNetworkInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::DissonanceComms::*)()>(&::Dissonance::DissonanceComms::get_IsNetworkInitialized)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805c9d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_IsNetworkInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.get_Rooms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Rooms* (::Dissonance::DissonanceComms::*)()>(&::Dissonance::DissonanceComms::get_Rooms)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_Rooms", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.get_PlayerChannels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::PlayerChannels* (::Dissonance::DissonanceComms::*)()>(&::Dissonance::DissonanceComms::get_PlayerChannels)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_PlayerChannels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.get_RoomChannels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::RoomChannels* (::Dissonance::DissonanceComms::*)()>(&::Dissonance::DissonanceComms::get_RoomChannels)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_RoomChannels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.get_Text
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::TextChat* (::Dissonance::DissonanceComms::*)()>(&::Dissonance::DissonanceComms::get_Text)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_Text", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.get_Players
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>* (::Dissonance::DissonanceComms::*)()>(&::Dissonance::DissonanceComms::get_Players)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805c9e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_Players", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.get_TopPrioritySpeaker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::ChannelPriority (::Dissonance::DissonanceComms::*)()>(&::Dissonance::DissonanceComms::get_TopPrioritySpeaker)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805c6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_TopPrioritySpeaker", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.get_Tokens
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::Dissonance::DissonanceComms::*)()>(&::Dissonance::DissonanceComms::get_Tokens)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_Tokens", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.get_PlayerPriority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::ChannelPriority (::Dissonance::DissonanceComms::*)()>(&::Dissonance::DissonanceComms::get_PlayerPriority)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_PlayerPriority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.set_PlayerPriority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::Dissonance::ChannelPriority)>(&::Dissonance::DissonanceComms::set_PlayerPriority)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"set_PlayerPriority", {}, {::i2c::type_of<::Dissonance::ChannelPriority>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.get_PlaybackPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Dissonance::DissonanceComms::*)()>(&::Dissonance::DissonanceComms::get_PlaybackPrefab)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180322750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_PlaybackPrefab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.set_PlaybackPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::UnityEngine::GameObject*)>(&::Dissonance::DissonanceComms::set_PlaybackPrefab)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1805ca6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"set_PlaybackPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.get_IsMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::DissonanceComms::*)()>(&::Dissonance::DissonanceComms::get_IsMuted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180310e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_IsMuted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.set_IsMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(bool)>(&::Dissonance::DissonanceComms::set_IsMuted)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805ca4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"set_IsMuted", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.get_IsDeafened
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::DissonanceComms::*)()>(&::Dissonance::DissonanceComms::get_IsDeafened)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180310e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_IsDeafened", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.set_IsDeafened
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(bool)>(&::Dissonance::DissonanceComms::set_IsDeafened)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805ca4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"set_IsDeafened", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.get_RemoteVoiceVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::DissonanceComms::*)()>(&::Dissonance::DissonanceComms::get_RemoteVoiceVolume)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c9e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_RemoteVoiceVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.set_RemoteVoiceVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(float_t)>(&::Dissonance::DissonanceComms::set_RemoteVoiceVolume)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805ca840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"set_RemoteVoiceVolume", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.get_MuteAllRemoteVoices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::DissonanceComms::*)()>(&::Dissonance::DissonanceComms::get_MuteAllRemoteVoices)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805c9dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_MuteAllRemoteVoices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.set_MuteAllRemoteVoices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(bool)>(&::Dissonance::DissonanceComms::set_MuteAllRemoteVoices)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805ca6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"set_MuteAllRemoteVoices", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.get_Clip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::Dissonance::DissonanceComms::*)()>(&::Dissonance::DissonanceComms::get_Clip)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805c9d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_Clip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)()>(&::Dissonance::DissonanceComms::Start)> {
  constexpr static std::size_t size = 0xb90;
  constexpr static std::size_t addrs = 0x1805c8050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.GetOrAddMicrophone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Capture::IMicrophoneCapture* (::Dissonance::DissonanceComms::*)()>(&::Dissonance::DissonanceComms::GetOrAddMicrophone)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805c6fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"GetOrAddMicrophone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)()>(&::Dissonance::DissonanceComms::OnEnable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805c7fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)()>(&::Dissonance::DissonanceComms::OnDisable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c7f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.OnApplicationPause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(bool)>(&::Dissonance::DissonanceComms::OnApplicationPause)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1805c7db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"OnApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.CoResumePlayback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Dissonance::DissonanceComms::*)()>(&::Dissonance::DissonanceComms::CoResumePlayback)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805c6cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"CoResumePlayback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.Net_PlayerStoppedSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::StringW)>(&::Dissonance::DissonanceComms::Net_PlayerStoppedSpeaking)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1805c7a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"Net_PlayerStoppedSpeaking", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.Net_PlayerStartedSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::StringW)>(&::Dissonance::DissonanceComms::Net_PlayerStartedSpeaking)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1805c78d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"Net_PlayerStartedSpeaking", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.Net_PlayerRoomEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::Dissonance::Networking::RoomEvent)>(&::Dissonance::DissonanceComms::Net_PlayerRoomEvent)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1805c7730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"Net_PlayerRoomEvent", {}, {::i2c::type_of<::Dissonance::Networking::RoomEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.Net_VoicePacketReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::Dissonance::Networking::VoicePacket)>(&::Dissonance::DissonanceComms::Net_VoicePacketReceived)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1805c7bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"Net_VoicePacketReceived", {}, {::i2c::type_of<::Dissonance::Networking::VoicePacket>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.Net_PlayerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::StringW)>(&::Dissonance::DissonanceComms::Net_PlayerLeft)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x1805c7400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"Net_PlayerLeft", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.Net_PlayerJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::StringW, ::Dissonance::CodecSettings)>(&::Dissonance::DissonanceComms::Net_PlayerJoined)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x1805c7050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"Net_PlayerJoined", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::CodecSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.FindPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::VoicePlayerState* (::Dissonance::DissonanceComms::*)(::StringW)>(&::Dissonance::DissonanceComms::FindPlayer)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805c6e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"FindPlayer", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)()>(&::Dissonance::DissonanceComms::Update)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1805c8f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)()>(&::Dissonance::DissonanceComms::OnDestroy)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c7f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.SubcribeToVoiceActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::Dissonance::VAD::IVoiceActivationListener*)>(&::Dissonance::DissonanceComms::SubcribeToVoiceActivation)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c8d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"SubcribeToVoiceActivation", {}, {::i2c::type_of<::Dissonance::VAD::IVoiceActivationListener*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.UnsubscribeFromVoiceActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::Dissonance::VAD::IVoiceActivationListener*)>(&::Dissonance::DissonanceComms::UnsubscribeFromVoiceActivation)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c8ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"UnsubscribeFromVoiceActivation", {}, {::i2c::type_of<::Dissonance::VAD::IVoiceActivationListener*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.TrackPlayerPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::Dissonance::IDissonancePlayer*)>(&::Dissonance::DissonanceComms::TrackPlayerPosition)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1805c8d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"TrackPlayerPosition", {}, {::i2c::type_of<::Dissonance::IDissonancePlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.StopTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::Dissonance::IDissonancePlayer*)>(&::Dissonance::DissonanceComms::StopTracking)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1805c8be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"StopTracking", {}, {::i2c::type_of<::Dissonance::IDissonancePlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.add_TokenAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::System::Action_1<::StringW>*)>(&::Dissonance::DissonanceComms::add_TokenAdded)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c9ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"add_TokenAdded", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.remove_TokenAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::System::Action_1<::StringW>*)>(&::Dissonance::DissonanceComms::remove_TokenAdded)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805ca350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"remove_TokenAdded", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.add_TokenRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::System::Action_1<::StringW>*)>(&::Dissonance::DissonanceComms::add_TokenRemoved)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c9cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"add_TokenRemoved", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.remove_TokenRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::System::Action_1<::StringW>*)>(&::Dissonance::DissonanceComms::remove_TokenRemoved)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805ca410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"remove_TokenRemoved", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.AddToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::DissonanceComms::*)(::StringW)>(&::Dissonance::DissonanceComms::AddToken)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805c6c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"AddToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.RemoveToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::DissonanceComms::*)(::StringW)>(&::Dissonance::DissonanceComms::RemoveToken)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805c7ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"RemoveToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.ContainsToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::DissonanceComms::*)(::StringW)>(&::Dissonance::DissonanceComms::ContainsToken)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805c6d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"ContainsToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.HasAnyToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::DissonanceComms::*)(::Dissonance::TokenSet*)>(&::Dissonance::DissonanceComms::HasAnyToken)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805c7010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"HasAnyToken", {}, {::i2c::type_of<::Dissonance::TokenSet*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.Dissonance_Audio_Playback_IPriorityManager_get_TopPriority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::ChannelPriority (::Dissonance::DissonanceComms::*)()>(&::Dissonance::DissonanceComms::Dissonance_Audio_Playback_IPriorityManager_get_TopPriority)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805c6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"Dissonance.Audio.Playback.IPriorityManager.get_TopPriority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.Dissonance_Audio_Capture_IChannelPriorityProvider_get_DefaultChannelPriority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::ChannelPriority (::Dissonance::DissonanceComms::*)()>(&::Dissonance::DissonanceComms::Dissonance_Audio_Capture_IChannelPriorityProvider_get_DefaultChannelPriority)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"Dissonance.Audio.Capture.IChannelPriorityProvider.get_DefaultChannelPriority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.Dissonance_Audio_Capture_IChannelPriorityProvider_set_DefaultChannelPriority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::Dissonance::ChannelPriority)>(&::Dissonance::DissonanceComms::Dissonance_Audio_Capture_IChannelPriorityProvider_set_DefaultChannelPriority)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"Dissonance.Audio.Capture.IChannelPriorityProvider.set_DefaultChannelPriority", {}, {::i2c::type_of<::Dissonance::ChannelPriority>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.Dissonance_Audio_Playback_IVolumeProvider_get_TargetVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::DissonanceComms::*)()>(&::Dissonance::DissonanceComms::Dissonance_Audio_Playback_IVolumeProvider_get_TargetVolume)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805c6db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"Dissonance.Audio.Playback.IVolumeProvider.get_TargetVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.TestDependencies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Dissonance::DissonanceComms::TestDependencies)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805c8d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"TestDependencies", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.get_MicrophoneName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::DissonanceComms::*)()>(&::Dissonance::DissonanceComms::get_MicrophoneName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180322760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_MicrophoneName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.set_MicrophoneName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::StringW)>(&::Dissonance::DissonanceComms::set_MicrophoneName)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805ca630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"set_MicrophoneName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.get_MicrophoneCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Capture::IMicrophoneCapture* (::Dissonance::DissonanceComms::*)()>(&::Dissonance::DissonanceComms::get_MicrophoneCapture)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805c9db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_MicrophoneCapture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.GetMicrophoneDevices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::Dissonance::DissonanceComms::GetMicrophoneDevices)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1805c6e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"GetMicrophoneDevices", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.ResetMicrophoneCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)()>(&::Dissonance::DissonanceComms::ResetMicrophoneCapture)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805c8030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"ResetMicrophoneCapture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.SubscribeToRecordedAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::Dissonance::Audio::Capture::IMicrophoneSubscriber*)>(&::Dissonance::DissonanceComms::SubscribeToRecordedAudio)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c8cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"SubscribeToRecordedAudio", {}, {::i2c::type_of<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.SubcribeToRecordedAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::Dissonance::Audio::Capture::IMicrophoneSubscriber*)>(&::Dissonance::DissonanceComms::SubcribeToRecordedAudio)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c8cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"SubcribeToRecordedAudio", {}, {::i2c::type_of<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.UnsubscribeFromRecordedAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::DissonanceComms::*)(::Dissonance::Audio::Capture::IMicrophoneSubscriber*)>(&::Dissonance::DissonanceComms::UnsubscribeFromRecordedAudio)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c8ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"UnsubscribeFromRecordedAudio", {}, {::i2c::type_of<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::DissonanceComms.__ctor_b__50_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::ICommsNetwork* (::Dissonance::DissonanceComms::*)()>(&::Dissonance::DissonanceComms::__ctor_b__50_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"<.ctor>b__50_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Dissonance::DissonanceComms::__cordl_internal_get__lastPrefabError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastPrefabError;
}
constexpr ::StringW const& Dissonance::DissonanceComms::__cordl_internal_get__lastPrefabError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastPrefabError;
}
constexpr void Dissonance::DissonanceComms::__cordl_internal_set__lastPrefabError(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastPrefabError = value;
}
constexpr bool& Dissonance::DissonanceComms::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Dissonance::DissonanceComms::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Dissonance::DissonanceComms::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
constexpr ::Dissonance::Rooms*& Dissonance::DissonanceComms::__cordl_internal_get__rooms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rooms;
}
constexpr ::Dissonance::Rooms* const& Dissonance::DissonanceComms::__cordl_internal_get__rooms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rooms;
}
constexpr void Dissonance::DissonanceComms::__cordl_internal_set__rooms(::Dissonance::Rooms*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rooms = value;
}
constexpr ::Dissonance::PlayerChannels*& Dissonance::DissonanceComms::__cordl_internal_get__playerChannels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerChannels;
}
constexpr ::Dissonance::PlayerChannels* const& Dissonance::DissonanceComms::__cordl_internal_get__playerChannels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerChannels;
}
constexpr void Dissonance::DissonanceComms::__cordl_internal_set__playerChannels(::Dissonance::PlayerChannels*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerChannels = value;
}
constexpr ::Dissonance::RoomChannels*& Dissonance::DissonanceComms::__cordl_internal_get__roomChannels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomChannels;
}
constexpr ::Dissonance::RoomChannels* const& Dissonance::DissonanceComms::__cordl_internal_get__roomChannels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomChannels;
}
constexpr void Dissonance::DissonanceComms::__cordl_internal_set__roomChannels(::Dissonance::RoomChannels*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____roomChannels = value;
}
constexpr ::Dissonance::TextChat*& Dissonance::DissonanceComms::__cordl_internal_get__text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr ::Dissonance::TextChat* const& Dissonance::DissonanceComms::__cordl_internal_get__text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr void Dissonance::DissonanceComms::__cordl_internal_set__text(::Dissonance::TextChat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____text = value;
}
constexpr ::Dissonance::Audio::OpenChannelVolumeDuck*& Dissonance::DissonanceComms::__cordl_internal_get__autoChannelDuck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____autoChannelDuck;
}
constexpr ::Dissonance::Audio::OpenChannelVolumeDuck* const& Dissonance::DissonanceComms::__cordl_internal_get__autoChannelDuck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____autoChannelDuck;
}
constexpr void Dissonance::DissonanceComms::__cordl_internal_set__autoChannelDuck(::Dissonance::Audio::OpenChannelVolumeDuck*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____autoChannelDuck = value;
}
constexpr ::Dissonance::PlayerTrackerManager*& Dissonance::DissonanceComms::__cordl_internal_get__playerTrackers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerTrackers;
}
constexpr ::Dissonance::PlayerTrackerManager* const& Dissonance::DissonanceComms::__cordl_internal_get__playerTrackers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerTrackers;
}
constexpr void Dissonance::DissonanceComms::__cordl_internal_set__playerTrackers(::Dissonance::PlayerTrackerManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerTrackers = value;
}
constexpr ::Dissonance::PlaybackPool*& Dissonance::DissonanceComms::__cordl_internal_get__playbackPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playbackPool;
}
constexpr ::Dissonance::PlaybackPool* const& Dissonance::DissonanceComms::__cordl_internal_get__playbackPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playbackPool;
}
constexpr void Dissonance::DissonanceComms::__cordl_internal_set__playbackPool(::Dissonance::PlaybackPool*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playbackPool = value;
}
constexpr ::Dissonance::PlayerCollection*& Dissonance::DissonanceComms::__cordl_internal_get__players()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____players;
}
constexpr ::Dissonance::PlayerCollection* const& Dissonance::DissonanceComms::__cordl_internal_get__players() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____players;
}
constexpr void Dissonance::DissonanceComms::__cordl_internal_set__players(::Dissonance::PlayerCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____players = value;
}
constexpr ::Dissonance::CodecSettingsLoader*& Dissonance::DissonanceComms::__cordl_internal_get__codecSettingsLoader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codecSettingsLoader;
}
constexpr ::Dissonance::CodecSettingsLoader* const& Dissonance::DissonanceComms::__cordl_internal_get__codecSettingsLoader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codecSettingsLoader;
}
constexpr void Dissonance::DissonanceComms::__cordl_internal_set__codecSettingsLoader(::Dissonance::CodecSettingsLoader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____codecSettingsLoader = value;
}
constexpr ::Dissonance::Audio::Playback::PriorityManager*& Dissonance::DissonanceComms::__cordl_internal_get__playbackPriorityManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playbackPriorityManager;
}
constexpr ::Dissonance::Audio::Playback::PriorityManager* const& Dissonance::DissonanceComms::__cordl_internal_get__playbackPriorityManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playbackPriorityManager;
}
constexpr void Dissonance::DissonanceComms::__cordl_internal_set__playbackPriorityManager(::Dissonance::Audio::Playback::PriorityManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playbackPriorityManager = value;
}
constexpr ::Dissonance::Audio::Capture::CapturePipelineManager*& Dissonance::DissonanceComms::__cordl_internal_get__capture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capture;
}
constexpr ::Dissonance::Audio::Capture::CapturePipelineManager* const& Dissonance::DissonanceComms::__cordl_internal_get__capture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capture;
}
constexpr void Dissonance::DissonanceComms::__cordl_internal_set__capture(::Dissonance::Audio::Capture::CapturePipelineManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____capture = value;
}
constexpr ::Dissonance::Networking::ICommsNetwork*& Dissonance::DissonanceComms::__cordl_internal_get__net()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____net;
}
constexpr ::Dissonance::Networking::ICommsNetwork* const& Dissonance::DissonanceComms::__cordl_internal_get__net() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____net;
}
constexpr void Dissonance::DissonanceComms::__cordl_internal_set__net(::Dissonance::Networking::ICommsNetwork*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____net = value;
}
constexpr ::StringW& Dissonance::DissonanceComms::__cordl_internal_get__localPlayerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPlayerName;
}
constexpr ::StringW const& Dissonance::DissonanceComms::__cordl_internal_get__localPlayerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPlayerName;
}
constexpr void Dissonance::DissonanceComms::__cordl_internal_set__localPlayerName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localPlayerName = value;
}
constexpr bool& Dissonance::DissonanceComms::__cordl_internal_get__isMuted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isMuted;
}
constexpr bool const& Dissonance::DissonanceComms::__cordl_internal_get__isMuted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isMuted;
}
constexpr void Dissonance::DissonanceComms::__cordl_internal_set__isMuted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isMuted = value;
}
constexpr bool& Dissonance::DissonanceComms::__cordl_internal_get__isDeafened()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDeafened;
}
constexpr bool const& Dissonance::DissonanceComms::__cordl_internal_get__isDeafened() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDeafened;
}
constexpr void Dissonance::DissonanceComms::__cordl_internal_set__isDeafened(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isDeafened = value;
}
constexpr float_t& Dissonance::DissonanceComms::__cordl_internal_get__oneMinusBaseRemoteVoiceVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oneMinusBaseRemoteVoiceVolume;
}
constexpr float_t const& Dissonance::DissonanceComms::__cordl_internal_get__oneMinusBaseRemoteVoiceVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oneMinusBaseRemoteVoiceVolume;
}
constexpr void Dissonance::DissonanceComms::__cordl_internal_set__oneMinusBaseRemoteVoiceVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____oneMinusBaseRemoteVoiceVolume = value;
}
constexpr ::UnityW<::Dissonance::Audio::Playback::VoicePlayback>& Dissonance::DissonanceComms::__cordl_internal_get__playbackPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playbackPrefab;
}
constexpr ::UnityW<::Dissonance::Audio::Playback::VoicePlayback> const& Dissonance::DissonanceComms::__cordl_internal_get__playbackPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playbackPrefab;
}
constexpr void Dissonance::DissonanceComms::__cordl_internal_set__playbackPrefab(::UnityW<::Dissonance::Audio::Playback::VoicePlayback>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playbackPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Dissonance::DissonanceComms::__cordl_internal_get__playbackPrefab2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playbackPrefab2;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Dissonance::DissonanceComms::__cordl_internal_get__playbackPrefab2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playbackPrefab2;
}
constexpr void Dissonance::DissonanceComms::__cordl_internal_set__playbackPrefab2(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playbackPrefab2 = value;
}
constexpr ::StringW& Dissonance::DissonanceComms::__cordl_internal_get__micName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micName;
}
constexpr ::StringW const& Dissonance::DissonanceComms::__cordl_internal_get__micName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micName;
}
constexpr void Dissonance::DissonanceComms::__cordl_internal_set__micName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____micName = value;
}
constexpr ::Dissonance::ChannelPriority& Dissonance::DissonanceComms::__cordl_internal_get__playerPriority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerPriority;
}
constexpr ::Dissonance::ChannelPriority const& Dissonance::DissonanceComms::__cordl_internal_get__playerPriority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerPriority;
}
constexpr void Dissonance::DissonanceComms::__cordl_internal_set__playerPriority(::Dissonance::ChannelPriority  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerPriority = value;
}
constexpr ::Dissonance::TokenSet*& Dissonance::DissonanceComms::__cordl_internal_get__tokens()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tokens;
}
constexpr ::Dissonance::TokenSet* const& Dissonance::DissonanceComms::__cordl_internal_get__tokens() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tokens;
}
constexpr void Dissonance::DissonanceComms::__cordl_internal_set__tokens(::Dissonance::TokenSet*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tokens = value;
}
constexpr ::System::Action_1<::Dissonance::VoicePlayerState*>*& Dissonance::DissonanceComms::__cordl_internal_get_OnPlayerJoinedSession()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerJoinedSession;
}
constexpr ::System::Action_1<::Dissonance::VoicePlayerState*>* const& Dissonance::DissonanceComms::__cordl_internal_get_OnPlayerJoinedSession() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerJoinedSession;
}
constexpr void Dissonance::DissonanceComms::__cordl_internal_set_OnPlayerJoinedSession(::System::Action_1<::Dissonance::VoicePlayerState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPlayerJoinedSession = value;
}
constexpr ::System::Action_1<::Dissonance::VoicePlayerState*>*& Dissonance::DissonanceComms::__cordl_internal_get_OnPlayerLeftSession()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerLeftSession;
}
constexpr ::System::Action_1<::Dissonance::VoicePlayerState*>* const& Dissonance::DissonanceComms::__cordl_internal_get_OnPlayerLeftSession() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerLeftSession;
}
constexpr void Dissonance::DissonanceComms::__cordl_internal_set_OnPlayerLeftSession(::System::Action_1<::Dissonance::VoicePlayerState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPlayerLeftSession = value;
}
constexpr ::System::Action_1<::Dissonance::VoicePlayerState*>*& Dissonance::DissonanceComms::__cordl_internal_get_OnPlayerStartedSpeaking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerStartedSpeaking;
}
constexpr ::System::Action_1<::Dissonance::VoicePlayerState*>* const& Dissonance::DissonanceComms::__cordl_internal_get_OnPlayerStartedSpeaking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerStartedSpeaking;
}
constexpr void Dissonance::DissonanceComms::__cordl_internal_set_OnPlayerStartedSpeaking(::System::Action_1<::Dissonance::VoicePlayerState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPlayerStartedSpeaking = value;
}
constexpr ::System::Action_1<::Dissonance::VoicePlayerState*>*& Dissonance::DissonanceComms::__cordl_internal_get_OnPlayerStoppedSpeaking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerStoppedSpeaking;
}
constexpr ::System::Action_1<::Dissonance::VoicePlayerState*>* const& Dissonance::DissonanceComms::__cordl_internal_get_OnPlayerStoppedSpeaking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerStoppedSpeaking;
}
constexpr void Dissonance::DissonanceComms::__cordl_internal_set_OnPlayerStoppedSpeaking(::System::Action_1<::Dissonance::VoicePlayerState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPlayerStoppedSpeaking = value;
}
constexpr ::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*& Dissonance::DissonanceComms::__cordl_internal_get_OnPlayerEnteredRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerEnteredRoom;
}
constexpr ::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>* const& Dissonance::DissonanceComms::__cordl_internal_get_OnPlayerEnteredRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerEnteredRoom;
}
constexpr void Dissonance::DissonanceComms::__cordl_internal_set_OnPlayerEnteredRoom(::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPlayerEnteredRoom = value;
}
constexpr ::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*& Dissonance::DissonanceComms::__cordl_internal_get_OnPlayerExitedRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerExitedRoom;
}
constexpr ::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>* const& Dissonance::DissonanceComms::__cordl_internal_get_OnPlayerExitedRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerExitedRoom;
}
constexpr void Dissonance::DissonanceComms::__cordl_internal_set_OnPlayerExitedRoom(::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPlayerExitedRoom = value;
}
constexpr ::System::Action_1<::StringW>*& Dissonance::DissonanceComms::__cordl_internal_get_LocalPlayerNameChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalPlayerNameChanged;
}
constexpr ::System::Action_1<::StringW>* const& Dissonance::DissonanceComms::__cordl_internal_get_LocalPlayerNameChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalPlayerNameChanged;
}
constexpr void Dissonance::DissonanceComms::__cordl_internal_set_LocalPlayerNameChanged(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LocalPlayerNameChanged = value;
}
constexpr ::System::Action*& Dissonance::DissonanceComms::__cordl_internal_get_OnStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStart;
}
constexpr ::System::Action* const& Dissonance::DissonanceComms::__cordl_internal_get_OnStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStart;
}
constexpr void Dissonance::DissonanceComms::__cordl_internal_set_OnStart(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnStart = value;
}
constexpr bool& Dissonance::DissonanceComms::__cordl_internal_get__muteAllRemoteVoices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____muteAllRemoteVoices;
}
constexpr bool const& Dissonance::DissonanceComms::__cordl_internal_get__muteAllRemoteVoices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____muteAllRemoteVoices;
}
constexpr void Dissonance::DissonanceComms::__cordl_internal_set__muteAllRemoteVoices(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____muteAllRemoteVoices = value;
}
constexpr ::UnityEngine::Coroutine*& Dissonance::DissonanceComms::__cordl_internal_get__resumeCo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resumeCo;
}
constexpr ::UnityEngine::Coroutine* const& Dissonance::DissonanceComms::__cordl_internal_get__resumeCo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resumeCo;
}
constexpr void Dissonance::DissonanceComms::__cordl_internal_set__resumeCo(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resumeCo = value;
}
inline void Dissonance::DissonanceComms::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::DissonanceComms*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::DissonanceComms::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::DissonanceComms*>();
}
inline void Dissonance::DissonanceComms::setStaticF_Version(::Dissonance::SemanticVersion*  value)  {
::cordl_internals::setStaticField<::Dissonance::SemanticVersion*, "Version", ::Dissonance::DissonanceComms*>(std::forward<::Dissonance::SemanticVersion*>(value));
}
inline ::Dissonance::SemanticVersion* Dissonance::DissonanceComms::getStaticF_Version()  {
return ::cordl_internals::getStaticField<::Dissonance::SemanticVersion*, "Version", ::Dissonance::DissonanceComms*>();
}
inline bool Dissonance::DissonanceComms::get_IsStarted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_IsStarted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::DissonanceComms::add_OnPlayerJoinedSession(::System::Action_1<::Dissonance::VoicePlayerState*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"add_OnPlayerJoinedSession", {}, {::i2c::type_of<::System::Action_1<::Dissonance::VoicePlayerState*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::DissonanceComms::remove_OnPlayerJoinedSession(::System::Action_1<::Dissonance::VoicePlayerState*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"remove_OnPlayerJoinedSession", {}, {::i2c::type_of<::System::Action_1<::Dissonance::VoicePlayerState*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::DissonanceComms::add_OnPlayerLeftSession(::System::Action_1<::Dissonance::VoicePlayerState*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"add_OnPlayerLeftSession", {}, {::i2c::type_of<::System::Action_1<::Dissonance::VoicePlayerState*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::DissonanceComms::remove_OnPlayerLeftSession(::System::Action_1<::Dissonance::VoicePlayerState*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"remove_OnPlayerLeftSession", {}, {::i2c::type_of<::System::Action_1<::Dissonance::VoicePlayerState*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::DissonanceComms::add_OnPlayerStartedSpeaking(::System::Action_1<::Dissonance::VoicePlayerState*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"add_OnPlayerStartedSpeaking", {}, {::i2c::type_of<::System::Action_1<::Dissonance::VoicePlayerState*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::DissonanceComms::remove_OnPlayerStartedSpeaking(::System::Action_1<::Dissonance::VoicePlayerState*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"remove_OnPlayerStartedSpeaking", {}, {::i2c::type_of<::System::Action_1<::Dissonance::VoicePlayerState*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::DissonanceComms::add_OnPlayerStoppedSpeaking(::System::Action_1<::Dissonance::VoicePlayerState*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"add_OnPlayerStoppedSpeaking", {}, {::i2c::type_of<::System::Action_1<::Dissonance::VoicePlayerState*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::DissonanceComms::remove_OnPlayerStoppedSpeaking(::System::Action_1<::Dissonance::VoicePlayerState*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"remove_OnPlayerStoppedSpeaking", {}, {::i2c::type_of<::System::Action_1<::Dissonance::VoicePlayerState*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::DissonanceComms::add_OnPlayerEnteredRoom(::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"add_OnPlayerEnteredRoom", {}, {::i2c::type_of<::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::DissonanceComms::remove_OnPlayerEnteredRoom(::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"remove_OnPlayerEnteredRoom", {}, {::i2c::type_of<::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::DissonanceComms::add_OnPlayerExitedRoom(::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"add_OnPlayerExitedRoom", {}, {::i2c::type_of<::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::DissonanceComms::remove_OnPlayerExitedRoom(::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"remove_OnPlayerExitedRoom", {}, {::i2c::type_of<::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::DissonanceComms::add_LocalPlayerNameChanged(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"add_LocalPlayerNameChanged", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::DissonanceComms::remove_LocalPlayerNameChanged(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"remove_LocalPlayerNameChanged", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::DissonanceComms::add_OnStart(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"add_OnStart", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::DissonanceComms::remove_OnStart(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"remove_OnStart", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::DissonanceComms::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Dissonance::DissonanceComms::get_PacketLoss()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_PacketLoss", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::StringW Dissonance::DissonanceComms::get_LocalPlayerName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_LocalPlayerName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Dissonance::DissonanceComms::set_LocalPlayerName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"set_LocalPlayerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Dissonance::DissonanceComms::get_IsNetworkInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_IsNetworkInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Dissonance::Rooms* Dissonance::DissonanceComms::get_Rooms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_Rooms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Rooms*>(this, ___internal_method);
}
inline ::Dissonance::PlayerChannels* Dissonance::DissonanceComms::get_PlayerChannels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_PlayerChannels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::PlayerChannels*>(this, ___internal_method);
}
inline ::Dissonance::RoomChannels* Dissonance::DissonanceComms::get_RoomChannels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_RoomChannels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::RoomChannels*>(this, ___internal_method);
}
inline ::Dissonance::TextChat* Dissonance::DissonanceComms::get_Text()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_Text", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::TextChat*>(this, ___internal_method);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>* Dissonance::DissonanceComms::get_Players()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_Players", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>*>(this, ___internal_method);
}
inline ::Dissonance::ChannelPriority Dissonance::DissonanceComms::get_TopPrioritySpeaker()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_TopPrioritySpeaker", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::ChannelPriority>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* Dissonance::DissonanceComms::get_Tokens()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_Tokens", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method);
}
inline ::Dissonance::ChannelPriority Dissonance::DissonanceComms::get_PlayerPriority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_PlayerPriority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::ChannelPriority>(this, ___internal_method);
}
inline void Dissonance::DissonanceComms::set_PlayerPriority(::Dissonance::ChannelPriority  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"set_PlayerPriority", {}, {::i2c::type_of<::Dissonance::ChannelPriority>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> Dissonance::DissonanceComms::get_PlaybackPrefab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_PlaybackPrefab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void Dissonance::DissonanceComms::set_PlaybackPrefab(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"set_PlaybackPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Dissonance::DissonanceComms::get_IsMuted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_IsMuted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::DissonanceComms::set_IsMuted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"set_IsMuted", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Dissonance::DissonanceComms::get_IsDeafened()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_IsDeafened", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::DissonanceComms::set_IsDeafened(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"set_IsDeafened", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Dissonance::DissonanceComms::get_RemoteVoiceVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_RemoteVoiceVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Dissonance::DissonanceComms::set_RemoteVoiceVolume(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"set_RemoteVoiceVolume", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Dissonance::DissonanceComms::get_MuteAllRemoteVoices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_MuteAllRemoteVoices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::DissonanceComms::set_MuteAllRemoteVoices(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"set_MuteAllRemoteVoices", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioClip> Dissonance::DissonanceComms::get_Clip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_Clip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void Dissonance::DissonanceComms::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Audio::Capture::IMicrophoneCapture* Dissonance::DissonanceComms::GetOrAddMicrophone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"GetOrAddMicrophone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Capture::IMicrophoneCapture*>(this, ___internal_method);
}
inline void Dissonance::DissonanceComms::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::DissonanceComms::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::DissonanceComms::OnApplicationPause(bool  paused)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"OnApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, paused);
}
inline ::System::Collections::IEnumerator* Dissonance::DissonanceComms::CoResumePlayback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"CoResumePlayback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Dissonance::DissonanceComms::Net_PlayerStoppedSpeaking(::StringW  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"Net_PlayerStoppedSpeaking", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void Dissonance::DissonanceComms::Net_PlayerStartedSpeaking(::StringW  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"Net_PlayerStartedSpeaking", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void Dissonance::DissonanceComms::Net_PlayerRoomEvent(::Dissonance::Networking::RoomEvent  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"Net_PlayerRoomEvent", {}, {::i2c::type_of<::Dissonance::Networking::RoomEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void Dissonance::DissonanceComms::Net_VoicePacketReceived(::Dissonance::Networking::VoicePacket  packet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"Net_VoicePacketReceived", {}, {::i2c::type_of<::Dissonance::Networking::VoicePacket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet);
}
inline void Dissonance::DissonanceComms::Net_PlayerLeft(::StringW  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"Net_PlayerLeft", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId);
}
inline void Dissonance::DissonanceComms::Net_PlayerJoined(::StringW  playerId, ::Dissonance::CodecSettings  codecSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"Net_PlayerJoined", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::CodecSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, codecSettings);
}
inline ::Dissonance::VoicePlayerState* Dissonance::DissonanceComms::FindPlayer(::StringW  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"FindPlayer", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::VoicePlayerState*>(this, ___internal_method, playerId);
}
inline void Dissonance::DissonanceComms::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::DissonanceComms::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::DissonanceComms::SubcribeToVoiceActivation(::Dissonance::VAD::IVoiceActivationListener*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"SubcribeToVoiceActivation", {}, {::i2c::type_of<::Dissonance::VAD::IVoiceActivationListener*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
inline void Dissonance::DissonanceComms::UnsubscribeFromVoiceActivation(::Dissonance::VAD::IVoiceActivationListener*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"UnsubscribeFromVoiceActivation", {}, {::i2c::type_of<::Dissonance::VAD::IVoiceActivationListener*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
inline void Dissonance::DissonanceComms::TrackPlayerPosition(::Dissonance::IDissonancePlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"TrackPlayerPosition", {}, {::i2c::type_of<::Dissonance::IDissonancePlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void Dissonance::DissonanceComms::StopTracking(::Dissonance::IDissonancePlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"StopTracking", {}, {::i2c::type_of<::Dissonance::IDissonancePlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void Dissonance::DissonanceComms::add_TokenAdded(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"add_TokenAdded", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::DissonanceComms::remove_TokenAdded(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"remove_TokenAdded", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::DissonanceComms::add_TokenRemoved(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"add_TokenRemoved", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::DissonanceComms::remove_TokenRemoved(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"remove_TokenRemoved", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Dissonance::DissonanceComms::AddToken(::StringW  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"AddToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, token);
}
inline bool Dissonance::DissonanceComms::RemoveToken(::StringW  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"RemoveToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, token);
}
inline bool Dissonance::DissonanceComms::ContainsToken(::StringW  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"ContainsToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, token);
}
inline bool Dissonance::DissonanceComms::HasAnyToken(::Dissonance::TokenSet*  tokens)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"HasAnyToken", {}, {::i2c::type_of<::Dissonance::TokenSet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tokens);
}
inline ::Dissonance::ChannelPriority Dissonance::DissonanceComms::Dissonance_Audio_Playback_IPriorityManager_get_TopPriority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"Dissonance.Audio.Playback.IPriorityManager.get_TopPriority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::ChannelPriority>(this, ___internal_method);
}
inline ::Dissonance::ChannelPriority Dissonance::DissonanceComms::Dissonance_Audio_Capture_IChannelPriorityProvider_get_DefaultChannelPriority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"Dissonance.Audio.Capture.IChannelPriorityProvider.get_DefaultChannelPriority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::ChannelPriority>(this, ___internal_method);
}
inline void Dissonance::DissonanceComms::Dissonance_Audio_Capture_IChannelPriorityProvider_set_DefaultChannelPriority(::Dissonance::ChannelPriority  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"Dissonance.Audio.Capture.IChannelPriorityProvider.set_DefaultChannelPriority", {}, {::i2c::type_of<::Dissonance::ChannelPriority>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Dissonance::DissonanceComms::Dissonance_Audio_Playback_IVolumeProvider_get_TargetVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"Dissonance.Audio.Playback.IVolumeProvider.get_TargetVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Dissonance::DissonanceComms::TestDependencies()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"TestDependencies", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::StringW Dissonance::DissonanceComms::get_MicrophoneName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_MicrophoneName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Dissonance::DissonanceComms::set_MicrophoneName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"set_MicrophoneName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Dissonance::Audio::Capture::IMicrophoneCapture* Dissonance::DissonanceComms::get_MicrophoneCapture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"get_MicrophoneCapture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Capture::IMicrophoneCapture*>(this, ___internal_method);
}
inline void Dissonance::DissonanceComms::GetMicrophoneDevices(::System::Collections::Generic::List_1<::StringW>*  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"GetMicrophoneDevices", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline void Dissonance::DissonanceComms::ResetMicrophoneCapture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"ResetMicrophoneCapture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::DissonanceComms::SubscribeToRecordedAudio(::Dissonance::Audio::Capture::IMicrophoneSubscriber*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"SubscribeToRecordedAudio", {}, {::i2c::type_of<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
inline void Dissonance::DissonanceComms::SubcribeToRecordedAudio(::Dissonance::Audio::Capture::IMicrophoneSubscriber*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"SubcribeToRecordedAudio", {}, {::i2c::type_of<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
inline void Dissonance::DissonanceComms::UnsubscribeFromRecordedAudio(::Dissonance::Audio::Capture::IMicrophoneSubscriber*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"UnsubscribeFromRecordedAudio", {}, {::i2c::type_of<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
inline ::Dissonance::Networking::ICommsNetwork* Dissonance::DissonanceComms::__ctor_b__50_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::DissonanceComms*>(),
                        {"<.ctor>b__50_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::ICommsNetwork*>(this, ___internal_method);
}
inline ::Dissonance::DissonanceComms* Dissonance::DissonanceComms::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::DissonanceComms*>());
}
/// @brief Convert operator to "::Dissonance::Audio::Playback::IPriorityManager"
constexpr  Dissonance::DissonanceComms::operator ::Dissonance::Audio::Playback::IPriorityManager*() noexcept {
return static_cast<::Dissonance::Audio::Playback::IPriorityManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Playback::IPriorityManager"
constexpr ::Dissonance::Audio::Playback::IPriorityManager* Dissonance::DissonanceComms::i___Dissonance__Audio__Playback__IPriorityManager() noexcept {
return static_cast<::Dissonance::Audio::Playback::IPriorityManager*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Dissonance::IAccessTokenCollection"
constexpr  Dissonance::DissonanceComms::operator ::Dissonance::IAccessTokenCollection*() noexcept {
return static_cast<::Dissonance::IAccessTokenCollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::IAccessTokenCollection"
constexpr ::Dissonance::IAccessTokenCollection* Dissonance::DissonanceComms::i___Dissonance__IAccessTokenCollection() noexcept {
return static_cast<::Dissonance::IAccessTokenCollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Dissonance::Audio::Capture::IChannelPriorityProvider"
constexpr  Dissonance::DissonanceComms::operator ::Dissonance::Audio::Capture::IChannelPriorityProvider*() noexcept {
return static_cast<::Dissonance::Audio::Capture::IChannelPriorityProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Capture::IChannelPriorityProvider"
constexpr ::Dissonance::Audio::Capture::IChannelPriorityProvider* Dissonance::DissonanceComms::i___Dissonance__Audio__Capture__IChannelPriorityProvider() noexcept {
return static_cast<::Dissonance::Audio::Capture::IChannelPriorityProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Dissonance::Audio::Playback::IVolumeProvider"
constexpr  Dissonance::DissonanceComms::operator ::Dissonance::Audio::Playback::IVolumeProvider*() noexcept {
return static_cast<::Dissonance::Audio::Playback::IVolumeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Playback::IVolumeProvider"
constexpr ::Dissonance::Audio::Playback::IVolumeProvider* Dissonance::DissonanceComms::i___Dissonance__Audio__Playback__IVolumeProvider() noexcept {
return static_cast<::Dissonance::Audio::Playback::IVolumeProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::DissonanceComms::DissonanceComms()   {
}

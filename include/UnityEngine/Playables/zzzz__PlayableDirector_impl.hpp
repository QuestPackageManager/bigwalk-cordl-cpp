#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableDirector.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayState_def.hpp"
#include "UnityEngine/zzzz__IExposedPropertyTable_def.hpp"
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.get_state
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayState (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::get_state)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822b7960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"get_state", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.set_playOnAwake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(bool)>(&::UnityEngine::Playables::PlayableDirector::set_playOnAwake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822b7a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"set_playOnAwake", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.get_time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::get_time)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822b7a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"get_time", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.GetPlayState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayState (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::GetPlayState)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822b7960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"GetPlayState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.SetPlayOnAwake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(bool)>(&::UnityEngine::Playables::PlayableDirector::SetPlayOnAwake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822b7a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"SetPlayOnAwake", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.SendOnPlayableDirectorPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorPlay)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822b79b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"SendOnPlayableDirectorPlay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.SendOnPlayableDirectorPause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorPause)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822b7990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"SendOnPlayableDirectorPause", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.SendOnPlayableDirectorStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorStop)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822b79d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"SendOnPlayableDirectorStop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.get_time_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::get_time_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822b7a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"get_time_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.GetPlayState_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayState (*)(::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::GetPlayState_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822b7950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"GetPlayState_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.SetPlayOnAwake_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Playables::PlayableDirector::SetPlayOnAwake_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822b79f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"SetPlayOnAwake_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*& UnityEngine::Playables::PlayableDirector::__cordl_internal_get_played()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___played;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* const& UnityEngine::Playables::PlayableDirector::__cordl_internal_get_played() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___played;
}
constexpr void UnityEngine::Playables::PlayableDirector::__cordl_internal_set_played(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___played = value;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*& UnityEngine::Playables::PlayableDirector::__cordl_internal_get_paused()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paused;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* const& UnityEngine::Playables::PlayableDirector::__cordl_internal_get_paused() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paused;
}
constexpr void UnityEngine::Playables::PlayableDirector::__cordl_internal_set_paused(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___paused = value;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*& UnityEngine::Playables::PlayableDirector::__cordl_internal_get_stopped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopped;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* const& UnityEngine::Playables::PlayableDirector::__cordl_internal_get_stopped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopped;
}
constexpr void UnityEngine::Playables::PlayableDirector::__cordl_internal_set_stopped(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stopped = value;
}
inline ::UnityEngine::Playables::PlayState UnityEngine::Playables::PlayableDirector::get_state()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"get_state", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayState>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::set_playOnAwake(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"set_playOnAwake", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t UnityEngine::Playables::PlayableDirector::get_time()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"get_time", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::UnityEngine::Playables::PlayState UnityEngine::Playables::PlayableDirector::GetPlayState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"GetPlayState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayState>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::SetPlayOnAwake(bool  on)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"SetPlayOnAwake", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, on);
}
inline void UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorPlay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"SendOnPlayableDirectorPlay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorPause()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"SendOnPlayableDirectorPause", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorStop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"SendOnPlayableDirectorStop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline double_t UnityEngine::Playables::PlayableDirector::get_time_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"get_time_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::Playables::PlayState UnityEngine::Playables::PlayableDirector::GetPlayState_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"GetPlayState_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayState>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Playables::PlayableDirector::SetPlayOnAwake_Injected(::System::IntPtr  _unity_self, bool  on)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"SetPlayOnAwake_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, on);
}
inline ::UnityEngine::Playables::PlayableDirector* UnityEngine::Playables::PlayableDirector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Playables::PlayableDirector*>());
}
/// @brief Convert operator to "::UnityEngine::IExposedPropertyTable"
constexpr  UnityEngine::Playables::PlayableDirector::operator ::UnityEngine::IExposedPropertyTable*() noexcept {
return static_cast<::UnityEngine::IExposedPropertyTable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::IExposedPropertyTable"
constexpr ::UnityEngine::IExposedPropertyTable* UnityEngine::Playables::PlayableDirector::i___UnityEngine__IExposedPropertyTable() noexcept {
return static_cast<::UnityEngine::IExposedPropertyTable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::PlayableDirector::PlayableDirector()   {
}

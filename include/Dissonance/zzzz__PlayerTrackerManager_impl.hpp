#pragma once
// IWYU pragma private; include "Dissonance/PlayerTrackerManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/zzzz__PlayerTrackerManager_def.hpp"
#include "Dissonance/zzzz__IDissonancePlayer_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "Dissonance/zzzz__PlayerCollection_def.hpp"
#include "Dissonance/zzzz__VoicePlayerState_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Dissonance::PlayerTrackerManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::PlayerTrackerManager::*)(::Dissonance::PlayerCollection*)>(&::Dissonance::PlayerTrackerManager::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805ce230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerTrackerManager*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::PlayerCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlayerTrackerManager.AddPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::PlayerTrackerManager::*)(::Dissonance::VoicePlayerState*)>(&::Dissonance::PlayerTrackerManager::AddPlayer)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805cde70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerTrackerManager*>(),
                        {"AddPlayer", {}, {::i2c::type_of<::Dissonance::VoicePlayerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlayerTrackerManager.RemovePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::PlayerTrackerManager::*)(::Dissonance::VoicePlayerState*)>(&::Dissonance::PlayerTrackerManager::RemovePlayer)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805ce030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerTrackerManager*>(),
                        {"RemovePlayer", {}, {::i2c::type_of<::Dissonance::VoicePlayerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlayerTrackerManager.AddTracker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::PlayerTrackerManager::*)(::Dissonance::IDissonancePlayer*)>(&::Dissonance::PlayerTrackerManager::AddTracker)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1805cdf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerTrackerManager*>(),
                        {"AddTracker", {}, {::i2c::type_of<::Dissonance::IDissonancePlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlayerTrackerManager.RemoveTracker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::PlayerTrackerManager::*)(::Dissonance::IDissonancePlayer*)>(&::Dissonance::PlayerTrackerManager::RemoveTracker)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805ce0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerTrackerManager*>(),
                        {"RemoveTracker", {}, {::i2c::type_of<::Dissonance::IDissonancePlayer*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Dissonance::IDissonancePlayer*>*& Dissonance::PlayerTrackerManager::__cordl_internal_get__unlinkedPlayerTrackers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unlinkedPlayerTrackers;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Dissonance::IDissonancePlayer*>* const& Dissonance::PlayerTrackerManager::__cordl_internal_get__unlinkedPlayerTrackers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unlinkedPlayerTrackers;
}
constexpr void Dissonance::PlayerTrackerManager::__cordl_internal_set__unlinkedPlayerTrackers(::System::Collections::Generic::Dictionary_2<::StringW,::Dissonance::IDissonancePlayer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____unlinkedPlayerTrackers = value;
}
constexpr ::Dissonance::PlayerCollection*& Dissonance::PlayerTrackerManager::__cordl_internal_get__players()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____players;
}
constexpr ::Dissonance::PlayerCollection* const& Dissonance::PlayerTrackerManager::__cordl_internal_get__players() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____players;
}
constexpr void Dissonance::PlayerTrackerManager::__cordl_internal_set__players(::Dissonance::PlayerCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____players = value;
}
inline void Dissonance::PlayerTrackerManager::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::PlayerTrackerManager*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::PlayerTrackerManager::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::PlayerTrackerManager*>();
}
inline void Dissonance::PlayerTrackerManager::_ctor(::Dissonance::PlayerCollection*  players)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerTrackerManager*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::PlayerCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, players);
}
inline void Dissonance::PlayerTrackerManager::AddPlayer(::Dissonance::VoicePlayerState*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerTrackerManager*>(),
                        {"AddPlayer", {}, {::i2c::type_of<::Dissonance::VoicePlayerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Dissonance::PlayerTrackerManager::RemovePlayer(::Dissonance::VoicePlayerState*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerTrackerManager*>(),
                        {"RemovePlayer", {}, {::i2c::type_of<::Dissonance::VoicePlayerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Dissonance::PlayerTrackerManager::AddTracker(::Dissonance::IDissonancePlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerTrackerManager*>(),
                        {"AddTracker", {}, {::i2c::type_of<::Dissonance::IDissonancePlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void Dissonance::PlayerTrackerManager::RemoveTracker(::Dissonance::IDissonancePlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerTrackerManager*>(),
                        {"RemoveTracker", {}, {::i2c::type_of<::Dissonance::IDissonancePlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline ::Dissonance::PlayerTrackerManager* Dissonance::PlayerTrackerManager::New_ctor(::Dissonance::PlayerCollection*  players)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::PlayerTrackerManager*>(players));
}
// Ctor Parameters []
constexpr ::Dissonance::PlayerTrackerManager::PlayerTrackerManager()   {
}

#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/PriorityManager.hpp"
#include "Dissonance/zzzz__ChannelPriority_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Audio/Playback/zzzz__PriorityManager_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IPriorityManager_def.hpp"
#include "Dissonance/zzzz__ChannelPriority_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "Dissonance/zzzz__PlayerCollection_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Playback::PriorityManager.get_TopPriority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::ChannelPriority (::Dissonance::Audio::Playback::PriorityManager::*)()>(&::Dissonance::Audio::Playback::PriorityManager::get_TopPriority)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::PriorityManager*>(),
                        {"get_TopPriority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::PriorityManager.set_TopPriority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::PriorityManager::*)(::Dissonance::ChannelPriority)>(&::Dissonance::Audio::Playback::PriorityManager::set_TopPriority)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::PriorityManager*>(),
                        {"set_TopPriority", {}, {::i2c::type_of<::Dissonance::ChannelPriority>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::PriorityManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::PriorityManager::*)(::Dissonance::PlayerCollection*)>(&::Dissonance::Audio::Playback::PriorityManager::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805e72d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::PriorityManager*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::PlayerCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::PriorityManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::PriorityManager::*)()>(&::Dissonance::Audio::Playback::PriorityManager::Update)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805e71a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::PriorityManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Dissonance::PlayerCollection*& Dissonance::Audio::Playback::PriorityManager::__cordl_internal_get__players()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____players;
}
constexpr ::Dissonance::PlayerCollection* const& Dissonance::Audio::Playback::PriorityManager::__cordl_internal_get__players() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____players;
}
constexpr void Dissonance::Audio::Playback::PriorityManager::__cordl_internal_set__players(::Dissonance::PlayerCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____players = value;
}
constexpr ::Dissonance::ChannelPriority& Dissonance::Audio::Playback::PriorityManager::__cordl_internal_get__TopPriority_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TopPriority_k__BackingField;
}
constexpr ::Dissonance::ChannelPriority const& Dissonance::Audio::Playback::PriorityManager::__cordl_internal_get__TopPriority_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TopPriority_k__BackingField;
}
constexpr void Dissonance::Audio::Playback::PriorityManager::__cordl_internal_set__TopPriority_k__BackingField(::Dissonance::ChannelPriority  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TopPriority_k__BackingField = value;
}
inline void Dissonance::Audio::Playback::PriorityManager::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Playback::PriorityManager*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::Audio::Playback::PriorityManager::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Playback::PriorityManager*>();
}
inline ::Dissonance::ChannelPriority Dissonance::Audio::Playback::PriorityManager::get_TopPriority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::PriorityManager*>(),
                        {"get_TopPriority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::ChannelPriority>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::PriorityManager::set_TopPriority(::Dissonance::ChannelPriority  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::PriorityManager*>(),
                        {"set_TopPriority", {}, {::i2c::type_of<::Dissonance::ChannelPriority>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Audio::Playback::PriorityManager::_ctor(::Dissonance::PlayerCollection*  players)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::PriorityManager*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::PlayerCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, players);
}
inline void Dissonance::Audio::Playback::PriorityManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::PriorityManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Audio::Playback::PriorityManager* Dissonance::Audio::Playback::PriorityManager::New_ctor(::Dissonance::PlayerCollection*  players)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Playback::PriorityManager*>(players));
}
/// @brief Convert operator to "::Dissonance::Audio::Playback::IPriorityManager"
constexpr  Dissonance::Audio::Playback::PriorityManager::operator ::Dissonance::Audio::Playback::IPriorityManager*() noexcept {
return static_cast<::Dissonance::Audio::Playback::IPriorityManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Playback::IPriorityManager"
constexpr ::Dissonance::Audio::Playback::IPriorityManager* Dissonance::Audio::Playback::PriorityManager::i___Dissonance__Audio__Playback__IPriorityManager() noexcept {
return static_cast<::Dissonance::Audio::Playback::IPriorityManager*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Playback::PriorityManager::PriorityManager()   {
}

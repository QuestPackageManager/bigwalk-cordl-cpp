#pragma once
// IWYU pragma private; include "GlobalNamespace/DisconnectionZone.hpp"
#include "GlobalNamespace/zzzz__PeckStateFilter_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DisconnectionZone_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectionZone_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__PlayerZone_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
// Ctor Parameters [CppParam { name: "minPlayers", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::DisconnectionZone_DisconectionSetting::DisconnectionZone_DisconectionSetting(int32_t  minPlayers) noexcept  {
this->minPlayers = minPlayers;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DisconnectionZone_DisconectionSetting::DisconnectionZone_DisconectionSetting()   {
}
//  Writing Method size for method: ::GlobalNamespace::DisconnectionZone.get_currentSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::DisconnectionZone_DisconectionSetting (::GlobalNamespace::DisconnectionZone::*)()>(&::GlobalNamespace::DisconnectionZone::get_currentSettings)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180393360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisconnectionZone*>(),
                        {"get_currentSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisconnectionZone.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DisconnectionZone::*)()>(&::GlobalNamespace::DisconnectionZone::OnEnable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180393240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisconnectionZone*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisconnectionZone.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DisconnectionZone::*)()>(&::GlobalNamespace::DisconnectionZone::OnDisable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180393020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisconnectionZone*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisconnectionZone.OnDisconnectFromZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DisconnectionZone::*)()>(&::GlobalNamespace::DisconnectionZone::OnDisconnectFromZone)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180393100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisconnectionZone*>(),
                        {"OnDisconnectFromZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisconnectionZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DisconnectionZone::*)()>(&::GlobalNamespace::DisconnectionZone::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisconnectionZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerZone>& GlobalNamespace::DisconnectionZone::__cordl_internal_get_playerZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerZone;
}
constexpr ::UnityW<::GlobalNamespace::PlayerZone> const& GlobalNamespace::DisconnectionZone::__cordl_internal_get_playerZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerZone;
}
constexpr void GlobalNamespace::DisconnectionZone::__cordl_internal_set_playerZone(::UnityW<::GlobalNamespace::PlayerZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerZone = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::DisconnectionZone::__cordl_internal_get_onDeplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDeplete;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::DisconnectionZone::__cordl_internal_get_onDeplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDeplete;
}
constexpr void GlobalNamespace::DisconnectionZone::__cordl_internal_set_onDeplete(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onDeplete = value;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::DisconnectionZone::__cordl_internal_get_isActiveSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActiveSystem;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::DisconnectionZone::__cordl_internal_get_isActiveSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActiveSystem;
}
constexpr void GlobalNamespace::DisconnectionZone::__cordl_internal_set_isActiveSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isActiveSystem = value;
}
constexpr ::GlobalNamespace::PeckStateFilter& GlobalNamespace::DisconnectionZone::__cordl_internal_get_isActiveFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActiveFilter;
}
constexpr ::GlobalNamespace::PeckStateFilter const& GlobalNamespace::DisconnectionZone::__cordl_internal_get_isActiveFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActiveFilter;
}
constexpr void GlobalNamespace::DisconnectionZone::__cordl_internal_set_isActiveFilter(::GlobalNamespace::PeckStateFilter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isActiveFilter = value;
}
constexpr ::GlobalNamespace::DisconnectionZone_DisconectionSetting& GlobalNamespace::DisconnectionZone::__cordl_internal_get_setting4Player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setting4Player;
}
constexpr ::GlobalNamespace::DisconnectionZone_DisconectionSetting const& GlobalNamespace::DisconnectionZone::__cordl_internal_get_setting4Player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setting4Player;
}
constexpr void GlobalNamespace::DisconnectionZone::__cordl_internal_set_setting4Player(::GlobalNamespace::DisconnectionZone_DisconectionSetting  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setting4Player = value;
}
constexpr ::GlobalNamespace::DisconnectionZone_DisconectionSetting& GlobalNamespace::DisconnectionZone::__cordl_internal_get_setting3Player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setting3Player;
}
constexpr ::GlobalNamespace::DisconnectionZone_DisconectionSetting const& GlobalNamespace::DisconnectionZone::__cordl_internal_get_setting3Player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setting3Player;
}
constexpr void GlobalNamespace::DisconnectionZone::__cordl_internal_set_setting3Player(::GlobalNamespace::DisconnectionZone_DisconectionSetting  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setting3Player = value;
}
constexpr ::GlobalNamespace::DisconnectionZone_DisconectionSetting& GlobalNamespace::DisconnectionZone::__cordl_internal_get_setting2Player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setting2Player;
}
constexpr ::GlobalNamespace::DisconnectionZone_DisconectionSetting const& GlobalNamespace::DisconnectionZone::__cordl_internal_get_setting2Player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setting2Player;
}
constexpr void GlobalNamespace::DisconnectionZone::__cordl_internal_set_setting2Player(::GlobalNamespace::DisconnectionZone_DisconectionSetting  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setting2Player = value;
}
constexpr bool& GlobalNamespace::DisconnectionZone::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::DisconnectionZone::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::DisconnectionZone::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr bool& GlobalNamespace::DisconnectionZone::__cordl_internal_get_isSubscribedToDisconnectEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSubscribedToDisconnectEvent;
}
constexpr bool const& GlobalNamespace::DisconnectionZone::__cordl_internal_get_isSubscribedToDisconnectEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSubscribedToDisconnectEvent;
}
constexpr void GlobalNamespace::DisconnectionZone::__cordl_internal_set_isSubscribedToDisconnectEvent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSubscribedToDisconnectEvent = value;
}
inline ::GlobalNamespace::DisconnectionZone_DisconectionSetting GlobalNamespace::DisconnectionZone::get_currentSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisconnectionZone*>(),
                        {"get_currentSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DisconnectionZone_DisconectionSetting>(this, ___internal_method);
}
inline void GlobalNamespace::DisconnectionZone::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisconnectionZone*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DisconnectionZone::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisconnectionZone*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DisconnectionZone::OnDisconnectFromZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisconnectionZone*>(),
                        {"OnDisconnectFromZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DisconnectionZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisconnectionZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DisconnectionZone* GlobalNamespace::DisconnectionZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DisconnectionZone*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DisconnectionZone::DisconnectionZone()   {
}

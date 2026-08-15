#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerZone.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerZone_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerZone.get_playersInZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>* (::GlobalNamespace::PlayerZone::*)()>(&::GlobalNamespace::PlayerZone::get_playersInZone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerZone*>(),
                        {"get_playersInZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerZone.set_playersInZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerZone::*)(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*)>(&::GlobalNamespace::PlayerZone::set_playersInZone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180308de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerZone*>(),
                        {"set_playersInZone", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerZone.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerZone::*)()>(&::GlobalNamespace::PlayerZone::OnEnable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180395870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerZone*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerZone.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerZone::*)()>(&::GlobalNamespace::PlayerZone::OnDisable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180395780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerZone*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerZone.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerZone::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::PlayerZone::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x180395a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerZone*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerZone.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerZone::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::PlayerZone::OnTriggerExit)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x180395d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerZone*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerZone.ProcessExitEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerZone::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerZone::ProcessExitEvents)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180395f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerZone*>(),
                        {"ProcessExitEvents", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerZone.OnPlayerDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerZone::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerZone::OnPlayerDestroyed)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180395960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerZone*>(),
                        {"OnPlayerDestroyed", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerZone.CheckForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PlayerCharacter> (::GlobalNamespace::PlayerZone::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::PlayerZone::CheckForPlayer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180395730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerZone*>(),
                        {"CheckForPlayer", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerZone::*)()>(&::GlobalNamespace::PlayerZone::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180396010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::PlayerZone::__cordl_internal_get_onEnterSwitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEnterSwitch;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::PlayerZone::__cordl_internal_get_onEnterSwitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEnterSwitch;
}
constexpr void GlobalNamespace::PlayerZone::__cordl_internal_set_onEnterSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onEnterSwitch = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::PlayerZone::__cordl_internal_get_onExitSwitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onExitSwitch;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::PlayerZone::__cordl_internal_get_onExitSwitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onExitSwitch;
}
constexpr void GlobalNamespace::PlayerZone::__cordl_internal_set_onExitSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onExitSwitch = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::PlayerZone::__cordl_internal_get_onNotEmptySwitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onNotEmptySwitch;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::PlayerZone::__cordl_internal_get_onNotEmptySwitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onNotEmptySwitch;
}
constexpr void GlobalNamespace::PlayerZone::__cordl_internal_set_onNotEmptySwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onNotEmptySwitch = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::PlayerZone::__cordl_internal_get_onEmptySwitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEmptySwitch;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::PlayerZone::__cordl_internal_get_onEmptySwitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEmptySwitch;
}
constexpr void GlobalNamespace::PlayerZone::__cordl_internal_set_onEmptySwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onEmptySwitch = value;
}
constexpr bool& GlobalNamespace::PlayerZone::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlayerZone::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlayerZone::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PlayerCharacter>,int32_t>*& GlobalNamespace::PlayerZone::__cordl_internal_get_overlapCounts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapCounts;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PlayerCharacter>,int32_t>* const& GlobalNamespace::PlayerZone::__cordl_internal_get_overlapCounts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapCounts;
}
constexpr void GlobalNamespace::PlayerZone::__cordl_internal_set_overlapCounts(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PlayerCharacter>,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlapCounts = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*& GlobalNamespace::PlayerZone::__cordl_internal_get__playersInZone_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playersInZone_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>* const& GlobalNamespace::PlayerZone::__cordl_internal_get__playersInZone_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playersInZone_k__BackingField;
}
constexpr void GlobalNamespace::PlayerZone::__cordl_internal_set__playersInZone_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playersInZone_k__BackingField = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*& GlobalNamespace::PlayerZone::__cordl_internal_get_onEnterZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEnterZone;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>* const& GlobalNamespace::PlayerZone::__cordl_internal_get_onEnterZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEnterZone;
}
constexpr void GlobalNamespace::PlayerZone::__cordl_internal_set_onEnterZone(::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onEnterZone = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*& GlobalNamespace::PlayerZone::__cordl_internal_get_onExitZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onExitZone;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>* const& GlobalNamespace::PlayerZone::__cordl_internal_get_onExitZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onExitZone;
}
constexpr void GlobalNamespace::PlayerZone::__cordl_internal_set_onExitZone(::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onExitZone = value;
}
constexpr ::System::Action*& GlobalNamespace::PlayerZone::__cordl_internal_get_onDisconnectFromZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDisconnectFromZone;
}
constexpr ::System::Action* const& GlobalNamespace::PlayerZone::__cordl_internal_get_onDisconnectFromZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDisconnectFromZone;
}
constexpr void GlobalNamespace::PlayerZone::__cordl_internal_set_onDisconnectFromZone(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onDisconnectFromZone = value;
}
inline void GlobalNamespace::PlayerZone::setStaticF_onPlayerDestroyed(::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*, "onPlayerDestroyed", ::GlobalNamespace::PlayerZone*>(std::forward<::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*>(value));
}
inline ::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>* GlobalNamespace::PlayerZone::getStaticF_onPlayerDestroyed()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*, "onPlayerDestroyed", ::GlobalNamespace::PlayerZone*>();
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>* GlobalNamespace::PlayerZone::get_playersInZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerZone*>(),
                        {"get_playersInZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerZone::set_playersInZone(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerZone*>(),
                        {"set_playersInZone", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerZone::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerZone*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerZone::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerZone*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerZone::OnTriggerEnter(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerZone*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void GlobalNamespace::PlayerZone::OnTriggerExit(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerZone*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void GlobalNamespace::PlayerZone::ProcessExitEvents(::GlobalNamespace::PlayerCharacter*  changedPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerZone*>(),
                        {"ProcessExitEvents", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, changedPlayer);
}
inline void GlobalNamespace::PlayerZone::OnPlayerDestroyed(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerZone*>(),
                        {"OnPlayerDestroyed", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline ::UnityW<::GlobalNamespace::PlayerCharacter> GlobalNamespace::PlayerZone::CheckForPlayer(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerZone*>(),
                        {"CheckForPlayer", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PlayerCharacter>>(this, ___internal_method, collider);
}
inline void GlobalNamespace::PlayerZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerZone* GlobalNamespace::PlayerZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerZone*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerZone::PlayerZone()   {
}

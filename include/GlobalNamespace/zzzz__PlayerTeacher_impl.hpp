#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerTeacher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerTeacher_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerTeacher_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerTeacher_LearnState::PlayerTeacher_LearnState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerTeacher_LearnState::PlayerTeacher_LearnState()   {
}
constexpr ::GlobalNamespace::PlayerTeacher_LearnState  GlobalNamespace::PlayerTeacher_LearnState::Uninitialized{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PlayerTeacher_LearnState  GlobalNamespace::PlayerTeacher_LearnState::Observing{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::PlayerTeacher_LearnState  GlobalNamespace::PlayerTeacher_LearnState::Teaching{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::PlayerTeacher_LearnState  GlobalNamespace::PlayerTeacher_LearnState::Proven{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::GlobalNamespace::PlayerTeacher.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTeacher::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerTeacher::Initialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTeacher*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTeacher.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTeacher::*)()>(&::GlobalNamespace::PlayerTeacher::Update)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180376880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTeacher*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTeacher.EnterTeachingZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTeacher::*)()>(&::GlobalNamespace::PlayerTeacher::EnterTeachingZone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180376410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTeacher*>(),
                        {"EnterTeachingZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTeacher.ExitTeachingZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTeacher::*)()>(&::GlobalNamespace::PlayerTeacher::ExitTeachingZone)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180376420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTeacher*>(),
                        {"ExitTeachingZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTeacher.RecordProvenWalking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTeacher::*)()>(&::GlobalNamespace::PlayerTeacher::RecordProvenWalking)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803765e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTeacher*>(),
                        {"RecordProvenWalking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTeacher.ServerLoadHasLearnedWalking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTeacher::*)()>(&::GlobalNamespace::PlayerTeacher::ServerLoadHasLearnedWalking)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1803766f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTeacher*>(),
                        {"ServerLoadHasLearnedWalking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTeacher.ReceiveInitialValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTeacher::*)(bool)>(&::GlobalNamespace::PlayerTeacher::ReceiveInitialValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180376590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTeacher*>(),
                        {"ReceiveInitialValue", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTeacher.GetSaveKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlayerTeacher::*)()>(&::GlobalNamespace::PlayerTeacher::GetSaveKey)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180376540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTeacher*>(),
                        {"GetSaveKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTeacher.ServerSaveWalkingProven
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTeacher::*)()>(&::GlobalNamespace::PlayerTeacher::ServerSaveWalkingProven)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180376820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTeacher*>(),
                        {"ServerSaveWalkingProven", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTeacher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTeacher::*)()>(&::GlobalNamespace::PlayerTeacher::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTeacher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::PlayerTeacher::__cordl_internal_get_observationPeriod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___observationPeriod;
}
constexpr float_t const& GlobalNamespace::PlayerTeacher::__cordl_internal_get_observationPeriod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___observationPeriod;
}
constexpr void GlobalNamespace::PlayerTeacher::__cordl_internal_set_observationPeriod(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___observationPeriod = value;
}
constexpr bool& GlobalNamespace::PlayerTeacher::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlayerTeacher::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlayerTeacher::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerTeacher::__cordl_internal_get_playerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerTeacher::__cordl_internal_get_playerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr void GlobalNamespace::PlayerTeacher::__cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCharacter = value;
}
constexpr float_t& GlobalNamespace::PlayerTeacher::__cordl_internal_get_waitDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitDuration;
}
constexpr float_t const& GlobalNamespace::PlayerTeacher::__cordl_internal_get_waitDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitDuration;
}
constexpr void GlobalNamespace::PlayerTeacher::__cordl_internal_set_waitDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitDuration = value;
}
constexpr bool& GlobalNamespace::PlayerTeacher::__cordl_internal_get_hasEnteredTeachingZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasEnteredTeachingZone;
}
constexpr bool const& GlobalNamespace::PlayerTeacher::__cordl_internal_get_hasEnteredTeachingZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasEnteredTeachingZone;
}
constexpr void GlobalNamespace::PlayerTeacher::__cordl_internal_set_hasEnteredTeachingZone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasEnteredTeachingZone = value;
}
constexpr ::GlobalNamespace::PlayerTeacher_LearnState& GlobalNamespace::PlayerTeacher::__cordl_internal_get_localPlayerLearnState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerLearnState;
}
constexpr ::GlobalNamespace::PlayerTeacher_LearnState const& GlobalNamespace::PlayerTeacher::__cordl_internal_get_localPlayerLearnState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerLearnState;
}
constexpr void GlobalNamespace::PlayerTeacher::__cordl_internal_set_localPlayerLearnState(::GlobalNamespace::PlayerTeacher_LearnState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localPlayerLearnState = value;
}
inline void GlobalNamespace::PlayerTeacher::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTeacher*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::PlayerTeacher::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTeacher*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerTeacher::EnterTeachingZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTeacher*>(),
                        {"EnterTeachingZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerTeacher::ExitTeachingZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTeacher*>(),
                        {"ExitTeachingZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerTeacher::RecordProvenWalking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTeacher*>(),
                        {"RecordProvenWalking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerTeacher::ServerLoadHasLearnedWalking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTeacher*>(),
                        {"ServerLoadHasLearnedWalking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerTeacher::ReceiveInitialValue(bool  canWalk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTeacher*>(),
                        {"ReceiveInitialValue", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, canWalk);
}
inline ::StringW GlobalNamespace::PlayerTeacher::GetSaveKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTeacher*>(),
                        {"GetSaveKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerTeacher::ServerSaveWalkingProven()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTeacher*>(),
                        {"ServerSaveWalkingProven", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerTeacher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTeacher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerTeacher* GlobalNamespace::PlayerTeacher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerTeacher*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerTeacher::PlayerTeacher()   {
}

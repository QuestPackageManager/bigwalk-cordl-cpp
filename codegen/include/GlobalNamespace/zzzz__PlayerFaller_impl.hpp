#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerFaller.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerFaller_def.hpp"
#include "GlobalNamespace/zzzz__AudioEvent_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerFaller_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerFaller___c__DisplayClass19_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerFaller___c__DisplayClass19_0::*)()>(&::GlobalNamespace::PlayerFaller___c__DisplayClass19_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFaller___c__DisplayClass19_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerFaller___c__DisplayClass19_0._Update_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerFaller___c__DisplayClass19_0::*)()>(&::GlobalNamespace::PlayerFaller___c__DisplayClass19_0::_Update_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180346a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFaller___c__DisplayClass19_0*>(),
                        {"<Update>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::PlayerFaller___c__DisplayClass19_0::__cordl_internal_get_difference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___difference;
}
constexpr float_t const& GlobalNamespace::PlayerFaller___c__DisplayClass19_0::__cordl_internal_get_difference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___difference;
}
constexpr void GlobalNamespace::PlayerFaller___c__DisplayClass19_0::__cordl_internal_set_difference(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___difference = value;
}
inline void GlobalNamespace::PlayerFaller___c__DisplayClass19_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFaller___c__DisplayClass19_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::PlayerFaller___c__DisplayClass19_0::_Update_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFaller___c__DisplayClass19_0*>(),
                        {"<Update>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerFaller___c__DisplayClass19_0* GlobalNamespace::PlayerFaller___c__DisplayClass19_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerFaller___c__DisplayClass19_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerFaller___c__DisplayClass19_0::PlayerFaller___c__DisplayClass19_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::PlayerFaller.get_isDazed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerFaller::*)()>(&::GlobalNamespace::PlayerFaller::get_isDazed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804687f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFaller*>(),
                        {"get_isDazed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerFaller.get_isInDanger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerFaller::*)()>(&::GlobalNamespace::PlayerFaller::get_isInDanger)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180468800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFaller*>(),
                        {"get_isInDanger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerFaller.set_isInDanger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerFaller::*)(bool)>(&::GlobalNamespace::PlayerFaller::set_isInDanger)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180468810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFaller*>(),
                        {"set_isInDanger", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerFaller.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerFaller::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerFaller::Initialize)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180467c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFaller*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerFaller.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerFaller::*)()>(&::GlobalNamespace::PlayerFaller::OnDisable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180467d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFaller*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerFaller.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerFaller::*)()>(&::GlobalNamespace::PlayerFaller::Update)> {
  constexpr static std::size_t size = 0x6d0;
  constexpr static std::size_t addrs = 0x180468110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFaller*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerFaller.ClearNextFall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerFaller::*)()>(&::GlobalNamespace::PlayerFaller::ClearNextFall)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180467c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFaller*>(),
                        {"ClearNextFall", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerFaller.TriggerFall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerFaller::*)()>(&::GlobalNamespace::PlayerFaller::TriggerFall)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180468050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFaller*>(),
                        {"TriggerFall", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerFaller.ProcessRemoteFall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerFaller::*)()>(&::GlobalNamespace::PlayerFaller::ProcessRemoteFall)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180467da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFaller*>(),
                        {"ProcessRemoteFall", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerFaller.ShowFall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerFaller::*)()>(&::GlobalNamespace::PlayerFaller::ShowFall)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x180467de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFaller*>(),
                        {"ShowFall", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerFaller._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerFaller::*)()>(&::GlobalNamespace::PlayerFaller::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804687e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFaller*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::PlayerFaller::__cordl_internal_get_fallDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallDistance;
}
constexpr float_t const& GlobalNamespace::PlayerFaller::__cordl_internal_get_fallDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallDistance;
}
constexpr void GlobalNamespace::PlayerFaller::__cordl_internal_set_fallDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fallDistance = value;
}
constexpr float_t& GlobalNamespace::PlayerFaller::__cordl_internal_get_sitPauseDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sitPauseDuration;
}
constexpr float_t const& GlobalNamespace::PlayerFaller::__cordl_internal_get_sitPauseDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sitPauseDuration;
}
constexpr void GlobalNamespace::PlayerFaller::__cordl_internal_set_sitPauseDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sitPauseDuration = value;
}
constexpr bool& GlobalNamespace::PlayerFaller::__cordl_internal_get_showPostEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showPostEffects;
}
constexpr bool const& GlobalNamespace::PlayerFaller::__cordl_internal_get_showPostEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showPostEffects;
}
constexpr void GlobalNamespace::PlayerFaller::__cordl_internal_set_showPostEffects(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showPostEffects = value;
}
constexpr bool& GlobalNamespace::PlayerFaller::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlayerFaller::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlayerFaller::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr bool& GlobalNamespace::PlayerFaller::__cordl_internal_get_logisDazed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logisDazed;
}
constexpr bool const& GlobalNamespace::PlayerFaller::__cordl_internal_get_logisDazed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logisDazed;
}
constexpr void GlobalNamespace::PlayerFaller::__cordl_internal_set_logisDazed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logisDazed = value;
}
constexpr bool& GlobalNamespace::PlayerFaller::__cordl_internal_get_ignoreFalling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreFalling;
}
constexpr bool const& GlobalNamespace::PlayerFaller::__cordl_internal_get_ignoreFalling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreFalling;
}
constexpr void GlobalNamespace::PlayerFaller::__cordl_internal_set_ignoreFalling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignoreFalling = value;
}
constexpr ::GlobalNamespace::AudioEvent*& GlobalNamespace::PlayerFaller::__cordl_internal_get__fallingSoundEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fallingSoundEvent;
}
constexpr ::GlobalNamespace::AudioEvent* const& GlobalNamespace::PlayerFaller::__cordl_internal_get__fallingSoundEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fallingSoundEvent;
}
constexpr void GlobalNamespace::PlayerFaller::__cordl_internal_set__fallingSoundEvent(::GlobalNamespace::AudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fallingSoundEvent = value;
}
constexpr ::GlobalNamespace::AudioEvent*& GlobalNamespace::PlayerFaller::__cordl_internal_get__fallWaterSoundEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fallWaterSoundEvent;
}
constexpr ::GlobalNamespace::AudioEvent* const& GlobalNamespace::PlayerFaller::__cordl_internal_get__fallWaterSoundEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fallWaterSoundEvent;
}
constexpr void GlobalNamespace::PlayerFaller::__cordl_internal_set__fallWaterSoundEvent(::GlobalNamespace::AudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fallWaterSoundEvent = value;
}
constexpr float_t& GlobalNamespace::PlayerFaller::__cordl_internal_get_heightLastGrounded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightLastGrounded;
}
constexpr float_t const& GlobalNamespace::PlayerFaller::__cordl_internal_get_heightLastGrounded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightLastGrounded;
}
constexpr void GlobalNamespace::PlayerFaller::__cordl_internal_set_heightLastGrounded(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightLastGrounded = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerFaller::__cordl_internal_get_playerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerFaller::__cordl_internal_get_playerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr void GlobalNamespace::PlayerFaller::__cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCharacter = value;
}
constexpr float_t& GlobalNamespace::PlayerFaller::__cordl_internal_get_timeAtDazeStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeAtDazeStart;
}
constexpr float_t const& GlobalNamespace::PlayerFaller::__cordl_internal_get_timeAtDazeStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeAtDazeStart;
}
constexpr void GlobalNamespace::PlayerFaller::__cordl_internal_set_timeAtDazeStart(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeAtDazeStart = value;
}
constexpr bool& GlobalNamespace::PlayerFaller::__cordl_internal_get__isInDanger_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInDanger_k__BackingField;
}
constexpr bool const& GlobalNamespace::PlayerFaller::__cordl_internal_get__isInDanger_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInDanger_k__BackingField;
}
constexpr void GlobalNamespace::PlayerFaller::__cordl_internal_set__isInDanger_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isInDanger_k__BackingField = value;
}
inline bool GlobalNamespace::PlayerFaller::get_isDazed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFaller*>(),
                        {"get_isDazed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerFaller::get_isInDanger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFaller*>(),
                        {"get_isInDanger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerFaller::set_isInDanger(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFaller*>(),
                        {"set_isInDanger", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerFaller::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFaller*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::PlayerFaller::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFaller*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerFaller::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFaller*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerFaller::ClearNextFall()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFaller*>(),
                        {"ClearNextFall", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerFaller::TriggerFall()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFaller*>(),
                        {"TriggerFall", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerFaller::ProcessRemoteFall()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFaller*>(),
                        {"ProcessRemoteFall", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerFaller::ShowFall()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFaller*>(),
                        {"ShowFall", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerFaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFaller*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerFaller* GlobalNamespace::PlayerFaller::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerFaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerFaller::PlayerFaller()   {
}

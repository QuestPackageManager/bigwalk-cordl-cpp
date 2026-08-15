#pragma once
// IWYU pragma private; include "GlobalNamespace/PulseGenerator.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_impl.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PulseGenerator_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemBlock_def.hpp"
#include "GlobalNamespace/zzzz__PulseGenerator_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PulseGenerator_PulseGeneratorState::PulseGenerator_PulseGeneratorState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PulseGenerator_PulseGeneratorState::PulseGenerator_PulseGeneratorState()   {
}
constexpr ::GlobalNamespace::PulseGenerator_PulseGeneratorState  GlobalNamespace::PulseGenerator_PulseGeneratorState::Inactive{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PulseGenerator_PulseGeneratorState  GlobalNamespace::PulseGenerator_PulseGeneratorState::Warmup{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::PulseGenerator_PulseGeneratorState  GlobalNamespace::PulseGenerator_PulseGeneratorState::Playback{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::PulseGenerator.get_currentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PulseGenerator_PulseGeneratorState (::GlobalNamespace::PulseGenerator::*)()>(&::GlobalNamespace::PulseGenerator::get_currentState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804081d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                        {"get_currentState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PulseGenerator.set_currentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PulseGenerator::*)(::GlobalNamespace::PulseGenerator_PulseGeneratorState)>(&::GlobalNamespace::PulseGenerator::set_currentState)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180408250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                        {"set_currentState", {}, {::i2c::type_of<::GlobalNamespace::PulseGenerator_PulseGeneratorState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PulseGenerator.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PulseGenerator::*)()>(&::GlobalNamespace::PulseGenerator::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180407900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PulseGenerator.ServerScrambleAndPlayback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PulseGenerator::*)()>(&::GlobalNamespace::PulseGenerator::ServerScrambleAndPlayback)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180407bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                        {"ServerScrambleAndPlayback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PulseGenerator.SetRandomSeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PulseGenerator::*)()>(&::GlobalNamespace::PulseGenerator::SetRandomSeed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180407d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                        {"SetRandomSeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PulseGenerator.SetSequenceFromSeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PulseGenerator::*)(int32_t)>(&::GlobalNamespace::PulseGenerator::SetSequenceFromSeed)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x180407d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                        {"SetSequenceFromSeed", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PulseGenerator.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PulseGenerator::*)()>(&::GlobalNamespace::PulseGenerator::Update)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x180408050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PulseGenerator.StartPlayback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PulseGenerator::*)()>(&::GlobalNamespace::PulseGenerator::StartPlayback)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180407ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                        {"StartPlayback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PulseGenerator.SetPulse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PulseGenerator::*)(int32_t)>(&::GlobalNamespace::PulseGenerator::SetPulse)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180407c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                        {"SetPulse", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PulseGenerator.OnChangeSeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PulseGenerator::*)(int32_t, int32_t)>(&::GlobalNamespace::PulseGenerator::OnChangeSeed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180407a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                        {"OnChangeSeed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PulseGenerator.ServerClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PulseGenerator::*)()>(&::GlobalNamespace::PulseGenerator::ServerClear)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180407b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                        {"ServerClear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PulseGenerator.MatchesTotal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PulseGenerator::*)(int32_t)>(&::GlobalNamespace::PulseGenerator::MatchesTotal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180407a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                        {"MatchesTotal", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PulseGenerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PulseGenerator::*)()>(&::GlobalNamespace::PulseGenerator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180360450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PulseGenerator.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PulseGenerator::*)()>(&::GlobalNamespace::PulseGenerator::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PulseGenerator.get_Networkseed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PulseGenerator::*)()>(&::GlobalNamespace::PulseGenerator::get_Networkseed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                        {"get_Networkseed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PulseGenerator.set_Networkseed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PulseGenerator::*)(::ByRefConst<int32_t>)>(&::GlobalNamespace::PulseGenerator::set_Networkseed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804081e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                        {"set_Networkseed", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PulseGenerator.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PulseGenerator::*)(::Mirror::NetworkWriter*, bool)>(&::GlobalNamespace::PulseGenerator::SerializeSyncVars)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180407ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                    {::i2c::class_of<::GlobalNamespace::PulseGenerator*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PulseGenerator.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PulseGenerator::*)(::Mirror::NetworkReader*, bool)>(&::GlobalNamespace::PulseGenerator::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180407950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                    {::i2c::class_of<::GlobalNamespace::PulseGenerator*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>& GlobalNamespace::PulseGenerator::__cordl_internal_get_outputs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputs;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>> const& GlobalNamespace::PulseGenerator::__cordl_internal_get_outputs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputs;
}
constexpr void GlobalNamespace::PulseGenerator::__cordl_internal_set_outputs(::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outputs = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSystemBlock>& GlobalNamespace::PulseGenerator::__cordl_internal_get_playbackIndicators()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackIndicators;
}
constexpr ::UnityW<::GlobalNamespace::PeckSystemBlock> const& GlobalNamespace::PulseGenerator::__cordl_internal_get_playbackIndicators() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackIndicators;
}
constexpr void GlobalNamespace::PulseGenerator::__cordl_internal_set_playbackIndicators(::UnityW<::GlobalNamespace::PeckSystemBlock>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playbackIndicators = value;
}
constexpr bool& GlobalNamespace::PulseGenerator::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PulseGenerator::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PulseGenerator::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr int32_t& GlobalNamespace::PulseGenerator::__cordl_internal_get_seed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seed;
}
constexpr int32_t const& GlobalNamespace::PulseGenerator::__cordl_internal_get_seed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seed;
}
constexpr void GlobalNamespace::PulseGenerator::__cordl_internal_set_seed(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seed = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::PulseGenerator::__cordl_internal_get_sequence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sequence;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::PulseGenerator::__cordl_internal_get_sequence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sequence;
}
constexpr void GlobalNamespace::PulseGenerator::__cordl_internal_set_sequence(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sequence = value;
}
constexpr int32_t& GlobalNamespace::PulseGenerator::__cordl_internal_get_total()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___total;
}
constexpr int32_t const& GlobalNamespace::PulseGenerator::__cordl_internal_get_total() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___total;
}
constexpr void GlobalNamespace::PulseGenerator::__cordl_internal_set_total(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___total = value;
}
constexpr int32_t& GlobalNamespace::PulseGenerator::__cordl_internal_get_lastPlayedIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPlayedIndex;
}
constexpr int32_t const& GlobalNamespace::PulseGenerator::__cordl_internal_get_lastPlayedIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPlayedIndex;
}
constexpr void GlobalNamespace::PulseGenerator::__cordl_internal_set_lastPlayedIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPlayedIndex = value;
}
constexpr float_t& GlobalNamespace::PulseGenerator::__cordl_internal_get_lastPlayedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPlayedTime;
}
constexpr float_t const& GlobalNamespace::PulseGenerator::__cordl_internal_get_lastPlayedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPlayedTime;
}
constexpr void GlobalNamespace::PulseGenerator::__cordl_internal_set_lastPlayedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPlayedTime = value;
}
constexpr ::System::Action*& GlobalNamespace::PulseGenerator::__cordl_internal_get_onFinishPlayback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFinishPlayback;
}
constexpr ::System::Action* const& GlobalNamespace::PulseGenerator::__cordl_internal_get_onFinishPlayback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFinishPlayback;
}
constexpr void GlobalNamespace::PulseGenerator::__cordl_internal_set_onFinishPlayback(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onFinishPlayback = value;
}
constexpr bool& GlobalNamespace::PulseGenerator::__cordl_internal_get_isInWarmup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInWarmup;
}
constexpr bool const& GlobalNamespace::PulseGenerator::__cordl_internal_get_isInWarmup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInWarmup;
}
constexpr void GlobalNamespace::PulseGenerator::__cordl_internal_set_isInWarmup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isInWarmup = value;
}
constexpr bool& GlobalNamespace::PulseGenerator::__cordl_internal_get_isInCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInCooldown;
}
constexpr bool const& GlobalNamespace::PulseGenerator::__cordl_internal_get_isInCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInCooldown;
}
constexpr void GlobalNamespace::PulseGenerator::__cordl_internal_set_isInCooldown(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isInCooldown = value;
}
constexpr ::GlobalNamespace::PulseGenerator_PulseGeneratorState& GlobalNamespace::PulseGenerator::__cordl_internal_get__currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentState;
}
constexpr ::GlobalNamespace::PulseGenerator_PulseGeneratorState const& GlobalNamespace::PulseGenerator::__cordl_internal_get__currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentState;
}
constexpr void GlobalNamespace::PulseGenerator::__cordl_internal_set__currentState(::GlobalNamespace::PulseGenerator_PulseGeneratorState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentState = value;
}
inline ::GlobalNamespace::PulseGenerator_PulseGeneratorState GlobalNamespace::PulseGenerator::get_currentState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                        {"get_currentState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PulseGenerator_PulseGeneratorState>(this, ___internal_method);
}
inline void GlobalNamespace::PulseGenerator::set_currentState(::GlobalNamespace::PulseGenerator_PulseGeneratorState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                        {"set_currentState", {}, {::i2c::type_of<::GlobalNamespace::PulseGenerator_PulseGeneratorState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PulseGenerator::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PulseGenerator::ServerScrambleAndPlayback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                        {"ServerScrambleAndPlayback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PulseGenerator::SetRandomSeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                        {"SetRandomSeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PulseGenerator::SetSequenceFromSeed(int32_t  seed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                        {"SetSequenceFromSeed", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seed);
}
inline void GlobalNamespace::PulseGenerator::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PulseGenerator::StartPlayback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                        {"StartPlayback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PulseGenerator::SetPulse(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                        {"SetPulse", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::PulseGenerator::OnChangeSeed(int32_t  oldSeed, int32_t  newSeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                        {"OnChangeSeed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldSeed, newSeed);
}
inline void GlobalNamespace::PulseGenerator::ServerClear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                        {"ServerClear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PulseGenerator::MatchesTotal(int32_t  total)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                        {"MatchesTotal", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, total);
}
inline void GlobalNamespace::PulseGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PulseGenerator::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::PulseGenerator::get_Networkseed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                        {"get_Networkseed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::PulseGenerator::set_Networkseed(::ByRefConst<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseGenerator*>(),
                        {"set_Networkseed", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PulseGenerator::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PulseGenerator*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void GlobalNamespace::PulseGenerator::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PulseGenerator*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::GlobalNamespace::PulseGenerator* GlobalNamespace::PulseGenerator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PulseGenerator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PulseGenerator::PulseGenerator()   {
}

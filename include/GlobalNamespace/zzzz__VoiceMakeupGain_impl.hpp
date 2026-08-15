#pragma once
// IWYU pragma private; include "GlobalNamespace/VoiceMakeupGain.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__VoiceMakeupGain_def.hpp"
#include "GlobalNamespace/zzzz__VoiceMakeupGain_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VoiceMakeupGain_State._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoiceMakeupGain_State::*)()>(&::GlobalNamespace::VoiceMakeupGain_State::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceMakeupGain_State*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::VoiceMakeupGain_State::__cordl_internal_get_Envelope()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Envelope;
}
constexpr float_t const& GlobalNamespace::VoiceMakeupGain_State::__cordl_internal_get_Envelope() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Envelope;
}
constexpr void GlobalNamespace::VoiceMakeupGain_State::__cordl_internal_set_Envelope(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Envelope = value;
}
constexpr float_t& GlobalNamespace::VoiceMakeupGain_State::__cordl_internal_get_Level()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Level;
}
constexpr float_t const& GlobalNamespace::VoiceMakeupGain_State::__cordl_internal_get_Level() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Level;
}
constexpr void GlobalNamespace::VoiceMakeupGain_State::__cordl_internal_set_Level(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Level = value;
}
constexpr float_t& GlobalNamespace::VoiceMakeupGain_State::__cordl_internal_get_SpeechSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpeechSeconds;
}
constexpr float_t const& GlobalNamespace::VoiceMakeupGain_State::__cordl_internal_get_SpeechSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpeechSeconds;
}
constexpr void GlobalNamespace::VoiceMakeupGain_State::__cordl_internal_set_SpeechSeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SpeechSeconds = value;
}
constexpr float_t& GlobalNamespace::VoiceMakeupGain_State::__cordl_internal_get_GainDb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GainDb;
}
constexpr float_t const& GlobalNamespace::VoiceMakeupGain_State::__cordl_internal_get_GainDb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GainDb;
}
constexpr void GlobalNamespace::VoiceMakeupGain_State::__cordl_internal_set_GainDb(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GainDb = value;
}
inline void GlobalNamespace::VoiceMakeupGain_State::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceMakeupGain_State*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VoiceMakeupGain_State* GlobalNamespace::VoiceMakeupGain_State::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VoiceMakeupGain_State*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoiceMakeupGain_State::VoiceMakeupGain_State()   {
}
//  Writing Method size for method: ::GlobalNamespace::VoiceMakeupGain.get_TargetARV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::GlobalNamespace::VoiceMakeupGain::get_TargetARV)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803f31b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceMakeupGain*>(),
                        {"get_TargetARV", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoiceMakeupGain.set_TargetARV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::GlobalNamespace::VoiceMakeupGain::set_TargetARV)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803f32f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceMakeupGain*>(),
                        {"set_TargetARV", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoiceMakeupGain.get_VolumeDb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::GlobalNamespace::VoiceMakeupGain::get_VolumeDb)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803f31f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceMakeupGain*>(),
                        {"get_VolumeDb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoiceMakeupGain.get_Volume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::GlobalNamespace::VoiceMakeupGain::get_Volume)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803f3250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceMakeupGain*>(),
                        {"get_Volume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoiceMakeupGain.set_Volume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::GlobalNamespace::VoiceMakeupGain::set_Volume)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803f3370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceMakeupGain*>(),
                        {"set_Volume", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoiceMakeupGain.Evaluate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::StringW, float_t, bool, float_t)>(&::GlobalNamespace::VoiceMakeupGain::Evaluate)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x1803f2c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceMakeupGain*>(),
                        {"Evaluate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoiceMakeupGain.TryGetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<float_t>, ::by_ref<float_t>)>(&::GlobalNamespace::VoiceMakeupGain::TryGetState)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803f3000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceMakeupGain*>(),
                        {"TryGetState", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoiceMakeupGain.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::VoiceMakeupGain::Clear)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803f2c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceMakeupGain*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::VoiceMakeupGain::setStaticF_s_targetARV(float_t  value)  {
::cordl_internals::setStaticField<float_t, "s_targetARV", ::GlobalNamespace::VoiceMakeupGain*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::VoiceMakeupGain::getStaticF_s_targetARV()  {
return ::cordl_internals::getStaticField<float_t, "s_targetARV", ::GlobalNamespace::VoiceMakeupGain*>();
}
inline void GlobalNamespace::VoiceMakeupGain::setStaticF_s_states(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::VoiceMakeupGain_State*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::VoiceMakeupGain_State*>*, "s_states", ::GlobalNamespace::VoiceMakeupGain*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::VoiceMakeupGain_State*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::VoiceMakeupGain_State*>* GlobalNamespace::VoiceMakeupGain::getStaticF_s_states()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::VoiceMakeupGain_State*>*, "s_states", ::GlobalNamespace::VoiceMakeupGain*>();
}
inline float_t GlobalNamespace::VoiceMakeupGain::get_TargetARV()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceMakeupGain*>(),
                        {"get_TargetARV", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::VoiceMakeupGain::set_TargetARV(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceMakeupGain*>(),
                        {"set_TargetARV", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline float_t GlobalNamespace::VoiceMakeupGain::get_VolumeDb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceMakeupGain*>(),
                        {"get_VolumeDb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline float_t GlobalNamespace::VoiceMakeupGain::get_Volume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceMakeupGain*>(),
                        {"get_Volume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::VoiceMakeupGain::set_Volume(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceMakeupGain*>(),
                        {"set_Volume", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline float_t GlobalNamespace::VoiceMakeupGain::Evaluate(::StringW  playerName, float_t  arv, bool  isSpeaking, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceMakeupGain*>(),
                        {"Evaluate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, playerName, arv, isSpeaking, deltaTime);
}
inline bool GlobalNamespace::VoiceMakeupGain::TryGetState(::StringW  playerName, ::by_ref<float_t>  gainDb, ::by_ref<float_t>  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceMakeupGain*>(),
                        {"TryGetState", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, playerName, gainDb, level);
}
inline void GlobalNamespace::VoiceMakeupGain::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceMakeupGain*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoiceMakeupGain::VoiceMakeupGain()   {
}

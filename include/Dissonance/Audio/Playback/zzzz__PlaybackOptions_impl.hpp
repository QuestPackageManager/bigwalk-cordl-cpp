#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/PlaybackOptions.hpp"
#include "Dissonance/zzzz__ChannelPriority_impl.hpp"
#include "Dissonance/Audio/Playback/zzzz__PlaybackOptions_def.hpp"
#include "Dissonance/zzzz__ChannelPriority_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Playback::PlaybackOptions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::PlaybackOptions::*)(bool, float_t, ::Dissonance::ChannelPriority)>(&::Dissonance::Audio::Playback::PlaybackOptions::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805da200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::PlaybackOptions>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Dissonance::ChannelPriority>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::PlaybackOptions.get_IsPositional
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Playback::PlaybackOptions::*)()>(&::Dissonance::Audio::Playback::PlaybackOptions::get_IsPositional)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180311f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::PlaybackOptions>(),
                        {"get_IsPositional", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::PlaybackOptions.get_AmplitudeMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Playback::PlaybackOptions::*)()>(&::Dissonance::Audio::Playback::PlaybackOptions::get_AmplitudeMultiplier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d56e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::PlaybackOptions>(),
                        {"get_AmplitudeMultiplier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::PlaybackOptions.get_Priority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::ChannelPriority (::Dissonance::Audio::Playback::PlaybackOptions::*)()>(&::Dissonance::Audio::Playback::PlaybackOptions::get_Priority)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::PlaybackOptions>(),
                        {"get_Priority", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Audio::Playback::PlaybackOptions::_ctor(bool  isPositional, float_t  amplitudeMultiplier, ::Dissonance::ChannelPriority  priority)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::PlaybackOptions>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Dissonance::ChannelPriority>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, isPositional, amplitudeMultiplier, priority);
}
inline bool Dissonance::Audio::Playback::PlaybackOptions::get_IsPositional()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::PlaybackOptions>(),
                        {"get_IsPositional", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline float_t Dissonance::Audio::Playback::PlaybackOptions::get_AmplitudeMultiplier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::PlaybackOptions>(),
                        {"get_AmplitudeMultiplier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::Dissonance::ChannelPriority Dissonance::Audio::Playback::PlaybackOptions::get_Priority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::PlaybackOptions>(),
                        {"get_Priority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::ChannelPriority>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_IsPositional_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_AmplitudeMultiplier_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Priority_k__BackingField", ty: "::Dissonance::ChannelPriority", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Audio::Playback::PlaybackOptions::PlaybackOptions(bool  _IsPositional_k__BackingField, float_t  _AmplitudeMultiplier_k__BackingField, ::Dissonance::ChannelPriority  _Priority_k__BackingField) noexcept  {
this->_IsPositional_k__BackingField = _IsPositional_k__BackingField;
this->_AmplitudeMultiplier_k__BackingField = _AmplitudeMultiplier_k__BackingField;
this->_Priority_k__BackingField = _Priority_k__BackingField;
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Playback::PlaybackOptions::PlaybackOptions()   {
}

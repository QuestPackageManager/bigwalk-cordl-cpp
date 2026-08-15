#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/SyncState.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "Dissonance/Audio/Playback/zzzz__SyncState_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Playback::SyncState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SyncState::*)(::System::TimeSpan, ::System::TimeSpan, ::System::TimeSpan, float_t, bool)>(&::Dissonance::Audio::Playback::SyncState::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805eace0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SyncState>(),
                        {".ctor", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Audio::Playback::SyncState::_ctor(::System::TimeSpan  actualPlaybackPosition, ::System::TimeSpan  idealPlaybackPosition, ::System::TimeSpan  desync, float_t  compensatedPlaybackSpeed, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SyncState>(),
                        {".ctor", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, actualPlaybackPosition, idealPlaybackPosition, desync, compensatedPlaybackSpeed, enabled);
}
// Ctor Parameters [CppParam { name: "ActualPlaybackPosition", ty: "::System::TimeSpan", modifiers: "", def_value: Some("{}") }, CppParam { name: "IdealPlaybackPosition", ty: "::System::TimeSpan", modifiers: "", def_value: Some("{}") }, CppParam { name: "Desync", ty: "::System::TimeSpan", modifiers: "", def_value: Some("{}") }, CppParam { name: "CompensatedPlaybackSpeed", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Enabled", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Audio::Playback::SyncState::SyncState(::System::TimeSpan  ActualPlaybackPosition, ::System::TimeSpan  IdealPlaybackPosition, ::System::TimeSpan  Desync, float_t  CompensatedPlaybackSpeed, bool  Enabled) noexcept  {
this->ActualPlaybackPosition = ActualPlaybackPosition;
this->IdealPlaybackPosition = IdealPlaybackPosition;
this->Desync = Desync;
this->CompensatedPlaybackSpeed = CompensatedPlaybackSpeed;
this->Enabled = Enabled;
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Playback::SyncState::SyncState()   {
}

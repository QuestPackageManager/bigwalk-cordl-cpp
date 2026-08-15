#pragma once
// IWYU pragma private; include "Dissonance/VAD/IVoiceActivationListener.hpp"
#include "Dissonance/VAD/zzzz__IVoiceActivationListener_def.hpp"
//  Writing Method size for method: ::Dissonance::VAD::IVoiceActivationListener.VoiceActivationStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VAD::IVoiceActivationListener::*)()>(&::Dissonance::VAD::IVoiceActivationListener::VoiceActivationStart)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VAD::IVoiceActivationListener*>(),
                    {::i2c::class_of<::Dissonance::VAD::IVoiceActivationListener*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VAD::IVoiceActivationListener.VoiceActivationStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VAD::IVoiceActivationListener::*)()>(&::Dissonance::VAD::IVoiceActivationListener::VoiceActivationStop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VAD::IVoiceActivationListener*>(),
                    {::i2c::class_of<::Dissonance::VAD::IVoiceActivationListener*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void Dissonance::VAD::IVoiceActivationListener::VoiceActivationStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VAD::IVoiceActivationListener*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::VAD::IVoiceActivationListener::VoiceActivationStop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VAD::IVoiceActivationListener*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}

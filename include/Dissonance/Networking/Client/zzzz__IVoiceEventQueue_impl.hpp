#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/IVoiceEventQueue.hpp"
#include "Dissonance/Networking/Client/zzzz__IVoiceEventQueue_def.hpp"
#include "Dissonance/Networking/zzzz__VoicePacket_def.hpp"
//  Writing Method size for method: ::Dissonance::Networking::Client::IVoiceEventQueue.EnqueueStoppedSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::IVoiceEventQueue::*)(::StringW)>(&::Dissonance::Networking::Client::IVoiceEventQueue::EnqueueStoppedSpeaking)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::Client::IVoiceEventQueue*>(),
                    {::i2c::class_of<::Dissonance::Networking::Client::IVoiceEventQueue*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::IVoiceEventQueue.EnqueueStartedSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::IVoiceEventQueue::*)(::StringW)>(&::Dissonance::Networking::Client::IVoiceEventQueue::EnqueueStartedSpeaking)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::Client::IVoiceEventQueue*>(),
                    {::i2c::class_of<::Dissonance::Networking::Client::IVoiceEventQueue*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::IVoiceEventQueue.EnqueueVoiceData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::IVoiceEventQueue::*)(::Dissonance::Networking::VoicePacket)>(&::Dissonance::Networking::Client::IVoiceEventQueue::EnqueueVoiceData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::Client::IVoiceEventQueue*>(),
                    {::i2c::class_of<::Dissonance::Networking::Client::IVoiceEventQueue*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::IVoiceEventQueue.GetEventBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Dissonance::Networking::Client::IVoiceEventQueue::*)()>(&::Dissonance::Networking::Client::IVoiceEventQueue::GetEventBuffer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::Client::IVoiceEventQueue*>(),
                    {::i2c::class_of<::Dissonance::Networking::Client::IVoiceEventQueue*>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Dissonance::Networking::Client::IVoiceEventQueue::EnqueueStoppedSpeaking(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Client::IVoiceEventQueue*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Dissonance::Networking::Client::IVoiceEventQueue::EnqueueStartedSpeaking(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Client::IVoiceEventQueue*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Dissonance::Networking::Client::IVoiceEventQueue::EnqueueVoiceData(::Dissonance::Networking::VoicePacket  voicePacket)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Client::IVoiceEventQueue*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voicePacket);
}
inline ::ArrayW<uint8_t> Dissonance::Networking::Client::IVoiceEventQueue::GetEventBuffer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Client::IVoiceEventQueue*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}

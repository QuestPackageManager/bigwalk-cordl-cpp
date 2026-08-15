#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/IChannelPriorityProvider.hpp"
#include "Dissonance/Audio/Capture/zzzz__IChannelPriorityProvider_def.hpp"
#include "Dissonance/zzzz__ChannelPriority_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Capture::IChannelPriorityProvider.get_DefaultChannelPriority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::ChannelPriority (::Dissonance::Audio::Capture::IChannelPriorityProvider::*)()>(&::Dissonance::Audio::Capture::IChannelPriorityProvider::get_DefaultChannelPriority)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::IChannelPriorityProvider*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::IChannelPriorityProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::IChannelPriorityProvider.set_DefaultChannelPriority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::IChannelPriorityProvider::*)(::Dissonance::ChannelPriority)>(&::Dissonance::Audio::Capture::IChannelPriorityProvider::set_DefaultChannelPriority)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::IChannelPriorityProvider*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::IChannelPriorityProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::Dissonance::ChannelPriority Dissonance::Audio::Capture::IChannelPriorityProvider::get_DefaultChannelPriority()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::IChannelPriorityProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::ChannelPriority>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::IChannelPriorityProvider::set_DefaultChannelPriority(::Dissonance::ChannelPriority  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::IChannelPriorityProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}

#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/IPriorityManager.hpp"
#include "Dissonance/Audio/Playback/zzzz__IPriorityManager_def.hpp"
#include "Dissonance/zzzz__ChannelPriority_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Playback::IPriorityManager.get_TopPriority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::ChannelPriority (::Dissonance::Audio::Playback::IPriorityManager::*)()>(&::Dissonance::Audio::Playback::IPriorityManager::get_TopPriority)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::IPriorityManager*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::IPriorityManager*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::Dissonance::ChannelPriority Dissonance::Audio::Playback::IPriorityManager::get_TopPriority()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::IPriorityManager*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::ChannelPriority>(this, ___internal_method);
}

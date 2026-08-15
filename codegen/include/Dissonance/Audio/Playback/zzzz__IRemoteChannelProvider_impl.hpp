#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/IRemoteChannelProvider.hpp"
#include "Dissonance/Audio/Playback/zzzz__IRemoteChannelProvider_def.hpp"
#include "Dissonance/zzzz__RemoteChannel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Playback::IRemoteChannelProvider.GetRemoteChannels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::IRemoteChannelProvider::*)(::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*)>(&::Dissonance::Audio::Playback::IRemoteChannelProvider::GetRemoteChannels)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::IRemoteChannelProvider*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::IRemoteChannelProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Dissonance::Audio::Playback::IRemoteChannelProvider::GetRemoteChannels(::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*  output)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::IRemoteChannelProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}

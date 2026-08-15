#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/IMicrophoneDeviceList.hpp"
#include "Dissonance/Audio/Capture/zzzz__IMicrophoneDeviceList_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Capture::IMicrophoneDeviceList.GetDevices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::IMicrophoneDeviceList::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::Dissonance::Audio::Capture::IMicrophoneDeviceList::GetDevices)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::IMicrophoneDeviceList*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::IMicrophoneDeviceList*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Dissonance::Audio::Capture::IMicrophoneDeviceList::GetDevices(::System::Collections::Generic::List_1<::StringW>*  output)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::IMicrophoneDeviceList*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}

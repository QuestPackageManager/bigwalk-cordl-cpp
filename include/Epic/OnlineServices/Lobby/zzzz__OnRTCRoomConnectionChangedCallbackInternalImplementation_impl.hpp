#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnRTCRoomConnectionChangedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnRTCRoomConnectionChangedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnRTCRoomConnectionChangedCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__RTCRoomConnectionChangedCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallbackInternal* (*)()>(&::Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1805100d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal>)>(&::Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180510070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallbackInternal* Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallbackInternal* Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallbackInternalImplementation::OnRTCRoomConnectionChangedCallbackInternalImplementation()   {
}

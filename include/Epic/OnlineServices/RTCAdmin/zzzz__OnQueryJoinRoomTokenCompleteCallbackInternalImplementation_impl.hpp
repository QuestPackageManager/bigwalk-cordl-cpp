#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAdmin/OnQueryJoinRoomTokenCompleteCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__OnQueryJoinRoomTokenCompleteCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__OnQueryJoinRoomTokenCompleteCallbackInternal_def.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__QueryJoinRoomTokenCompleteCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal* (*)()>(&::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804fa5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfoInternal>)>(&::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804fa550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal* Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal* Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternalImplementation::OnQueryJoinRoomTokenCompleteCallbackInternalImplementation()   {
}

#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnLeaveRTCRoomCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnLeaveRTCRoomCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LeaveRTCRoomCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnLeaveRTCRoomCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnLeaveRTCRoomCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::OnLeaveRTCRoomCallbackInternal* (*)()>(&::Epic::OnlineServices::Lobby::OnLeaveRTCRoomCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18050ebb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLeaveRTCRoomCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnLeaveRTCRoomCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Lobby::LeaveRTCRoomCallbackInfoInternal>)>(&::Epic::OnlineServices::Lobby::OnLeaveRTCRoomCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18050eb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLeaveRTCRoomCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LeaveRTCRoomCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::OnLeaveRTCRoomCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnLeaveRTCRoomCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Lobby::OnLeaveRTCRoomCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnLeaveRTCRoomCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Lobby::OnLeaveRTCRoomCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Lobby::OnLeaveRTCRoomCallbackInternal* Epic::OnlineServices::Lobby::OnLeaveRTCRoomCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Lobby::OnLeaveRTCRoomCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnLeaveRTCRoomCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Lobby::OnLeaveRTCRoomCallbackInternal* Epic::OnlineServices::Lobby::OnLeaveRTCRoomCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLeaveRTCRoomCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::OnLeaveRTCRoomCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::OnLeaveRTCRoomCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::LeaveRTCRoomCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLeaveRTCRoomCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LeaveRTCRoomCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::OnLeaveRTCRoomCallbackInternalImplementation::OnLeaveRTCRoomCallbackInternalImplementation()   {
}

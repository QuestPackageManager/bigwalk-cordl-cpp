#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/OnLeaveRoomCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/RTC/zzzz__OnLeaveRoomCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__LeaveRoomCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__OnLeaveRoomCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTC::OnLeaveRoomCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTC::OnLeaveRoomCallbackInternal* (*)()>(&::Epic::OnlineServices::RTC::OnLeaveRoomCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804f9a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OnLeaveRoomCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::OnLeaveRoomCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::RTC::LeaveRoomCallbackInfoInternal>)>(&::Epic::OnlineServices::RTC::OnLeaveRoomCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804f9a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OnLeaveRoomCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::LeaveRoomCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTC::OnLeaveRoomCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::RTC::OnLeaveRoomCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::RTC::OnLeaveRoomCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTC::OnLeaveRoomCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::RTC::OnLeaveRoomCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::RTC::OnLeaveRoomCallbackInternal* Epic::OnlineServices::RTC::OnLeaveRoomCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::RTC::OnLeaveRoomCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTC::OnLeaveRoomCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::RTC::OnLeaveRoomCallbackInternal* Epic::OnlineServices::RTC::OnLeaveRoomCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OnLeaveRoomCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTC::OnLeaveRoomCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::RTC::OnLeaveRoomCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::RTC::LeaveRoomCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OnLeaveRoomCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::LeaveRoomCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTC::OnLeaveRoomCallbackInternalImplementation::OnLeaveRoomCallbackInternalImplementation()   {
}

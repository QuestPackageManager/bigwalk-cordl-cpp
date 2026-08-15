#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/OnRoomBeforeJoinCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/RTC/zzzz__OnRoomBeforeJoinCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__OnRoomBeforeJoinCallbackInternal_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__RoomBeforeJoinCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTC::OnRoomBeforeJoinCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTC::OnRoomBeforeJoinCallbackInternal* (*)()>(&::Epic::OnlineServices::RTC::OnRoomBeforeJoinCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804faed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OnRoomBeforeJoinCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::OnRoomBeforeJoinCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::RTC::RoomBeforeJoinCallbackInfoInternal>)>(&::Epic::OnlineServices::RTC::OnRoomBeforeJoinCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804fae70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OnRoomBeforeJoinCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::RoomBeforeJoinCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTC::OnRoomBeforeJoinCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::RTC::OnRoomBeforeJoinCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::RTC::OnRoomBeforeJoinCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTC::OnRoomBeforeJoinCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::RTC::OnRoomBeforeJoinCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::RTC::OnRoomBeforeJoinCallbackInternal* Epic::OnlineServices::RTC::OnRoomBeforeJoinCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::RTC::OnRoomBeforeJoinCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTC::OnRoomBeforeJoinCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::RTC::OnRoomBeforeJoinCallbackInternal* Epic::OnlineServices::RTC::OnRoomBeforeJoinCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OnRoomBeforeJoinCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTC::OnRoomBeforeJoinCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::RTC::OnRoomBeforeJoinCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::RTC::RoomBeforeJoinCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OnRoomBeforeJoinCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::RoomBeforeJoinCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTC::OnRoomBeforeJoinCallbackInternalImplementation::OnRoomBeforeJoinCallbackInternalImplementation()   {
}

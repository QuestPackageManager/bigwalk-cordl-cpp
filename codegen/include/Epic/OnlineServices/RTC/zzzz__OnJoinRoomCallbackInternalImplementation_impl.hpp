#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/OnJoinRoomCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/RTC/zzzz__OnJoinRoomCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__JoinRoomCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__OnJoinRoomCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTC::OnJoinRoomCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTC::OnJoinRoomCallbackInternal* (*)()>(&::Epic::OnlineServices::RTC::OnJoinRoomCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804f95e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OnJoinRoomCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::OnJoinRoomCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::RTC::JoinRoomCallbackInfoInternal>)>(&::Epic::OnlineServices::RTC::OnJoinRoomCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804f9570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OnJoinRoomCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::JoinRoomCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTC::OnJoinRoomCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::RTC::OnJoinRoomCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::RTC::OnJoinRoomCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTC::OnJoinRoomCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::RTC::OnJoinRoomCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::RTC::OnJoinRoomCallbackInternal* Epic::OnlineServices::RTC::OnJoinRoomCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::RTC::OnJoinRoomCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTC::OnJoinRoomCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::RTC::OnJoinRoomCallbackInternal* Epic::OnlineServices::RTC::OnJoinRoomCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OnJoinRoomCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTC::OnJoinRoomCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::RTC::OnJoinRoomCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::RTC::JoinRoomCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OnJoinRoomCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::JoinRoomCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTC::OnJoinRoomCallbackInternalImplementation::OnJoinRoomCallbackInternalImplementation()   {
}

#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/OnRoomStatisticsUpdatedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/RTC/zzzz__OnRoomStatisticsUpdatedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__OnRoomStatisticsUpdatedCallbackInternal_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__RoomStatisticsUpdatedInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternal* (*)()>(&::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804fb110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::RTC::RoomStatisticsUpdatedInfoInternal>)>(&::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804fb0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::RoomStatisticsUpdatedInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternal* Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternal* Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::RTC::RoomStatisticsUpdatedInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::RoomStatisticsUpdatedInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternalImplementation::OnRoomStatisticsUpdatedCallbackInternalImplementation()   {
}

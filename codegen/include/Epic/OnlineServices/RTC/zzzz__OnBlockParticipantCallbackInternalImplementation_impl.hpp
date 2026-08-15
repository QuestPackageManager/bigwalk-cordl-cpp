#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/OnBlockParticipantCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/RTC/zzzz__OnBlockParticipantCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__BlockParticipantCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__OnBlockParticipantCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal* (*)()>(&::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804f83c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::RTC::BlockParticipantCallbackInfoInternal>)>(&::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804f8350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::BlockParticipantCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal* Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal* Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::RTC::BlockParticipantCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::BlockParticipantCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternalImplementation::OnBlockParticipantCallbackInternalImplementation()   {
}

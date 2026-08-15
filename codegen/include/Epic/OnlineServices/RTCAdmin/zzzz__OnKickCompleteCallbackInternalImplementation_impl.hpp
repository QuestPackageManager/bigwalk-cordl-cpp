#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAdmin/OnKickCompleteCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__OnKickCompleteCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__KickCompleteCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__OnKickCompleteCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallbackInternal* (*)()>(&::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804f9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::RTCAdmin::KickCompleteCallbackInfoInternal>)>(&::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804f97c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAdmin::KickCompleteCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAdmin::OnKickCompleteCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallbackInternal* Epic::OnlineServices::RTCAdmin::OnKickCompleteCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallbackInternal* Epic::OnlineServices::RTCAdmin::OnKickCompleteCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::RTCAdmin::OnKickCompleteCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::RTCAdmin::KickCompleteCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAdmin::KickCompleteCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallbackInternalImplementation::OnKickCompleteCallbackInternalImplementation()   {
}

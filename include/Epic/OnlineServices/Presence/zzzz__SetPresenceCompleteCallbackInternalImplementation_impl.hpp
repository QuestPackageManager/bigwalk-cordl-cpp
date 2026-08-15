#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/SetPresenceCompleteCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Presence/zzzz__SetPresenceCompleteCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__SetPresenceCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__SetPresenceCompleteCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Presence::SetPresenceCompleteCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Presence::SetPresenceCompleteCallbackInternal* (*)()>(&::Epic::OnlineServices::Presence::SetPresenceCompleteCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180502a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::SetPresenceCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::SetPresenceCompleteCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Presence::SetPresenceCallbackInfoInternal>)>(&::Epic::OnlineServices::Presence::SetPresenceCompleteCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180502a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::SetPresenceCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::SetPresenceCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Presence::SetPresenceCompleteCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Presence::SetPresenceCompleteCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Presence::SetPresenceCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Presence::SetPresenceCompleteCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Presence::SetPresenceCompleteCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Presence::SetPresenceCompleteCallbackInternal* Epic::OnlineServices::Presence::SetPresenceCompleteCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Presence::SetPresenceCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Presence::SetPresenceCompleteCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Presence::SetPresenceCompleteCallbackInternal* Epic::OnlineServices::Presence::SetPresenceCompleteCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::SetPresenceCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Presence::SetPresenceCompleteCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Presence::SetPresenceCompleteCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Presence::SetPresenceCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::SetPresenceCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::SetPresenceCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Presence::SetPresenceCompleteCallbackInternalImplementation::SetPresenceCompleteCallbackInternalImplementation()   {
}

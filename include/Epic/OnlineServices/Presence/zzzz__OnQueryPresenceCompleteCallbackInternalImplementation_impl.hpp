#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/OnQueryPresenceCompleteCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Presence/zzzz__OnQueryPresenceCompleteCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__OnQueryPresenceCompleteCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__QueryPresenceCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Presence::OnQueryPresenceCompleteCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Presence::OnQueryPresenceCompleteCallbackInternal* (*)()>(&::Epic::OnlineServices::Presence::OnQueryPresenceCompleteCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804fa800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::OnQueryPresenceCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::OnQueryPresenceCompleteCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Presence::QueryPresenceCallbackInfoInternal>)>(&::Epic::OnlineServices::Presence::OnQueryPresenceCompleteCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804fa7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::OnQueryPresenceCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::QueryPresenceCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Presence::OnQueryPresenceCompleteCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Presence::OnQueryPresenceCompleteCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Presence::OnQueryPresenceCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Presence::OnQueryPresenceCompleteCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Presence::OnQueryPresenceCompleteCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Presence::OnQueryPresenceCompleteCallbackInternal* Epic::OnlineServices::Presence::OnQueryPresenceCompleteCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Presence::OnQueryPresenceCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Presence::OnQueryPresenceCompleteCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Presence::OnQueryPresenceCompleteCallbackInternal* Epic::OnlineServices::Presence::OnQueryPresenceCompleteCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::OnQueryPresenceCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Presence::OnQueryPresenceCompleteCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Presence::OnQueryPresenceCompleteCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Presence::QueryPresenceCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::OnQueryPresenceCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::QueryPresenceCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Presence::OnQueryPresenceCompleteCallbackInternalImplementation::OnQueryPresenceCompleteCallbackInternalImplementation()   {
}

#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/OnJoinGameAcceptedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Presence/zzzz__OnJoinGameAcceptedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__JoinGameAcceptedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__OnJoinGameAcceptedCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal* (*)()>(&::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804f9390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfoInternal>)>(&::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804f9320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal* Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal* Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternalImplementation::OnJoinGameAcceptedCallbackInternalImplementation()   {
}

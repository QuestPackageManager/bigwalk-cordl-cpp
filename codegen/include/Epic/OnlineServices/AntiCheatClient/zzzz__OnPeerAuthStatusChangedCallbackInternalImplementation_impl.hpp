#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/OnPeerAuthStatusChangedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__OnPeerAuthStatusChangedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__OnPeerAuthStatusChangedCallbackInternal_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__OnClientAuthStatusChangedCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallbackInternal* (*)()>(&::Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180530200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfoInternal>)>(&::Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805301a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallbackInternal* Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallbackInternal* Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallbackInternalImplementation::OnPeerAuthStatusChangedCallbackInternalImplementation()   {
}

#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/OnPeerActionRequiredCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__OnPeerActionRequiredCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__OnPeerActionRequiredCallbackInternal_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__OnClientActionRequiredCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallbackInternal* (*)()>(&::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180530080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal>)>(&::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180530020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallbackInternal* Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallbackInternal* Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallbackInternalImplementation::OnPeerActionRequiredCallbackInternalImplementation()   {
}

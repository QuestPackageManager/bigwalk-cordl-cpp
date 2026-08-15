#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatServer/OnClientAuthStatusChangedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__OnClientAuthStatusChangedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__OnClientAuthStatusChangedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__OnClientAuthStatusChangedCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallbackInternal* (*)()>(&::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180526fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfoInternal>)>(&::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180526f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallbackInternal* Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallbackInternal* Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallbackInternalImplementation::OnClientAuthStatusChangedCallbackInternalImplementation()   {
}

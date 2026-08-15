#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatServer/OnClientActionRequiredCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__OnClientActionRequiredCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__OnClientActionRequiredCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__OnClientActionRequiredCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallbackInternal* (*)()>(&::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180526c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal>)>(&::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180526ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallbackInternal* Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallbackInternal* Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallbackInternalImplementation::OnClientActionRequiredCallbackInternalImplementation()   {
}

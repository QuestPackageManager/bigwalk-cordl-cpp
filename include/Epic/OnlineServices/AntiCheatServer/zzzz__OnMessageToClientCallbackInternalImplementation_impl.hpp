#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatServer/OnMessageToClientCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__OnMessageToClientCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__OnMessageToClientCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__OnMessageToClientCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallbackInternal* (*)()>(&::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180528df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal>)>(&::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180528d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallbackInternal* Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallbackInternal* Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallbackInternalImplementation::OnMessageToClientCallbackInternalImplementation()   {
}

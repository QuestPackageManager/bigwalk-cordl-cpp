#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/OnMessageToPeerCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__OnMessageToPeerCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__OnMessageToPeerCallbackInternal_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__OnMessageToClientCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallbackInternal* (*)()>(&::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18052fc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal>)>(&::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18052fba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallbackInternal* Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallbackInternal* Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallbackInternalImplementation::OnMessageToPeerCallbackInternalImplementation()   {
}

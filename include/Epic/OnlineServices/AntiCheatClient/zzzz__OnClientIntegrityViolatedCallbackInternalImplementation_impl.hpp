#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/OnClientIntegrityViolatedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__OnClientIntegrityViolatedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__OnClientIntegrityViolatedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__OnClientIntegrityViolatedCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInternal* (*)()>(&::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18052f2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfoInternal>)>(&::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18052f270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInternal* Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInternal* Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInternalImplementation::OnClientIntegrityViolatedCallbackInternalImplementation()   {
}

#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sanctions/CreatePlayerSanctionAppealCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Sanctions/zzzz__CreatePlayerSanctionAppealCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Sanctions/zzzz__CreatePlayerSanctionAppealCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Sanctions/zzzz__CreatePlayerSanctionAppealCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInternal* (*)()>(&::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804e7450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInfoInternal>)>(&::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804e73f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInternal* Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInternal* Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInternalImplementation::CreatePlayerSanctionAppealCallbackInternalImplementation()   {
}

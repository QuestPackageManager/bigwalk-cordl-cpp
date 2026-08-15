#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UserInfo/OnQueryUserInfoByExternalAccountCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__OnQueryUserInfoByExternalAccountCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__OnQueryUserInfoByExternalAccountCallbackInternal_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__QueryUserInfoByExternalAccountCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal* (*)()>(&::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804ddff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountCallbackInfoInternal>)>(&::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804ddf80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal* Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal* Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternalImplementation::OnQueryUserInfoByExternalAccountCallbackInternalImplementation()   {
}

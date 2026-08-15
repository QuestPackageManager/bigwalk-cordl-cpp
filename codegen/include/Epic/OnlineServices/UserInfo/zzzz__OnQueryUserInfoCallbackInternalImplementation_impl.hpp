#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UserInfo/OnQueryUserInfoCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__OnQueryUserInfoCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__OnQueryUserInfoCallbackInternal_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__QueryUserInfoCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallbackInternal* (*)()>(&::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804de230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoCallbackInfoInternal>)>(&::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804de1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::UserInfo::OnQueryUserInfoCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallbackInternal* Epic::OnlineServices::UserInfo::OnQueryUserInfoCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallbackInternal* Epic::OnlineServices::UserInfo::OnQueryUserInfoCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::UserInfo::OnQueryUserInfoCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallbackInternalImplementation::OnQueryUserInfoCallbackInternalImplementation()   {
}

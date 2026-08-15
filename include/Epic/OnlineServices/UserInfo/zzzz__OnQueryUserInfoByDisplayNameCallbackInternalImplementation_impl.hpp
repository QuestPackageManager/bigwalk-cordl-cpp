#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UserInfo/OnQueryUserInfoByDisplayNameCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__OnQueryUserInfoByDisplayNameCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__OnQueryUserInfoByDisplayNameCallbackInternal_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__QueryUserInfoByDisplayNameCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallbackInternal* (*)()>(&::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804ddda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfoInternal>)>(&::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804ddd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallbackInternal* Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallbackInternal* Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallbackInternalImplementation::OnQueryUserInfoByDisplayNameCallbackInternalImplementation()   {
}

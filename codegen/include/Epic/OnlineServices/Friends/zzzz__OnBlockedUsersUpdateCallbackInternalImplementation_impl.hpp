#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Friends/OnBlockedUsersUpdateCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Friends/zzzz__OnBlockedUsersUpdateCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__OnBlockedUsersUpdateCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__OnBlockedUsersUpdateInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Friends::OnBlockedUsersUpdateCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateCallbackInternal* (*)()>(&::Epic::OnlineServices::Friends::OnBlockedUsersUpdateCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180518dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Friends::OnBlockedUsersUpdateCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfoInternal>)>(&::Epic::OnlineServices::Friends::OnBlockedUsersUpdateCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180518d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Friends::OnBlockedUsersUpdateCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Friends::OnBlockedUsersUpdateCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Friends::OnBlockedUsersUpdateCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Friends::OnBlockedUsersUpdateCallbackInternal* Epic::OnlineServices::Friends::OnBlockedUsersUpdateCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Friends::OnBlockedUsersUpdateCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Friends::OnBlockedUsersUpdateCallbackInternal* Epic::OnlineServices::Friends::OnBlockedUsersUpdateCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Friends::OnBlockedUsersUpdateCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Friends::OnBlockedUsersUpdateCallbackInternalImplementation::OnBlockedUsersUpdateCallbackInternalImplementation()   {
}

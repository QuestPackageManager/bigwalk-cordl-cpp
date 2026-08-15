#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Friends/OnFriendsUpdateCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Friends/zzzz__OnFriendsUpdateCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__OnFriendsUpdateCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__OnFriendsUpdateInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Friends::OnFriendsUpdateCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Friends::OnFriendsUpdateCallbackInternal* (*)()>(&::Epic::OnlineServices::Friends::OnFriendsUpdateCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180519ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::OnFriendsUpdateCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Friends::OnFriendsUpdateCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal>)>(&::Epic::OnlineServices::Friends::OnFriendsUpdateCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180519c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::OnFriendsUpdateCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Friends::OnFriendsUpdateCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Friends::OnFriendsUpdateCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Friends::OnFriendsUpdateCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Friends::OnFriendsUpdateCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Friends::OnFriendsUpdateCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Friends::OnFriendsUpdateCallbackInternal* Epic::OnlineServices::Friends::OnFriendsUpdateCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Friends::OnFriendsUpdateCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Friends::OnFriendsUpdateCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Friends::OnFriendsUpdateCallbackInternal* Epic::OnlineServices::Friends::OnFriendsUpdateCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::OnFriendsUpdateCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Friends::OnFriendsUpdateCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Friends::OnFriendsUpdateCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::OnFriendsUpdateCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Friends::OnFriendsUpdateCallbackInternalImplementation::OnFriendsUpdateCallbackInternalImplementation()   {
}

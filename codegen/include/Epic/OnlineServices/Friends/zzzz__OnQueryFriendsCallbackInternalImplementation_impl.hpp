#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Friends/OnQueryFriendsCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Friends/zzzz__OnQueryFriendsCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__OnQueryFriendsCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__QueryFriendsCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Friends::OnQueryFriendsCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Friends::OnQueryFriendsCallbackInternal* (*)()>(&::Epic::OnlineServices::Friends::OnQueryFriendsCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18051a920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::OnQueryFriendsCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Friends::OnQueryFriendsCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Friends::QueryFriendsCallbackInfoInternal>)>(&::Epic::OnlineServices::Friends::OnQueryFriendsCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18051a8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::OnQueryFriendsCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::QueryFriendsCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Friends::OnQueryFriendsCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Friends::OnQueryFriendsCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Friends::OnQueryFriendsCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Friends::OnQueryFriendsCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Friends::OnQueryFriendsCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Friends::OnQueryFriendsCallbackInternal* Epic::OnlineServices::Friends::OnQueryFriendsCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Friends::OnQueryFriendsCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Friends::OnQueryFriendsCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Friends::OnQueryFriendsCallbackInternal* Epic::OnlineServices::Friends::OnQueryFriendsCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::OnQueryFriendsCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Friends::OnQueryFriendsCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Friends::OnQueryFriendsCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Friends::QueryFriendsCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::OnQueryFriendsCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::QueryFriendsCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Friends::OnQueryFriendsCallbackInternalImplementation::OnQueryFriendsCallbackInternalImplementation()   {
}

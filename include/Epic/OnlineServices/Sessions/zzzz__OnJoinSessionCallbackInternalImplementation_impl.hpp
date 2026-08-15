#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/OnJoinSessionCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnJoinSessionCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__JoinSessionCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnJoinSessionCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnJoinSessionCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Sessions::OnJoinSessionCallbackInternal* (*)()>(&::Epic::OnlineServices::Sessions::OnJoinSessionCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804e9170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnJoinSessionCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnJoinSessionCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Sessions::JoinSessionCallbackInfoInternal>)>(&::Epic::OnlineServices::Sessions::OnJoinSessionCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804e9110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnJoinSessionCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::JoinSessionCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::OnJoinSessionCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Sessions::OnJoinSessionCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Sessions::OnJoinSessionCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sessions::OnJoinSessionCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Sessions::OnJoinSessionCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Sessions::OnJoinSessionCallbackInternal* Epic::OnlineServices::Sessions::OnJoinSessionCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Sessions::OnJoinSessionCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sessions::OnJoinSessionCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Sessions::OnJoinSessionCallbackInternal* Epic::OnlineServices::Sessions::OnJoinSessionCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnJoinSessionCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Sessions::OnJoinSessionCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::OnJoinSessionCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Sessions::JoinSessionCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnJoinSessionCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::JoinSessionCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::OnJoinSessionCallbackInternalImplementation::OnJoinSessionCallbackInternalImplementation()   {
}

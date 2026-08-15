#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/OnDestroySessionCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnDestroySessionCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__DestroySessionCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnDestroySessionCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnDestroySessionCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Sessions::OnDestroySessionCallbackInternal* (*)()>(&::Epic::OnlineServices::Sessions::OnDestroySessionCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804e8ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnDestroySessionCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnDestroySessionCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Sessions::DestroySessionCallbackInfoInternal>)>(&::Epic::OnlineServices::Sessions::OnDestroySessionCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804e8a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnDestroySessionCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::DestroySessionCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::OnDestroySessionCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Sessions::OnDestroySessionCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Sessions::OnDestroySessionCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sessions::OnDestroySessionCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Sessions::OnDestroySessionCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Sessions::OnDestroySessionCallbackInternal* Epic::OnlineServices::Sessions::OnDestroySessionCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Sessions::OnDestroySessionCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sessions::OnDestroySessionCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Sessions::OnDestroySessionCallbackInternal* Epic::OnlineServices::Sessions::OnDestroySessionCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnDestroySessionCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Sessions::OnDestroySessionCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::OnDestroySessionCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Sessions::DestroySessionCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnDestroySessionCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::DestroySessionCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::OnDestroySessionCallbackInternalImplementation::OnDestroySessionCallbackInternalImplementation()   {
}

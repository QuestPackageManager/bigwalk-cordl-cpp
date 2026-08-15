#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/OnEndSessionCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnEndSessionCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__EndSessionCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnEndSessionCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnEndSessionCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Sessions::OnEndSessionCallbackInternal* (*)()>(&::Epic::OnlineServices::Sessions::OnEndSessionCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804e8cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnEndSessionCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnEndSessionCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Sessions::EndSessionCallbackInfoInternal>)>(&::Epic::OnlineServices::Sessions::OnEndSessionCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804e8c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnEndSessionCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::EndSessionCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::OnEndSessionCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Sessions::OnEndSessionCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Sessions::OnEndSessionCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sessions::OnEndSessionCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Sessions::OnEndSessionCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Sessions::OnEndSessionCallbackInternal* Epic::OnlineServices::Sessions::OnEndSessionCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Sessions::OnEndSessionCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sessions::OnEndSessionCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Sessions::OnEndSessionCallbackInternal* Epic::OnlineServices::Sessions::OnEndSessionCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnEndSessionCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Sessions::OnEndSessionCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::OnEndSessionCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Sessions::EndSessionCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnEndSessionCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::EndSessionCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::OnEndSessionCallbackInternalImplementation::OnEndSessionCallbackInternalImplementation()   {
}

#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionSearchOnFindCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionSearchOnFindCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionSearchFindCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionSearchOnFindCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionSearchOnFindCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Sessions::SessionSearchOnFindCallbackInternal* (*)()>(&::Epic::OnlineServices::Sessions::SessionSearchOnFindCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804f2f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearchOnFindCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionSearchOnFindCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfoInternal>)>(&::Epic::OnlineServices::Sessions::SessionSearchOnFindCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804f2f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearchOnFindCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::SessionSearchOnFindCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Sessions::SessionSearchOnFindCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Sessions::SessionSearchOnFindCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sessions::SessionSearchOnFindCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Sessions::SessionSearchOnFindCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Sessions::SessionSearchOnFindCallbackInternal* Epic::OnlineServices::Sessions::SessionSearchOnFindCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Sessions::SessionSearchOnFindCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sessions::SessionSearchOnFindCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Sessions::SessionSearchOnFindCallbackInternal* Epic::OnlineServices::Sessions::SessionSearchOnFindCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearchOnFindCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Sessions::SessionSearchOnFindCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::SessionSearchOnFindCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearchOnFindCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::SessionSearchOnFindCallbackInternalImplementation::SessionSearchOnFindCallbackInternalImplementation()   {
}

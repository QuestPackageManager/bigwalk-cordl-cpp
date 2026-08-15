#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/OnUpdateSessionCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnUpdateSessionCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnUpdateSessionCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__UpdateSessionCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnUpdateSessionCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Sessions::OnUpdateSessionCallbackInternal* (*)()>(&::Epic::OnlineServices::Sessions::OnUpdateSessionCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804ed490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnUpdateSessionCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnUpdateSessionCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfoInternal>)>(&::Epic::OnlineServices::Sessions::OnUpdateSessionCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804ed430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnUpdateSessionCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::OnUpdateSessionCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Sessions::OnUpdateSessionCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Sessions::OnUpdateSessionCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sessions::OnUpdateSessionCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Sessions::OnUpdateSessionCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Sessions::OnUpdateSessionCallbackInternal* Epic::OnlineServices::Sessions::OnUpdateSessionCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Sessions::OnUpdateSessionCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sessions::OnUpdateSessionCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Sessions::OnUpdateSessionCallbackInternal* Epic::OnlineServices::Sessions::OnUpdateSessionCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnUpdateSessionCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Sessions::OnUpdateSessionCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::OnUpdateSessionCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnUpdateSessionCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::OnUpdateSessionCallbackInternalImplementation::OnUpdateSessionCallbackInternalImplementation()   {
}

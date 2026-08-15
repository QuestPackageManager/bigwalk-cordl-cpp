#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/OnUnregisterPlayersCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnUnregisterPlayersCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnUnregisterPlayersCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__UnregisterPlayersCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallbackInternal* (*)()>(&::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804ec220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Sessions::UnregisterPlayersCallbackInfoInternal>)>(&::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804ec1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::UnregisterPlayersCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::OnUnregisterPlayersCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallbackInternal* Epic::OnlineServices::Sessions::OnUnregisterPlayersCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallbackInternal* Epic::OnlineServices::Sessions::OnUnregisterPlayersCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::OnUnregisterPlayersCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Sessions::UnregisterPlayersCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::UnregisterPlayersCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallbackInternalImplementation::OnUnregisterPlayersCallbackInternalImplementation()   {
}

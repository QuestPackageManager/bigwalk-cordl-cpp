#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/OnRegisterPlayersCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnRegisterPlayersCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnRegisterPlayersCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__RegisterPlayersCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnRegisterPlayersCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Sessions::OnRegisterPlayersCallbackInternal* (*)()>(&::Epic::OnlineServices::Sessions::OnRegisterPlayersCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804ea660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnRegisterPlayersCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnRegisterPlayersCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Sessions::RegisterPlayersCallbackInfoInternal>)>(&::Epic::OnlineServices::Sessions::OnRegisterPlayersCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804ea600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnRegisterPlayersCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::RegisterPlayersCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::OnRegisterPlayersCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Sessions::OnRegisterPlayersCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Sessions::OnRegisterPlayersCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sessions::OnRegisterPlayersCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Sessions::OnRegisterPlayersCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Sessions::OnRegisterPlayersCallbackInternal* Epic::OnlineServices::Sessions::OnRegisterPlayersCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Sessions::OnRegisterPlayersCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sessions::OnRegisterPlayersCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Sessions::OnRegisterPlayersCallbackInternal* Epic::OnlineServices::Sessions::OnRegisterPlayersCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnRegisterPlayersCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Sessions::OnRegisterPlayersCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::OnRegisterPlayersCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Sessions::RegisterPlayersCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnRegisterPlayersCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::RegisterPlayersCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::OnRegisterPlayersCallbackInternalImplementation::OnRegisterPlayersCallbackInternalImplementation()   {
}

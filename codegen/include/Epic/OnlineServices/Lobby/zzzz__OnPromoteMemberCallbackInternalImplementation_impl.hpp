#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnPromoteMemberCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnPromoteMemberCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnPromoteMemberCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__PromoteMemberCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnPromoteMemberCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::OnPromoteMemberCallbackInternal* (*)()>(&::Epic::OnlineServices::Lobby::OnPromoteMemberCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18050fb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnPromoteMemberCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnPromoteMemberCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Lobby::PromoteMemberCallbackInfoInternal>)>(&::Epic::OnlineServices::Lobby::OnPromoteMemberCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18050fb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnPromoteMemberCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::PromoteMemberCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::OnPromoteMemberCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnPromoteMemberCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Lobby::OnPromoteMemberCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnPromoteMemberCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Lobby::OnPromoteMemberCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Lobby::OnPromoteMemberCallbackInternal* Epic::OnlineServices::Lobby::OnPromoteMemberCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Lobby::OnPromoteMemberCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnPromoteMemberCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Lobby::OnPromoteMemberCallbackInternal* Epic::OnlineServices::Lobby::OnPromoteMemberCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnPromoteMemberCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::OnPromoteMemberCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::OnPromoteMemberCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::PromoteMemberCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnPromoteMemberCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::PromoteMemberCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::OnPromoteMemberCallbackInternalImplementation::OnPromoteMemberCallbackInternalImplementation()   {
}

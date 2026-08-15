#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnKickMemberCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnKickMemberCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__KickMemberCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnKickMemberCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnKickMemberCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::OnKickMemberCallbackInternal* (*)()>(&::Epic::OnlineServices::Lobby::OnKickMemberCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18050e4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnKickMemberCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnKickMemberCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Lobby::KickMemberCallbackInfoInternal>)>(&::Epic::OnlineServices::Lobby::OnKickMemberCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18050e490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnKickMemberCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::KickMemberCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::OnKickMemberCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnKickMemberCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Lobby::OnKickMemberCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnKickMemberCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Lobby::OnKickMemberCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Lobby::OnKickMemberCallbackInternal* Epic::OnlineServices::Lobby::OnKickMemberCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Lobby::OnKickMemberCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnKickMemberCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Lobby::OnKickMemberCallbackInternal* Epic::OnlineServices::Lobby::OnKickMemberCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnKickMemberCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::OnKickMemberCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::OnKickMemberCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::KickMemberCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnKickMemberCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::KickMemberCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::OnKickMemberCallbackInternalImplementation::OnKickMemberCallbackInternalImplementation()   {
}

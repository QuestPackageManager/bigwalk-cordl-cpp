#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnJoinRTCRoomCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnJoinRTCRoomCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__JoinRTCRoomCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnJoinRTCRoomCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternal* (*)()>(&::Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18050e2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Lobby::JoinRTCRoomCallbackInfoInternal>)>(&::Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18050e250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::JoinRTCRoomCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternal* Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternal* Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::JoinRTCRoomCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::JoinRTCRoomCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternalImplementation::OnJoinRTCRoomCallbackInternalImplementation()   {
}

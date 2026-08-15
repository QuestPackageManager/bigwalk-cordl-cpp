#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/OnPeerConnectionEstablishedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnPeerConnectionEstablishedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnPeerConnectionEstablishedCallbackInternal_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnPeerConnectionEstablishedInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallbackInternal* (*)()>(&::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180530390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfoInternal>)>(&::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180530320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallbackInternal* Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallbackInternal* Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallbackInternalImplementation::OnPeerConnectionEstablishedCallbackInternalImplementation()   {
}

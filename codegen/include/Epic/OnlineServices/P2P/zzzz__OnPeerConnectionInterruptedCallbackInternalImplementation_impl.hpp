#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/OnPeerConnectionInterruptedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnPeerConnectionInterruptedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnPeerConnectionInterruptedCallbackInternal_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnPeerConnectionInterruptedInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallbackInternal* (*)()>(&::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180530730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedInfoInternal>)>(&::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805306c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallbackInternal* Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallbackInternal* Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallbackInternalImplementation::OnPeerConnectionInterruptedCallbackInternalImplementation()   {
}

#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/OnIncomingConnectionRequestCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnIncomingConnectionRequestCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnIncomingConnectionRequestCallbackInternal_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnIncomingConnectionRequestInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallbackInternal* (*)()>(&::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18052f520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfoInternal>)>(&::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18052f4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallbackInternal* Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallbackInternal* Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallbackInternalImplementation::OnIncomingConnectionRequestCallbackInternalImplementation()   {
}

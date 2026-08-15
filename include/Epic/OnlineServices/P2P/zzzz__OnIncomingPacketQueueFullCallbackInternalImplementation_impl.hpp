#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/OnIncomingPacketQueueFullCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnIncomingPacketQueueFullCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnIncomingPacketQueueFullCallbackInternal_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnIncomingPacketQueueFullInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullCallbackInternal* (*)()>(&::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18052f8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfoInternal>)>(&::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18052f870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::P2P::OnIncomingPacketQueueFullCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullCallbackInternal* Epic::OnlineServices::P2P::OnIncomingPacketQueueFullCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullCallbackInternal* Epic::OnlineServices::P2P::OnIncomingPacketQueueFullCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::P2P::OnIncomingPacketQueueFullCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullCallbackInternalImplementation::OnIncomingPacketQueueFullCallbackInternalImplementation()   {
}

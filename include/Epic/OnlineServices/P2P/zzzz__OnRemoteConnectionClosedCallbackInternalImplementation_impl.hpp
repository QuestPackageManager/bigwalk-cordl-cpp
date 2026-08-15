#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/OnRemoteConnectionClosedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnRemoteConnectionClosedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnRemoteConnectionClosedCallbackInternal_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnRemoteConnectionClosedInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallbackInternal* (*)()>(&::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180531240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfoInternal>)>(&::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805311d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallbackInternal* Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallbackInternal* Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallbackInternalImplementation::OnRemoteConnectionClosedCallbackInternalImplementation()   {
}

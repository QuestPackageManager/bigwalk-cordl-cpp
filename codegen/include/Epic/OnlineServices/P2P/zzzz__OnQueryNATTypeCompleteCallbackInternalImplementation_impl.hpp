#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/OnQueryNATTypeCompleteCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnQueryNATTypeCompleteCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnQueryNATTypeCompleteCallbackInternal_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnQueryNATTypeCompleteInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallbackInternal* (*)()>(&::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180530be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteInfoInternal>)>(&::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180530b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallbackInternal* Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallbackInternal* Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallbackInternalImplementation::OnQueryNATTypeCompleteCallbackInternalImplementation()   {
}

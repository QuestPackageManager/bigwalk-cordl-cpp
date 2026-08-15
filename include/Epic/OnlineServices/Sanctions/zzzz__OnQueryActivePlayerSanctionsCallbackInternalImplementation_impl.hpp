#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sanctions/OnQueryActivePlayerSanctionsCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Sanctions/zzzz__OnQueryActivePlayerSanctionsCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Sanctions/zzzz__OnQueryActivePlayerSanctionsCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Sanctions/zzzz__QueryActivePlayerSanctionsCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal* (*)()>(&::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804e9a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsCallbackInfoInternal>)>(&::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804e9a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal* Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal* Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternalImplementation::OnQueryActivePlayerSanctionsCallbackInternalImplementation()   {
}

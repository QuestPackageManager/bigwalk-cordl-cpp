#pragma once
// IWYU pragma private; include "Epic/OnlineServices/KWS/OnUpdateParentEmailCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/KWS/zzzz__OnUpdateParentEmailCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__OnUpdateParentEmailCallbackInternal_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__UpdateParentEmailCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal* (*)()>(&::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18051c860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::KWS::UpdateParentEmailCallbackInfoInternal>)>(&::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18051c800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::UpdateParentEmailCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal* Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal* Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::KWS::UpdateParentEmailCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::UpdateParentEmailCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternalImplementation::OnUpdateParentEmailCallbackInternalImplementation()   {
}

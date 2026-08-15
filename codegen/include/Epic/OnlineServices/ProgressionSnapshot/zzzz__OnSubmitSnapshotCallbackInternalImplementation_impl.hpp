#pragma once
// IWYU pragma private; include "Epic/OnlineServices/ProgressionSnapshot/OnSubmitSnapshotCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/ProgressionSnapshot/zzzz__OnSubmitSnapshotCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/ProgressionSnapshot/zzzz__OnSubmitSnapshotCallbackInternal_def.hpp"
#include "Epic/OnlineServices/ProgressionSnapshot/zzzz__SubmitSnapshotCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal* (*)()>(&::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804fb590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfoInternal>)>(&::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804fb530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal* Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal* Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternalImplementation::OnSubmitSnapshotCallbackInternalImplementation()   {
}

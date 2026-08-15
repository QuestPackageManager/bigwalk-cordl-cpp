#pragma once
// IWYU pragma private; include "Epic/OnlineServices/ProgressionSnapshot/OnDeleteSnapshotCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/ProgressionSnapshot/zzzz__OnDeleteSnapshotCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/ProgressionSnapshot/zzzz__DeleteSnapshotCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/ProgressionSnapshot/zzzz__OnDeleteSnapshotCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallbackInternal* (*)()>(&::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804f8a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotCallbackInfoInternal>)>(&::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804f8a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallbackInternal* Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallbackInternal* Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallbackInternalImplementation::OnDeleteSnapshotCallbackInternalImplementation()   {
}

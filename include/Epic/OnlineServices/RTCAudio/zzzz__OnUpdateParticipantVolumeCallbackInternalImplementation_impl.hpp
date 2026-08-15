#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/OnUpdateParticipantVolumeCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnUpdateParticipantVolumeCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnUpdateParticipantVolumeCallbackInternal_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__UpdateParticipantVolumeCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallbackInternal* (*)()>(&::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804ec470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::RTCAudio::UpdateParticipantVolumeCallbackInfoInternal>)>(&::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804ec400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::UpdateParticipantVolumeCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallbackInternal* Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallbackInternal* Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::RTCAudio::UpdateParticipantVolumeCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::UpdateParticipantVolumeCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallbackInternalImplementation::OnUpdateParticipantVolumeCallbackInternalImplementation()   {
}

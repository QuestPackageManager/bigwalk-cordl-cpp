#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/OnParticipantUpdatedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnParticipantUpdatedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnParticipantUpdatedCallbackInternal_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__ParticipantUpdatedCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallbackInternal* (*)()>(&::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804e9670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::RTCAudio::ParticipantUpdatedCallbackInfoInternal>)>(&::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804e9600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::ParticipantUpdatedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallbackInternal* Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallbackInternal* Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::RTCAudio::ParticipantUpdatedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::ParticipantUpdatedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallbackInternalImplementation::OnParticipantUpdatedCallbackInternalImplementation()   {
}

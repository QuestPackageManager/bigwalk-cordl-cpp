#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/OnQueryDefinitionsCompleteCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__OnQueryDefinitionsCompleteCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__OnQueryDefinitionsCompleteCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__OnQueryDefinitionsCompleteCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInternal* (*)()>(&::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1805309a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInfoInternal>)>(&::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180530940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInternal* Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInternal* Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInternalImplementation::OnQueryDefinitionsCompleteCallbackInternalImplementation()   {
}
